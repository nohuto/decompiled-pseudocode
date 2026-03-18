/*
 * XREFs of SeShutdownServerSilo @ 0x14064D31C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     SepDeReferenceLogonSessionDirect @ 0x1400EF720 (SepDeReferenceLogonSessionDirect.c)
 */

__int64 __fastcall SeShutdownServerSilo(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  void *v5; // rcx
  _QWORD *v6; // rcx

  if ( a2 )
  {
    v4 = *(void **)(a2 + 16);
    if ( v4 )
      ObfDereferenceObject(v4);
    v5 = *(void **)(a2 + 24);
    if ( v5 )
      ObfDereferenceObject(v5);
    if ( *(_QWORD *)a2 )
      SepDeReferenceLogonSessionDirect(*(_QWORD **)a2);
    v6 = *(_QWORD **)(a2 + 8);
    if ( v6 )
      SepDeReferenceLogonSessionDirect(v6);
  }
  return SepDeleteUnreferencedLogonSessionsInSilo(a1);
}
