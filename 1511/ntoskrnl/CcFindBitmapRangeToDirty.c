/*
 * XREFs of CcFindBitmapRangeToDirty @ 0x1400B3278
 * Callers:
 *     CcSetDirtyInMask @ 0x1400B2DE0 (CcSetDirtyInMask.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 *__fastcall CcFindBitmapRangeToDirty(__int64 a1, __int64 a2, void **a3)
{
  __int64 *v4; // rdi
  __int64 *v5; // rdx
  __int64 *result; // rax
  __int64 *v8; // rbx
  signed __int64 v9; // rsi
  signed __int64 v10; // rcx
  __int64 *v11; // rcx
  __int64 **v12; // rax
  __int64 v13; // rax
  bool v14; // zf
  void *v15; // rbx

  v4 = 0LL;
  v5 = (__int64 *)(a1 + 16);
  result = *(__int64 **)(a1 + 16);
  v8 = (__int64 *)(a1 + 16);
  v9 = a2 & 0xFFFFFFFFFFFFE000uLL;
  while ( 1 )
  {
    v10 = result[2];
    if ( v9 == v10 )
      return result;
    if ( *((_DWORD *)result + 8) || v4 )
    {
      if ( v9 > v10 )
        v8 = result;
    }
    else
    {
      v4 = result;
    }
    result = (__int64 *)*result;
    if ( result == v5 )
    {
      if ( v4 )
      {
LABEL_10:
        v11 = (__int64 *)*v4;
        v12 = (__int64 **)v4[1];
        if ( *(__int64 **)(*v4 + 8) != v4 || *v12 != v4 )
          __fastfail(3u);
        *v12 = v11;
        v11[1] = (__int64)v12;
      }
      else
      {
        result = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x72426343u);
        v4 = result;
        if ( !result )
          return result;
        memset(result, 0, 0x30uLL);
      }
      v13 = *v8;
      *v4 = *v8;
      v4[1] = (__int64)v8;
      if ( *(__int64 **)(v13 + 8) != v8 )
        __fastfail(3u);
      *(_QWORD *)(v13 + 8) = v4;
      *v8 = (__int64)v4;
      *((_DWORD *)v4 + 6) = -1;
      *((_DWORD *)v4 + 7) = 0;
      v14 = v4[5] == 0;
      v4[2] = v9;
      if ( v14 )
      {
        v15 = *a3;
        memset(*a3, 0, 0x400uLL);
        *a3 = 0LL;
        v4[5] = (__int64)v15;
      }
      return v4;
    }
    if ( v9 < result[2] && v4 )
      goto LABEL_10;
  }
}
