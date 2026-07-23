/*
 * XREFs of VfQueryDispatchTable @ 0x1402227F8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall VfQueryDispatchTable(int a1, unsigned int a2)
{
  __int64 v2; // r8
  int v4; // ecx
  void *v5; // rax

  v2 = 0LL;
  if ( !ViVerifierDriverAddedThunkListHead )
    return 0LL;
  if ( !a1 )
  {
    v5 = &VfWdmDispatchTable;
    if ( a2 > dword_1402F4A34 )
      return 0LL;
    return v5;
  }
  v4 = a1 - 2;
  if ( v4 )
  {
    if ( v4 == 1 && a2 <= dword_1402F4A14 )
      return &VfXdvDispatchTable;
    return (void *)v2;
  }
  if ( ViFnXdvQueryDispatchTable )
    return (void *)ViFnXdvQueryDispatchTable(2LL);
  return (void *)v2;
}
