/*
 * XREFs of ??_GCConnectionInstance@@QEAAPEAXI@Z @ 0x140026124
 * Callers:
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x140006800 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140018AB8 (--3@YAXPEAX@Z.c)
 *     ??1CConnectionInstance@@QEAA@XZ @ 0x14002614C (--1CConnectionInstance@@QEAA@XZ.c)
 */

CConnectionInstance *__fastcall CConnectionInstance::`scalar deleting destructor'(CConnectionInstance *this)
{
  CConnectionInstance::~CConnectionInstance(this);
  operator delete(this);
  return this;
}
