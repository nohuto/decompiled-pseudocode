/*
 * XREFs of ?ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ @ 0x180069228
 * Callers:
 *     ?CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z @ 0x18005F010 (-CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z.c)
 *     ??1PendingDxUpdate@CWindowNode@@QEAA@XZ @ 0x180069274 (--1PendingDxUpdate@CWindowNode@@QEAA@XZ.c)
 *     ?ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z @ 0x1800B6648 (-ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z.c)
 *     ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x1800F716C (-FlushVistaBltTokens@CWindowNode@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x1800A5448 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 */

void __fastcall CWindowNode::PendingDxUpdate::ReleaseResponses(CWindowNode::PendingDxUpdate *this)
{
  __int64 i; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 20); i = (unsigned int)(i + 1) )
    CResponseItem::ReleaseResponseRef(*(CResponseItem **)(*((_QWORD *)this + 7) + 8 * i));
  *((_DWORD *)this + 20) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 56, 8LL);
}
