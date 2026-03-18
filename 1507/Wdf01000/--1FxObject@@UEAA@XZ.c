/*
 * XREFs of ??1FxObject@@UEAA@XZ @ 0x1C0004A00
 * Callers:
 *     ??_EFxFileObject@@UEAAPEAXI@Z @ 0x1C0001F60 (--_EFxFileObject@@UEAAPEAXI@Z.c)
 *     ?SelfDestruct@FxRequestFromLookaside@@MEAAXXZ @ 0x1C0004580 (-SelfDestruct@FxRequestFromLookaside@@MEAAXXZ.c)
 *     ??_EFxObject@@UEAAPEAXI@Z @ 0x1C000A110 (--_EFxObject@@UEAAPEAXI@Z.c)
 *     ??_GFxString@@UEAAPEAXI@Z @ 0x1C000FFA0 (--_GFxString@@UEAAPEAXI@Z.c)
 *     ??_GFxRegKey@@UEAAPEAXI@Z @ 0x1C0017B80 (--_GFxRegKey@@UEAAPEAXI@Z.c)
 *     ??_GFxMemoryBuffer@@MEAAPEAXI@Z @ 0x1C0026420 (--_GFxMemoryBuffer@@MEAAPEAXI@Z.c)
 *     ??1FxPagedObject@@UEAA@XZ @ 0x1C005BA38 (--1FxPagedObject@@UEAA@XZ.c)
 *     ??1FxMemoryBufferPreallocated@@MEAA@XZ @ 0x1C0077BCC (--1FxMemoryBufferPreallocated@@MEAA@XZ.c)
 *     ??_EFxNPagedLookasideList@@MEAAPEAXI@Z @ 0x1C0077CB0 (--_EFxNPagedLookasideList@@MEAAPEAXI@Z.c)
 *     ??_EFxNPagedLookasideListFromPool@@MEAAPEAXI@Z @ 0x1C0077D20 (--_EFxNPagedLookasideListFromPool@@MEAAPEAXI@Z.c)
 *     ??_GFxPagedLookasideListFromPool@@MEAAPEAXI@Z @ 0x1C00781E0 (--_GFxPagedLookasideListFromPool@@MEAAPEAXI@Z.c)
 *     ??1FxMemoryBufferFromPool@@MEAA@XZ @ 0x1C0078C90 (--1FxMemoryBufferFromPool@@MEAA@XZ.c)
 *     ??_GFxLookasideList@@MEAAPEAXI@Z @ 0x1C0078EE0 (--_GFxLookasideList@@MEAAPEAXI@Z.c)
 *     ??1FxMemoryBufferFromLookaside@@MEAA@XZ @ 0x1C00792E4 (--1FxMemoryBufferFromLookaside@@MEAA@XZ.c)
 *     ??_GFxSpinLock@@UEAAPEAXI@Z @ 0x1C00810B0 (--_GFxSpinLock@@UEAAPEAXI@Z.c)
 *     ??_EFxRelatedDevice@@UEAAPEAXI@Z @ 0x1C00A6B10 (--_EFxRelatedDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C007A914 (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     WPP_IFR_SF_sqq @ 0x1C007AA74 (WPP_IFR_SF_sqq.c)
 */

void __fastcall FxObject::~FxObject(FxObject *this, unsigned int a2, unsigned int a3)
{
  _LIST_ENTRY *Flink; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a2; // rdi
  unsigned __int64 v7; // rdi
  unsigned __int16 m_Type; // r9
  __int64 v9; // rax
  unsigned __int16 *p_ObjectType; // rcx
  const char *HandleName; // rdx
  const void *v12; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-38h]

  this->__vftable = (FxObject_vtbl *)&FxObject::`vftable';
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    Flink = this[-1].m_ChildEntry.Flink;
    if ( Flink )
      FxTagTracker::`scalar deleting destructor'((FxTagTracker *)Flink, a2);
  }
  if ( this->m_ParentObject
    || this->m_ChildListHead.Flink != &this->m_ChildListHead
    || this->m_ChildEntry.Flink != &this->m_ChildEntry )
  {
    v7 = 0LL;
    m_Type = this->m_Type;
    v9 = 0LL;
    if ( !FxObjectsInfoCount )
      goto LABEL_23;
    p_ObjectType = &FxObjectsInfo[0].ObjectType;
    while ( 1 )
    {
      a3 = *p_ObjectType;
      if ( m_Type == (_WORD)a3 )
        break;
      if ( m_Type > (unsigned __int16)a3 )
      {
        v9 = (unsigned int)(v9 + 1);
        p_ObjectType += 12;
        if ( (unsigned int)v9 < FxObjectsInfoCount )
          continue;
      }
      goto LABEL_23;
    }
    HandleName = FxObjectsInfo[v9].HandleName;
    if ( !HandleName )
LABEL_23:
      HandleName = "WDFOBJECT";
    if ( this->m_ObjectSize )
      v12 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v12 = 0LL;
    WPP_IFR_SF_sqq(this->m_Globals, (unsigned __int8)HandleName, a3, m_Type, traceGuid, HandleName, v12, this);
    if ( this->m_ObjectSize )
      v7 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    FxVerifierBugCheckWorker(this->m_Globals, WDF_OBJECT_ERROR, v7, (unsigned __int64)this);
  }
  if ( (this->m_ObjectFlags & 0x200) != 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a2 = 0LL;
      WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, this->m_ObjectState, 0xCu);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].96) - 16) = 12;
  }
  this->m_ObjectState = 12;
  this->m_SpinLock.m_DbgFlagIsInitialized = 0;
}
