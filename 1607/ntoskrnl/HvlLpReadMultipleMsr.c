/*
 * XREFs of HvlLpReadMultipleMsr @ 0x1401BCEEC
 * Callers:
 *     <none>
 * Callees:
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlLpReadMultipleMsr(int a1, unsigned int a2, int *a3, _QWORD *a4)
{
  __int64 v8; // rsi
  __int64 v9; // r13
  __int64 *v10; // rbx
  _DWORD *v11; // rdx
  __int64 v12; // rax
  int v13; // ecx
  unsigned int v14; // ebp
  __int64 v15; // rcx
  __int64 v17; // [rsp+20h] [rbp-78h]
  PHYSICAL_ADDRESS v18[4]; // [rsp+28h] [rbp-70h] BYREF
  PHYSICAL_ADDRESS v19[5]; // [rsp+48h] [rbp-50h] BYREF

  if ( 16 * a2 > 0x1000 )
    return 3221225485LL;
  LODWORD(v17) = 136;
  v8 = a2;
  v9 = HvlpAcquireHypercallPage(v18, 1, 0LL, 16LL * a2);
  v10 = (__int64 *)HvlpAcquireHypercallPage(v19, 2, 0LL, 16LL * a2);
  if ( a2 )
  {
    v11 = (_DWORD *)(v9 + 8);
    v12 = a2;
    do
    {
      *(v11 - 2) = a1;
      *(v11 - 1) = 65537;
      v13 = *a3++;
      *v11 = v13;
      v11 += 4;
      --v12;
    }
    while ( v12 );
  }
  v14 = 0;
  HIDWORD(v17) = a2 & 0xFFF;
  if ( (unsigned __int16)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(
                           v17,
                           (PHYSICAL_ADDRESS)v18[3].QuadPart,
                           (PHYSICAL_ADDRESS)v19[3].QuadPart) )
    v14 = -1073741823;
  if ( a2 )
  {
    do
    {
      v15 = *v10;
      v10 += 2;
      *a4++ = v15;
      --v8;
    }
    while ( v8 );
  }
  HvlpReleaseHypercallPage((__int64)v18);
  HvlpReleaseHypercallPage((__int64)v19);
  return v14;
}
