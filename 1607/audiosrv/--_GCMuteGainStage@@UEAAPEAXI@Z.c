/*
 * XREFs of ??_GCMuteGainStage@@UEAAPEAXI@Z @ 0x180027A20
 * Callers:
 *     ?Release@CRefCountedObject@@QEAAJXZ @ 0x1800279B0 (-Release@CRefCountedObject@@QEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CMuteGainStage *__fastcall CMuteGainStage::`scalar deleting destructor'(CMuteGainStage *this, char a2)
{
  *(_QWORD *)this = &CRefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
