/*
 * XREFs of ?OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z @ 0x18006CF48
 * Callers:
 *     ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x1800677A0 (-Commit@CAudioSessionStore@@UEAAJXZ.c)
 *     ?LoadPropertyStore@CAudioSessionStore@@AEAAJXZ @ 0x18006C340 (-LoadPropertyStore@CAudioSessionStore@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000D410 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x180012720 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     ?Hash@?$CStringElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL@@SAKPEBG@Z @ 0x18002C680 (-Hash@-$CStringElementTraits@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18005021C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     WPP_SF_SD @ 0x180059B60 (WPP_SF_SD.c)
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180068AA0 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?IsEqual@CAudioSessionStore@@QEAAHPEBG@Z @ 0x18006BFDC (-IsEqual@CAudioSessionStore@@QEAAHPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionStore::OpenSessionKey(CAudioSessionStore *this, HKEY *a2)
{
  CAudioSessionStore *v3; // r12
  signed int v4; // edi
  const wchar_t *v5; // rbx
  RPC_STATUS v6; // eax
  unsigned int v7; // eax
  __int64 v8; // r9
  __int64 i; // r8
  LSTATUS ValueW; // eax
  unsigned __int16 *pvData; // rax
  LSTATUS v12; // eax
  unsigned __int16 *v13; // rdi
  LSTATUS v14; // eax
  CAudioSession *v15; // rcx
  bool v16; // sf
  unsigned int v17; // edi
  __int64 j; // r9
  int v19; // eax
  const BYTE *v20; // rcx
  __int64 v21; // rax
  LSTATUS v22; // eax
  int v23; // r12d
  signed int *v25; // rbx
  LPDWORD pdwType; // [rsp+20h] [rbp-88h]
  DWORD pcbData; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int16 *v28; // [rsp+48h] [rbp-60h]
  HKEY hkey; // [rsp+50h] [rbp-58h] BYREF
  LPCWSTR lpSubKey; // [rsp+58h] [rbp-50h] BYREF
  _QWORD v31[2]; // [rsp+60h] [rbp-48h] BYREF
  ATL::CAtlException *v32; // [rsp+70h] [rbp-38h] BYREF
  int v34; // [rsp+B0h] [rbp+8h]
  char v36; // [rsp+C0h] [rbp+18h]
  unsigned int v37; // [rsp+C8h] [rbp+20h]

  v31[1] = -2LL;
  v3 = this;
  hkey = 0LL;
  v36 = 0;
  LODWORD(v28) = 0;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(v31);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&lpSubKey);
  *a2 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Au, (__int64)&WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids);
  }
  if ( !*((_QWORD *)v3 + 4) )
  {
    v4 = -2147024891;
    v5 = lpSubKey;
    goto LABEL_93;
  }
  v6 = RpcImpersonateClient(0LL);
  v4 = v6;
  if ( v6 )
  {
    if ( v6 != 1725 )
    {
      v5 = lpSubKey;
      if ( v6 > 0 )
        v4 = (unsigned __int16)v6 | 0x80070000;
      goto LABEL_92;
    }
  }
  else
  {
    v36 = 1;
  }
  try
  {
    v7 = ATL::CStringElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>::Hash(*((unsigned __int16 **)v3 + 2));
    v37 = v7;
    LODWORD(v28) = v7;
  }
  catch ( ATL::CAtlException *v32 )
  {
    v25 = (signed int *)v32;
    if ( *(_DWORD *)v32 == -1073741571 )
      _o__resetstkoflw();
    v4 = *v25;
    if ( *v25 < 0 )
    {
      v5 = lpSubKey;
      goto LABEL_90;
    }
    v3 = this;
    v7 = (unsigned int)v28;
    v37 = (unsigned int)v28;
  }
  v34 = 0;
  v8 = 0LL;
  for ( i = v7; ; i = v37 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      (wchar_t *const *)&lpSubKey,
      L"%x_%d",
      i,
      v8);
    v5 = lpSubKey;
    v14 = RegOpenKeyExW(*((HKEY *)v3 + 4), lpSubKey, 0, 0x20019u, &hkey);
    v4 = v14;
    if ( v14 )
    {
      v15 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        LODWORD(pdwType) = v14;
        WPP_SF_SD(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x2Bu,
          (__int64)&WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids,
          v5,
          pdwType);
        v15 = WPP_GLOBAL_Control;
      }
      if ( v4 == 2 )
      {
        v4 = 0;
      }
      else
      {
        v16 = v4 < 0;
        if ( v4 <= 0 )
        {
LABEL_56:
          if ( v16 )
            goto LABEL_90;
          if ( v15 != (CAudioSession *)&WPP_GLOBAL_Control
            && (*((_BYTE *)v15 + 28) & 8) != 0
            && *((_BYTE *)v15 + 25) >= 4u )
          {
            WPP_SF_(*((_QWORD *)v15 + 2), 0x30u, (__int64)&WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids);
          }
          v17 = 0;
          for ( j = 0LL; ; j = v17 )
          {
            ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
              (wchar_t *const *)&lpSubKey,
              L"%x_%d",
              v37,
              j);
            v5 = lpSubKey;
            if ( RegOpenKeyExW(*((HKEY *)v3 + 4), lpSubKey, 0, 0x20019u, &hkey) )
              break;
            if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_S(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x31u,
                (__int64)&WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids,
                v5);
            }
            RegCloseKey(hkey);
            hkey = 0LL;
            ++v17;
          }
          if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_S(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x32u,
              (__int64)&WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids,
              v5);
          }
          hkey = 0LL;
          v19 = CreateLowRightsRegistryKey(*((HKEY *)v3 + 4), v5, 131103, &hkey);
          v4 = v19;
          if ( v19 < 0 )
          {
            if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_D(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x33u,
                (__int64)&WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids,
                v19);
            }
            goto LABEL_90;
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
            goto LABEL_90;
          }
          if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x34u,
              (__int64)&WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids,
              v22);
          }
          if ( v23 > 0 )
            v4 = (unsigned __int16)v23 | 0x80070000;
          else
            v4 = v23;
LABEL_87:
          RegCloseKey(hkey);
          hkey = 0LL;
          goto LABEL_90;
        }
        v4 = (unsigned __int16)v4 | 0x80070000;
      }
LABEL_55:
      v16 = v4 < 0;
      goto LABEL_56;
    }
    pcbData = 0;
    ValueW = RegGetValueW(hkey, 0LL, 0LL, 2u, 0LL, 0LL, &pcbData);
    v4 = ValueW;
    if ( ValueW )
    {
      if ( ValueW > 0 )
        v4 = (unsigned __int16)ValueW | 0x80070000;
LABEL_46:
      RegCloseKey(hkey);
      hkey = 0LL;
      v15 = WPP_GLOBAL_Control;
      goto LABEL_55;
    }
    pvData = (unsigned __int16 *)operator new(saturated_mul(((unsigned __int64)pcbData >> 1) + 1, 2uLL));
    v28 = pvData;
    if ( !pvData )
    {
      v4 = -2147024882;
      goto LABEL_87;
    }
    v12 = RegGetValueW(hkey, 0LL, 0LL, 2u, 0LL, pvData, &pcbData);
    v4 = v12;
    if ( v12 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x2Cu,
          (__int64)&WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids,
          v12);
      }
      if ( v4 > 0 )
        v4 = (unsigned __int16)v4 | 0x80070000;
      operator delete(v28);
      goto LABEL_46;
    }
    if ( WPP_GLOBAL_Control == (CAudioSession *)&WPP_GLOBAL_Control || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) == 0 )
    {
      v13 = v28;
    }
    else
    {
      v13 = v28;
      if ( *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x2Du,
          (__int64)&WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids,
          v28);
    }
    if ( CAudioSessionStore::IsEqual((PCNZWCH *)v3, v13) )
      break;
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Fu,
        (__int64)&WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids,
        (__int64)hkey);
    }
    operator delete(v13);
    RegCloseKey(hkey);
    hkey = 0LL;
    v8 = (unsigned int)++v34;
  }
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Eu,
      (__int64)&WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids,
      (__int64)hkey);
  }
  operator delete(v13);
  *a2 = hkey;
  v4 = 0;
LABEL_90:
  if ( v36 )
    RpcRevertToSelf();
LABEL_92:
  if ( v4 < 0 )
LABEL_93:
    AudSrvTraceLoggingErrorHelper("CAudioSessionStore::OpenSessionKey", 5805, v4);
  ATL::CStringData::Release((ATL::CStringData *)(v5 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v31[0] - 24LL));
  return (unsigned int)v4;
}
