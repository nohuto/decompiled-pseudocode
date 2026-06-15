/*
 * XREFs of ?OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z @ 0x18003644C
 * Callers:
 *     ?LoadPropertyStore@CAudioSessionStore@@AEAAJXZ @ 0x1800367D0 (-LoadPropertyStore@CAudioSessionStore@@AEAAJXZ.c)
 *     ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x180036A90 (-Commit@CAudioSessionStore@@UEAAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x180018F50 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x1800191BC (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18002C240 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180034D24 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?IsEqual@CAudioSessionStore@@QEAAHPEBG@Z @ 0x180036CA8 (-IsEqual@CAudioSessionStore@@QEAAHPEBG@Z.c)
 *     ?Hash@?$CStringElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL@@SAKPEBG@Z @ 0x180036E70 (-Hash@-$CStringElementTraits@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     WPP_SF_SD @ 0x180070D50 (WPP_SF_SD.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionStore::OpenSessionKey(CAudioSessionStore *this, HKEY *a2)
{
  CAudioSessionStore *v3; // r13
  TraceLoggingHProvider v4; // rcx
  RPC_STATUS v5; // eax
  signed int v6; // edi
  __int64 v7; // r9
  __int64 i; // r8
  const unsigned __int16 *v9; // rbx
  LSTATUS v10; // eax
  LSTATUS ValueW; // eax
  unsigned __int16 *pvData; // rax
  unsigned int v13; // eax
  unsigned __int16 *v14; // rdi
  bool v16; // sf
  unsigned int v17; // edi
  __int64 j; // r9
  int v19; // eax
  const BYTE *v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // eax
  int v23; // r13d
  ATL::CAtlException *v24; // rbx
  unsigned int v25; // eax
  DWORD pcbData; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int16 *v27; // [rsp+48h] [rbp-60h]
  HKEY hkey; // [rsp+50h] [rbp-58h] BYREF
  LPCWSTR lpSubKey; // [rsp+58h] [rbp-50h] BYREF
  _QWORD v30[2]; // [rsp+60h] [rbp-48h] BYREF
  ATL::CAtlException *v31; // [rsp+70h] [rbp-38h] BYREF
  int v33; // [rsp+B0h] [rbp+8h]
  char v35; // [rsp+C0h] [rbp+18h]
  unsigned int v36; // [rsp+C8h] [rbp+20h]

  v30[1] = -2LL;
  v3 = this;
  hkey = 0LL;
  v35 = 0;
  LODWORD(v27) = 0;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(v30);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&lpSubKey);
  *a2 = 0LL;
  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x60u, (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids);
    v4 = WPP_GLOBAL_Control;
  }
  if ( !*((_QWORD *)v3 + 4) )
  {
    v6 = -2147024891;
    v9 = lpSubKey;
LABEL_94:
    if ( v4 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)v4 + 28) & 0x40) != 0
      && *((_BYTE *)v4 + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)v4 + 2), 107LL, &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids, (unsigned int)v6);
    }
    goto LABEL_27;
  }
  v5 = RpcImpersonateClient(0LL);
  v6 = v5;
  if ( v5 )
  {
    if ( v5 != 1725 )
    {
      v9 = lpSubKey;
      v4 = WPP_GLOBAL_Control;
      if ( v5 > 0 )
        v6 = (unsigned __int16)v5 | 0x80070000;
      goto LABEL_26;
    }
  }
  else
  {
    v35 = 1;
  }
  try
  {
    v25 = ATL::CStringElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>::Hash(*((_QWORD *)v3 + 2));
    v36 = v25;
    LODWORD(v27) = v25;
  }
  catch ( ATL::CAtlException *v31 )
  {
    v24 = v31;
    if ( *(_DWORD *)v31 == -1073741571 )
      _resetstkoflw();
    v6 = *(_DWORD *)v24;
    if ( *(int *)v24 < 0 )
    {
      v9 = lpSubKey;
      goto LABEL_23;
    }
    v3 = this;
    v25 = (unsigned int)v27;
    v36 = (unsigned int)v27;
  }
  v33 = 0;
  v7 = 0LL;
  for ( i = v25; ; i = v36 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      (__int64 *)&lpSubKey,
      L"%x_%d",
      i,
      v7);
    v9 = lpSubKey;
    v10 = RegOpenKeyExW(*((HKEY *)v3 + 4), lpSubKey, 0, 0x20019u, &hkey);
    v6 = v10;
    if ( v10 )
    {
      v4 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_SD(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          97,
          (unsigned int)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
          (_DWORD)v9,
          v10);
        v4 = WPP_GLOBAL_Control;
      }
      if ( v6 == 2 )
      {
        v6 = 0;
      }
      else
      {
        v16 = v6 < 0;
        if ( v6 <= 0 )
          goto LABEL_35;
        v6 = (unsigned __int16)v6 | 0x80070000;
      }
LABEL_34:
      v16 = v6 < 0;
LABEL_35:
      if ( v16 )
        goto LABEL_24;
      if ( v4 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)v4 + 28) & 8) != 0
        && *((_BYTE *)v4 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v4 + 2), 0x66u, (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids);
      }
      v17 = 0;
      for ( j = 0LL; ; j = v17 )
      {
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
          (__int64 *)&lpSubKey,
          L"%x_%d",
          v36,
          j);
        v9 = lpSubKey;
        if ( RegOpenKeyExW(*((HKEY *)v3 + 4), lpSubKey, 0, 0x20019u, &hkey) )
          break;
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 103LL, &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids, v9);
        }
        RegCloseKey(hkey);
        hkey = 0LL;
        ++v17;
      }
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 104LL, &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids, v9);
      }
      hkey = 0LL;
      v19 = CreateLowRightsRegistryKey(*((HKEY *)v3 + 4), v9, 131103, &hkey);
      v6 = v19;
      if ( v19 < 0 )
      {
        v4 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            105LL,
            &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
            (unsigned int)v19);
          goto LABEL_23;
        }
        goto LABEL_24;
      }
      v20 = (const BYTE *)*((_QWORD *)v3 + 2);
      v21 = -1LL;
      do
        ++v21;
      while ( *(_WORD *)&v20[2 * v21] );
      pcbData = 2 * v21 + 2;
      v22 = RegSetValueExW(hkey, 0LL, 0, 1u, v20, pcbData);
      v23 = v22;
      if ( !v22 )
      {
        *a2 = hkey;
        goto LABEL_23;
      }
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 106LL, &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids, v22);
      }
      if ( v23 > 0 )
        v6 = (unsigned __int16)v23 | 0x80070000;
      else
        v6 = v23;
LABEL_72:
      RegCloseKey(hkey);
      hkey = 0LL;
      goto LABEL_23;
    }
    pcbData = 0;
    ValueW = RegGetValueW(hkey, 0LL, 0LL, 2u, 0LL, 0LL, &pcbData);
    v6 = ValueW;
    if ( ValueW )
    {
      if ( ValueW > 0 )
        v6 = (unsigned __int16)ValueW | 0x80070000;
LABEL_75:
      RegCloseKey(hkey);
      hkey = 0LL;
      v4 = WPP_GLOBAL_Control;
      goto LABEL_34;
    }
    pvData = (unsigned __int16 *)operator new(saturated_mul(((unsigned __int64)pcbData >> 1) + 1, 2uLL));
    v27 = pvData;
    if ( !pvData )
    {
      v6 = -2147024882;
      goto LABEL_72;
    }
    v13 = RegGetValueW(hkey, 0LL, 0LL, 2u, 0LL, pvData, &pcbData);
    v6 = v13;
    if ( v13 )
    {
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 98LL, &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids, v13);
      }
      if ( v6 > 0 )
        v6 = (unsigned __int16)v6 | 0x80070000;
      operator delete(v27);
      goto LABEL_75;
    }
    if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) == 0 )
    {
      v14 = v27;
    }
    else
    {
      v14 = v27;
      if ( *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 99LL, &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids, v27);
    }
    if ( CAudioSessionStore::IsEqual(v3, v14) )
      break;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 101LL, &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids, hkey);
    }
    operator delete(v14);
    RegCloseKey(hkey);
    hkey = 0LL;
    v7 = (unsigned int)++v33;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 100LL, &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids, hkey);
  }
  operator delete(v14);
  *a2 = hkey;
  v6 = 0;
LABEL_23:
  v4 = WPP_GLOBAL_Control;
LABEL_24:
  if ( v35 )
  {
    RpcRevertToSelf();
    v4 = WPP_GLOBAL_Control;
  }
LABEL_26:
  if ( v6 < 0 )
    goto LABEL_94;
LABEL_27:
  ATL::CStringData::Release((ATL::CStringData *)(v9 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v30[0] - 24LL));
  return (unsigned int)v6;
}
