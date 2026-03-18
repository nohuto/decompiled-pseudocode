/*
 * XREFs of ??_GFxDpc@@UEAAPEAXI@Z @ 0x1C006CFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxDpc@@UEAA@XZ @ 0x1C006CF2C (--1FxDpc@@UEAA@XZ.c)
 */

FxDpc *__fastcall FxDpc::`scalar deleting destructor'(FxDpc *this, unsigned int a2, unsigned int a3)
{
  char v3; // bl
  FxDpc *v5; // rcx

  v3 = a2;
  FxDpc::~FxDpc(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    v5 = (FxDpc *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v5 = this;
    FxPoolFree(v5);
  }
  return this;
}
