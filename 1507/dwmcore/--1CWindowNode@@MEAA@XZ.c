/*
 * XREFs of ??1CWindowNode@@MEAA@XZ @ 0x18007D9D0
 * Callers:
 *     ??_GCWindowNode@@MEAAPEAXI@Z @ 0x180079180 (--_GCWindowNode@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$UnRegisterNotifier@VCFlipChain@@@CResource@@QEAAXAEAPEAVCFlipChain@@@Z @ 0x18004868C (--$UnRegisterNotifier@VCFlipChain@@@CResource@@QEAAXAEAPEAVCFlipChain@@@Z.c)
 *     ?ClearMoveData@CDwmMetaRegion@@QEAAXXZ @ 0x18005D7A8 (-ClearMoveData@CDwmMetaRegion@@QEAAXXZ.c)
 *     ?CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z @ 0x180079DA4 (-CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z.c)
 *     ?Detach@CWindowNode@@QEAAJXZ @ 0x18007DC50 (-Detach@CWindowNode@@QEAAJXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??_GCDxAccumulationContext@@QEAAPEAXI@Z @ 0x180104CD4 (--_GCDxAccumulationContext@@QEAAPEAXI@Z.c)
 *     ?RemoveElement@?$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAHPEAVTokenToUpdateListRecord@CWindowNode@@@Z @ 0x180106248 (-RemoveElement@-$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAHPEAVTokenToUpdat.c)
 */

void __fastcall CWindowNode::~CWindowNode(CWindowNode *this)
{
  __int64 v2; // rdi
  unsigned int i; // r15d
  unsigned int j; // esi
  unsigned int v5; // edx
  void (__fastcall ***v6)(_QWORD, __int64); // rdi
  CDxAccumulationContext *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  PVOID v11; // rax
  struct CResource *v12; // rsi
  struct CResource *v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rdi
  PVOID RestartKey; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)this = &CWindowNode::`vftable'{for `CPropertyChangeResource'};
  *((_QWORD *)this + 7) = &CWindowNode::`vftable'{for `IExpressionSource'};
  *((_QWORD *)this + 8) = &CWindowNode::`vftable'{for `IGraphNode'};
  CWindowNode::Detach(this);
  v2 = *((_QWORD *)this + 130);
  if ( v2 )
  {
    v12 = (struct CResource *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 232LL))(*((_QWORD *)this + 130));
    (*(void (__fastcall **)(_QWORD, CWindowNode *))(**((_QWORD **)this + 130) + 248LL))(*((_QWORD *)this + 130), this);
    CResource::UnRegisterNotifierInternal(this, v12);
  }
  for ( i = 0; i < *((_DWORD *)this + 268); ++i )
  {
    v13 = (struct CResource *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 131) + 8LL * i)
                                                                + 232LL))(*(_QWORD *)(*((_QWORD *)this + 131) + 8LL * i));
    (*(void (__fastcall **)(_QWORD, CWindowNode *))(**(_QWORD **)(*((_QWORD *)this + 131) + 8LL * i) + 248LL))(
      *(_QWORD *)(*((_QWORD *)this + 131) + 8LL * i),
      this);
    CResource::UnRegisterNotifierInternal(this, v13);
  }
  *((_DWORD *)this + 268) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 131, 8u);
  CResource::UnRegisterNotifier<CFlipChain>(this, (struct CResource **)this + 147);
  CResource::UnRegisterNotifier<CFlipChain>(this, (struct CResource **)this + 148);
  if ( *((_QWORD *)this + 150) )
  {
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 150));
    *((_QWORD *)this + 150) = 0LL;
  }
  for ( j = 0; j < *((_DWORD *)this + 308); *(_QWORD *)(v14 + 8 * v15) = 0LL )
  {
    v14 = *((_QWORD *)this + 151);
    v15 = j;
    CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v14 + 8LL * j++));
  }
  *((_DWORD *)this + 308) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 151, 8u);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 135));
  *((_QWORD *)this + 135) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 149));
  *((_QWORD *)this + 149) = 0LL;
  *((_DWORD *)this + 310) = 0;
  CWindowNode::CleanUpPendingUpdates(this, 1);
  v6 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 158);
  if ( v6 )
    (**v6)(*((_QWORD *)this + 158), 1LL);
  v7 = (CDxAccumulationContext *)*((_QWORD *)this + 156);
  if ( v7 )
    CDxAccumulationContext::`scalar deleting destructor'(v7, v5);
  if ( *((_BYTE *)this + 1247) )
    --*(_DWORD *)(*((_QWORD *)this + 2) + 208LL);
  v8 = (void *)*((_QWORD *)this + 161);
  if ( v8 )
  {
    DeleteObject(v8);
    *((_QWORD *)this + 161) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 162);
  if ( v9 )
  {
    DeleteObject(v9);
    *((_QWORD *)this + 162) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 163);
  if ( v10 )
  {
    DeleteObject(v10);
    *((_QWORD *)this + 163) = 0LL;
  }
  CDwmMetaRegion::ClearMoveData((CWindowNode *)((char *)this + 1296));
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 151);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 131);
  while ( 1 )
  {
    RestartKey = 0LL;
    v11 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 968), &RestartKey);
    if ( !v11 )
      break;
    CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::RemoveElement(
      (PRTL_GENERIC_TABLE)((char *)this + 968),
      v11);
  }
  CVisual::~CVisual(this);
}
