/*
 * XREFs of RIMGetMaxContactCountNoButton @ 0x1C00D4A74
 * Callers:
 *     ?RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z @ 0x1C00D4DE4 (-RIMIDEInjectionIndexToLinkIndex@@YAHPEAURIMDEV@@KPEAGH@Z.c)
 *     rimFindOrCreateActiveContact @ 0x1C00DDA20 (rimFindOrCreateActiveContact.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMGetMaxContactCountNoButton(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 688);
  if ( *(_DWORD *)(a1 + 24) == 7 )
    return (unsigned int)(result - 1);
  return result;
}
