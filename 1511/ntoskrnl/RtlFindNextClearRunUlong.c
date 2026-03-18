/*
 * XREFs of RtlFindNextClearRunUlong @ 0x1400F5360
 * Callers:
 *     MiRescanPageFileBitmapPortion @ 0x1400F4D64 (MiRescanPageFileBitmapPortion.c)
 *     MiRescanPagefileBitmaps @ 0x140139FC0 (MiRescanPagefileBitmaps.c)
 *     MiFindFreePageFileSpaceForward @ 0x1401DC854 (MiFindFreePageFileSpaceForward.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindNextClearRunUlong(unsigned int *a1, unsigned int a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v6; // esi
  __int64 v7; // r13
  _DWORD *v8; // rbp
  _DWORD *v9; // r10
  unsigned int v10; // r9d
  unsigned int v11; // r11d
  int v12; // ebx
  bool v13; // zf
  __int64 v14; // rdx
  char v15; // r8
  unsigned int v16; // r9d
  __int64 v17; // r15
  int v18; // ecx
  char v19; // r14
  __int64 v20; // rdx
  char v21; // r8
  __int64 result; // rax

  if ( a4 < 0x20 )
    return 0LL;
  v6 = *a1;
  if ( *a1 < 0x20 || a2 > v6 - 32 )
    return 0LL;
  v7 = *((_QWORD *)a1 + 1);
  v8 = (_DWORD *)(v7 + 4 * ((unsigned __int64)(v6 - 1) >> 5));
  v9 = (_DWORD *)(v7 + 4 * ((unsigned __int64)a2 >> 5));
  if ( (v6 & 0x1F) != 0 )
    --v8;
  v10 = 0;
  v11 = *v9 | dword_1402452F0[a2 & 0x1F];
  v12 = 0;
  do
  {
    while ( 1 )
    {
      if ( v11 == -1 )
        goto LABEL_8;
      v12 = 32 * (((__int64)v9 - v7) >> 2);
      if ( !v11 )
        break;
      v13 = !_BitScanReverse64((unsigned __int64 *)&v14, v11);
      v15 = -1;
      if ( !v13 )
        v15 = v14;
      if ( v15 != 31 )
      {
        v12 += v15 + 1;
        break;
      }
LABEL_8:
      if ( v9 >= v8 )
        goto LABEL_27;
      v11 = *++v9;
    }
    v16 = 0;
    v17 = v12 & 0x1F;
    v18 = v11 & ~dword_1402452F0[v17];
    v11 = v18;
    if ( v9 > v8 )
    {
LABEL_30:
      v19 = 1;
      if ( (v6 & 0x1F) == 0 )
        goto LABEL_23;
      if ( v16 )
        v11 = *++v9;
      v11 |= ~dword_1402452F0[v6 & 0x1F];
LABEL_20:
      v13 = !_BitScanForward64((unsigned __int64 *)&v20, v11);
      v21 = -1;
      if ( !v13 )
        v21 = v20;
      v16 += v21;
      goto LABEL_23;
    }
    v19 = 0;
    if ( v18 )
      goto LABEL_20;
    while ( 1 )
    {
      v16 += 32;
      if ( v16 >= a4 && v16 - (unsigned int)v17 >= a4 )
        break;
      if ( v9 == v8 )
        goto LABEL_30;
      v11 = *++v9;
      if ( *v9 )
        goto LABEL_20;
    }
LABEL_23:
    v10 = v16 - v17;
    if ( v10 > a4 )
      v10 = a4;
    if ( v10 >= 0x20 )
      break;
    v10 = 0;
  }
  while ( !v19 );
LABEL_27:
  if ( v10 > a4 )
    v10 = a4;
  result = v10;
  *a5 = v12;
  return result;
}
