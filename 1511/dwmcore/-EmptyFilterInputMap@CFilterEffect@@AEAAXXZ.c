/*
 * XREFs of ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x18001A880
 * Callers:
 *     ??1CFilterEffect@@MEAA@XZ @ 0x18001A834 (--1CFilterEffect@@MEAA@XZ.c)
 *     ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x1800F66E0 (-ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUT.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008596C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??_GInternalFilterInput@@QEAAPEAXI@Z @ 0x18012C788 (--_GInternalFilterInput@@QEAAPEAXI@Z.c)
 */

void __fastcall CFilterEffect::EmptyFilterInputMap(CFilterEffect *this)
{
  __int64 v1; // rsi
  __int64 i; // rbx
  unsigned int v4; // edx
  InternalFilterInput *v5; // rcx

  v1 = *((int *)this + 38);
  for ( i = 0LL; i < v1; ++i )
  {
    CResource::UnRegisterNotifierInternal(
      this,
      *(struct CResource **)(*(_QWORD *)(*((_QWORD *)this + 18) + 8 * i) + 24LL));
    v5 = *(InternalFilterInput **)(*((_QWORD *)this + 18) + 8 * i);
    if ( v5 )
      InternalFilterInput::`scalar deleting destructor'(v5, v4);
  }
  CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::RemoveAll((char *)this + 136);
}
