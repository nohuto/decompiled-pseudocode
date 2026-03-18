/*
 * XREFs of ttfdQueryTrueTypeTable2 @ 0x1C00B101C
 * Callers:
 *     ttfdSemQueryTrueTypeTable @ 0x1C00B1100 (ttfdSemQueryTrueTypeTable.c)
 * Callees:
 *     pjTable @ 0x1C00B0FA4 (pjTable.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall ttfdQueryTrueTypeTable2(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        void *a6,
        __int64 *a7,
        int *a8)
{
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // ebx
  const void *v12; // rdx
  int v13; // ebx
  int v15; // [rsp+48h] [rbp+20h] BYREF

  v8 = a4;
  if ( a4 < 0 || (*(_DWORD *)(a1 + 4) & 1) != 0 )
    return 0xFFFFFFFFLL;
  v9 = *(_QWORD *)(a1 + 16 * ((unsigned int)(a2 - 1) + 3LL));
  if ( a3 == 1717793908 )
  {
    if ( !*(_DWORD *)(v9 + 272) )
      return 0xFFFFFFFFLL;
    v10 = *(_QWORD *)(v9 + 64);
    v11 = *(_DWORD *)(v9 + 72);
  }
  else
  {
    if ( a3 )
    {
      v10 = pjTable(a3, v9, (unsigned __int32 *)&v15);
      if ( v10 )
      {
        v11 = v15;
        goto LABEL_7;
      }
      return 0xFFFFFFFFLL;
    }
    v10 = *(_QWORD *)(v9 + 64) + *(unsigned int *)(v9 + 272);
    v11 = *(_DWORD *)(v9 + 72) - *(_DWORD *)(v9 + 272);
  }
LABEL_7:
  if ( a7 )
    *a7 = v10;
  if ( a8 )
    *a8 = v11;
  v12 = (const void *)(v8 + v10);
  v13 = v11 - v8;
  if ( v13 <= 0 )
    return 0xFFFFFFFFLL;
  if ( a6 && a5 )
  {
    if ( v13 > a5 )
      v13 = a5;
    memmove(a6, v12, v13);
  }
  return (unsigned int)v13;
}
