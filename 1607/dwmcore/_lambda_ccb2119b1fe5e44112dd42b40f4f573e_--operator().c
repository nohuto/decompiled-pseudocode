/*
 * XREFs of _lambda_ccb2119b1fe5e44112dd42b40f4f573e_::operator() @ 0x1801619CC
 * Callers:
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x1800A936C (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 * Callees:
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x180034D3C (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18009EC4C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 */

void __fastcall lambda_ccb2119b1fe5e44112dd42b40f4f573e_::operator()(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4)
{
  _QWORD *v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx

  if ( a3 )
  {
    v5 = (_QWORD *)(a4 + 16);
    v6 = a3;
    v7 = 0LL;
    do
    {
      v8 = *(_QWORD *)(v7 + *(_QWORD *)(a2 + 48));
      *(v5 - 2) = (unsigned int)*(_QWORD *)(v8 + 232) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(v8 + 232)) << 32);
      *(v5 - 1) = CDisplay::IsPrimary((CDisplay *)v8);
      *v5 = *(int *)(v8 + 292);
      v5[1] = *(int *)(v8 + 104);
      v5[2] = *(int *)(v8 + 108);
      v5[3] = *(_DWORD *)(v8 + 112) - *(_DWORD *)(v8 + 104);
      v5[4] = *(_DWORD *)(v8 + 116) - *(_DWORD *)(v8 + 108);
      v5[5] = GetPixelFormatSize(*(_DWORD *)(v8 + 280));
      v5[6] = *(unsigned int *)(*(_QWORD *)(v8 + 16) + 4LL);
      v5[7] = GdiEntry13();
      v9 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 16LL);
      v5[8] = *(unsigned int *)(v9 + 56);
      v7 += 8LL;
      v5[9] = (unsigned int)DrvQueryAdapterPopulationUniqueness(v9, v10);
      v5 += 12;
      --v6;
    }
    while ( v6 );
  }
}
