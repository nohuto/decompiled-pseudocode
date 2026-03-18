/*
 * XREFs of ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C001D290
 * Callers:
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C001C080 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C00187A0 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C001D5B8 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C001D7E0 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     memmove @ 0x1C0033080 (memmove.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qqq @ 0x1C006437C (WPP_IFR_SF_qqq.c)
 *     ?CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C0066D54 (-CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C0067A64 (-ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z.c)
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
  size_t v23; // rcx
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
  KIRQL v55; // al
  bool v56; // zf
  FxDevice *v57; // rcx
  _DEVICE_OBJECT *v58; // rdx
  const void *v59; // rcx
  FxDevice *v60; // rcx
  _DEVICE_OBJECT *v61; // rax
  const void *v62; // rcx
  FxDeviceDescriptionEntry *v63; // rax
  KIRQL v64; // dl
  const void *v65; // rcx
  size_t v66; // r8
  _LIST_ENTRY *v67; // rax
  _LIST_ENTRY *v68; // rcx
  const void *v69; // rax
  _LIST_ENTRY *v70; // rax
  _LIST_ENTRY *v71; // rcx
  const void *v72; // rax
  _LIST_ENTRY *v73; // rax
  _LIST_ENTRY *Blink; // rcx
  void (__fastcall *m_EvtAddressDescriptionCleanup)(WDFCHILDLIST__ *, _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *); // rax
  _LIST_ENTRY *v76; // rsi
  unsigned __int64 v77; // rcx
  void (__fastcall *m_EvtIdentificationDescriptionCleanup)(WDFCHILDLIST__ *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *); // rax
  unsigned __int64 v79; // rcx
  __int64 i; // rdi
  _FX_DRIVER_GLOBALS *globals; // [rsp+40h] [rbp-78h]
  _DEVICE_RELATIONS *P; // [rsp+48h] [rbp-70h]
  int *Src; // [rsp+50h] [rbp-68h]
  FxDeviceDescriptionEntry *v84; // [rsp+58h] [rbp-60h]
  _LIST_ENTRY freeHead; // [rsp+60h] [rbp-58h] BYREF
  size_t Size; // [rsp+C0h] [rbp+8h] BYREF
  _DEVICE_RELATIONS **v87; // [rsp+C8h] [rbp+10h]
  FxDeviceDescriptionEntry *invalidateRelations; // [rsp+D0h] [rbp+18h] BYREF
  int v89; // [rsp+D8h] [rbp+20h]

  v87 = DeviceRelations;
  m_Globals = this->m_Globals;
  v3 = 0;
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      LODWORD(Size) = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        m_Globals->Public.DriverName,
        (const char *)&Size,
        m_Globals->Public.DriverName,
        (const char *)&Size);
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
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
  LOBYTE(Size) = 0;
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
            LOBYTE(Size) = 1;
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
  v12 = v87;
  v13 = Size;
  v14 = *v87;
  Src = (int *)*v87;
  if ( v3 )
  {
    if ( v14 )
      v3 += v14->Count;
  }
  else
  {
    if ( !(_BYTE)Size )
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
      goto $Done_12;
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
  Size = v23;
  PoolWithTag = (_DEVICE_RELATIONS *)ExAllocatePoolWithTag(PagedPool, v23, globals->Tag);
  P = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, Size);
    if ( Src && *Src )
    {
      if ( globals->FxVerboseOn )
      {
        if ( this->m_ObjectSize )
          v65 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v65 = 0LL;
        WPP_IFR_SF_qid(globals, 5u, 0xCu, 0x2Cu, WPP_FxChildList_cpp_Traceguids, v65, (__int64)Src, *Src);
      }
      if ( *Src )
        v66 = 8LL * (unsigned int)(*Src - 1) + 16;
      else
        v66 = 4LL;
      memmove(P, Src, v66);
    }
    v25 = p_m_DescriptionListHead->Flink;
    v16 = 0;
    v89 = 0;
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
            v67 = v25[4].Flink;
            v68 = v67[9].Flink;
            if ( WORD1(v67->Blink) )
              v69 = (const void *)((unsigned __int64)v67 ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v69 = 0LL;
            WPP_IFR_SF_qq(globals, 4u, 0xCu, 0x30u, WPP_FxChildList_cpp_Traceguids, v69, v68);
            LODWORD(v25[1].Flink) = 3;
            BYTE3(v25[5].Flink) = 1;
          }
          goto LABEL_30;
        }
        if ( globals->FxVerboseOn )
        {
          v70 = v25[4].Flink;
          v71 = v70[9].Flink;
          if ( WORD1(v70->Blink) )
            v72 = (const void *)((unsigned __int64)v70 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v72 = 0LL;
          WPP_IFR_SF_qq(globals, 5u, 0xCu, 0x2Fu, WPP_FxChildList_cpp_Traceguids, v72, v71);
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
    v89 = -1073741637;
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
          v84 = (FxDeviceDescriptionEntry *)v46->m_DescriptionLink.Flink;
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
            v55 = KeAcquireSpinLockRaiseToDpc(p_m_ListLock);
            v56 = this->m_StaticList == 0;
            LOBYTE(Size) = v55;
            if ( v56 )
            {
              if ( FxChildList::ReenumerateEntryLocked(this, invalidateRelations, 1u) )
              {
                v57 = invalidateRelations->m_Pdo;
                v58 = v57->m_DeviceObject.m_DeviceObject;
                if ( v57->m_ObjectSize )
                  v59 = (const void *)((unsigned __int64)v57 ^ 0xFFFFFFFFFFFFFFF8uLL);
                else
                  v59 = 0LL;
                WPP_IFR_SF_qq(v43, 4u, 0xCu, 0x29u, WPP_FxChildList_cpp_Traceguids, v59, v58);
                FxChildList::CloneEntryLocked(this, &freeHead, invalidateRelations, 1u);
              }
            }
            else
            {
              v60 = invalidateRelations->m_Pdo;
              v61 = v60->m_DeviceObject.m_DeviceObject;
              if ( v60->m_ObjectSize )
                v62 = (const void *)((unsigned __int64)v60 ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v62 = 0LL;
              WPP_IFR_SF_qq(v43, 3u, 0xCu, 0x2Au, WPP_FxChildList_cpp_Traceguids, v62, v61);
            }
            v63 = invalidateRelations;
            v64 = Size;
            invalidateRelations->m_DescriptionState = DescriptionReportedMissing;
            v63->m_ReportedMissingCallbackState = CallbackNeedsToBeInvoked;
            KeReleaseSpinLock(p_m_ListLock, v64);
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
          v46 = v84;
          invalidateRelations = v84;
        }
        while ( v84 != (FxDeviceDescriptionEntry *)p_m_DescriptionListHead );
LABEL_32:
        v12 = v87;
        v16 = v89;
      }
    }
    else
    {
      v16 = -1073741670;
    }
  }
  v15 = globals;
$Done_12:
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
    v73 = freeHead.Flink->Flink;
    if ( freeHead.Flink->Blink != &freeHead || v73->Blink != freeHead.Flink )
      __fastfail(3u);
    freeHead.Flink = freeHead.Flink->Flink;
    v73->Blink = &freeHead;
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
      v76 = v20[1].Blink;
      if ( m_EvtAddressDescriptionCleanup && v20[2].Flink )
      {
        if ( this->m_ObjectSize )
          v77 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v77 = 0LL;
        ((void (__fastcall *)(unsigned __int64))m_EvtAddressDescriptionCleanup)(v77);
      }
      m_EvtIdentificationDescriptionCleanup = this->m_EvtIdentificationDescriptionCleanup;
      if ( m_EvtIdentificationDescriptionCleanup && v76 )
      {
        if ( this->m_ObjectSize )
          v79 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v79 = 0LL;
        m_EvtIdentificationDescriptionCleanup(
          (WDFCHILDLIST__ *)v79,
          (_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *)v76);
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
