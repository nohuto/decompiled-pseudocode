/*
 * XREFs of ?GetChannelVolumeLevel@CVolumeControlBase@@UEAAJIPEAM@Z @ 0x180056760
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x180056804 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 */

__int64 __fastcall CVolumeControlBase::GetChannelVolumeLevel(CVolumeControlBase *this, unsigned int a2, float *a3)
{
  unsigned __int64 v3; // rsi
  unsigned int v6; // ebx
  LPCRITICAL_SECTION v8; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  v3 = a2;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v8, (struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  if ( (unsigned int)v3 >= *((_DWORD *)this + 29) )
  {
    v6 = -2147024809;
LABEL_5:
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::GetChannelVolumeLevel", 521, v6);
    goto LABEL_9;
  }
  if ( !a3 )
  {
    v6 = -2147467261;
    goto LABEL_5;
  }
  if ( v3 >= *((_QWORD *)this + 11) )
    ATL::AtlThrowImpl(-2147024809);
  *a3 = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 10) + 56 * v3));
  v6 = 0;
LABEL_9:
  if ( v9 )
    ATL::CCritSecLock::Unlock(&v8);
  return v6;
}
