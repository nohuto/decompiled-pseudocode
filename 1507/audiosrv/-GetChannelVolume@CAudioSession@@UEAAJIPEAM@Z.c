/*
 * XREFs of ?GetChannelVolume@CAudioSession@@UEAAJIPEAM@Z @ 0x180078240
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     WPP_SF_qdg @ 0x180071214 (WPP_SF_qdg.c)
 */

__int64 __fastcall CAudioSession::GetChannelVolume(struct _RTL_CRITICAL_SECTION *this, unsigned int a2, float *a3)
{
  __int64 v3; // rsi
  unsigned int v6; // edi
  int v8; // [rsp+20h] [rbp-28h]
  LPCRITICAL_SECTION v9; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+38h] [rbp-10h]

  v3 = a2;
  v6 = 0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v9, this + 18);
  if ( (unsigned int)v3 < this[19].RecursionCount )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      v8 = v3;
      WPP_SF_qdg(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x29u,
        (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
        this,
        v8,
        *((float *)this[19].OwningThread + v3));
    }
    *a3 = *((float *)this[19].OwningThread + v3);
  }
  else
  {
    v6 = -2147024809;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x2Au,
        (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
        -2147024809);
    }
  }
  if ( v10 )
    ATL::CCritSecLock::Unlock(&v9);
  return v6;
}
