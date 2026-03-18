/*
 * XREFs of ?ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU_IRP@@2@Z2@Z @ 0x1C009482C
 * Callers:
 *     imp_WdfDeviceConfigureWdmIrpDispatchCallback @ 0x1C006C7F0 (imp_WdfDeviceConfigureWdmIrpDispatchCallback.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C002DFEC (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     WPP_IFR_SF_cd @ 0x1C00952FC (WPP_IFR_SF_cd.c)
 *     WPP_IFR_SF_qcd @ 0x1C00953C4 (WPP_IFR_SF_qcd.c)
 */

__int64 __fastcall FxPkgIo::ConfigureDynamicDispatching(
        FxPkgIo *this,
        unsigned __int8 MajorFunction,
        FxCxDeviceInfo *CxDeviceInfo,
        _LIST_ENTRY *EvtDeviceWdmIrpDispatch,
        _LIST_ENTRY *DriverContext)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  unsigned int v7; // r8d
  unsigned int v10; // ebx
  int v11; // ebp
  char Index; // cl
  _LIST_ENTRY *p_m_DynamicDispatchInfoListHead; // rdx
  _LIST_ENTRY *i; // rsi
  _LIST_ENTRY *Flink; // rax
  char v16; // al
  _QWORD *v17; // rax
  _LIST_ENTRY *v18; // rdi
  FxDriver *Driver; // rcx
  const void *v20; // rcx
  __int64 v21; // rdx
  _LIST_ENTRY *Blink; // rax
  const _GUID *Tag; // [rsp+20h] [rbp-48h]
  int id; // [rsp+30h] [rbp-38h]
  int v26; // [rsp+38h] [rbp-30h]
  _LIST_ENTRY *Caller; // [rsp+68h] [rbp+0h]

  m_Globals = this->m_Globals;
  v7 = MajorFunction;
  switch ( MajorFunction )
  {
    case 3u:
      v11 = 0;
      break;
    case 4u:
      v11 = 1;
      break;
    case 0xEu:
      v11 = 2;
      break;
    case 0xFu:
      v11 = 3;
      break;
    default:
      v10 = -1073741811;
      WPP_IFR_SF_cd(
        this->m_Globals,
        MajorFunction,
        MajorFunction,
        (unsigned __int16)EvtDeviceWdmIrpDispatch,
        Tag,
        MajorFunction,
        id);
      return v10;
  }
  if ( CxDeviceInfo )
    Index = CxDeviceInfo->Index;
  else
    Index = 0;
  p_m_DynamicDispatchInfoListHead = &this->m_DynamicDispatchInfoListHead;
  for ( i = this->m_DynamicDispatchInfoListHead.Flink; ; i = i->Flink )
  {
    if ( i == p_m_DynamicDispatchInfoListHead )
    {
LABEL_21:
      v17 = FxPoolAllocator(
              m_Globals,
              (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks,
              ExDefaultNonPagedPoolType,
              0x58uLL,
              m_Globals->Tag,
              Caller);
      v18 = (_LIST_ENTRY *)v17;
      if ( v17 )
      {
        `vector constructor iterator'(
          (char *)v17 + 16,
          0x10uLL,
          4,
          (void *(__fastcall *)(void *))FxIrpDynamicDispatchInfo::Info::Info);
        v18[5].Flink = 0LL;
        v18->Blink = v18;
        v18->Flink = v18;
        memset(&v18[1], 0, 0x40uLL);
      }
      else
      {
        v18 = 0LL;
      }
      if ( !v18 )
      {
        v10 = -1073741670;
        WPP_IFR_SF_d(
          m_Globals,
          2u,
          0x12u,
          0x17u,
          (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock,
          -1073741670);
        return v10;
      }
      v18[5].Flink = (_LIST_ENTRY *)CxDeviceInfo;
      v21 = v11;
      v18[v21 + 1].Blink = DriverContext;
      v18[v21 + 1].Flink = EvtDeviceWdmIrpDispatch;
      Blink = i->Blink;
      v18->Flink = i;
      v18->Blink = Blink;
      if ( Blink->Flink != i )
        __fastfail(3u);
      Blink->Flink = v18;
      i->Blink = v18;
      return 0;
    }
    Flink = i[5].Flink;
    v16 = Flink ? LOBYTE(Flink[5].Blink) : 0;
    if ( Index == v16 )
      break;
    if ( Index > v16 )
      goto LABEL_21;
  }
  if ( !i[v11 + 1].Flink )
  {
    i[v11 + 1].Blink = DriverContext;
    i[v11 + 1].Flink = EvtDeviceWdmIrpDispatch;
    return 0;
  }
  v10 = -1073741811;
  if ( CxDeviceInfo )
    Driver = CxDeviceInfo->Driver;
  else
    Driver = this->m_DeviceBase->m_Driver;
  if ( Driver->m_ObjectSize )
    v20 = (const void *)((unsigned __int64)Driver ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v20 = 0LL;
  WPP_IFR_SF_qcd(
    m_Globals,
    (unsigned __int8)p_m_DynamicDispatchInfoListHead,
    v7,
    (unsigned __int16)EvtDeviceWdmIrpDispatch,
    Tag,
    v20,
    v7,
    v26);
  return v10;
}
