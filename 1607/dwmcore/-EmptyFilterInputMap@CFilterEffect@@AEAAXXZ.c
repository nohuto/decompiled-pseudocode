/*
 * XREFs of ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x180014DF4
 * Callers:
 *     ??1CFilterEffect@@MEAA@XZ @ 0x180014E3C (--1CFilterEffect@@MEAA@XZ.c)
 *     ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x180108A44 (-ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUT.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??_GInternalFilterInput@@QEAAPEAXI@Z @ 0x18014C668 (--_GInternalFilterInput@@QEAAPEAXI@Z.c)
 */

void __fastcall CFilterEffect::EmptyFilterInputMap(CFilterEffect *this)
{
  __int64 v1; // rsi
  __int64 i; // rbx
  unsigned int v4; // edx
  InternalFilterInput *v5; // rcx

  v1 = *((int *)this + 58);
  for ( i = 0LL; i < v1; ++i )
  {
    CResource::UnRegisterNotifierInternal(
      this,
      *(struct CResource **)(*(_QWORD *)(*((_QWORD *)this + 28) + 8 * i) + 24LL));
    v5 = *(InternalFilterInput **)(*((_QWORD *)this + 28) + 8 * i);
    if ( v5 )
      InternalFilterInput::`scalar deleting destructor'(v5, v4);
  }
  CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::RemoveAll((char *)this + 216);
}
