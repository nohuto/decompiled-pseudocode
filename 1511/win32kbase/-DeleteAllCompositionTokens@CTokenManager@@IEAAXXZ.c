/*
 * XREFs of ?DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ @ 0x1C003CAAC
 * Callers:
 *     ?DeleteAllTokensInternal@CTokenManager@@IEAAXXZ @ 0x1C003D340 (-DeleteAllTokensInternal@CTokenManager@@IEAAXXZ.c)
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C003D5EC (--1CTokenManager@@AEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CTokenManager::DeleteAllCompositionTokens(CTokenManager *this)
{
  __int64 **v1; // rbx
  __int64 *v2; // rax
  __int64 v3; // rcx

  v1 = (__int64 **)((char *)this + 200);
  v2 = (__int64 *)*((_QWORD *)this + 25);
  v3 = *v2;
  if ( (__int64 **)v2[1] != v1 || *(__int64 **)(v3 + 8) != v2 )
    __fastfail(3u);
  while ( 1 )
  {
    *v1 = (__int64 *)v3;
    *(_QWORD *)(v3 + 8) = v1;
    if ( v2 == (__int64 *)v1 )
      break;
    ObfDereferenceObject(v2 - 5);
    v2 = *v1;
    v3 = **v1;
    if ( (__int64 **)(*v1)[1] != v1 || *(__int64 **)(v3 + 8) != v2 )
      __fastfail(3u);
  }
}
