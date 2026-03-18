/*
 * XREFs of GreFillFontDir @ 0x1C02B36AC
 * Callers:
 *     GreMakeFontDir @ 0x1C02B3AAC (GreMakeFontDir.c)
 * Callees:
 *     ?fwdExternalLeading@IFIOBJ@@QEAAFXZ @ 0x1C0031534 (-fwdExternalLeading@IFIOBJ@@QEAAFXZ.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall GreFillFontDir(__int64 a1, int a2, __int64 a3)
{
  unsigned int CurrentThreadId; // eax
  char v7; // al
  __int16 v8; // ax
  __int16 v9; // ax
  CHAR *v10; // rbx
  const WCHAR *v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r14
  int v15; // r14d
  CHAR *v16; // rbx
  __int64 v17; // rax
  const WCHAR *v18; // r9
  __int64 v19; // rbp
  int v20; // ebp
  CHAR *v21; // rbx
  __int64 v22; // rax
  const WCHAR *v23; // r9
  _QWORD v25[5]; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)a3 = qword_1C0320DC8;
  v25[0] = a1;
  *(_WORD *)(a3 + 8) = word_1C0320DD0;
  strcpy((char *)(a3 + 10), "Windows! Windows! Windows!");
  if ( a2 )
  {
    if ( a2 == 2 )
      CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    else
      CurrentThreadId = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    *(_DWORD *)(a3 + 10) = CurrentThreadId;
  }
  memset((void *)(a3 + 37), 0, 0x21uLL);
  *(_DWORD *)(a3 + 37) = dword_1C0320DC0;
  v7 = 0;
  if ( a2 == 2 )
    v7 = 64;
  *(_BYTE *)(a3 + 70) = v7 | (a2 != 0 ? 0x80 : 0) | 3;
  *(_BYTE *)(a3 + 71) = *(_BYTE *)(a1 + 52);
  *(_BYTE *)(a3 + 72) = *(_BYTE *)(a1 + 56);
  *(_BYTE *)(a3 + 73) = *(_BYTE *)(a1 + 57);
  *(_WORD *)(a3 + 74) = 72;
  *(_WORD *)(a3 + 76) = 72;
  *(_BYTE *)(a3 + 78) = *(_BYTE *)(a1 + 60);
  *(_BYTE *)(a3 + 79) = *(_BYTE *)(a1 + 61);
  *(_WORD *)(a3 + 80) = *(_WORD *)(a1 + 60) + *(_WORD *)(a1 + 62) - *(_WORD *)(a1 + 56);
  *(_BYTE *)(a3 + 82) = IFIOBJ::fwdExternalLeading((IFIOBJ *)v25);
  *(_BYTE *)(a3 + 83) = (unsigned __int16)IFIOBJ::fwdExternalLeading((IFIOBJ *)v25) >> 8;
  *(_BYTE *)(a3 + 84) = -((*(_BYTE *)(a1 + 52) & 1) != 0);
  *(_BYTE *)(a3 + 85) = -((*(_BYTE *)(a1 + 52) & 2) != 0);
  *(_BYTE *)(a3 + 86) = -((*(_BYTE *)(a1 + 52) & 0x10) != 0);
  *(_BYTE *)(a3 + 87) = *(_BYTE *)(a1 + 46);
  *(_BYTE *)(a3 + 88) = *(_BYTE *)(a1 + 47);
  *(_BYTE *)(a3 + 89) = *(_BYTE *)(a1 + 44);
  *(_WORD *)(a3 + 90) = 0;
  *(_WORD *)(a3 + 92) = *(_WORD *)(a1 + 60) + *(_WORD *)(a1 + 62);
  *(_BYTE *)(a3 + 94) = ((*(_DWORD *)(a1 + 48) & 1) != 0 ? 6 : 0) | ((*(_DWORD *)(a1 + 48) & 0x401000) == 0) | *(_BYTE *)(a1 + 45) & 0xF0 | ((*(_DWORD *)(a1 + 48) & 4u) >> 1);
  v8 = *(_WORD *)(a1 + 76);
  if ( !v8 )
    v8 = *(__int16 *)(a1 + 78) / 2;
  *(_BYTE *)(a3 + 95) = v8;
  v9 = *(_WORD *)(a1 + 76);
  if ( !v9 )
    v9 = *(__int16 *)(a1 + 78) / 2;
  *(_BYTE *)(a3 + 96) = HIBYTE(v9);
  *(_BYTE *)(a3 + 97) = *(_BYTE *)(a1 + 78);
  *(_BYTE *)(a3 + 98) = *(_BYTE *)(a1 + 79);
  *(_BYTE *)(a3 + 99) = *(_BYTE *)(a1 + 108);
  *(_BYTE *)(a3 + 100) = *(_BYTE *)(a1 + 109);
  *(_WORD *)(a3 + 101) = 513;
  *(_BYTE *)(a3 + 103) = 0;
  *(_BYTE *)(a3 + 104) = 0;
  *(_BYTE *)(a3 + 105) = 0;
  *(_BYTE *)(a3 + 106) = 0;
  *(_BYTE *)(a3 + 107) = 0;
  *(_BYTE *)(a3 + 108) = 0;
  *(_DWORD *)(a3 + 109) = 118;
  *(_BYTE *)(a3 + 113) = *(_BYTE *)(a1 + 58);
  *(_BYTE *)(a3 + 114) = *(_BYTE *)(a1 + 59);
  *(_BYTE *)(a3 + 115) = *(_BYTE *)(a1 + 36);
  *(_BYTE *)(a3 + 116) = *(_BYTE *)(a1 + 37);
  v10 = (CHAR *)(a3 + 118);
  v11 = (const WCHAR *)(a1 + *(int *)(a1 + 8));
  v12 = -1LL;
  v13 = -1LL;
  do
    ++v13;
  while ( v11[v13] );
  RtlUnicodeToMultiByteN(v10, 0x20u, 0LL, v11, 2 * v13 + 2);
  v10[31] = 0;
  v14 = -1LL;
  do
    ++v14;
  while ( v10[v14] );
  v15 = v14 + 1;
  v16 = &v10[v15];
  v17 = -1LL;
  v18 = (const WCHAR *)(a1 + *(int *)(a1 + 16));
  do
    ++v17;
  while ( v18[v17] );
  RtlUnicodeToMultiByteN(v16, 0x40u, 0LL, v18, 2 * v17 + 2);
  v16[63] = 0;
  v19 = -1LL;
  do
    ++v19;
  while ( v16[v19] );
  v20 = v19 + 1;
  v21 = &v16[v20];
  v22 = -1LL;
  v23 = (const WCHAR *)(a1 + *(int *)(a1 + 12));
  do
    ++v22;
  while ( v23[v22] );
  RtlUnicodeToMultiByteN(v21, 0x20u, 0LL, v23, 2 * v22 + 2);
  v21[31] = 0;
  do
    ++v12;
  while ( v21[v12] );
  return (unsigned int)(v15 + v12 + v20 + 119);
}
