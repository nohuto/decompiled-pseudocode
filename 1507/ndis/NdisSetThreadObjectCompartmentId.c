/*
 * XREFs of NdisSetThreadObjectCompartmentId @ 0x1C00D8210
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCmSetThreadNetworkNamespace@@YAJPEAU_ETHREAD@@PEAI1@Z @ 0x1C000E7B4 (-ndisCmSetThreadNetworkNamespace@@YAJPEAU_ETHREAD@@PEAI1@Z.c)
 */

__int64 __fastcall NdisSetThreadObjectCompartmentId(struct _KTHREAD *a1, unsigned int a2)
{
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return ndisCmSetThreadNetworkNamespace(a1, &v3, 0LL);
}
