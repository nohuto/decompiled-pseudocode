/*
 * XREFs of ??1CWindowNode@@MEAA@XZ @ 0x1800640B0
 * Callers:
 *     ??_GCWindowNode@@MEAAPEAXI@Z @ 0x18005DF80 (--_GCWindowNode@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Detach@CWindowNode@@QEAAJXZ @ 0x18005E8E8 (-Detach@CWindowNode@@QEAAJXZ.c)
 *     ?CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z @ 0x18005F010 (-CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z.c)
 *     ?ClearMoveData@CDwmMetaRegion@@QEAAXXZ @ 0x1800649E0 (-ClearMoveData@CDwmMetaRegion@@QEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008596C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$UnRegisterNotifier@VCFlipChain@@@CResource@@QEAAXAEAPEAVCFlipChain@@@Z @ 0x180085C1C (--$UnRegisterNotifier@VCFlipChain@@@CResource@@QEAAXAEAPEAVCFlipChain@@@Z.c)
 *     ??_GCDxAccumulationContext@@QEAAPEAXI@Z @ 0x18012357C (--_GCDxAccumulationContext@@QEAAPEAXI@Z.c)
 *     ?RemoveElement@?$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAHPEAVTokenToUpdateListRecord@CWindowNode@@@Z @ 0x180123DE0 (-RemoveElement@-$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAHPEAVTokenToUpdat.c)
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

  *(_QWORD *)this = &CWindowNode::`vftable';
  CWindowNode::Detach(this);
  v2 = *((_QWORD *)this + 124);
  if ( v2 )
  {
    v13 = (struct CResource *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 136LL))(*((_QWORD *)this + 124));
    (*(void (__fastcall **)(_QWORD, CWindowNode *))(**((_QWORD **)this + 124) + 152LL))(*((_QWORD *)this + 124), this);
    CResource::UnRegisterNotifierInternal(this, v13);
  }
  for ( i = 0; i < *((_DWORD *)this + 256); ++i )
  {
    v12 = (struct CResource *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 125) + 8LL * i)
                                                                + 136LL))(*(_QWORD *)(*((_QWORD *)this + 125) + 8LL * i));
    (*(void (__fastcall **)(_QWORD, CWindowNode *))(**(_QWORD **)(*((_QWORD *)this + 125) + 8LL * i) + 152LL))(
      *(_QWORD *)(*((_QWORD *)this + 125) + 8LL * i),
      this);
    CResource::UnRegisterNotifierInternal(this, v12);
  }
  *((_DWORD *)this + 256) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 1000, 8LL);
  CResource::UnRegisterNotifier<CFlipChain>(this, (char *)this + 1128);
  CResource::UnRegisterNotifier<CFlipChain>(this, (char *)this + 1136);
  if ( *((_QWORD *)this + 144) )
  {
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 144));
    *((_QWORD *)this + 144) = 0LL;
  }
  for ( j = 0; j < *((_DWORD *)this + 296); *(_QWORD *)(v14 + 8 * v15) = 0LL )
  {
    v14 = *((_QWORD *)this + 145);
    v15 = j;
    CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v14 + 8LL * j++));
  }
  *((_DWORD *)this + 296) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 1160, 8LL);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 129));
  *((_QWORD *)this + 129) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 143));
  *((_QWORD *)this + 143) = 0LL;
  *((_DWORD *)this + 298) = 0;
  CWindowNode::CleanUpPendingUpdates(this, 1);
  v6 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 152);
  if ( v6 )
    (**v6)(*((_QWORD *)this + 152), 1LL);
  v7 = (CDxAccumulationContext *)*((_QWORD *)this + 150);
  if ( v7 )
    CDxAccumulationContext::`scalar deleting destructor'(v7, v5);
  if ( *((_BYTE *)this + 1199) )
    --*(_DWORD *)(*((_QWORD *)this + 2) + 208LL);
  v8 = (void *)*((_QWORD *)this + 155);
  if ( v8 )
  {
    DeleteObject(v8);
    *((_QWORD *)this + 155) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 156);
  if ( v9 )
  {
    DeleteObject(v9);
    *((_QWORD *)this + 156) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 157);
  if ( v10 )
  {
    DeleteObject(v10);
    *((_QWORD *)this + 157) = 0LL;
  }
  CDwmMetaRegion::ClearMoveData((CWindowNode *)((char *)this + 1248));
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 1160);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 1000);
  while ( 1 )
  {
    RestartKey = 0LL;
    v11 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 920), &RestartKey);
    if ( !v11 )
      break;
    CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::RemoveElement(
      (PRTL_GENERIC_TABLE)((char *)this + 920),
      v11);
  }
  CVisual::~CVisual((CComposition **)this);
}
