/*
 * XREFs of ??_GFxPagedObject@@UEAAPEAXI@Z @ 0x1C0080720
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxPagedObject@@UEAA@XZ @ 0x1C006263C (--1FxPagedObject@@UEAA@XZ.c)
 */

FxPagedObject *__fastcall FxPagedObject::`scalar deleting destructor'(
        FxPagedObject *this,
        unsigned int a2,
        unsigned int a3)
{
  char v3; // bl
  FxPagedObject *v5; // rcx

  v3 = a2;
  FxPagedObject::~FxPagedObject(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    v5 = (FxPagedObject *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v5 = this;
    FxPoolFree(v5);
  }
  return this;
}
