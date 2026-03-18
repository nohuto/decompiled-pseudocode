/*
 * XREFs of ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x180002C40
 * Callers:
 *     ??1CFilterEffect@@MEAA@XZ @ 0x180002C8C (--1CFilterEffect@@MEAA@XZ.c)
 *     ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x180111E50 (-ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUT.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??_GInternalFilterInput@@QEAAPEAXI@Z @ 0x1801118C0 (--_GInternalFilterInput@@QEAAPEAXI@Z.c)
 */

void __fastcall CFilterEffect::EmptyFilterInputMap(CFilterEffect *this)
{
  __int64 v1; // rbp
  __int64 i; // rdi
  __int64 v4; // rbx
  unsigned int v5; // edx
  InternalFilterInput *v6; // rcx

  v1 = *((int *)this + 34);
  for ( i = 0LL; i < v1; ++i )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 16) + 8 * i);
    CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v4 + 48));
    *(_QWORD *)(v4 + 48) = 0LL;
    v6 = *(InternalFilterInput **)(*((_QWORD *)this + 16) + 8 * i);
    if ( v6 )
      InternalFilterInput::`scalar deleting destructor'(v6, v5);
  }
  CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::RemoveAll((__int64)this + 120);
}
