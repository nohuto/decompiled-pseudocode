/*
 * XREFs of ?EmptyFilterInputMap@CCompiledEffect@@AEAAXXZ @ 0x18011259C
 * Callers:
 *     ??1CCompiledEffect@@MEAA@XZ @ 0x1801122DC (--1CCompiledEffect@@MEAA@XZ.c)
 *     ?ProcessUpdateInputs@CCompiledEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x180113574 (-ProcessUpdateInputs@CCompiledEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECT_UPDATEI.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??_GInternalFilterInput@@QEAAPEAXI@Z @ 0x1801118C0 (--_GInternalFilterInput@@QEAAPEAXI@Z.c)
 */

void __fastcall CCompiledEffect::EmptyFilterInputMap(CCompiledEffect *this)
{
  __int64 v1; // rbp
  __int64 i; // rdi
  __int64 v4; // rbx
  InternalFilterInput *v5; // rcx

  v1 = *((int *)this + 46);
  for ( i = 0LL; i < v1; ++i )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 22) + 8 * i);
    CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v4 + 48));
    *(_QWORD *)(v4 + 48) = 0LL;
    v5 = *(InternalFilterInput **)(*((_QWORD *)this + 22) + 8 * i);
    if ( v5 )
      InternalFilterInput::`scalar deleting destructor'(v5);
  }
  CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::RemoveAll((__int64)this + 168);
}
