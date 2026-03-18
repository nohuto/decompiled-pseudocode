/*
 * XREFs of bInitICM @ 0x1C013A470
 * Callers:
 *     InitializeGre @ 0x1C013A000 (InitializeGre.c)
 * Callees:
 *     HmgSetOwner @ 0x1C0023D60 (HmgSetOwner.c)
 *     HmgShareLock @ 0x1C005C9B0 (HmgShareLock.c)
 *     HmgMarkUndeletable @ 0x1C005DA10 (HmgMarkUndeletable.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C005DAB0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C005DC98 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     GreGetStockObject @ 0x1C006C0A0 (GreGetStockObject.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

__int64 bInitICM()
{
  unsigned int v0; // ebx
  NTSTATUS v1; // eax
  int v2; // ecx
  unsigned int v3; // eax
  _BYTE *v4; // rcx
  __int64 v5; // rax
  struct tagLOGCOLORSPACEW *v6; // rdx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int64 v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  struct HOBJ__ *ColorSpace; // rax
  unsigned __int64 v19; // rdi
  int v21; // [rsp+38h] [rbp-D0h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+80h] [rbp-88h]
  int v24; // [rsp+88h] [rbp-80h]
  __int64 v25; // [rsp+90h] [rbp-78h]
  _BYTE v26[588]; // [rsp+B8h] [rbp-50h] BYREF
  int v27; // [rsp+304h] [rbp+1FCh]

  QueryTable.Flags = 36;
  v21 = 0;
  QueryTable.Name = L"GdiIcmControl";
  QueryTable.QueryRoutine = 0LL;
  v0 = 1;
  QueryTable.EntryContext = &v21;
  QueryTable.DefaultType = 0;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v23 = 0LL;
  v24 = 0;
  v25 = 0LL;
  v1 = RtlQueryRegistryValues(3u, L"ICM", &QueryTable, 0LL, 0LL);
  v2 = v21;
  if ( v1 < 0 )
    v2 = 0;
  v21 = v2;
  if ( (v2 & 0x10000) == 0 )
  {
    dword_1C01013CC = 1934772034;
    wcscpy_s(&Dst, 0x104uLL, L"sRGB Color Space Profile.icm");
  }
  giIcmGammaRange = 128;
  QueryTable.Name = L"GdiIcmGammaRange";
  QueryTable.EntryContext = &giIcmGammaRange;
  if ( RtlQueryRegistryValues(3u, L"ICM", &QueryTable, 0LL, 0LL) >= 0 )
  {
    v3 = giIcmGammaRange;
  }
  else
  {
    v3 = 128;
    giIcmGammaRange = 128;
  }
  if ( v3 > 0x100 )
    giIcmGammaRange = 256;
  v4 = v26;
  v5 = 4LL;
  v6 = &gcsStockColorSpace;
  do
  {
    v7 = *(_OWORD *)&v6->lcsIntent;
    *(_OWORD *)v4 = *(_OWORD *)&v6->lcsSignature;
    v8 = *(_OWORD *)&v6->lcsEndpoints.ciexyzGreen.ciexyzX;
    *((_OWORD *)v4 + 1) = v7;
    v9 = *(_OWORD *)&v6->lcsEndpoints.ciexyzBlue.ciexyzY;
    *((_OWORD *)v4 + 2) = v8;
    v10 = *(_OWORD *)&v6->lcsGammaBlue;
    *((_OWORD *)v4 + 3) = v9;
    v11 = *(_OWORD *)&v6->lcsFilename[6];
    *((_OWORD *)v4 + 4) = v10;
    v12 = *(_OWORD *)&v6->lcsFilename[14];
    *((_OWORD *)v4 + 5) = v11;
    v13 = *(_OWORD *)&v6->lcsFilename[22];
    v6 = (struct tagLOGCOLORSPACEW *)((char *)v6 + 128);
    *((_OWORD *)v4 + 6) = v12;
    v4 += 128;
    *((_OWORD *)v4 - 1) = v13;
    --v5;
  }
  while ( v5 );
  v14 = *(_QWORD *)&v6->lcsGammaBlue;
  v15 = *(_OWORD *)&v6->lcsIntent;
  *(_OWORD *)v4 = *(_OWORD *)&v6->lcsSignature;
  v16 = *(_OWORD *)&v6->lcsEndpoints.ciexyzGreen.ciexyzX;
  *((_OWORD *)v4 + 1) = v15;
  v17 = *(_OWORD *)&v6->lcsEndpoints.ciexyzBlue.ciexyzY;
  *((_OWORD *)v4 + 2) = v16;
  *((_OWORD *)v4 + 3) = v17;
  *((_QWORD *)v4 + 8) = v14;
  *((_DWORD *)v4 + 18) = *(_DWORD *)&v6->lcsFilename[2];
  v27 = 0;
  ColorSpace = GreCreateColorSpace((struct _LOGCOLORSPACEEXW *)v26);
  v19 = (unsigned __int64)ColorSpace;
  if ( !ColorSpace )
    return 0;
  HmgSetOwner((int)ColorSpace, 0, 9);
  HmgMarkUndeletable(v19, 9);
  bSetStockObject(v19, 20, 0);
  ghStockColorSpace = (HCOLORSPACE)GreGetStockObject(20LL);
  gpStockColorSpace = (struct COLORSPACE *)HmgShareLock((int)ghStockColorSpace, 9);
  qword_1C0101288 = (__int64)ghStockColorSpace;
  qword_1C0101060 = (__int64)gpStockColorSpace;
  if ( !gpStockColorSpace )
    return 0;
  return v0;
}
