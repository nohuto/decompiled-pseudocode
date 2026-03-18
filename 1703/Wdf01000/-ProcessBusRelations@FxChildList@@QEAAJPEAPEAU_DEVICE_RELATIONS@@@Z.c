/*
 * XREFs of ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C002CE60
 * Callers:
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0027290 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_ @ 0x1C0019F44 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C0023450 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C002D1A4 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C002D3F0 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     memmove @ 0x1C0040140 (memmove.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     WPP_IFR_SF_dd @ 0x1C0067DA0 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qqq @ 0x1C006AA34 (WPP_IFR_SF_qqq.c)
 *     ?CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C0070CD0 (-CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C0071884 (-ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z.c)
 */

__int64 __fastcall FxChildList::ProcessBusRelations(FxChildList *this, _DEVICE_RELATIONS **DeviceRelations)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int64 *p_m_ListLock; // rsi
  unsigned __int8 v5; // bp
  char v6; // r13
  KIRQL v7; // al
  int v8; // r15d
  _LIST_ENTRY *p_m_DescriptionListHead; // r14
  _LIST_ENTRY *Flink; // rdi
  KIRQL v11; // r12
  _DEVICE_RELATIONS **v12; // r12
  _DEVICE_RELATIONS *v13; // rax
  _FX_DRIVER_GLOBALS *v14; // r14
  int v15; // r15d
  KIRQL v16; // al
  KIRQL v17; // di
  unsigned __int8 v18; // r8
  _LIST_ENTRY *v19; // rdi
  int v21; // eax
  size_t v22; // rax
  PVOID PoolWithTag; // rax
  void *v24; // rdi
  _LIST_ENTRY *v25; // rdi
  _DWORD *v26; // r12
  _FX_DRIVER_GLOBALS *v27; // rsi
  _LIST_ENTRY *v28; // rbp
  _LIST_ENTRY *v29; // rdi
  void *v30; // rbx
  _DEVICE_RELATIONS *v31; // rbx
  _LIST_ENTRY *v32; // rax
  _LIST_ENTRY *_a2; // rcx
  const void *_a1; // rax
  unsigned __int8 CurrentIrql; // al
  _LIST_ENTRY *v36; // rdx
  _LIST_ENTRY *v37; // rcx
  __int16 v38; // ax
  const void *v39; // rdx
  _LIST_ENTRY *v40; // r15
  _FX_DRIVER_GLOBALS *v41; // rdi
  _LIST_ENTRY *v42; // r13
  _LIST_ENTRY *v43; // rdx
  _LIST_ENTRY *v44; // rcx
  __int16 v45; // ax
  const void *v46; // rdx
  const void *v47; // rcx
  _FX_DRIVER_GLOBALS *v48; // rdi
  bool v49; // cc
  const void *v50; // rcx
  const void *v51; // rcx
  void *_a3; // r12
  _LIST_ENTRY *v53; // r15
  int v54; // eax
  _LIST_ENTRY *v55; // rdx
  _LIST_ENTRY *v56; // rcx
  __int16 v57; // ax
  const void *v58; // rdx
  _LIST_ENTRY *v59; // rdx
  _LIST_ENTRY *v60; // rcx
  __int16 v61; // ax
  const void *v62; // rdx
  _LIST_ENTRY *v63; // rdx
  _LIST_ENTRY *v64; // rcx
  __int16 v65; // ax
  const void *v66; // rdx
  _LIST_ENTRY *v67; // rdx
  _LIST_ENTRY *v68; // rcx
  __int16 v69; // ax
  const void *v70; // rdx
  const void *v71; // rcx
  size_t v72; // r8
  _LIST_ENTRY *v73; // rdx
  _LIST_ENTRY *v74; // rcx
  __int16 v75; // ax
  const void *v76; // rdx
  _LIST_ENTRY *v77; // rdx
  _LIST_ENTRY *v78; // rcx
  __int16 v79; // ax
  const void *v80; // rdx
  _LIST_ENTRY *v81; // rax
  _LIST_ENTRY *Blink; // rcx
  void (__fastcall *m_EvtAddressDescriptionCleanup)(WDFCHILDLIST__ *, _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *); // rax
  _LIST_ENTRY *v84; // rsi
  unsigned __int64 v85; // rcx
  void (__fastcall *m_EvtIdentificationDescriptionCleanup)(WDFCHILDLIST__ *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *); // rax
  unsigned __int64 v87; // rcx
  unsigned int v88; // edi
  unsigned __int8 invalidateRelations[8]; // [rsp+40h] [rbp-88h] BYREF
  size_t Size; // [rsp+48h] [rbp-80h]
  _FX_DRIVER_GLOBALS *globals; // [rsp+50h] [rbp-78h]
  void *Src; // [rsp+58h] [rbp-70h]
  PVOID P; // [rsp+60h] [rbp-68h]
  _LIST_ENTRY *v94; // [rsp+68h] [rbp-60h]
  _LIST_ENTRY freeHead; // [rsp+70h] [rbp-58h] BYREF
  char v96; // [rsp+D0h] [rbp+8h]
  KIRQL v97; // [rsp+D0h] [rbp+8h]
  char v99; // [rsp+E8h] [rbp+20h]

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(m_Globals);
    }
  }
  P = 0LL;
  freeHead.Blink = &freeHead;
  p_m_ListLock = &this->m_ListLock;
  v5 = 0;
  freeHead.Flink = &freeHead;
  v6 = 1;
  globals = this->m_Globals;
  v99 = 0;
  invalidateRelations[0] = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  v8 = 0;
  this->m_State = ListLockedForEnum;
  p_m_DescriptionListHead = &this->m_DescriptionListHead;
  v96 = 0;
  Flink = this->m_DescriptionListHead.Flink;
  v11 = v7;
  if ( Flink != &this->m_DescriptionListHead )
  {
    v5 = 0;
    do
    {
      v21 = (int)Flink[1].Flink;
      if ( v21 > 0 )
      {
        if ( v21 > 2 )
        {
          if ( v21 == 4 )
          {
            if ( globals->FxVerboseOn )
            {
              v36 = Flink[4].Flink;
              v37 = v36[9].Flink;
              v38 = WORD1(v36->Blink);
              v39 = (const void *)((unsigned __int64)v36 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !v38 )
                v39 = 0LL;
              WPP_IFR_SF_qq(globals, 5u, 0xCu, 0x22u, WPP_FxChildList_cpp_Traceguids, v39, v37);
            }
            v96 = 1;
          }
        }
        else
        {
          ++v8;
        }
      }
      Flink = Flink->Flink;
    }
    while ( Flink != p_m_DescriptionListHead );
    p_m_ListLock = &this->m_ListLock;
    v6 = 1;
  }
  KeReleaseSpinLock(p_m_ListLock, v11);
  v12 = DeviceRelations;
  v13 = *DeviceRelations;
  Src = *DeviceRelations;
  if ( v8 )
  {
    if ( v13 )
      v8 += v13->Count;
  }
  else
  {
    if ( !v96 )
    {
      v14 = globals;
      if ( globals->FxVerboseOn )
      {
        v47 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v47 = 0LL;
        WPP_IFR_SF_q(globals, 5u, 0xCu, 0x24u, WPP_FxChildList_cpp_Traceguids, v47);
      }
LABEL_6:
      v6 = 0;
      v15 = -1073741637;
      goto $Done_21;
    }
    if ( v13 )
    {
      v40 = p_m_DescriptionListHead->Flink;
      if ( p_m_DescriptionListHead->Flink == p_m_DescriptionListHead )
      {
        v14 = globals;
      }
      else
      {
        v41 = globals;
        do
        {
          v42 = v40->Flink;
          if ( LODWORD(v40[1].Flink) == 4 )
          {
            v43 = v40[4].Flink;
            v44 = v43[9].Flink;
            v45 = WORD1(v43->Blink);
            v46 = (const void *)((unsigned __int64)v43 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v45 )
              v46 = 0LL;
            WPP_IFR_SF_qq(v41, 4u, 0xCu, 0x23u, WPP_FxChildList_cpp_Traceguids, v46, v44);
            LODWORD(v40[1].Flink) = 3;
            BYTE3(v40[5].Flink) = 1;
          }
          v40 = v42;
        }
        while ( v42 != p_m_DescriptionListHead );
        v12 = DeviceRelations;
        p_m_ListLock = &this->m_ListLock;
        v14 = v41;
      }
      goto LABEL_6;
    }
  }
  if ( v8 )
    v22 = 8LL * (unsigned int)(v8 - 1) + 16;
  else
    v22 = 4LL;
  Size = v22;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v22, globals->Tag);
  P = PoolWithTag;
  v24 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, Size);
    if ( Src && *(_DWORD *)Src )
    {
      if ( globals->FxVerboseOn )
      {
        v71 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v71 = 0LL;
        WPP_IFR_SF_qid(globals, 5u, 0xCu, 0x2Cu, WPP_FxChildList_cpp_Traceguids, v71, (__int64)Src, *(_DWORD *)Src);
      }
      if ( *(_DWORD *)Src )
        v72 = 8LL * (unsigned int)(*(_DWORD *)Src - 1) + 16;
      else
        v72 = 4LL;
      memmove(v24, Src, v72);
    }
    v25 = p_m_DescriptionListHead->Flink;
    v15 = 0;
    if ( p_m_DescriptionListHead->Flink != p_m_DescriptionListHead )
    {
      v26 = P;
      v27 = globals;
      while ( 1 )
      {
        v28 = v25->Flink;
        if ( LODWORD(v25[1].Flink) == 1 )
        {
          if ( v27->FxVerboseOn )
            WPP_IFR_SF_(v27, 5u, 0xCu, 0x2Du, WPP_FxChildList_cpp_Traceguids);
          if ( !FxChildList::CreateDevice(this, (FxDeviceDescriptionEntry *)v25, invalidateRelations) )
            goto LABEL_32;
          v32 = v25[4].Flink;
          _a2 = v32[9].Flink;
          if ( WORD1(v32->Blink) )
            _a1 = (const void *)((unsigned __int64)v32 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            _a1 = 0LL;
          WPP_IFR_SF_qq(v27, 4u, 0xCu, 0x2Eu, WPP_FxChildList_cpp_Traceguids, _a1, _a2);
        }
        else if ( LODWORD(v25[1].Flink) != 2 )
        {
          if ( LODWORD(v25[1].Flink) == 4 )
          {
            v73 = v25[4].Flink;
            v74 = v73[9].Flink;
            v75 = WORD1(v73->Blink);
            v76 = (const void *)((unsigned __int64)v73 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v75 )
              v76 = 0LL;
            WPP_IFR_SF_qq(v27, 4u, 0xCu, 0x30u, WPP_FxChildList_cpp_Traceguids, v76, v74);
            LODWORD(v25[1].Flink) = 3;
            BYTE3(v25[5].Flink) = 1;
          }
          goto LABEL_32;
        }
        if ( v27->FxVerboseOn )
        {
          v77 = v25[4].Flink;
          v78 = v77[9].Flink;
          v79 = WORD1(v77->Blink);
          v80 = (const void *)((unsigned __int64)v77 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v79 )
            v80 = 0LL;
          WPP_IFR_SF_qq(v27, 5u, 0xCu, 0x2Fu, WPP_FxChildList_cpp_Traceguids, v80, v78);
        }
        v29 = v25[4].Flink[9].Flink;
        ObfReferenceObject(v29);
        *(_QWORD *)&v26[2 * (*v26)++ + 2] = v29;
LABEL_32:
        v25 = v28;
        if ( v28 == p_m_DescriptionListHead )
        {
          v5 = invalidateRelations[0];
          p_m_ListLock = &this->m_ListLock;
          v6 = 1;
          v12 = DeviceRelations;
          break;
        }
      }
    }
    v14 = globals;
  }
  else
  {
    v48 = globals;
    WPP_IFR_SF_d(globals, 2u, 0xCu, 0x25u, WPP_FxChildList_cpp_Traceguids, v8);
    ++this->m_EnumRetries;
    v6 = 0;
    v49 = this->m_EnumRetries <= 3u;
    v15 = -1073741637;
    LODWORD(Size) = -1073741637;
    if ( v49 )
    {
      v5 = 1;
      v99 = 1;
    }
    else
    {
      if ( v96 )
      {
        v50 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v50 = 0LL;
        WPP_IFR_SF_q(v48, 2u, 0xCu, 0x26u, WPP_FxChildList_cpp_Traceguids, v50);
      }
      v51 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v51 = 0LL;
      WPP_IFR_SF_qd(v48, 2u, 0xCu, 0x27u, WPP_FxChildList_cpp_Traceguids, v51, 3);
    }
    if ( Src )
    {
      if ( p_m_DescriptionListHead->Flink != p_m_DescriptionListHead )
      {
        _a3 = Src;
        v53 = p_m_DescriptionListHead->Flink;
        v6 = 0;
        do
        {
          v94 = v53->Flink;
          v54 = (int)v53[1].Flink;
          if ( v54 == 2 )
          {
            v59 = v53[4].Flink;
            v60 = v59[9].Flink;
            v61 = WORD1(v59->Blink);
            v62 = (const void *)((unsigned __int64)v59 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v61 )
              v62 = 0LL;
            WPP_IFR_SF_qqq(v48, 4u, 0xCu, 0x28u, WPP_FxChildList_cpp_Traceguids, v62, v60, _a3);
            v97 = KeAcquireSpinLockRaiseToDpc(p_m_ListLock);
            if ( this->m_StaticList )
            {
              v67 = v53[4].Flink;
              v68 = v67[9].Flink;
              v69 = WORD1(v67->Blink);
              v70 = (const void *)((unsigned __int64)v67 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !v69 )
                v70 = 0LL;
              WPP_IFR_SF_qq(v48, 3u, 0xCu, 0x2Au, WPP_FxChildList_cpp_Traceguids, v70, v68);
            }
            else if ( FxChildList::ReenumerateEntryLocked(this, (FxDeviceDescriptionEntry *)v53, 1u) )
            {
              v63 = v53[4].Flink;
              v64 = v63[9].Flink;
              v65 = WORD1(v63->Blink);
              v66 = (const void *)((unsigned __int64)v63 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !v65 )
                v66 = 0LL;
              WPP_IFR_SF_qq(v48, 4u, 0xCu, 0x29u, WPP_FxChildList_cpp_Traceguids, v66, v64);
              FxChildList::CloneEntryLocked(this, &freeHead, (FxDeviceDescriptionEntry *)v53, 1u);
            }
            LODWORD(v53[1].Flink) = 3;
            BYTE3(v53[5].Flink) = 1;
            KeReleaseSpinLock(p_m_ListLock, v97);
          }
          else if ( v54 == 4 )
          {
            v55 = v53[4].Flink;
            v56 = v55[9].Flink;
            v57 = WORD1(v55->Blink);
            v58 = (const void *)((unsigned __int64)v55 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v57 )
              v58 = 0LL;
            WPP_IFR_SF_qq(v48, 4u, 0xCu, 0x2Bu, WPP_FxChildList_cpp_Traceguids, v58, v56);
            LODWORD(v53[1].Flink) = 3;
            BYTE3(v53[5].Flink) = 1;
          }
          v53 = v94;
        }
        while ( v94 != p_m_DescriptionListHead );
        v5 = v99;
        v15 = Size;
        v12 = DeviceRelations;
      }
      v14 = v48;
    }
    else
    {
      v15 = -1073741670;
      v14 = v48;
    }
  }
