/*
 * XREFs of ?Initialize@CMeterSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x1800348E0
 * Callers:
 *     ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180017E40 (-Initialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CMeterSoftware::Initialize(CMeterSoftware *this, struct IMMDevice *a2)
{
  return CMeterControlBase::Initialize(this, a2);
}
