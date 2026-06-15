/*
 * XREFs of ?GetPeakValue@CAudioSession@@UEAAJPEAM@Z @ 0x180078E30
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     WPP_SF_g @ 0x1800711D8 (WPP_SF_g.c)
 *     ?GetPeakValue@CAudioStream@@QEAAJPEAM@Z @ 0x180081C78 (-GetPeakValue@CAudioStream@@QEAAJPEAM@Z.c)
 */

__int64 __fastcall CAudioSession::GetPeakValue(CAudioSession *this, float *a2)
{
  float v3; // xmm6_4
  unsigned int v5; // ebx
  __int64 v6; // rcx
  unsigned __int64 i; // rdi
  LPCRITICAL_SECTION v9; // [rsp+20h] [rbp-38h] BYREF
  char v10; // [rsp+28h] [rbp-30h]
  float v11; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0.0;
  v5 = 0;
  v6 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 5u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x33u,
      (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      0LL);
    v6 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( a2 )
  {
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v9, (struct _RTL_CRITICAL_SECTION *)((char *)this + 48));
    for ( i = 0LL; i < *((_QWORD *)this + 13); ++i )
    {
      if ( (int)CAudioStream::GetPeakValue(*(CAudioStream **)(*((_QWORD *)this + 12) + 8 * i), &v11) >= 0 && v11 > v3 )
        v3 = v11;
    }
    if ( v10 )
      ATL::CCritSecLock::Unlock(&v9);
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 5u )
    {
      WPP_SF_g(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x34u,
        (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
        v3);
    }
    *a2 = v3;
  }
  else
  {
    v5 = -2147467261;
    if ( (struct _GUID *)v6 != &WPP_GLOBAL_Control && (*(_BYTE *)(v6 + 28) & 0x40) != 0 && *(_BYTE *)(v6 + 25) >= 2u )
      WPP_SF_D(*(_QWORD *)(v6 + 16), 0x35u, (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids, -2147467261);
  }
  return v5;
}
