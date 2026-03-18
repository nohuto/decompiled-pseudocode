/*
 * XREFs of imp_WdfRequestCreateFromIrp @ 0x1C006E3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C00754EC (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfRequestCreateFromIrp(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes,
        _IRP *Irp,
        unsigned __int8 RequestFreesIrp,
        WDFREQUEST__ **Request)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int64 ParentObject; // r8
  FxObject *v10; // rcx
  __int64 Offset; // rdx
  WDFREQUEST__ **v12; // rbx
  int result; // eax
  unsigned __int64 v14; // rcx
  void *retaddr; // [rsp+58h] [rbp+0h]
  void *PPObject; // [rsp+60h] [rbp+8h] BYREF
  FxRequest *pRequest; // [rsp+68h] [rbp+10h] BYREF

  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  if ( RequestAttributes )
  {
    ParentObject = (unsigned __int64)RequestAttributes->ParentObject;
    if ( ParentObject )
    {
      v10 = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
      LOWORD(Offset) = 0;
      if ( (ParentObject & 1) != 0 )
      {
        Offset = LOWORD(v10->__vftable);
        v10 = (FxObject *)((char *)v10 - Offset);
      }
      if ( v10->m_Type == 4096 )
      {
        PPObject = v10;
      }
      else
      {
        FxObjectHandleGetPtrQI(v10, &PPObject, (void *)ParentObject, 0x1000u, Offset);
        v10 = (FxObject *)PPObject;
      }
      m_Globals = v10->m_Globals;
    }
  }
  if ( !Irp )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v12 = Request;
  if ( !Request )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *Request = 0LL;
  result = FxRequest::_Create(
             m_Globals,
             RequestAttributes,
             Irp,
             0LL,
             (FxRequestIrpOwnership)(2 - (RequestFreesIrp != 0)),
             FxRequestConstructorCallerIsDriver,
             &pRequest);
  if ( result >= 0 )
  {
    if ( pRequest->m_ObjectSize )
      v14 = (unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v14 = 0LL;
    *v12 = (WDFREQUEST__ *)v14;
  }
  return result;
}
