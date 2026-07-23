/*
 * XREFs of CmpGetVirtualizationIDFromFullVirtualPath @ 0x1403E18A0
 * Callers:
 *     CmpGetCmHiveFromVirtualPath @ 0x1403E176C (CmpGetCmHiveFromVirtualPath.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406000D4 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetVirtualizationIDFromFullVirtualPath(_OWORD *a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // r8
  int v3; // r9d
  _WORD *v4; // rax
  __int16 v5; // ax
  __int64 v6; // r10
  unsigned __int16 v7; // ax
  unsigned __int64 v8; // r8
  int v9; // r9d
  unsigned int v10; // ecx
  unsigned __int64 v11; // rax

  v2 = 0;
  *(_OWORD *)a2 = *a1;
  v3 = 3;
  while ( 1 )
  {
    v4 = (_WORD *)*((_QWORD *)a2 + 1);
    if ( *v4 == 92 && !--v3 )
      break;
    ++v2;
    *((_QWORD *)a2 + 1) = v4 + 1;
    if ( 2 * (unsigned __int64)v2 >= *a2 )
      return 3221225485LL;
  }
  v5 = *a2;
  *(_DWORD *)a2 = 0;
  *((_QWORD *)a2 + 1) += 2LL;
  v6 = *((_QWORD *)a2 + 1);
  v7 = v5 - 2 * v2 - 2;
  v8 = v7;
  v9 = 0;
  v10 = -1073741811;
  if ( v7 )
  {
    v11 = 0LL;
    while ( *(_WORD *)(v11 + v6) != 92 )
    {
      *a2 += 2;
      v11 = 2LL * (unsigned int)++v9;
      if ( v11 >= v8 )
        return v10;
    }
    return 0;
  }
  return v10;
}
