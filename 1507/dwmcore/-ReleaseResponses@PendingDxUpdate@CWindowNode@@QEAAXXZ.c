/*
 * XREFs of ?ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ @ 0x180106194
 * Callers:
 *     ?CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z @ 0x180079DA4 (-CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z.c)
 *     ??1PendingDxUpdate@CWindowNode@@QEAA@XZ @ 0x180104CB0 (--1PendingDxUpdate@CWindowNode@@QEAA@XZ.c)
 *     ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x180104E84 (-FlushVistaBltTokens@CWindowNode@@QEAAXXZ.c)
 *     ?ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z @ 0x180105F14 (-ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z.c)
 * Callees:
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x180061F8C (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 */

void __fastcall CWindowNode::PendingDxUpdate::ReleaseResponses(CWindowNode::PendingDxUpdate *this)
{
  __int64 i; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 20); i = (unsigned int)(i + 1) )
    CResponseItem::ReleaseResponseRef(*(CResponseItem **)(*((_QWORD *)this + 7) + 8 * i));
  *((_DWORD *)this + 20) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 7, 8u);
}
