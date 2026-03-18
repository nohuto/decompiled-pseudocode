/*
 * XREFs of SetFailureLocation @ 0x1401A9C98
 * Callers:
 *     CmpFileReadEx @ 0x14001B248 (CmpFileReadEx.c)
 *     HvCheckHive @ 0x1403D0558 (HvCheckHive.c)
 *     CmpInitializeHive @ 0x1403D071C (CmpInitializeHive.c)
 *     HvInitializeHive @ 0x1403D0F54 (HvInitializeHive.c)
 *     CmCheckRegistry @ 0x1403D1730 (CmCheckRegistry.c)
 *     HvLoadHive @ 0x1403D3A54 (HvLoadHive.c)
 *     HvpInitMap @ 0x1403D5B10 (HvpInitMap.c)
 *     HvpEnlistBinInMap @ 0x1403D8A90 (HvpEnlistBinInMap.c)
 *     HvpMapHiveImage @ 0x1403D8C44 (HvpMapHiveImage.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1403DDA84 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCheckLeaf @ 0x1403F9670 (CmpCheckLeaf.c)
 *     CmpCheckValueList @ 0x140403CF0 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x140404270 (CmpCheckKey.c)
 *     CmpCheckRegistry2 @ 0x140405850 (CmpCheckRegistry2.c)
 *     HvCheckBin @ 0x140416190 (HvCheckBin.c)
 *     CmpMountPreloadedHives @ 0x14051EACC (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x140520FE4 (CmpLoadHiveThread.c)
 *     HvpBuildMapForLoaderHive @ 0x14053265C (HvpBuildMapForLoaderHive.c)
 *     HvpBuildMap @ 0x1405EBAB0 (HvpBuildMap.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1400923CC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140092474 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
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
  if ( stru_1402CFD30.LevelPlus1 > 5 )
  {
    LOBYTE(v5) = TlgKeywordOn(&stru_1402CFD30, 0x200000000000uLL);
    if ( (_BYTE)v5 )
    {
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v17 = &v12;
      v20 = &v15;
      v23 = &v13;
      v26 = &v14;
      v12 = a2;
      v15 = a3;
      v13 = v10;
      v14 = a5;
      v18 = 1;
      v21 = 4;
      v24 = 4;
      v27 = 4;
      LOBYTE(v5) = TlgWrite(&stru_1402CFD30, &unk_140255657, 0LL, 0LL, 6u, &pData);
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
