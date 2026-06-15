/*
 * XREFs of ?GetMasterVolumeLevel@CVolumeControlBase@@UEAAJPEAM@Z @ 0x180056A90
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x180056804 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     WPP_SF_qdg @ 0x180058FD8 (WPP_SF_qdg.c)
 */

__int64 __fastcall CVolumeControlBase::GetMasterVolumeLevel(CVolumeControlBase *this, float *a2)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // rax
  float DB; // xmm0_4
  LPCRITICAL_SECTION v8; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+38h] [rbp-10h]

  v4 = -2147467261;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v8, (struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  if ( a2 )
  {
    v5 = *((unsigned int *)this + 28);
    if ( v5 >= *((_QWORD *)this + 11) )
      ATL::AtlThrowImpl(-2147024809);
    DB = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 10) + 56 * v5));
    *a2 = DB;
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qdg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        20LL,
        &WPP_2804faa4bc893de444441e4f62789fd8_Traceguids,
        this,
        *((_DWORD *)this + 28),
        DB);
    }
    v4 = 0;
  }
  else
  {
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::GetMasterVolumeLevel", 421, -2147467261);
  }
  if ( v9 )
    ATL::CCritSecLock::Unlock(&v8);
  return v4;
}