$Done_21:
  v16 = KeAcquireSpinLockRaiseToDpc(p_m_ListLock);
  this->m_State = ListUnlocked;
  v17 = v16;
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  if ( v15 >= 0 )
    this->m_EnumRetries = 0;
  KeReleaseSpinLock(p_m_ListLock, v17);
  if ( v5 )
    IoInvalidateDeviceRelations(this->m_DeviceBase->m_PhysicalDevice.m_DeviceObject, BusRelations);
  while ( 1 )
  {
    v19 = freeHead.Flink;
    if ( freeHead.Flink == &freeHead )
      break;
    v81 = freeHead.Flink->Flink;
    if ( freeHead.Flink->Blink != &freeHead || v81->Blink != freeHead.Flink )
      __fastfail(3u);
    freeHead.Flink = freeHead.Flink->Flink;
    v81->Blink = &freeHead;
    v19->Blink = v19;
    v19->Flink = v19;
    if ( this->m_StaticList && (LODWORD(v19[1].Flink) == 1 || LODWORD(v19[3].Blink) == 5) )
    {
      Blink = v19[1].Blink->Blink;
      if ( LODWORD(v19[3].Blink) == 5 )
        LODWORD(v19[3].Blink) = 0;
      LODWORD(v19[1].Flink) = 3;
      FxPkgPnp::PnpProcessEvent((FxPkgPnp *)Blink[40].Blink, PnpEventRemove, v18);
    }
    else
    {
      m_EvtAddressDescriptionCleanup = this->m_EvtAddressDescriptionCleanup;
      v84 = v19[1].Blink;
      if ( m_EvtAddressDescriptionCleanup && v19[2].Flink )
      {
        v85 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !this->m_ObjectSize )
          v85 = 0LL;
        ((void (__fastcall *)(unsigned __int64))m_EvtAddressDescriptionCleanup)(v85);
      }
      m_EvtIdentificationDescriptionCleanup = this->m_EvtIdentificationDescriptionCleanup;
      if ( m_EvtIdentificationDescriptionCleanup && v84 )
      {
        v87 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !this->m_ObjectSize )
          v87 = 0LL;
        m_EvtIdentificationDescriptionCleanup(
          (WDFCHILDLIST__ *)v87,
          (_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *)v84);
      }
      ((void (__fastcall *)(_LIST_ENTRY *, _LIST_ENTRY *, __int64, const char *))v19[4].Blink->Flink[1].Flink)(
        v19[4].Blink,
        v19,
        77LL,
        "minkernel\\wdf\\framework\\kmdf\\src\\core\\fxchildlist.cpp");
      FxPoolFree(v19);
    }
  }
  if ( v6 )
  {
    v30 = Src;
    if ( Src )
    {
      if ( v14->FxVerboseOn )
        WPP_IFR_SF_q(v14, 5u, 0xCu, 0x31u, WPP_FxChildList_cpp_Traceguids, Src);
      ExFreePoolWithTag(v30, 0);
    }
    v31 = (_DEVICE_RELATIONS *)P;
    if ( v15 < 0 && P )
    {
      v88 = 0;
      if ( *(_DWORD *)P )
      {
        do
          ObfDereferenceObject(v31->Objects[v88++]);
        while ( v88 < v31->Count );
      }
      ExFreePoolWithTag(v31, 0);
      v31 = 0LL;
    }
    *v12 = v31;
  }
  return (unsigned int)v15;
}
