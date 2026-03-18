/*
 * XREFs of W32AttachToSessionAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881___ @ 0x1402A8C38
 * Callers:
 *     _lambda_a817e3c7b16d652902ae8ccf3226f9ac_::operator() @ 0x1402A8C98 (_lambda_a817e3c7b16d652902ae8ccf3226f9ac_--operator().c)
 * Callees:
 *     W32AttachToProcessAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881___ @ 0x140266B68 (W32AttachToProcessAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881___.c)
 */

__int64 __fastcall W32AttachToSessionAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881_(__int64 a1)
{
  unsigned int v1; // ebx
  struct _KPROCESS *ReferencedSessionProcessWithTag; // rax
  struct _KPROCESS *v3; // rdi

  v1 = -1073741811;
  ReferencedSessionProcessWithTag = (struct _KPROCESS *)W32GetReferencedSessionProcessWithTag(a1, 1198682965LL, 0LL);
  v3 = ReferencedSessionProcessWithTag;
  if ( ReferencedSessionProcessWithTag )
  {
    v1 = W32AttachToProcessAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881_(ReferencedSessionProcessWithTag);
    ObfDereferenceObjectWithTag(v3, 0x47727355u);
  }
  return v1;
}
