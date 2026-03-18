/*
 * XREFs of ?ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU_IRP@@2@Z2@Z @ 0x1C0093934
 * Callers:
 *     imp_WdfDeviceConfigureWdmIrpDispatchCallback @ 0x1C0077440 (imp_WdfDeviceConfigureWdmIrpDispatchCallback.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0039FC0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     WPP_IFR_SF_cd @ 0x1C0076DB0 (WPP_IFR_SF_cd.c)
 *     ?Mj2Index@FxIrpDynamicDispatchInfo@@SAHE@Z @ 0x1C0093CE4 (-Mj2Index@FxIrpDynamicDispatchInfo@@SAHE@Z.c)
 *     WPP_IFR_SF_qcd @ 0x1C0093FB8 (WPP_IFR_SF_qcd.c)
 */

__int64 __fastcall FxPkgIo::ConfigureDynamicDispatching(
        FxPkgIo *this,
        unsigned __int8 MajorFunction,
        FxCxDeviceInfo *CxDeviceInfo,
        int (__fastcall *EvtDeviceWdmIrpDispatch)(WDFDEVICE__ *, unsigned __int8, unsigned __int8, unsigned int, void *, _IRP *, void *),
        void *DriverContext)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  int v8; // eax
  unsigned __int8 v9; // dl
  char v10; // cl
  unsigned int id; // r8d
  unsigned __int16 v12; // r9
  __int64 v13; // r10
  __int64 v14; // r15
  unsigned int v15; // ebx
  char Index; // cl
  _QWORD *v17; // rdx
  _QWORD *i; // rsi
  __int64 v19; // rax
  char v20; // al
  _QWORD *v21; // rax
  _QWORD *v22; // rdi
  FxDriver *Driver; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v25; // rcx
  __int64 v26; // rcx
  _QWORD *v27; // rax
  const _GUID *_a1; // [rsp+20h] [rbp-48h]
  int v30; // [rsp+38h] [rbp-30h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  m_Globals = this->m_Globals;
  v8 = FxIrpDynamicDispatchInfo::Mj2Index(MajorFunction);
  v14 = v8;
  if ( v8 >= 4 )
  {
    v15 = -1073741811;
    WPP_IFR_SF_cd(m_Globals, v9, 0xDu, 0x15u, WPP_FxPkgIo_cpp_Traceguids, v10);
    return v15;
  }
  if ( CxDeviceInfo )
    Index = CxDeviceInfo->Index;
  else
    Index = 0;
  v17 = (_QWORD *)(v13 + 376);
  for ( i = *(_QWORD **)(v13 + 376); ; i = (_QWORD *)*i )
  {
    if ( i == v17 )
    {
LABEL_14:
      v21 = FxPoolAllocator(
              m_Globals,
              &m_Globals->FxPoolFrameworks,
              ExDefaultNonPagedPoolType,
              0x58uLL,
              m_Globals->Tag,
              retaddr);
      v22 = v21;
      if ( v21 )
      {
        `vector constructor iterator'(
          (char *)v21 + 16,
          0x10uLL,
          4uLL,
          (void *(__fastcall *)(void *))FxIrpDynamicDispatchInfo::Info::Info);
        v22[10] = 0LL;
        v22[1] = v22;
        *v22 = v22;
        memset(v22 + 2, 0, 0x40uLL);
      }
      else
      {
        v22 = 0LL;
      }
      if ( !v22 )
      {
        v15 = -1073741670;
        WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0x17u, WPP_FxPkgIo_cpp_Traceguids, -1073741670);
        return v15;
      }
      v22[10] = CxDeviceInfo;
      v26 = 2 * v14;
      v22[v26 + 3] = DriverContext;
      v22[v26 + 2] = EvtDeviceWdmIrpDispatch;
      v27 = (_QWORD *)i[1];
      if ( (_QWORD *)*v27 != i )
        __fastfail(3u);
      *v22 = i;
      v22[1] = v27;
      *v27 = v22;
      i[1] = v22;
      return 0;
    }
    v19 = i[10];
    v20 = v19 ? *(_BYTE *)(v19 + 88) : 0;
    if ( Index == v20 )
      break;
    if ( Index > v20 )
      goto LABEL_14;
  }
  if ( !i[2 * v14 + 2] )
  {
    i[2 * v14 + 3] = DriverContext;
    i[2 * v14 + 2] = EvtDeviceWdmIrpDispatch;
    return 0;
  }
  v15 = -1073741811;
  if ( CxDeviceInfo )
    Driver = CxDeviceInfo->Driver;
  else
    Driver = *(FxDriver **)(*(_QWORD *)(v13 + 96) + 136LL);
  m_ObjectSize = Driver->m_ObjectSize;
  v25 = (const void *)((unsigned __int64)Driver ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v25 = 0LL;
  WPP_IFR_SF_qcd(m_Globals, (unsigned __int8)v17, id, v12, _a1, v25, id, v30);
  return v15;
}
