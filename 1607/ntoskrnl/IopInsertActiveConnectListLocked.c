/*
 * XREFs of IopInsertActiveConnectListLocked @ 0x14053A724
 * Callers:
 *     IopInitializeActiveConnectBlock @ 0x14053A5C0 (IopInitializeActiveConnectBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopInsertActiveConnectListLocked(__int64 a1)
{
  __int64 result; // rax
  __int64 *v2; // rdx

  result = ActiveConnectList;
  if ( (__int64 *)ActiveConnectList == &ActiveConnectList )
    goto LABEL_2;
  while ( *(_DWORD *)(result + 16) <= *(_DWORD *)(a1 + 16) )
  {
    result = *(_QWORD *)result;
    if ( (__int64 *)result == &ActiveConnectList )
      goto LABEL_8;
  }
  v2 = *(__int64 **)(result + 8);
  if ( *v2 != result )
    __fastfail(3u);
  *(_QWORD *)a1 = result;
  *(_QWORD *)(a1 + 8) = v2;
  *v2 = a1;
  *(_QWORD *)(result + 8) = a1;
LABEL_8:
  if ( (__int64 *)result == &ActiveConnectList )
  {
LABEL_2:
    result = qword_1403202C8;
    if ( *(__int64 **)qword_1403202C8 != &ActiveConnectList )
      __fastfail(3u);
    *(_QWORD *)a1 = &ActiveConnectList;
    *(_QWORD *)(a1 + 8) = result;
    *(_QWORD *)result = a1;
    qword_1403202C8 = a1;
  }
  return result;
}
