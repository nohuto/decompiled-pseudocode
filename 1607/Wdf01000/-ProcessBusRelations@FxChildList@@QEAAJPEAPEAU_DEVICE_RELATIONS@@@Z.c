/*
 * XREFs of ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C0021900
 * Callers:
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0027610 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00186F0 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C0021C28 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0021E50 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C0024050 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     memmove @ 0x1C003C440 (memmove.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     WPP_IFR_SF_dd @ 0x1C00649A8 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qqq @ 0x1C00671F0 (WPP_IFR_SF_qqq.c)
 *     ?CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C006D304 (-CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C006DE4C (-ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C007C76C (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxChildList::ProcessBusRelations(FxChildList *this, _DEVICE_RELATIONS **DeviceRelations)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int v3; // ebp
  unsigned __int64 *p_m_ListLock; // rsi
  char v6; // r15
  char v7; // r13
  KIRQL v8; // al
  _LIST_ENTRY *p_m_DescriptionListHead; // r14
  _LIST_ENTRY *Flink; // rdi
  KIRQL v11; // r12
  _DEVICE_RELATIONS **v12; // r12
  char v13; // di
  _DEVICE_RELATIONS *v14; // rax
  _FX_DRIVER_GLOBALS *v15; // r14
  int v16; // ebp
  KIRQL v17; // al
  KIRQL v18; // di
  unsigned __int8 v19; // r8
  _LIST_ENTRY *v20; // rdi
  int v22; // eax
  SIZE_T v23; // rcx
  _DEVICE_RELATIONS *PoolWithTag; // rax
  _LIST_ENTRY *v25; // rdi
  _LIST_ENTRY *v26; // r15
  _LIST_ENTRY *v27; // rdi
  _DEVICE_RELATIONS *v28; // rbx
  _LIST_ENTRY *v29; // rax
  _LIST_ENTRY *_a2; // rcx
  const void *_a1; // rax
  unsigned __int8 CurrentIrql; // al
  _LIST_ENTRY *v33; // rax
  _LIST_ENTRY *v34; // rcx
  const void *v35; // rax
  _LIST_ENTRY *v36; // rbp
  _LIST_ENTRY *v37; // r13
  _LIST_ENTRY *v38; // rax
  _LIST_ENTRY *v39; // rcx
  const void *v40; // rax
  const void *v41; // rax
  bool v42; // cc
  _FX_DRIVER_GLOBALS *v43; // rdi
  const void *v44; // rax
  const void *v45; // rax
  FxDeviceDescriptionEntry *v46; // rax
  FxChildListDescriptionState m_DescriptionState; // ecx
  FxDevice *v48; // rcx
  _DEVICE_OBJECT *v49; // rax
  const void *v50; // rcx
  FxDeviceDescriptionEntry *v51; // rax
  FxDevice *m_Pdo; // rcx
  _DEVICE_OBJECT *m_DeviceObject; // rax
  const void *v54; // rcx
  FxDevice *v55; // rcx
  _DEVICE_OBJECT *v56; // rdx
  const void *v57; // rcx
  FxDevice *v58; // rcx
  _DEVICE_OBJECT *v59; // rax
  const void *v60; // rcx
  FxDeviceDescriptionEntry *v61; // rax
  const void *v62; // rcx
  size_t v63; // r8
  _LIST_ENTRY *v64; // rax
  _LIST_ENTRY *v65; // rcx
  const void *v66; // rax
  _LIST_ENTRY *v67; // rax
  _LIST_ENTRY *v68; // rcx
  const void *v69; // rax
  _LIST_ENTRY *v70; // rax
  _LIST_ENTRY *Blink; // rcx
  void (__fastcall *m_EvtAddressDescriptionCleanup)(WDFCHILDLIST__ *, _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *); // rax
  _LIST_ENTRY *v73; // rsi
  unsigned __int64 v74; // rcx
  void (__fastcall *m_EvtIdentificationDescriptionCleanup)(WDFCHILDLIST__ *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *); // rax
  unsigned __int64 v76; // rcx
  __int64 i; // rdi
  _FX_DRIVER_GLOBALS *globals; // [rsp+40h] [rbp-78h]
  _DEVICE_RELATIONS *P; // [rsp+48h] [rbp-70h]
  int *Src; // [rsp+50h] [rbp-68h]
  FxDeviceDescriptionEntry *v81; // [rsp+58h] [rbp-60h]
  _LIST_ENTRY freeHead; // [rsp+60h] [rbp-58h] BYREF
  char Size; // [rsp+C0h] [rbp+8h]
  size_t Sizea; // [rsp+C0h] [rbp+8h]
  KIRQL Sizeb; // [rsp+C0h] [rbp+8h]
  FxDeviceDescriptionEntry *invalidateRelations; // [rsp+D0h] [rbp+18h] BYREF
  int v88; // [rsp+D8h] [rbp+20h]

  m_Globals = this->m_Globals;
  v3 = 0;
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
  v6 = 0;
  freeHead.Flink = &freeHead;
  v7 = 1;
  globals = this->m_Globals;
  LOBYTE(invalidateRelations) = 0;
  v8 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  p_m_DescriptionListHead = &this->m_DescriptionListHead;
  this->m_State = ListLockedForEnum;
  Flink = this->m_DescriptionListHead.Flink;
  v11 = v8;
  Size = 0;
  if ( Flink != &this->m_DescriptionListHead )
  {
    do
    {
      v22 = (int)Flink[1].Flink;
      if ( v22 > 0 )
      {
        if ( v22 > 2 )
        {
          if ( v22 == 4 )
          {
            if ( globals->FxVerboseOn )
            {
              v33 = Flink[4].Flink;
              v34 = v33[9].Flink;
              if ( WORD1(v33->Blink) )
                v35 = (const void *)((unsigned __int64)v33 ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v35 = 0LL;
              WPP_IFR_SF_qq(globals, 5u, 0xCu, 0x22u, WPP_FxChildList_cpp_Traceguids, v35, v34);
            }
            Size = 1;
          }
        }
        else
        {
          ++v3;
        }
      }
      Flink = Flink->Flink;
    }
    while ( Flink != p_m_DescriptionListHead );
    p_m_ListLock = &this->m_ListLock;
    v6 = 0;
  }
  KeReleaseSpinLock(p_m_ListLock, v11);
  v12 = DeviceRelations;
  v13 = Size;
  v14 = *DeviceRelations;
  Src = (int *)*DeviceRelations;
  if ( v3 )
  {
    if ( v14 )
      v3 += v14->Count;
  }
  else
  {
    if ( !Size )
    {
      v15 = globals;
      if ( globals->FxVerboseOn )
      {
        if ( this->m_ObjectSize )
          v41 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v41 = 0LL;
        WPP_IFR_SF_q(globals, 5u, 0xCu, 0x24u, WPP_FxChildList_cpp_Traceguids, v41);
      }
LABEL_6:
      v7 = 0;
      v16 = -1073741637;
      goto $Done_14;
    }
    if ( v14 )
    {
      v36 = p_m_DescriptionListHead->Flink;
      if ( p_m_DescriptionListHead->Flink == p_m_DescriptionListHead )
      {
        v15 = globals;
      }
      else
      {
        do
        {
          v37 = v36->Flink;
          if ( LODWORD(v36[1].Flink) == 4 )
          {
            v38 = v36[4].Flink;
            v39 = v38[9].Flink;
            if ( WORD1(v38->Blink) )
              v40 = (const void *)((unsigned __int64)v38 ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v40 = 0LL;
            WPP_IFR_SF_qq(globals, 4u, 0xCu, 0x23u, WPP_FxChildList_cpp_Traceguids, v40, v39);
            LODWORD(v36[1].Flink) = 3;
            BYTE3(v36[5].Flink) = 1;
          }
          v36 = v37;
        }
        while ( v37 != p_m_DescriptionListHead );
        p_m_ListLock = &this->m_ListLock;
        v15 = globals;
      }
      goto LABEL_6;
    }
  }
  if ( v3 )
    v23 = 8LL * (unsigned int)(v3 - 1) + 16;
  else
    v23 = 4LL;
  Sizea = v23;
  PoolWithTag = (_DEVICE_RELATIONS *)ExAllocatePoolWithTag(PagedPool, v23, globals->Tag);
  P = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, Sizea);
    if ( Src && *Src )
    {
      if ( globals->FxVerboseOn )
      {
        if ( this->m_ObjectSize )
          v62 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v62 = 0LL;
        WPP_IFR_SF_qid(globals, 5u, 0xCu, 0x2Cu, WPP_FxChildList_cpp_Traceguids, v62, (__int64)Src, *Src);
      }
      if ( *Src )
        v63 = 8LL * (unsigned int)(*Src - 1) + 16;
      else
        v63 = 4LL;
      memmove(P, Src, v63);
    }
    v25 = p_m_DescriptionListHead->Flink;
    v16 = 0;
    v88 = 0;
    if ( v25 != p_m_DescriptionListHead )
    {
      while ( 1 )
      {
        v26 = v25->Flink;
        if ( LODWORD(v25[1].Flink) == 1 )
        {
          if ( globals->FxVerboseOn )
            WPP_IFR_SF_(globals, 5u, 0xCu, 0x2Du, WPP_FxChildList_cpp_Traceguids);
          if ( !FxChildList::CreateDevice(
                  this,
                  (FxDeviceDescriptionEntry *)v25,
                  (unsigned __int8 *)&invalidateRelations) )
            goto LABEL_30;
          v29 = v25[4].Flink;
          _a2 = v29[9].Flink;
          if ( WORD1(v29->Blink) )
            _a1 = (const void *)((unsigned __int64)v29 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            _a1 = 0LL;
          WPP_IFR_SF_qq(globals, 4u, 0xCu, 0x2Eu, WPP_FxChildList_cpp_Traceguids, _a1, _a2);
        }
        else if ( LODWORD(v25[1].Flink) != 2 )
        {
          if ( LODWORD(v25[1].Flink) == 4 )
          {
            v64 = v25[4].Flink;
            v65 = v64[9].Flink;
            if ( WORD1(v64->Blink) )
              v66 = (const void *)((unsigned __int64)v64 ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v66 = 0LL;
            WPP_IFR_SF_qq(globals, 4u, 0xCu, 0x30u, WPP_FxChildList_cpp_Traceguids, v66, v65);
            LODWORD(v25[1].Flink) = 3;
            BYTE3(v25[5].Flink) = 1;
          }
          goto LABEL_30;
        }
        if ( globals->FxVerboseOn )
        {
          v67 = v25[4].Flink;
          v68 = v67[9].Flink;
          if ( WORD1(v67->Blink) )
            v69 = (const void *)((unsigned __int64)v67 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v69 = 0LL;
          WPP_IFR_SF_qq(globals, 5u, 0xCu, 0x2Fu, WPP_FxChildList_cpp_Traceguids, v69, v68);
        }
        v27 = v25[4].Flink[9].Flink;
        ObfReferenceObject(v27);
        P->Objects[P->Count++] = (_DEVICE_OBJECT *)v27;
LABEL_30:
        v25 = v26;
        if ( v26 == p_m_DescriptionListHead )
        {
          v6 = (char)invalidateRelations;
          p_m_ListLock = &this->m_ListLock;
          goto LABEL_32;
        }
      }
    }
  }
  else
  {
    WPP_IFR_SF_d(globals, 2u, 0xCu, 0x25u, WPP_FxChildList_cpp_Traceguids, v3);
    ++this->m_EnumRetries;
    v7 = 0;
    v42 = this->m_EnumRetries <= 3u;
    v16 = -1073741637;
    v88 = -1073741637;
    if ( v42 )
    {
      v43 = globals;
      v6 = 1;
    }
    else
    {
      if ( v13 )
      {
        if ( this->m_ObjectSize )
          v44 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v44 = 0LL;
        v43 = globals;
        WPP_IFR_SF_q(globals, 2u, 0xCu, 0x26u, WPP_FxChildList_cpp_Traceguids, v44);
      }
      else
      {
        v43 = globals;
      }
      if ( this->m_ObjectSize )
        v45 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v45 = 0LL;
      WPP_IFR_SF_qd(v43, 2u, 0xCu, 0x27u, WPP_FxChildList_cpp_Traceguids, v45, 3);
    }
    if ( Src )
    {
      v46 = (FxDeviceDescriptionEntry *)p_m_DescriptionListHead->Flink;
      invalidateRelations = v46;
      if ( v46 != (FxDeviceDescriptionEntry *)p_m_DescriptionListHead )
      {
        do
        {
          v81 = (FxDeviceDescriptionEntry *)v46->m_DescriptionLink.Flink;
          m_DescriptionState = v46->m_DescriptionState;
          if ( m_DescriptionState == DescriptionInstantiatedHasObject )
          {
            m_Pdo = v46->m_Pdo;
            m_DeviceObject = m_Pdo->m_DeviceObject.m_DeviceObject;
            if ( m_Pdo->m_ObjectSize )
              v54 = (const void *)((unsigned __int64)m_Pdo ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v54 = 0LL;
            WPP_IFR_SF_qqq(v43, 4u, 0xCu, 0x28u, WPP_FxChildList_cpp_Traceguids, v54, m_DeviceObject, Src);
            Sizeb = KeAcquireSpinLockRaiseToDpc(p_m_ListLock);
            if ( this->m_StaticList )
            {
              v58 = invalidateRelations->m_Pdo;
              v59 = v58->m_DeviceObject.m_DeviceObject;
              if ( v58->m_ObjectSize )
                v60 = (const void *)((unsigned __int64)v58 ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v60 = 0LL;
              WPP_IFR_SF_qq(v43, 3u, 0xCu, 0x2Au, WPP_FxChildList_cpp_Traceguids, v60, v59);
            }
            else if ( FxChildList::ReenumerateEntryLocked(this, invalidateRelations, 1u) )
            {
              v55 = invalidateRelations->m_Pdo;
              v56 = v55->m_DeviceObject.m_DeviceObject;
              if ( v55->m_ObjectSize )
                v57 = (const void *)((unsigned __int64)v55 ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v57 = 0LL;
              WPP_IFR_SF_qq(v43, 4u, 0xCu, 0x29u, WPP_FxChildList_cpp_Traceguids, v57, v56);
              FxChildList::CloneEntryLocked(this, &freeHead, invalidateRelations, 1u);
            }
            v61 = invalidateRelations;
            invalidateRelations->m_DescriptionState = DescriptionReportedMissing;
            v61->m_ReportedMissingCallbackState = CallbackNeedsToBeInvoked;
            KeReleaseSpinLock(p_m_ListLock, Sizeb);
          }
          else if ( m_DescriptionState == DescriptionNotPresent )
          {
            v48 = v46->m_Pdo;
            v49 = v48->m_DeviceObject.m_DeviceObject;
            if ( v48->m_ObjectSize )
              v50 = (const void *)((unsigned __int64)v48 ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v50 = 0LL;
            WPP_IFR_SF_qq(v43, 4u, 0xCu, 0x2Bu, WPP_FxChildList_cpp_Traceguids, v50, v49);
            v51 = invalidateRelations;
            invalidateRelations->m_DescriptionState = DescriptionReportedMissing;
            v51->m_ReportedMissingCallbackState = CallbackNeedsToBeInvoked;
          }
          v46 = v81;
          invalidateRelations = v81;
        }
        while ( v81 != (FxDeviceDescriptionEntry *)p_m_DescriptionListHead );
LABEL_32:
        v12 = DeviceRelations;
        v16 = v88;
      }
    }
    else
    {
      v16 = -1073741670;
    }
  }
  v15 = globals;
$Done_14:
  v17 = KeAcquireSpinLockRaiseToDpc(p_m_ListLock);
  this->m_State = ListUnlocked;
  v18 = v17;
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  if ( v16 >= 0 )
    this->m_EnumRetries = 0;
  KeReleaseSpinLock(p_m_ListLock, v18);
  if ( v6 )
    IoInvalidateDeviceRelations(this->m_DeviceBase->m_PhysicalDevice.m_DeviceObject, BusRelations);
  while ( 1 )
  {
    v20 = freeHead.Flink;
    if ( freeHead.Flink == &freeHead )
      break;
    v70 = freeHead.Flink->Flink;
    if ( freeHead.Flink->Blink != &freeHead || v70->Blink != freeHead.Flink )
      __fastfail(3u);
    freeHead.Flink = freeHead.Flink->Flink;
    v70->Blink = &freeHead;
    v20->Blink = v20;
    v20->Flink = v20;
    if ( this->m_StaticList && (LODWORD(v20[1].Flink) == 1 || LODWORD(v20[3].Blink) == 5) )
    {
      Blink = v20[1].Blink->Blink;
      if ( LODWORD(v20[3].Blink) == 5 )
        LODWORD(v20[3].Blink) = 0;
      LODWORD(v20[1].Flink) = 3;
      FxPkgPnp::PnpProcessEvent((FxPkgPnp *)Blink[40].Blink, PnpEventRemove, v19);
    }
    else
    {
      m_EvtAddressDescriptionCleanup = this->m_EvtAddressDescriptionCleanup;
      v73 = v20[1].Blink;
      if ( m_EvtAddressDescriptionCleanup && v20[2].Flink )
      {
        if ( this->m_ObjectSize )
          v74 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v74 = 0LL;
        ((void (__fastcall *)(unsigned __int64))m_EvtAddressDescriptionCleanup)(v74);
      }
      m_EvtIdentificationDescriptionCleanup = this->m_EvtIdentificationDescriptionCleanup;
      if ( m_EvtIdentificationDescriptionCleanup && v73 )
      {
        if ( this->m_ObjectSize )
          v76 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v76 = 0LL;
        m_EvtIdentificationDescriptionCleanup(
          (WDFCHILDLIST__ *)v76,
          (_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *)v73);
      }
      ((void (__fastcall *)(_LIST_ENTRY *, _LIST_ENTRY *, __int64, const char *))v20[4].Blink->Flink[1].Flink)(
        v20[4].Blink,
        v20,
        77LL,
        "minkernel\\wdf\\framework\\kmdf\\src\\core\\fxchildlist.cpp");
      FxPoolFree(v20);
    }
  }
  if ( v7 )
  {
    if ( Src )
    {
      if ( v15->FxVerboseOn )
        WPP_IFR_SF_q(v15, 5u, 0xCu, 0x31u, WPP_FxChildList_cpp_Traceguids, Src);
      ExFreePoolWithTag(Src, 0);
    }
    v28 = P;
    if ( v16 < 0 && P )
    {
      for ( i = 0LL; (unsigned int)i < P->Count; i = (unsigned int)(i + 1) )
        ObfDereferenceObject(P->Objects[i]);
      ExFreePoolWithTag(P, 0);
      v28 = 0LL;
    }
    *v12 = v28;
  }
  return (unsigned int)v16;
}
