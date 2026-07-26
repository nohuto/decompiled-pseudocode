/*
 * XREFs of ?ndisCmIsThreadCompartmentSandboxed@@YAEPEAU_ETHREAD@@PEAI@Z @ 0x1C0012058
 * Callers:
 *     ?ndisCmSetThreadNetworkNamespace@@YAJPEAU_ETHREAD@@PEAI1@Z @ 0x1C0011F00 (-ndisCmSetThreadNetworkNamespace@@YAJPEAU_ETHREAD@@PEAI1@Z.c)
 *     NdisSetSessionCompartmentId @ 0x1C0060F30 (NdisSetSessionCompartmentId.c)
 *     NdisSetJobObjectCompartmentId @ 0x1C00D17B0 (NdisSetJobObjectCompartmentId.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisCmIsThreadCompartmentSandboxed(struct _ETHREAD *a1, unsigned int *a2)
{
  char v3; // bl
  _QWORD *ThreadProperty; // rax
  __int64 v6; // rcx

  v3 = 0;
  ThreadProperty = PsGetThreadProperty(a1, 0x734E774EuLL, 0);
  if ( ThreadProperty )
  {
    v6 = ThreadProperty[1];
    if ( v6 )
    {
      if ( (*(_DWORD *)(v6 + 1680) & 4) != 0 )
      {
        v3 = 1;
        if ( a2 )
          *a2 = *(_DWORD *)(v6 + 16);
      }
    }
    ObfDereferenceObject(ThreadProperty);
  }
  return v3;
}
