/*
 * XREFs of ?OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z @ 0x18003552C
 * Callers:
 *     ?LoadPropertyStore@CAudioSessionStore@@AEAAJXZ @ 0x180035788 (-LoadPropertyStore@CAudioSessionStore@@AEAAJXZ.c)
 *     ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x180035A50 (-Commit@CAudioSessionStore@@UEAAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000AFD0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x18000C610 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18000C9B4 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?IsEqual@CAudioSessionStore@@QEAAHPEBG@Z @ 0x180035BF8 (-IsEqual@CAudioSessionStore@@QEAAHPEBG@Z.c)
 *     ?Hash@?$CStringElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL@@SAKPEBG@Z @ 0x180035DB4 (-Hash@-$CStringElementTraits@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL.c)
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180035DF0 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     WPP_SF_SD @ 0x18006BA28 (WPP_SF_SD.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionStore::OpenSessionKey(CAudioSessionStore *this, HKEY *a2)
{
  CAudioSessionStore *v3; // r13
  __int64 v4; // rcx
  RPC_STATUS v5; // eax
  signed int v6; // edi
  __int64 v7; // r9
  __int64 i; // r8
  const unsigned __int16 *v9; // rbx
  LSTATUS v10; // eax
  LSTATUS ValueW; // eax
  unsigned __int16 *pvData; // rax
  LSTATUS v13; // eax
  unsigned __int16 *v14; // rdi
  signed int *v16; // rbx
  unsigned int v17; // eax
  bool v18; // sf
  unsigned int v19; // edi
  __int64 j; // r9
  int v21; // eax
  const BYTE *v22; // rcx
  __int64 v23; // rax
  LSTATUS v24; // eax
  int v25; // r13d
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
  v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 8) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x61u,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids);
    v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( !*((_QWORD *)v3 + 4) )
  {
    v6 = -2147024891;
    v9 = lpSubKey;
LABEL_94:
    if ( (struct _GUID *)v4 != &WPP_GLOBAL_Control && (*(_BYTE *)(v4 + 28) & 0x40) != 0 && *(_BYTE *)(v4 + 25) >= 2u )
      WPP_SF_D(*(_QWORD *)(v4 + 16), 0x6Cu, (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids, v6);
    goto LABEL_27;
  }
  v5 = RpcImpersonateClient(0LL);
  v6 = v5;
  if ( v5 )
  {
    if ( v5 != 1725 )
    {
      v9 = lpSubKey;
      v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
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
    v17 = ATL::CStringElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>::Hash(*((_QWORD *)v3 + 2));
    v36 = v17;
    LODWORD(v27) = v17;
  }
  catch ( ATL::CAtlException *v31 )
  {
    v16 = (signed int *)v31;
    if ( *(_DWORD *)v31 == -1073741571 )
      _resetstkoflw();
    v6 = *v16;
    if ( *v16 < 0 )
    {
      v9 = lpSubKey;
      goto LABEL_23;
    }
    v3 = this;
    v17 = (unsigned int)v27;
    v36 = (unsigned int)v27;
  }
  v33 = 0;
  v7 = 0LL;
  for ( i = v17; ; i = v36 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      (wchar_t *const *)&lpSubKey,
      L"%x_%d",
      i,
      v7);
    v9 = lpSubKey;
    v10 = RegOpenKeyExW(*((HKEY *)v3 + 4), lpSubKey, 0, 0x20019u, &hkey);
    v6 = v10;
    if ( v10 )
    {
      v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 8) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_SD(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          98,
          (unsigned int)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
          (_DWORD)v9,
          v10);
        v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      }
      if ( v6 == 2 )
      {
        v6 = 0;
      }
      else
      {
        v18 = v6 < 0;
        if ( v6 <= 0 )
        {
LABEL_62:
          if ( v18 )
            goto LABEL_24;
          if ( (struct _GUID *)v4 != &WPP_GLOBAL_Control && (*(_BYTE *)(v4 + 28) & 8) != 0 && *(_BYTE *)(v4 + 25) >= 4u )
            WPP_SF_(*(_QWORD *)(v4 + 16), 0x67u, (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids);
          v19 = 0;
          for ( j = 0LL; ; j = v19 )
          {
            ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
              (wchar_t *const *)&lpSubKey,
              L"%x_%d",
              v36,
              j);
            v9 = lpSubKey;
            if ( RegOpenKeyExW(*((HKEY *)v3 + 4), lpSubKey, 0, 0x20019u, &hkey) )
              break;
            if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
              && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 8) != 0
              && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
            {
              WPP_SF_S(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                104LL,
                &WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
                v9);
            }
            RegCloseKey(hkey);
            hkey = 0LL;
            ++v19;
          }
          if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
            && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 8) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
          {
            WPP_SF_S(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
              105LL,
              &WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
              v9);
          }
          hkey = 0LL;
          v21 = CreateLowRightsRegistryKey(*((HKEY *)v3 + 4), v9, 0x2001Fu, &hkey);
          v6 = v21;
          if ( v21 < 0 )
          {
            v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
            if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
              && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 8) != 0
              && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
            {
              WPP_SF_D(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                0x6Au,
                (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
                v21);
              goto LABEL_23;
            }
            goto LABEL_24;
          }
          v22 = (const BYTE *)*((_QWORD *)v3 + 2);
          v23 = -1LL;
          do
            ++v23;
          while ( *(_WORD *)&v22[2 * v23] );
          pcbData = 2 * v23 + 2;
          v24 = RegSetValueExW(hkey, 0LL, 0, 1u, v22, pcbData);
          v25 = v24;
          if ( !v24 )
          {
            *a2 = hkey;
            goto LABEL_23;
          }
          if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
            && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 8) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
          {
            WPP_SF_D(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
              0x6Bu,
              (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
              v24);
          }
          if ( v25 > 0 )
            v6 = (unsigned __int16)v25 | 0x80070000;
          else
            v6 = v25;
LABEL_49:
          RegCloseKey(hkey);
          hkey = 0LL;
          goto LABEL_23;
        }
        v6 = (unsigned __int16)v6 | 0x80070000;
      }
LABEL_61:
      v18 = v6 < 0;
      goto LABEL_62;
    }
    pcbData = 0;
    ValueW = RegGetValueW(hkey, 0LL, 0LL, 2u, 0LL, 0LL, &pcbData);
    v6 = ValueW;
    if ( ValueW )
    {
      if ( ValueW > 0 )
        v6 = (unsigned __int16)ValueW | 0x80070000;
LABEL_52:
      RegCloseKey(hkey);
      hkey = 0LL;
      v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      goto LABEL_61;
    }
    pvData = (unsigned __int16 *)operator new(saturated_mul(((unsigned __int64)pcbData >> 1) + 1, 2uLL));
    v27 = pvData;
    if ( !pvData )
    {
      v6 = -2147024882;
      goto LABEL_49;
    }
    v13 = RegGetValueW(hkey, 0LL, 0LL, 2u, 0LL, pvData, &pcbData);
    v6 = v13;
    if ( v13 )
    {
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 8) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_D(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x63u,
          (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
          v13);
      }
      if ( v6 > 0 )
        v6 = (unsigned __int16)v6 | 0x80070000;
      operator delete(v27);
      goto LABEL_52;
    }
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
      || (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 8) == 0 )
    {
      v14 = v27;
    }
    else
    {
      v14 = v27;
      if ( *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        WPP_SF_S(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          100LL,
          &WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
          v27);
    }
    if ( CAudioSessionStore::IsEqual(v3, v14) )
      break;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 8) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        102LL,
        &WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
        hkey);
    }
    operator delete(v14);
    RegCloseKey(hkey);
    hkey = 0LL;
    v7 = (unsigned int)++v33;
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 8) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      101LL,
      &WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      hkey);
  }
  operator delete(v14);
  *a2 = hkey;
  v6 = 0;
LABEL_23:
  v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
LABEL_24:
  if ( v35 )
  {
    RpcRevertToSelf();
    v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
LABEL_26:
  if ( v6 < 0 )
    goto LABEL_94;
LABEL_27:
  ATL::CStringData::Release((ATL::CStringData *)(v9 - 12));
  ATL::CStringData::Release((ATL::CStringData *)(v30[0] - 24LL));
  return (unsigned int)v6;
}
