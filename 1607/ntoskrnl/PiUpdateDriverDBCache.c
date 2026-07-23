/*
 * XREFs of PiUpdateDriverDBCache @ 0x140515734
 * Callers:
 *     PiIsDriverBlocked @ 0x140515678 (PiIsDriverBlocked.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     RtlLookupElementGenericTableAvl @ 0x1400C19B0 (RtlLookupElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1400C1E74 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x1400C23E4 (RtlInsertElementGenericTableAvl.c)
 *     RtlNumberGenericTableElementsAvl @ 0x14010B6FC (RtlNumberGenericTableElementsAvl.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     wcsrchr @ 0x14014F694 (wcsrchr.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall PiUpdateDriverDBCache(__int64 a1, void *a2, __int64 a3, int a4, __int128 *a5)
{
  _QWORD *result; // rax
  _QWORD *v8; // r14
  wchar_t *v9; // rax
  wchar_t *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int128 v14; // xmm0
  const wchar_t *v15; // rcx
  wchar_t *v16; // rax
  _WORD *v17; // rbx
  _QWORD *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  void *v22; // rbx
  _BYTE Buffer[16]; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int16 v24; // [rsp+30h] [rbp-30h]
  __int16 v25; // [rsp+32h] [rbp-2Eh]
  wchar_t *v26; // [rsp+38h] [rbp-28h]
  int v27; // [rsp+40h] [rbp-20h]
  int v28; // [rsp+44h] [rbp-1Ch]
  __int128 v29; // [rsp+48h] [rbp-18h]

  result = RtlImageNtHeader(a2);
  v8 = result;
  if ( !result )
    return result;
  PiDDBCacheTable.TableContext = (void *)1;
  v9 = wcsrchr(*(const wchar_t **)(a1 + 8), 0x5Cu);
  if ( v9 )
    v10 = v9 + 1;
  else
    v10 = *(wchar_t **)(a1 + 8);
  v11 = -1LL;
  v26 = v10;
  v12 = -1LL;
  do
    ++v12;
  while ( v10[v12] );
  v24 = 2 * v12;
  v25 = 2 * v12;
  v13 = RtlLookupElementGenericTableAvl(&PiDDBCacheTable, Buffer);
  if ( v13 )
  {
    v20 = *v13;
    v21 = (_QWORD *)v13[1];
    if ( *(_QWORD **)(*v13 + 8LL) != v13 || (_QWORD *)*v21 != v13 )
      __fastfail(3u);
    *v21 = v20;
    *(_QWORD *)(v20 + 8) = v21;
    goto LABEL_24;
  }
  if ( RtlNumberGenericTableElementsAvl(&PiDDBCacheTable) >= 0x100 )
  {
    v13 = PiDDBCacheList;
    v19 = *(_QWORD *)PiDDBCacheList;
    if ( *((PVOID **)PiDDBCacheList + 1) != &PiDDBCacheList || *(PVOID *)(v19 + 8) != PiDDBCacheList )
      __fastfail(3u);
    PiDDBCacheList = *(PVOID *)PiDDBCacheList;
    *(_QWORD *)(v19 + 8) = &PiDDBCacheList;
LABEL_24:
    if ( v13 )
    {
      v22 = (void *)v13[3];
      RtlDeleteElementGenericTableAvl(&PiDDBCacheTable, v13);
      ExFreePoolWithTag(v22, 0);
    }
  }
  v14 = *a5;
  v15 = *(const wchar_t **)(a1 + 8);
  v28 = a4;
  v29 = v14;
  v27 = *((_DWORD *)v8 + 2);
  v16 = wcsrchr(v15, 0x5Cu);
  if ( v16 )
    v17 = v16 + 1;
  else
    v17 = *(_WORD **)(a1 + 8);
  do
    ++v11;
  while ( v17[v11] );
  v25 = 2 * v11;
  v24 = 2 * v11;
  result = ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(2 * v11), 0x20207050u);
  v26 = (wchar_t *)result;
  if ( result )
  {
    memmove(result, v17, v24);
    result = RtlInsertElementGenericTableAvl(&PiDDBCacheTable, Buffer, 0x38u, 0LL);
    if ( result )
    {
      v18 = (_QWORD *)qword_140748148;
      if ( *(PVOID **)qword_140748148 != &PiDDBCacheList )
        __fastfail(3u);
      *result = &PiDDBCacheList;
      result[1] = v18;
      *v18 = result;
      qword_140748148 = (__int64)result;
    }
  }
  return result;
}
