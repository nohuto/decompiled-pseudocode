/*
 * XREFs of GetNormalizedObjectPath @ 0x180001F60
 * Callers:
 *     QueryTransientObjectSecurityDescriptor @ 0x180001850 (QueryTransientObjectSecurityDescriptor.c)
 * Callees:
 *     __security_check_cookie @ 0x180008770 (__security_check_cookie.c)
 */

__int64 __fastcall GetNormalizedObjectPath(__int64 a1, _WORD *a2, _QWORD *a3)
{
  __int64 v4; // rcx
  const wchar_t *i; // rax
  unsigned __int64 v7; // rcx
  _WORD *v8; // rax
  __int64 v9; // rdx
  int v10; // r9d
  unsigned int v11; // edx
  __int64 v12; // rax
  SIZE_T v13; // rax
  _WORD *Heap; // r15
  SIZE_T v15; // r10
  int v16; // r14d
  _WORD *v17; // rdi
  SIZE_T v18; // rcx
  _WORD *v19; // rdx
  __int64 v20; // r8
  __int16 v21; // ax
  unsigned __int64 v22; // r10
  unsigned int v23; // ecx
  unsigned int v24; // r8d
  __int16 v25; // r9
  unsigned int v26; // r9d
  int *v27; // rsi
  __int64 v28; // rdx
  __int16 v29; // ax
  unsigned __int64 v30; // r8
  unsigned __int64 v32; // [rsp+20h] [rbp-58h]
  SIZE_T Size; // [rsp+28h] [rbp-50h]
  unsigned __int64 v34; // [rsp+38h] [rbp-40h]
  int v35; // [rsp+40h] [rbp-38h] BYREF
  __int16 v36; // [rsp+44h] [rbp-34h]

  v35 = 3473445;
  v36 = 67;
  v4 = 0x3FFFFFFFLL;
  for ( i = L"%5C%5C.%5CRpc%5C"; *i; ++i )
  {
    if ( !--v4 )
      return 3221225485LL;
  }
  v7 = 2 * (0x3FFFFFFF - v4);
  if ( !a2 )
    return (unsigned int)-1073741811;
  v8 = a2;
  v9 = 0x7FFFFFFFLL;
  v10 = 0;
  while ( *v8 )
  {
    ++v8;
    if ( !--v9 )
    {
      v10 = -1073741811;
      v32 = 0LL;
      v30 = 0LL;
      goto LABEL_11;
    }
  }
  v30 = 0x7FFFFFFF - v9;
  v32 = 0x7FFFFFFF - v9;
LABEL_11:
  if ( v10 < 0 )
    return (unsigned int)v10;
  v11 = 0;
  v12 = 0LL;
  do
  {
    if ( a2[v12] == 92 )
      v13 = v7 + 6;
    else
      v13 = v7 + 2;
    if ( v13 < v7 )
      return 3221225621LL;
    ++v11;
    Size = v13;
    v7 = v13;
    v12 = v11;
  }
  while ( v11 <= v30 );
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Size);
  if ( !Heap )
    return 3221225495LL;
  v15 = Size >> 1;
  v16 = 0;
  if ( (Size >> 1) - 1 > 0x7FFFFFFE )
    v16 = -1073741811;
  if ( v16 < 0 )
  {
    if ( v15 )
      *Heap = 0;
LABEL_51:
    v22 = v34;
    v17 = 0LL;
    goto LABEL_29;
  }
  v17 = Heap;
  if ( v15 )
  {
    v18 = Size >> 1;
    v19 = Heap;
    v16 = 0;
    v20 = 0LL;
    while ( 2147483646 - v15 + v18 )
    {
      v21 = *(_WORD *)((char *)v19 + (char *)L"%5C%5C.%5CRpc%5C" - (char *)Heap);
      if ( !v21 )
        break;
      *v19 = v21;
      ++v20;
      ++v19;
      if ( !--v18 )
      {
        --v19;
        v16 = -2147483643;
        --v20;
        break;
      }
    }
    *v19 = 0;
    v15 -= v20;
    v17 = &Heap[v20];
    if ( (int)(v16 + 0x80000000) >= 0 && v16 != -2147483643 )
      goto LABEL_51;
  }
  else
  {
    v16 = -2147483643;
  }
  v22 = (Size & 1) + 2 * v15;
LABEL_29:
  if ( v16 < 0 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  else
  {
    v23 = 0;
    v24 = 0;
    do
    {
      if ( v24 >= v22 )
        break;
      v25 = a2[v23];
      if ( v25 == 92 )
      {
        v26 = 0;
        v27 = &v35;
        do
        {
          v28 = v24;
          if ( v24 >= v22 )
            break;
          v29 = *(_WORD *)v27;
          ++v24;
          v27 = (int *)((char *)v27 + 2);
          v17[v28] = v29;
          ++v26;
        }
        while ( v26 < 3 );
      }
      else
      {
        v17[v24++] = v25;
      }
      ++v23;
    }
    while ( v23 <= v32 );
    *a3 = Heap;
  }
  return (unsigned int)v16;
}
