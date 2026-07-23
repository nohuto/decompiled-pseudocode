/*
 * XREFs of HvlMapGpaPages @ 0x14023CE54
 * Callers:
 *     VmpFlushTbVaRange @ 0x140223EEC (VmpFlushTbVaRange.c)
 *     VmpProcessUpdateSlat @ 0x140224370 (VmpProcessUpdateSlat.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlMapGpaPages(__int64 a1, __int64 a2, int a3, unsigned __int64 a4, __int64 a5, _QWORD *a6)
{
  _QWORD *v6; // r14
  unsigned int v7; // esi
  _QWORD *v11; // r15
  int v12; // rdi^4
  unsigned __int64 v13; // rbp
  int v14; // r12d
  PHYSICAL_ADDRESS v15; // rdx
  __int64 v16; // rax
  unsigned __int16 v17; // bx
  PHYSICAL_ADDRESS v19[4]; // [rsp+20h] [rbp-48h] BYREF

  v6 = a6;
  v7 = 0;
  *a6 = 0LL;
  v11 = (_QWORD *)HvlpAcquireHypercallPage(v19, 1, 0LL, 0LL);
  v12 = 0;
  LODWORD(a6) = 75;
  v13 = a4;
  v11[1] = 0LL;
  v11[2] = 0LL;
  *((_DWORD *)v11 + 4) = a3;
  v14 = a3 & 0x700;
  *v11 = a1;
  do
  {
    if ( v13 >= 0x1FD )
      v13 = 509LL;
    if ( !v14 )
      memmove(v11 + 3, (const void *)(a5 + 8LL * *v6), 8 * v13);
    v15 = v19[3];
    v11[1] = *v6 + a2;
    v12 ^= ((unsigned __int16)v13 ^ (unsigned __int16)v12) & 0xFFF;
    HIDWORD(a6) = v12;
    v16 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(a6, (PHYSICAL_ADDRESS)v15.QuadPart, 0LL);
    v17 = v16;
    if ( (_WORD)v16 )
      break;
    *v6 += WORD2(v16) & 0xFFF;
    v13 = a4 - *v6;
  }
  while ( a4 != *v6 );
  HvlpReleaseHypercallPage((__int64)v19);
  if ( v17 )
    return v17 | 0xC0350000;
  return v7;
}
