/*
 * XREFs of ?Release@CInteraction@@UEAAKXZ @ 0x18005A170
 * Callers:
 *     ?Release@CInteraction@@W7EAAKXZ @ 0x18009AA70 (-Release@CInteraction@@W7EAAKXZ.c)
 * Callees:
 *     ?GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z @ 0x18005AE30 (-GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z.c)
 */

unsigned int __fastcall CInteraction::Release(CInteraction *this)
{
  struct CInteraction::HANDLE_ENTRY *Entry; // rax

  if ( *((_DWORD *)this + 4) == 1 )
  {
    AcquireSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
    Entry = CInteraction::GetEntry(*((_DWORD *)this + 152));
    if ( Entry )
      *((_QWORD *)Entry + 1) = 0LL;
    ReleaseSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  }
  return CMILCOMBase::InternalRelease((CInteraction *)((char *)this + 8));
}
