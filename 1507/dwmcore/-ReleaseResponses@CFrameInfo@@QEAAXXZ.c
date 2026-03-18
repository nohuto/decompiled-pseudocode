/*
 * XREFs of ?ReleaseResponses@CFrameInfo@@QEAAXXZ @ 0x18005EBBC
 * Callers:
 *     ?Clear@CFrameInfo@@QEAAXXZ @ 0x18005EBFC (-Clear@CFrameInfo@@QEAAXXZ.c)
 *     ??1CFrameInfo@@QEAA@XZ @ 0x1800E1590 (--1CFrameInfo@@QEAA@XZ.c)
 * Callees:
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x180061F8C (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 */

void __fastcall CFrameInfo::ReleaseResponses(CFrameInfo *this)
{
  __int64 i; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 326); i = (unsigned int)(i + 1) )
    CResponseItem::ReleaseResponseRef(*(CResponseItem **)(*((_QWORD *)this + 160) + 8 * i));
  *((_DWORD *)this + 326) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 160, 8u);
}
