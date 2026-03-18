/*
 * XREFs of ?_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z @ 0x1C0028600
 * Callers:
 *     imp_WdfControlDeviceInitAllocate @ 0x1C0028700 (imp_WdfControlDeviceInitAllocate.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000D260 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ??0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z @ 0x1C001C7D4 (--0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x1C0028010 (-Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0028020 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??_GWDFDEVICE_INIT@@QEAAPEAXI@Z @ 0x1C005709C (--_GWDFDEVICE_INIT@@QEAAPEAXI@Z.c)
 */

WDFDEVICE_INIT *__fastcall WDFDEVICE_INIT::_AllocateControlDeviceInit(
        FxDriver *Driver,
        const _UNICODE_STRING *SDDLString)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  WDFDEVICE_INIT *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  _POOL_TYPE v8; // edx
  FxString *v9; // rax
  FxString *v10; // rax
  unsigned int v11; // edx
  int v12; // esi
  void *retaddr; // [rsp+48h] [rbp+0h]

  m_Globals = Driver->m_Globals;
  v5 = (WDFDEVICE_INIT *)FxPoolAllocator(
                           m_Globals,
                           &m_Globals->FxPoolFrameworks,
                           ExDefaultNonPagedPoolType,
                           0x3A8uLL,
                           m_Globals->Tag,
                           retaddr);
  if ( v5 )
  {
    WDFDEVICE_INIT::WDFDEVICE_INIT(v5, Driver);
    v7 = v6;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v8 = ExDefaultNonPagedPoolType;
    *(_DWORD *)(v7 + 56) |= 0x80u;
    *(_DWORD *)(v7 + 36) = 2;
    v9 = (FxString *)FxObjectHandleAlloc(m_Globals, v8, 0x78uLL, 0, 0LL, 0, FxObjectTypeExternal);
    if ( v9 )
      FxString::FxString(v9, m_Globals);
    else
      v10 = 0LL;
    *(_QWORD *)(v7 + 176) = v10;
    if ( v10 )
    {
      v12 = FxString::Assign(v10, SDDLString);
    }
    else
    {
      v12 = -1073741670;
      WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0xCu, WPP_FxDeviceInit_cpp_Traceguids, Driver, -1073741670);
    }
    if ( v12 < 0 )
    {
      WDFDEVICE_INIT::`scalar deleting destructor'((WDFDEVICE_INIT *)v7, v11);
      return 0LL;
    }
    return (WDFDEVICE_INIT *)v7;
  }
  else
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xBu, WPP_FxDeviceInit_cpp_Traceguids, Driver);
    return 0LL;
  }
}
