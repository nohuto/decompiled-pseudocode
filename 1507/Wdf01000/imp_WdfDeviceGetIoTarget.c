/*
 * XREFs of imp_WdfDeviceGetIoTarget @ 0x1C0026F20
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x1C0079818 (WPP_IFR_SF_qDqD.c)
 */

unsigned __int64 __fastcall imp_WdfDeviceGetIoTarget(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Device)
{
  FxDeviceBase *flags; // rbx
  __int64 v4; // rcx
  FxDeviceBase_vtbl *v5; // rax
  unsigned __int8 v6; // dl
  unsigned int v7; // r8d
  unsigned __int16 v8; // r9
  unsigned __int64 result; // rax
  const _GUID *v10; // [rsp+20h] [rbp-48h]
  FxDeviceBase **p_pDeviceBase; // [rsp+50h] [rbp-18h] BYREF
  __int16 v12; // [rsp+58h] [rbp-10h]
  __int16 v13; // [rsp+5Ah] [rbp-Eh]
  FxDeviceBase *pDeviceBase; // [rsp+78h] [rbp+10h] BYREF

  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1030uLL);
  flags = (FxDeviceBase *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v4) = 0;
  if ( (Device & 1) != 0 )
  {
    v4 = LOWORD(flags->FxNonPagedObject::FxObject::__vftable);
    flags = (FxDeviceBase *)((char *)flags - v4);
  }
  if ( flags->m_Type == 4144 )
  {
    pDeviceBase = flags;
  }
  else
  {
    pDeviceBase = 0LL;
    p_pDeviceBase = &pDeviceBase;
    v5 = flags->FxNonPagedObject::FxObject::__vftable;
    v13 = v4;
    v12 = 4144;
    if ( v5->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pDeviceBase) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v6, v7, v8, v10, (const void *)Device, 0x1030u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Device, 0x1030uLL);
    }
    flags = pDeviceBase;
  }
  result = (unsigned __int64)flags->GetDefaultIoTarget(flags);
  if ( result )
  {
    if ( *(_WORD *)(result + 10) )
      result ^= 0xFFFFFFFFFFFFFFF8uLL;
    else
      return 0LL;
  }
  return result;
}
