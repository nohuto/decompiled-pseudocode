/*
 * XREFs of FinishStockFontInit @ 0x1C00BC170
 * Callers:
 *     FinishStockFontReinit @ 0x1C0284070 (FinishStockFontReinit.c)
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0023CFC (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C0023DB0 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z @ 0x1C0024B94 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z.c)
 *     GreCreateFontIndirectW @ 0x1C0060558 (GreCreateFontIndirectW.c)
 *     GreSetLFONTOwner @ 0x1C00B9170 (GreSetLFONTOwner.c)
 *     ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1C00BAF44 (-FinishStockFontInitInternal@@YAXPEBGH@Z.c)
 */

void __fastcall FinishStockFontInit(unsigned int c)
{
  struct LFONT *v2; // r8
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __m128i v5; // xmm2
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int64 v8; // r8
  void *v9; // rcx
  int v10; // edx
  void **v11; // rax
  struct PFF *v12; // r14
  __int64 i; // rdi
  __int64 v14; // rbx
  INT a[4]; // [rsp+30h] [rbp-29h] BYREF
  __int128 v16; // [rsp+40h] [rbp-19h]
  __int128 v17; // [rsp+50h] [rbp-9h]
  __int128 v18; // [rsp+60h] [rbp+7h]
  __int128 v19; // [rsp+70h] [rbp+17h]
  __int64 v20; // [rsp+80h] [rbp+27h]
  int v21; // [rsp+88h] [rbp+2Fh]
  unsigned int v22; // [rsp+C0h] [rbp+67h] BYREF
  struct LFONT *v23; // [rsp+C8h] [rbp+6Fh] BYREF
  struct _FONTHASH **v24; // [rsp+D0h] [rbp+77h] BYREF
  struct PFF *v25; // [rsp+D8h] [rbp+7Fh] BYREF

  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v23, (struct HLFONT__ *)gahStockObjects[17], 0LL);
  v2 = v23;
  if ( v23 )
  {
    *((_DWORD *)v23 + 69) = -((c * *((_DWORD *)v23 + 69) + 36) / 0x48);
    v3 = *(_OWORD *)((char *)v2 + 292);
    v4 = *(_OWORD *)((char *)v2 + 308);
    v21 = *((_DWORD *)v2 + 91);
    v5 = *(__m128i *)((char *)v2 + 276);
    v16 = v3;
    v6 = *(_OWORD *)((char *)v2 + 324);
    v17 = v4;
    v7 = *(_OWORD *)((char *)v2 + 340);
    v18 = v6;
    v20 = *(_QWORD *)((char *)v2 + 356);
    *(_QWORD *)&a[2] = v5.m128i_i64[1];
    v19 = v7;
    a[0] = EngMulDiv(_mm_cvtsi128_si32(v5), 96, c);
    a[1] = EngMulDiv(v5.m128i_i32[1], 96, c);
    gahStockObjects96[17] = (void *)GreCreateFontIndirectW((__int64)a);
    v9 = gahStockObjects96[17];
    if ( v9 )
      GreSetLFONTOwner((__int64)v9, 0, v8);
  }
  v10 = 0;
  if ( c > 0x6C )
  {
    FinishStockFontInitInternal(
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize\\LargeFont",
      0);
    v10 = 1;
  }
  FinishStockFontInitInternal(
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize\\SmallFont",
    v10);
  v24 = gpPFTPublic;
  if ( !gppfeMapperDefault )
  {
    if ( (unsigned int)PUBLIC_PFTOBJ::bLoadAFont(
                         (PUBLIC_PFTOBJ *)&v24,
                         L"\\SystemRoot\\System32\\winsrv.dll",
                         &v22,
                         2u,
                         &v25,
                         0LL) )
    {
      if ( v22 )
      {
        v12 = v25;
        if ( v25 )
        {
          for ( i = 0LL; (unsigned int)i < v22; i = (unsigned int)(i + 1) )
          {
            if ( gppfeMapperDefault )
              break;
            v14 = *((_QWORD *)v12 + i + 28);
            if ( v14
              && !_wcsicmp((const wchar_t *)(*(_QWORD *)(v14 + 32) + *(int *)(*(_QWORD *)(v14 + 32) + 16LL)), L"SYSTEM") )
            {
              gppfeMapperDefault = (struct PFE *)v14;
            }
          }
        }
      }
    }
  }
  v11 = gahStockObjects;
  if ( !gahStockObjects[16] )
  {
    bSetStockObject(gahStockObjects[13], 16, 0);
    v11 = gahStockObjects;
  }
  DcAttrDefault[22] = *((_QWORD *)*v11 + 13);
  LFONTOBJ::~LFONTOBJ(&v23);
}
