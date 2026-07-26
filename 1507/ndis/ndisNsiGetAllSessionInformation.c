/*
 * XREFs of ndisNsiGetAllSessionInformation @ 0x1C0099560
 * Callers:
 *     <none>
 * Callees:
 *     NdisGetSessionCompartmentId @ 0x1C000D670 (NdisGetSessionCompartmentId.c)
 */

__int64 __fastcall ndisNsiGetAllSessionInformation(__int64 a1)
{
  unsigned int *v1; // rax
  int v3; // ecx
  int SessionCompartmentId; // eax
  _DWORD *v5; // rcx
  __int64 result; // rax

  v1 = *(unsigned int **)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 32);
  if ( v3 )
  {
    result = 3221225485LL;
    if ( (unsigned int)(v3 - 1) <= 1 )
      return 3221225474LL;
  }
  else
  {
    SessionCompartmentId = NdisGetSessionCompartmentId(*v1);
    v5 = *(_DWORD **)(a1 + 40);
    if ( v5 )
      *v5 = SessionCompartmentId;
    return 0LL;
  }
  return result;
}
