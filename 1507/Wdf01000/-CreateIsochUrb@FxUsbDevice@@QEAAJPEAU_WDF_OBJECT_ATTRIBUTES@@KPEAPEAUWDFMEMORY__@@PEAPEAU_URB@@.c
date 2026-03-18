/*
 * XREFs of ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C008BEA8
 * Callers:
 *     imp_WdfUsbTargetDeviceCreateIsochUrb @ 0x1C0086C20 (imp_WdfUsbTargetDeviceCreateIsochUrb.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ??0FxUsbUrb@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUUSBD_HANDLE__@@PEAX_K@Z @ 0x1C008B43C (--0FxUsbUrb@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUUSBD_HANDLE__@@PEAX_K@Z.c)
 *     ?IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z @ 0x1C008C9B0 (-IsObjectDisposedOnRemove@FxUsbDevice@@QEAAEPEAVFxObject@@@Z.c)
 *     USBD_IsochUrbAllocate @ 0x1C00A5A48 (USBD_IsochUrbAllocate.c)
 *     USBD_UrbFree @ 0x1C00A605C (USBD_UrbFree.c)
 */

__int64 __fastcall FxUsbDevice::CreateIsochUrb(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        unsigned int NumberOfIsochPackets,
        WDFMEMORY__ **UrbMemory,
        _URB **Urb)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  __int64 v10; // rdi
  int v11; // ebx
  unsigned __int64 ParentObject; // r8
  FxObject *v13; // rcx
  __int64 v14; // rdx
  FxUsbUrb *v15; // r10
  __int64 v16; // rax
  _URB **v17; // r14
  WDFMEMORY__ *hMemory; // [rsp+50h] [rbp-10h] BYREF
  ULONG_PTR retaddr; // [rsp+98h] [rbp+38h]
  _URB *urbLocal; // [rsp+A0h] [rbp+40h] BYREF
  FxObject *pParent; // [rsp+A8h] [rbp+48h] BYREF

  m_Globals = this->m_Globals;
  urbLocal = 0LL;
  v10 = 0LL;
  if ( !Attributes )
    goto LABEL_12;
  if ( Attributes->Size != 56 )
  {
    v11 = -1073741820;
    WPP_IFR_SF_qddd(
      m_Globals,
      (unsigned __int8)Attributes,
      6u,
      0xBu,
      WPP_FxValidateFunctions_hpp_Traceguids,
      Attributes,
      56,
      Attributes->Size,
      -1073741820);
    goto LABEL_28;
  }
  ParentObject = (unsigned __int64)Attributes->ParentObject;
  if ( ParentObject )
  {
    v13 = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
    LOWORD(v14) = 0;
    if ( (ParentObject & 1) != 0 )
    {
      v14 = LOWORD(v13->__vftable);
      v13 = (FxObject *)((char *)v13 - v14);
    }
    if ( v13->m_Type == 4096 )
    {
      pParent = v13;
    }
    else
    {
      FxObjectHandleGetPtrQI(v13, (void **)&pParent, (void *)ParentObject, 0x1000u, v14);
      v13 = pParent;
    }
    m_Globals = v13->m_Globals;
    if ( !FxUsbDevice::IsObjectDisposedOnRemove(this, v13) )
    {
      WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x23u, WPP_FxUsbDevice_cpp_Traceguids);
      v11 = -1073741811;
      goto LABEL_28;
    }
  }
  else
  {
LABEL_12:
    pParent = this;
  }
  v11 = FxValidateObjectAttributes(m_Globals, Attributes, 0, (unsigned __int16)UrbMemory);
  if ( v11 >= 0 )
  {
    if ( !UrbMemory )
      FxVerifierNullBugCheck(m_Globals, retaddr);
    *UrbMemory = 0LL;
    v11 = USBD_IsochUrbAllocate(this->m_USBDHandle, NumberOfIsochPackets, &urbLocal);
    if ( v11 < 0 )
    {
      urbLocal = 0LL;
      WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x24u, WPP_FxUsbDevice_cpp_Traceguids, v11);
      goto $Done_49;
    }
    v15 = (FxUsbUrb *)FxObjectHandleAlloc(
                        m_Globals,
                        ExDefaultNonPagedPoolType,
                        0x88uLL,
                        0,
                        Attributes,
                        0,
                        FxObjectTypeExternal);
    if ( v15 )
    {
      FxUsbUrb::FxUsbUrb(v15, m_Globals, this->m_USBDHandle, urbLocal, 12 * NumberOfIsochPackets + 152);
      v10 = v16;
    }
    if ( v10 )
    {
      urbLocal = 0LL;
      v11 = FxObject::Commit((FxObject *)v10, Attributes, (void **)&hMemory, pParent, 1u);
      if ( v11 < 0 )
      {
LABEL_26:
        if ( v10 )
          FxObject::DeleteFromFailedCreate((FxObject *)v10);
        goto LABEL_28;
      }
      v17 = Urb;
      *UrbMemory = hMemory;
      if ( v17 )
        *v17 = (_URB *)(**(__int64 (__fastcall ***)(__int64))(v10 + 104))(v10 + 104);
$Done_49:
      if ( v11 >= 0 )
        return (unsigned int)v11;
      goto LABEL_26;
    }
    v11 = -1073741670;
  }
LABEL_28:
  if ( urbLocal )
    USBD_UrbFree(this->m_USBDHandle, urbLocal);
  return (unsigned int)v11;
}
