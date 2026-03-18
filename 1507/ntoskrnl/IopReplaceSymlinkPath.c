/*
 * XREFs of IopReplaceSymlinkPath @ 0x140675458
 * Callers:
 *     IopSymlinkApplyToOpenedName @ 0x140675754 (IopSymlinkApplyToOpenedName.c)
 * Callees:
 *     _wcsnicmp @ 0x140172500 (_wcsnicmp.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     FsRtlRemoveDotsFromPath @ 0x140584690 (FsRtlRemoveDotsFromPath.c)
 */

NTSTATUS __fastcall IopReplaceSymlinkPath(
        const wchar_t *a1,
        unsigned int a2,
        __int64 a3,
        _WORD *a4,
        unsigned int NewLength,
        __int16 a6,
        __int16 a7)
{
  __int64 v7; // r15
  unsigned __int16 v8; // r13
  unsigned __int16 v11; // bp
  WCHAR *v12; // r14
  wchar_t *v13; // rdi
  NTSTATUS result; // eax
  wchar_t *v15; // rcx
  const void *v16; // rdx
  WCHAR *v17; // rdi
  __int16 v18; // r15
  _WORD *v19; // rdx
  __int64 v20; // rax
  wchar_t *v21; // rcx
  char v22; // r14
  __int16 v23; // r8
  unsigned __int16 v24; // dx
  __int64 v25; // r11
  wchar_t v26; // bx
  wchar_t v27; // r8
  __int64 v28; // rax
  _WORD *Src; // [rsp+60h] [rbp+8h]
  unsigned __int16 v30; // [rsp+68h] [rbp+10h]

  v7 = NewLength;
  v8 = a4[3];
  LOWORD(NewLength) = 0;
  v11 = 0;
  v12 = (WCHAR *)&a1[v7];
  v13 = (wchar_t *)&a1[a2];
  v30 = a4[5];
  if ( a2 < (unsigned int)v7 )
    return -1073741192;
  Src = (_WORD *)((char *)a4 + (unsigned __int16)a4[4] + 20);
  if ( *Src != 92 )
  {
    v15 = (wchar_t *)&a1[a2];
    v16 = *(const void **)(a3 + 96);
    LOWORD(NewLength) = *(_WORD *)(a3 + 88) - v8;
    v11 = NewLength;
    memmove(v15, v16, (unsigned __int16)NewLength);
    v17 = &v13[(unsigned __int64)v11 >> 1];
    if ( v17 != v12 )
    {
      do
      {
        if ( *v17 == 92 )
          break;
        v11 -= 2;
        *v17-- = 0;
        LOWORD(NewLength) = v11;
      }
      while ( v17 != v12 );
      if ( v17 < v12 )
        return -1073741192;
    }
    v13 = v17 + 1;
LABEL_9:
    v18 = a6;
    goto LABEL_10;
  }
  if ( wcsnicmp(a1, L"\\Device\\Mup", 0xBuLL) )
    goto LABEL_9;
  v22 = 0;
  if ( **(_WORD **)(a3 + 96) == 59 )
  {
    v23 = 3;
  }
  else
  {
    v22 = 1;
    v23 = 4;
  }
  v24 = 0;
  if ( (*(_WORD *)(a3 + 88) & 0xFFFE) == 0 )
    return -1073741192;
  while ( 1 )
  {
    v25 = *(_QWORD *)(a3 + 96);
    v26 = *(_WORD *)(v25 + 2LL * v24);
    if ( v26 == 92 )
    {
      --v23;
      if ( v22 && v23 == 2 )
      {
        if ( (unsigned __int16)(v24 + 1) >= (unsigned __int16)(*(_WORD *)(a3 + 88) >> 1)
          || *(_WORD *)(v25 + 2LL * v24 + 2) == 59 )
        {
          goto LABEL_38;
        }
        v23 = 0;
      }
      if ( !v23 )
        break;
    }
LABEL_38:
    *v13 = v26;
    ++v24;
    ++v13;
    if ( v24 >= (unsigned __int16)(*(_WORD *)(a3 + 88) >> 1) )
      return -1073741192;
  }
  if ( v24 < (unsigned __int16)(*(_WORD *)(a3 + 88) >> 1) )
  {
    v27 = *(_WORD *)(*(_QWORD *)(a3 + 96) + 2LL * v24);
    do
    {
      *v13 = v27;
      ++v24;
      ++v13;
      v27 = *(_WORD *)(*(_QWORD *)(a3 + 96) + 2LL * v24);
    }
    while ( v27 != 92 && v24 < (unsigned __int16)(*(_WORD *)(a3 + 88) >> 1) );
  }
  v28 = (unsigned int)v7 + v24;
  v18 = 2 * v24 + a6;
  v12 = (WCHAR *)&a1[v28];
LABEL_10:
  if ( v30 )
  {
    memmove(v13, Src, v30);
    v11 += v30;
    LOWORD(NewLength) = v11;
    v13 += (unsigned __int64)v30 >> 1;
  }
  if ( v8 )
  {
    v19 = (_WORD *)(*(_QWORD *)(a3 + 96) + *(unsigned __int16 *)(a3 + 88) - v8);
    if ( *(v13 - 1) == 92 && *v19 == 92 )
    {
      *v13-- = 0;
      v11 -= 2;
    }
    memmove(v13, v19, v8);
    LOWORD(NewLength) = v8 + v11;
    v13 += (unsigned __int64)v8 >> 1;
  }
  *v13 = 0;
  v20 = -1LL;
  do
    ++v20;
  while ( v12[v20] );
  result = FsRtlRemoveDotsFromPath(v12, 2 * v20, (USHORT *)&NewLength);
  if ( result >= 0 )
  {
    v21 = *(wchar_t **)(a3 + 96);
    *(_WORD *)(a3 + 88) = v18 + NewLength;
    *(_WORD *)(a3 + 90) = a7;
    if ( a1 != v21 )
    {
      if ( v21 )
        ExFreePoolWithTag(v21, 0);
      *(_QWORD *)(a3 + 96) = a1;
    }
    return 0;
  }
  return result;
}
