/*
 * XREFs of ?ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ @ 0x1800B3708
 * Callers:
 *     ?CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z @ 0x1800268E4 (-CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z.c)
 *     ??1PendingDxUpdate@CWindowNode@@QEAA@XZ @ 0x1800B3754 (--1PendingDxUpdate@CWindowNode@@QEAA@XZ.c)
 *     ?ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z @ 0x1800BA674 (-ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z.c)
 *     ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x180108D64 (-FlushVistaBltTokens@CWindowNode@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x1800AAB2C (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 */

void __fastcall CWindowNode::PendingDxUpdate::ReleaseResponses(CWindowNode::PendingDxUpdate *this)
{
  __int64 i; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 20); i = (unsigned int)(i + 1) )
    CResponseItem::ReleaseResponseRef(*(CResponseItem **)(*((_QWORD *)this + 7) + 8 * i));
  *((_DWORD *)this + 20) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 56, 8u);
}
