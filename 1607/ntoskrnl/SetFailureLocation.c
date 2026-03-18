/*
 * XREFs of SetFailureLocation @ 0x1401B2AF8
 * Callers:
 *     CmpFileReadEx @ 0x1400848A0 (CmpFileReadEx.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1403F8C28 (CmpValidateHiveSecurityDescriptors.c)
 *     HvCheckBin @ 0x14042EFC0 (HvCheckBin.c)
 *     CmpCheckValueList @ 0x14043C940 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x14043D610 (CmpCheckKey.c)
 *     CmpCheckRegistry2 @ 0x14043EF70 (CmpCheckRegistry2.c)
 *     CmpCheckLeaf @ 0x14043FDC0 (CmpCheckLeaf.c)
 *     HvLoadHive @ 0x14047ECF8 (HvLoadHive.c)
 *     CmpInitializeHive @ 0x14047F184 (CmpInitializeHive.c)
 *     HvInitializeHive @ 0x14047FBA4 (HvInitializeHive.c)
 *     CmCheckRegistry @ 0x140480374 (CmCheckRegistry.c)
 *     HvpInitMap @ 0x1404E3088 (HvpInitMap.c)
 *     HvCheckHive @ 0x140513594 (HvCheckHive.c)
 *     HvpMapHiveImage @ 0x140513C14 (HvpMapHiveImage.c)
 *     HvpEnlistBinInMap @ 0x140513FE0 (HvpEnlistBinInMap.c)
 *     CmpLoadHiveThread @ 0x14054D5A8 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x14055E464 (CmpMountPreloadedHives.c)
 *     HvpBuildMapForLoaderHive @ 0x140563D50 (HvpBuildMapForLoaderHive.c)
 *     HvpBuildMap @ 0x140610554 (HvpBuildMap.c)
 * Callees:
 *     _TlgWrite @ 0x14000A598 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140088D98 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

char __fastcall SetFailureLocation(__int64 a1, int a2, int a3, int a4, int a5)
{
  unsigned __int64 v5; // rax
  int v10; // r9d
  char v12; // [rsp+38h] [rbp-41h] BYREF
  int v13; // [rsp+3Ch] [rbp-3Dh] BYREF
  int v14; // [rsp+40h] [rbp-39h] BYREF
  int v15; // [rsp+44h] [rbp-35h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-31h] BYREF
  char *v17; // [rsp+68h] [rbp-11h]
  int v18; // [rsp+70h] [rbp-9h]
  int v19; // [rsp+74h] [rbp-5h]
  int *v20; // [rsp+78h] [rbp-1h]
  int v21; // [rsp+80h] [rbp+7h]
  int v22; // [rsp+84h] [rbp+Bh]
  int *v23; // [rsp+88h] [rbp+Fh]
  int v24; // [rsp+90h] [rbp+17h]
  int v25; // [rsp+94h] [rbp+1Bh]
  int *v26; // [rsp+98h] [rbp+1Fh]
  int v27; // [rsp+A0h] [rbp+27h]
  int v28; // [rsp+A4h] [rbp+2Bh]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+57h] BYREF

  v5 = (unsigned __int64)&retaddr;
  if ( stru_1402F34E0.LevelPlus1 > 5 )
  {
    LOBYTE(v5) = TlgKeywordOn(&stru_1402F34E0, 0x200000000000uLL);
    if ( (_BYTE)v5 )
    {
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v17 = &v12;
      v20 = &v13;
      v23 = &v14;
      v26 = &v15;
      v12 = a2;
      v13 = a3;
      v14 = v10;
      v15 = a5;
      v18 = 1;
      v21 = 4;
      v24 = 4;
      v27 = 4;
      LOBYTE(v5) = TlgWrite(&stru_1402F34E0, &unk_14027F0C2, 0LL, 0LL, 6u, &pData);
    }
  }
  if ( a1 )
  {
    if ( a2 )
    {
      v5 = *(unsigned int *)(a1 + 12);
      if ( (unsigned int)v5 < 8 )
      {
        *(_DWORD *)(a1 + 12 * v5 + 112) = a3;
        *(_DWORD *)(a1 + 12LL * *(unsigned int *)(a1 + 12) + 116) = a4;
        LODWORD(v5) = 3 * (*(_DWORD *)(a1 + 12) + 10);
        *(_DWORD *)(a1 + 12 * ((unsigned int)(*(_DWORD *)(a1 + 12))++ + 10LL)) = a5;
      }
    }
    else
    {
      v5 = *(unsigned int *)(a1 + 8);
      if ( (unsigned int)v5 < 8 )
      {
        *(_DWORD *)(a1 + 12 * v5 + 16) = a3;
        *(_DWORD *)(a1 + 12LL * *(unsigned int *)(a1 + 8) + 20) = a4;
        LODWORD(v5) = 3 * (*(_DWORD *)(a1 + 8) + 2);
        *(_DWORD *)(a1 + 12 * ((unsigned int)(*(_DWORD *)(a1 + 8))++ + 2LL)) = a5;
      }
    }
  }
  return v5;
}
