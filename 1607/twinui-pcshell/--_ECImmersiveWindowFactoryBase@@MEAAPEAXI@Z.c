/*
 * XREFs of ??_ECImmersiveWindowFactoryBase@@MEAAPEAXI@Z @ 0x18002B7D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveWindowFactoryBase@@MEAA@XZ @ 0x18002B808 (--1CImmersiveWindowFactoryBase@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18002F080 (--3@YAXPEAX@Z.c)
 */

CImmersiveWindowFactoryBase *__fastcall CImmersiveWindowFactoryBase::`vector deleting destructor'(
        CImmersiveWindowFactoryBase *this,
        char a2)
{
  CImmersiveWindowFactoryBase::~CImmersiveWindowFactoryBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
