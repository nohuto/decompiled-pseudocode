/*
 * XREFs of IopReplaceSymlinkPath @ 0x140624B4C
 * Callers:
 *     IopSymlinkApplyToOpenedName @ 0x140624E60 (IopSymlinkApplyToOpenedName.c)
 * Callees:
 *     _wcsnicmp @ 0x14014DE10 (_wcsnicmp.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     FsRtlRemoveDotsFromPath @ 0x14054AC30 (FsRtlRemoveDotsFromPath.c)
 */

NTSTATUS __fastcall IopReplaceSymlinkPath(
        const wchar_t *a1,
        unsigned int a2,
        __int64 a3,
        _WORD *a4,
        unsigned int a5,
        __int16 a6,
        __int16 a7)
{
  unsigned int v7; // r15d
  unsigned __int16 v8; // r13
  USHORT v11; // bp
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
  _WORD *v22; // rax
  char v23; // r11
  __int16 v24; // r8
  unsigned __int16 v25; // dx
  __int64 v26; // r10
  wchar_t v27; // bx
  wchar_t v28; // r8
  __int64 v29; // rax
  _WORD *Src; // [rsp+20h] [rbp-48h]
  unsigned __int16 v31; // [rsp+70h] [rbp+8h]
  USHORT NewLength; // [rsp+78h] [rbp+10h] BYREF
  int v33; // [rsp+88h] [rbp+20h]

  v7 = a5;
  v8 = a4[3];
  NewLength = 0;
  v11 = 0;
  v12 = (WCHAR *)&a1[a5];
  v13 = (wchar_t *)&a1[a2];
  v31 = a4[5];
  if ( a2 < a5 )
    return -1073741192;
  Src = (_WORD *)((char *)a4 + (unsigned __int16)a4[4] + 20);
  if ( *Src != 92 )
  {
    v15 = (wchar_t *)&a1[a2];
    v16 = *(const void **)(a3 + 96);
    NewLength = *(_WORD *)(a3 + 88) - v8;
    v11 = NewLength;
    memmove(v15, v16, NewLength);
    v17 = &v13[(unsigned __int64)v11 >> 1];
    if ( v17 != v12 )
    {
      do
      {
        if ( *v17 == 92 )
          break;
        v11 -= 2;
        *v17-- = 0;
        NewLength = v11;
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
  v22 = *(_WORD **)(a3 + 96);
  v23 = 0;
  v33 = 1;
  if ( *v22 == 59 )
  {
    v24 = 3;
  }
  else
  {
    v23 = 1;
    v24 = 4;
  }
  v25 = 0;
  if ( (*(_WORD *)(a3 + 88) & 0xFFFE) == 0 )
    return -1073741192;
  while ( 1 )
  {
    v26 = *(_QWORD *)(a3 + 96);
    v27 = *(_WORD *)(v26 + 2LL * v25);
    if ( v27 == 92 )
    {
      --v24;
      if ( v23 && v24 == 2 )
      {
        if ( (unsigned __int16)(v33 + v25) >= (unsigned __int16)(*(_WORD *)(a3 + 88) >> 1)
          || *(_WORD *)(v26 + 2LL * (v25 + 1)) == 59 )
        {
          goto LABEL_38;
        }
        v24 = 0;
      }
      if ( !v24 )
        break;
    }
LABEL_38:
    *v13 = v27;
    ++v25;
    ++v13;
    if ( v25 >= (unsigned __int16)(*(_WORD *)(a3 + 88) >> 1) )
      return -1073741192;
  }
  if ( v25 < (unsigned __int16)(*(_WORD *)(a3 + 88) >> 1) )
  {
    v28 = *(_WORD *)(*(_QWORD *)(a3 + 96) + 2LL * v25);
    do
    {
      *v13 = v28;
      ++v25;
      ++v13;
      v28 = *(_WORD *)(*(_QWORD *)(a3 + 96) + 2LL * v25);
    }
    while ( v28 != 92 && v25 < (unsigned __int16)(*(_WORD *)(a3 + 88) >> 1) );
    v7 = a5;
  }
  v29 = v7 + v25;
  v18 = 2 * v25 + a6;
  v12 = (WCHAR *)&a1[v29];
LABEL_10:
  if ( v31 )
  {
    memmove(v13, Src, v31);
    v11 += v31;
    NewLength = v11;
    v13 += (unsigned __int64)v31 >> 1;
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
    NewLength = v8 + v11;
    v13 += (unsigned __int64)v8 >> 1;
  }
  *v13 = 0;
  v20 = -1LL;
  do
    ++v20;
  while ( v12[v20] );
  result = FsRtlRemoveDotsFromPath(v12, 2 * v20, &NewLength);
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
