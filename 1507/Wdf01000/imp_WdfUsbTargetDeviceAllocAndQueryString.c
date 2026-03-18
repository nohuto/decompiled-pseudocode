/*
 * XREFs of imp_WdfUsbTargetDeviceAllocAndQueryString @ 0x1C0086910
 * Callers:
 *     <none>
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1C0025DCC (-_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C008DF8C (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceAllocAndQueryString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 UsbDevice,
        _WDF_OBJECT_ATTRIBUTES *StringMemoryAttributes,
        WDFMEMORY__ **StringMemory,
        unsigned __int16 *NumCharacters,
        unsigned __int8 StringIndex,
        unsigned __int16 LangID)
{
  FxUsbDevice *v9; // rcx
  __int64 Offset; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int16 *v12; // rdi
  unsigned __int8 CurrentIrql; // al
  __int64 result; // rax
  unsigned __int16 v15; // r12
  int String; // esi
  FxMemoryObject *v17; // rbx
  unsigned __int16 *v18; // rax
  FxUsbDevice *pUsbDevice; // [rsp+40h] [rbp-20h] BYREF
  FxMemoryObject *pBuffer; // [rsp+48h] [rbp-18h] BYREF
  WDFMEMORY__ *hMemory; // [rsp+50h] [rbp-10h] BYREF
  ULONG_PTR retaddr; // [rsp+88h] [rbp+28h]
  int numChars; // [rsp+98h] [rbp+38h] BYREF

  LOWORD(numChars) = 0;
  if ( !UsbDevice )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1202uLL);
  v9 = (FxUsbDevice *)(~UsbDevice & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (UsbDevice & 1) != 0 )
  {
    Offset = LOWORD(v9->__vftable);
    v9 = (FxUsbDevice *)((char *)v9 - Offset);
  }
  if ( v9->m_Type == 4610 )
  {
    pUsbDevice = v9;
  }
  else
  {
    FxObjectHandleGetPtrQI(v9, (void **)&pUsbDevice, (void *)UsbDevice, 0x1202u, Offset);
    v9 = pUsbDevice;
  }
  m_Globals = v9->m_Globals;
  if ( !StringMemory )
    FxVerifierNullBugCheck(v9->m_Globals, retaddr);
  v12 = NumCharacters;
  *StringMemory = 0LL;
  if ( v12 )
    *v12 = 0;
  if ( m_Globals->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql()) != 0 )
  {
    WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
    numChars = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return 3221225488LL;
  }
  else
  {
    result = FxValidateObjectAttributes(m_Globals, StringMemoryAttributes, 0, (unsigned __int16)StringMemory);
    if ( (int)result < 0 )
      return result;
    v15 = LangID;
    String = FxUsbDevice::GetString(pUsbDevice, 0LL, (unsigned __int16 *)&numChars, StringIndex, LangID, 0LL, 0LL);
    if ( String >= 0 && (_WORD)numChars )
    {
      if ( FxMemoryObject::_Create(
             m_Globals,
             StringMemoryAttributes,
             ExDefaultNonPagedPoolType,
             m_Globals->Tag,
             2LL * (unsigned __int16)numChars,
             &pBuffer) < 0 )
        return 3221225626LL;
      v17 = pBuffer;
      String = FxObject::Commit(pBuffer, StringMemoryAttributes, (void **)&hMemory, 0LL, 1u);
      if ( String < 0
        || (v18 = (unsigned __int16 *)v17->GetBuffer(&v17->IFxMemory),
            String = FxUsbDevice::GetString(pUsbDevice, v18, (unsigned __int16 *)&numChars, StringIndex, v15, 0LL, 0LL),
            String < 0) )
      {
        FxObject::DeleteFromFailedCreate(v17);
      }
      else
      {
        if ( v12 )
          *v12 = numChars;
        *StringMemory = hMemory;
      }
    }
    return (unsigned int)String;
  }
}
