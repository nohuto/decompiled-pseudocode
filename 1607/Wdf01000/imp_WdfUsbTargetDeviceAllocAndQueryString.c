/*
 * XREFs of imp_WdfUsbTargetDeviceAllocAndQueryString @ 0x1C0087670
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00023CC (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0008B90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000A070 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1C0014B44 (-_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0063E54 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C008E2FC (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceAllocAndQueryString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        _WDF_OBJECT_ATTRIBUTES *StringMemoryAttributes,
        WDFMEMORY__ **StringMemory,
        unsigned __int16 *NumCharacters,
        unsigned __int8 StringIndex,
        unsigned __int16 LangID)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int16 *v10; // rbx
  __int64 result; // rax
  unsigned __int16 v12; // r9
  unsigned __int16 v13; // r12
  int String; // edi
  FxMemoryObject *v15; // rsi
  unsigned __int16 *v16; // rax
  FxMemoryObject *pBuffer; // [rsp+40h] [rbp-10h] BYREF
  WDFMEMORY__ *hMemory; // [rsp+48h] [rbp-8h] BYREF
  ULONG_PTR retaddr; // [rsp+88h] [rbp+38h]
  unsigned __int16 numChars; // [rsp+90h] [rbp+40h] BYREF
  FxUsbDevice *pUsbDevice; // [rsp+A8h] [rbp+58h] BYREF

  numChars = 0;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice);
  m_Globals = pUsbDevice->m_Globals;
  if ( !StringMemory )
    FxVerifierNullBugCheck(pUsbDevice->m_Globals, retaddr);
  v10 = NumCharacters;
  *StringMemory = 0LL;
  if ( v10 )
    *v10 = 0;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(m_Globals, StringMemoryAttributes, 0, v12);
    if ( (int)result >= 0 )
    {
      v13 = LangID;
      String = FxUsbDevice::GetString(pUsbDevice, 0LL, &numChars, StringIndex, LangID, 0LL, 0LL);
      if ( String >= 0 && numChars )
      {
        if ( FxMemoryObject::_Create(
               m_Globals,
               StringMemoryAttributes,
               ExDefaultNonPagedPoolType,
               m_Globals->Tag,
               2LL * numChars,
               &pBuffer) < 0 )
          return 3221225626LL;
        v15 = pBuffer;
        String = FxObject::Commit(pBuffer, StringMemoryAttributes, (void **)&hMemory, 0LL, 1u);
        if ( String < 0
          || (v16 = (unsigned __int16 *)v15->GetBuffer(&v15->IFxMemory),
              String = FxUsbDevice::GetString(pUsbDevice, v16, &numChars, StringIndex, v13, 0LL, 0LL),
              String < 0) )
        {
          FxObject::DeleteFromFailedCreate(v15);
        }
        else
        {
          if ( v10 )
            *v10 = numChars;
          *StringMemory = hMemory;
        }
      }
      return (unsigned int)String;
    }
  }
  return result;
}
