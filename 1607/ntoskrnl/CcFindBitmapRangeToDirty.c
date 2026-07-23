/*
 * XREFs of CcFindBitmapRangeToDirty @ 0x14006F8C4
 * Callers:
 *     CcSetDirtyInMask @ 0x14006F1E0 (CcSetDirtyInMask.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall CcFindBitmapRangeToDirty(__int64 a1, __int64 a2, void **a3)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rdx
  _QWORD *result; // rax
  _QWORD *v8; // rbx
  signed __int64 v9; // rsi
  signed __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rax
  bool v14; // zf
  void *v15; // rbx

  v4 = 0LL;
  v5 = (_QWORD *)(a1 + 16);
  result = *(_QWORD **)(a1 + 16);
  v8 = (_QWORD *)(a1 + 16);
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
    result = (_QWORD *)*result;
    if ( result == v5 )
    {
      if ( v4 )
      {
LABEL_9:
        v11 = *v4;
        v12 = (_QWORD *)v4[1];
        if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v12 != v4 )
          __fastfail(3u);
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
      }
      else
      {
        result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x72426343u);
        v4 = result;
        if ( !result )
          return result;
        memset(result, 0, 0x30uLL);
      }
      v13 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 )
        __fastfail(3u);
      *v4 = v13;
      v4[1] = v8;
      *(_QWORD *)(v13 + 8) = v4;
      *v8 = v4;
      *((_DWORD *)v4 + 6) = -1;
      *((_DWORD *)v4 + 7) = 0;
      v14 = v4[5] == 0LL;
      v4[2] = v9;
      if ( v14 )
      {
        v15 = *a3;
        memset(*a3, 0, 0x400uLL);
        *a3 = 0LL;
        v4[5] = v15;
      }
      return v4;
    }
    if ( v9 < result[2] && v4 )
      goto LABEL_9;
  }
}
