/*
 * XREFs of ??1CWindowNode@@MEAA@XZ @ 0x180029EE0
 * Callers:
 *     ??_GCWindowNode@@MEAAPEAXI@Z @ 0x180025930 (--_GCWindowNode@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Detach@CWindowNode@@QEAAJXZ @ 0x1800268A8 (-Detach@CWindowNode@@QEAAJXZ.c)
 *     ?CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z @ 0x1800268E4 (-CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ClearMoveData@CDwmMetaRegion@@QEAAXXZ @ 0x1800B19EC (-ClearMoveData@CDwmMetaRegion@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??_GCDxAccumulationContext@@QEAAPEAXI@Z @ 0x18013FE54 (--_GCDxAccumulationContext@@QEAAPEAXI@Z.c)
 *     ?RemoveElement@?$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAHPEAVTokenToUpdateListRecord@CWindowNode@@@Z @ 0x1801406D8 (-RemoveElement@-$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAHPEAVTokenToUpdat.c)
 */

void __fastcall CWindowNode::~CWindowNode(CWindowNode *this)
{
  __int64 v2; // rcx
  unsigned int i; // ebp
  __int64 v4; // rdx
  struct CResource *v5; // rdx
  __int64 v6; // rdx
  struct CResource *v7; // rdx
  unsigned int j; // ebp
  unsigned int v9; // edx
  void (__fastcall ***v10)(_QWORD, __int64); // rcx
  CDxAccumulationContext *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  PVOID v19; // rax
  __int64 v20; // rcx
  struct CResource *v21; // rbx
  __int64 v22; // rcx
  struct CResource *v23; // rbx
  __int64 v24; // rbx
  __int64 v25; // rdi
  PVOID RestartKey; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &CWindowNode::`vftable';
  CWindowNode::Detach(this);
  v2 = *((_QWORD *)this + 100);
  if ( v2 )
  {
    v23 = (struct CResource *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2);
    (*(void (__fastcall **)(_QWORD, CWindowNode *))(**((_QWORD **)this + 100) + 160LL))(*((_QWORD *)this + 100), this);
    CResource::UnRegisterNotifierInternal(this, v23);
  }
  for ( i = 0; i < *((_DWORD *)this + 208); ++i )
  {
    v20 = *(_QWORD *)(*((_QWORD *)this + 101) + 8LL * i);
    v21 = (struct CResource *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 144LL))(v20);
    v22 = *(_QWORD *)(*((_QWORD *)this + 101) + 8LL * i);
    (*(void (__fastcall **)(__int64, CWindowNode *))(*(_QWORD *)v22 + 160LL))(v22, this);
    CResource::UnRegisterNotifierInternal(this, v21);
  }
  *((_DWORD *)this + 208) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 808, 8LL);
  v4 = *((_QWORD *)this + 117);
  if ( v4 )
    v5 = (struct CResource *)(v4 + 16);
  else
    v5 = 0LL;
  CResource::UnRegisterNotifierInternal(this, v5);
  *((_QWORD *)this + 117) = 0LL;
  v6 = *((_QWORD *)this + 118);
  if ( v6 )
    v7 = (struct CResource *)(v6 + 16);
  else
    v7 = 0LL;
  CResource::UnRegisterNotifierInternal(this, v7);
  *((_QWORD *)this + 118) = 0LL;
  if ( *((_QWORD *)this + 120) )
  {
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 120));
    *((_QWORD *)this + 120) = 0LL;
  }
  for ( j = 0; j < *((_DWORD *)this + 248); *(_QWORD *)(v24 + 8 * v25) = 0LL )
  {
    v24 = *((_QWORD *)this + 121);
    v25 = j;
    CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v24 + 8LL * j++));
  }
  *((_DWORD *)this + 248) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 968, 8LL);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 105));
  *((_QWORD *)this + 105) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 119));
  *((_QWORD *)this + 119) = 0LL;
  *((_DWORD *)this + 250) = 0;
  CWindowNode::CleanUpPendingUpdates(this, 1);
  v10 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 128);
  if ( v10 )
    (**v10)(v10, 1LL);
  v11 = (CDxAccumulationContext *)*((_QWORD *)this + 126);
  if ( v11 )
    CDxAccumulationContext::`scalar deleting destructor'(v11, v9);
  if ( *((_BYTE *)this + 1007) )
    --*(_DWORD *)(*((_QWORD *)this + 2) + 208LL);
  v12 = (void *)*((_QWORD *)this + 131);
  if ( v12 )
  {
    DeleteObject(v12);
    *((_QWORD *)this + 131) = 0LL;
  }
  v13 = (void *)*((_QWORD *)this + 132);
  if ( v13 )
  {
    DeleteObject(v13);
    *((_QWORD *)this + 132) = 0LL;
  }
  v14 = (void *)*((_QWORD *)this + 133);
  if ( v14 )
  {
    DeleteObject(v14);
    *((_QWORD *)this + 133) = 0LL;
  }
  CDwmMetaRegion::ClearMoveData((CWindowNode *)((char *)this + 1056));
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 968, v15, v16);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 808, v17, v18);
  while ( 1 )
  {
    RestartKey = 0LL;
    v19 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 728), &RestartKey);
    if ( !v19 )
      break;
    CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::RemoveElement(
      (PRTL_GENERIC_TABLE)((char *)this + 728),
      v19);
  }
  CVisual::~CVisual(this);
}
