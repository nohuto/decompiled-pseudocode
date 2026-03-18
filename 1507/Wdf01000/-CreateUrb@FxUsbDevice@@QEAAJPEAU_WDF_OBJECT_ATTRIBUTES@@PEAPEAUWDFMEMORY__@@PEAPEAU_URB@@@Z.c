/*
 * XREFs of ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C008C120
 * Callers:
 *     imp_WdfUsbTargetDeviceCreateUrb @ 0x1C0088E80 (imp_WdfUsbTargetDeviceCreateUrb.c)
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
 *     USBD_UrbAllocate @ 0x1C00A5E8C (USBD_UrbAllocate.c)
 *     USBD_UrbFree @ 0x1C00A605C (USBD_UrbFree.c)
 */

__int64 __fastcall FxUsbDevice::CreateUrb(
        FxUsbDevice *this,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFMEMORY__ **UrbMemory,
        _URB **Urb)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  __int64 v9; // rdi
  int v10; // ebx
  unsigned __int64 ParentObject; // r8
  FxObject *v12; // rcx
  __int64 v13; // rdx
  FxUsbUrb *v14; // rax
  __int64 v15; // rax
  WDFMEMORY__ *hMemory; // [rsp+50h] [rbp-10h] BYREF
  ULONG_PTR retaddr; // [rsp+98h] [rbp+38h]
  _URB *urbLocal; // [rsp+A0h] [rbp+40h] BYREF
  FxObject *pParent; // [rsp+A8h] [rbp+48h] BYREF

  m_Globals = this->m_Globals;
  urbLocal = 0LL;
  v9 = 0LL;
  if ( !Attributes )
    goto LABEL_12;
  if ( Attributes->Size != 56 )
  {
    v10 = -1073741820;
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
    v12 = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
    LOWORD(v13) = 0;
    if ( (ParentObject & 1) != 0 )
    {
      v13 = LOWORD(v12->__vftable);
      v12 = (FxObject *)((char *)v12 - v13);
    }
    if ( v12->m_Type == 4096 )
    {
      pParent = v12;
    }
    else
    {
      FxObjectHandleGetPtrQI(v12, (void **)&pParent, (void *)ParentObject, 0x1000u, v13);
      v12 = pParent;
    }
    m_Globals = v12->m_Globals;
    if ( !FxUsbDevice::IsObjectDisposedOnRemove(this, v12) )
    {
      WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x21u, WPP_FxUsbDevice_cpp_Traceguids);
      v10 = -1073741811;
      goto LABEL_28;
    }
  }
  else
  {
LABEL_12:
    pParent = this;
  }
  v10 = FxValidateObjectAttributes(m_Globals, Attributes, 0, (unsigned __int16)Urb);
  if ( v10 >= 0 )
  {
    if ( !UrbMemory )
      FxVerifierNullBugCheck(m_Globals, retaddr);
    *UrbMemory = 0LL;
    v10 = USBD_UrbAllocate(this->m_USBDHandle, &urbLocal);
    if ( v10 < 0 )
    {
      urbLocal = 0LL;
      WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x22u, WPP_FxUsbDevice_cpp_Traceguids, v10);
      goto $Done_50;
    }
    v14 = (FxUsbUrb *)FxObjectHandleAlloc(
                        m_Globals,
                        ExDefaultNonPagedPoolType,
                        0x88uLL,
                        0,
                        Attributes,
                        0,
                        FxObjectTypeExternal);
    if ( v14 )
    {
      FxUsbUrb::FxUsbUrb(v14, m_Globals, this->m_USBDHandle, urbLocal, 0x98uLL);
      v9 = v15;
    }
    if ( v9 )
    {
      urbLocal = 0LL;
      v10 = FxObject::Commit((FxObject *)v9, Attributes, (void **)&hMemory, pParent, 1u);
      if ( v10 < 0 )
      {
LABEL_26:
        if ( v9 )
          FxObject::DeleteFromFailedCreate((FxObject *)v9);
        goto LABEL_28;
      }
      *UrbMemory = hMemory;
      if ( Urb )
        *Urb = (_URB *)(**(__int64 (__fastcall ***)(__int64))(v9 + 104))(v9 + 104);
$Done_50:
      if ( v10 >= 0 )
        return (unsigned int)v10;
      goto LABEL_26;
    }
    v10 = -1073741670;
  }
LABEL_28:
  if ( urbLocal )
    USBD_UrbFree(this->m_USBDHandle, urbLocal);
  return (unsigned int)v10;
}
