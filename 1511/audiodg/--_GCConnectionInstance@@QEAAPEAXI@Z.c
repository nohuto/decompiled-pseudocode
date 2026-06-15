/*
 * XREFs of ??_GCConnectionInstance@@QEAAPEAXI@Z @ 0x1400262AC
 * Callers:
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x14000E1C0 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400189FC (--3@YAXPEAX@Z.c)
 *     ??1CConnectionInstance@@QEAA@XZ @ 0x1400262D4 (--1CConnectionInstance@@QEAA@XZ.c)
 */

CConnectionInstance *__fastcall CConnectionInstance::`scalar deleting destructor'(CConnectionInstance *this)
{
  CConnectionInstance::~CConnectionInstance(this);
  operator delete(this);
  return this;
}
