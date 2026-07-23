/*
 * XREFs of AlpcpSetOwnerProcessPort @ 0x140407830
 * Callers:
 *     AlpcpCreateClientPort @ 0x14040735C (AlpcpCreateClientPort.c)
 *     AlpcpCreateConnectionPort @ 0x14049DAA8 (AlpcpCreateConnectionPort.c)
 *     AlpcpAcceptConnectPort @ 0x14049EE08 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 */

LONG_PTR __fastcall AlpcpSetOwnerProcessPort(__int64 a1, _DWORD *a2)
{
  PEPROCESS Process; // rbx
  LONG_PTR result; // rax

  if ( a2 && (*a2 & 0x100000) != 0 )
    Process = PsInitialSystemProcess;
  else
    Process = KeGetCurrentThread()->ApcState.Process;
  result = ObfReferenceObjectWithTag(Process, 0x63706C41u);
  *(_QWORD *)(a1 + 24) = Process;
  return result;
}
