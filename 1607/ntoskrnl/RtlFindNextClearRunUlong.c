/*
 * XREFs of RtlFindNextClearRunUlong @ 0x1400B4864
 * Callers:
 *     MiRescanPageFileBitmapPortion @ 0x1400B41F8 (MiRescanPageFileBitmapPortion.c)
 *     MiFindFreePageFileSpaceForward @ 0x14010F674 (MiFindFreePageFileSpaceForward.c)
 *     MiRescanPagefileBitmaps @ 0x140143114 (MiRescanPagefileBitmaps.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindNextClearRunUlong(unsigned int *a1, unsigned int a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v6; // edi
  __int64 v7; // r12
  _DWORD *v8; // rsi
  _DWORD *v9; // r9
  unsigned int v10; // r8d
  unsigned int v11; // r10d
  int v12; // r11d
  char v13; // dl
  bool v14; // zf
  __int64 v15; // rcx
  unsigned int v16; // r8d
  __int64 v17; // r14
  int v18; // ecx
  char v19; // bp
  char v20; // dl
  __int64 v21; // rcx
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
  v11 = *v9 | dword_14026D390[a2 & 0x1F];
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
      v13 = -1;
      v14 = !_BitScanReverse64((unsigned __int64 *)&v15, v11);
      if ( !v14 )
        v13 = v15;
      if ( v13 != 31 )
      {
        v12 += v13 + 1;
        break;
      }
LABEL_8:
      if ( v9 >= v8 )
        goto LABEL_31;
      v11 = *++v9;
    }
    v16 = 0;
    v17 = v12 & 0x1F;
    v18 = v11 & ~dword_14026D390[v17];
    v11 = v18;
    if ( v9 > v8 )
    {
LABEL_21:
      v19 = 1;
      if ( (v6 & 0x1F) == 0 )
        goto LABEL_28;
      if ( v16 )
        v11 = *++v9;
      v11 |= ~dword_14026D390[v6 & 0x1F];
LABEL_25:
      v20 = -1;
      v14 = !_BitScanForward64((unsigned __int64 *)&v21, v11);
      if ( !v14 )
        v20 = v21;
      v16 += v20;
      goto LABEL_28;
    }
    v19 = 0;
    if ( v18 )
      goto LABEL_25;
    while ( 1 )
    {
      v16 += 32;
      if ( v16 >= a4 && v16 - (unsigned int)v17 >= a4 )
        break;
      if ( v9 == v8 )
        goto LABEL_21;
      v11 = *++v9;
      if ( *v9 )
        goto LABEL_25;
    }
LABEL_28:
    v10 = v16 - v17;
    if ( v10 > a4 )
      v10 = a4;
    if ( v10 >= 0x20 )
      break;
    v10 = 0;
  }
  while ( !v19 );
LABEL_31:
  if ( v10 > a4 )
    v10 = a4;
  result = v10;
  *a5 = v12;
  return result;
}
