/*
 * XREFs of ?Uninitialize@CDrawingContext@@IEAAXXZ @ 0x18006BD90
 * Callers:
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18006BF80 (--1CDrawingContext@@MEAA@XZ.c)
 * Callees:
 *     ??_GCContentBounder@@QEAAPEAXI@Z @ 0x18004AED0 (--_GCContentBounder@@QEAAPEAXI@Z.c)
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x18005C138 (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
 *     ??_GCVisualTreeIterator@@QEAAPEAXI@Z @ 0x18005FBE4 (--_GCVisualTreeIterator@@QEAAPEAXI@Z.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18006BB68 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawingContext::Uninitialize(CMILRefCountBase **this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  CMILRefCountBase *v4; // rcx
  CMILRefCountBase *v5; // rcx
  CMILRefCountBase *v6; // rcx
  void (*v7)(void); // rax
  CMILRefCountBase *v8; // rcx
  CMILRefCountBase *v9; // rcx
  CVisualTreeIterator *v10; // rcx
  CContentBounder *v11; // rcx
  COcclusionContext *v12; // rcx

  CDrawingContext::PopAllStacks((CDrawingContext *)this);
  v4 = this[57];
  if ( v4 )
  {
    (*(void (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v4 + 16LL))(v4);
    this[57] = 0LL;
  }
  v5 = this[407];
  if ( v5 )
  {
    (*(void (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v5 + 16LL))(v5);
    this[407] = 0LL;
  }
  v6 = this[382];
  if ( v6 )
  {
    v7 = *(void (**)(void))(*(_QWORD *)v6 + 8LL);
    if ( (char *)v7 == (char *)CMILRefCountBase::Release )
      CMILRefCountBase::Release(v6);
    else
      v7();
    this[382] = 0LL;
  }
  v8 = this[54];
  if ( v8 )
  {
    (*(void (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v8 + 16LL))(v8);
    this[54] = 0LL;
  }
  v9 = this[55];
  if ( v9 )
  {
    (*(void (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v9 + 16LL))(v9);
    this[55] = 0LL;
  }
  v10 = this[383];
  if ( v10 )
  {
    CVisualTreeIterator::`scalar deleting destructor'(v10);
    this[383] = 0LL;
  }
  v11 = this[476];
  if ( v11 )
  {
    CContentBounder::`scalar deleting destructor'(v11);
    this[476] = 0LL;
  }
  v12 = this[809];
  if ( v12 )
  {
    COcclusionContext::`scalar deleting destructor'(v12, v2, v3);
    this[809] = 0LL;
  }
  this[808] = 0LL;
}
