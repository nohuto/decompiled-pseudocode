/*
 * XREFs of ndisNsiSetThreadInformation @ 0x1C00979A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCmSetThreadNetworkNamespace@@YAJPEAU_ETHREAD@@PEAI1@Z @ 0x1C0011F00 (-ndisCmSetThreadNetworkNamespace@@YAJPEAU_ETHREAD@@PEAI1@Z.c)
 */

__int64 __fastcall ndisNsiSetThreadInformation(__int64 a1)
{
  int v2; // ecx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int *v4; // r8
  unsigned int *v5; // rdx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_DWORD *)(a1 + 60) )
    return 3221225474LL;
  if ( !*(_DWORD *)(a1 + 56) )
  {
    v2 = *(_DWORD *)(a1 + 52);
    if ( !v2 )
    {
      CurrentThread = KeGetCurrentThread();
      v4 = 0LL;
      v8 = **(_DWORD **)(a1 + 40);
      v5 = (unsigned int *)&v8;
      return ndisCmSetThreadNetworkNamespace(CurrentThread, v5, v4);
    }
    if ( v2 == 4 )
    {
      CurrentThread = KeGetCurrentThread();
      v4 = &v7;
      v7 = **(_DWORD **)(a1 + 40);
      v5 = 0LL;
      return ndisCmSetThreadNetworkNamespace(CurrentThread, v5, v4);
    }
  }
  return 3221225485LL;
}
