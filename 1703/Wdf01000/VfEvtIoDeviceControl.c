/*
 * XREFs of VfEvtIoDeviceControl @ 0x1C00D3060
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C003E280 (__security_check_cookie.c)
 *     Template_cpp @ 0x1C0075614 (Template_cpp.c)
 *     VerifyCriticalRegionEntry @ 0x1C0075AF8 (VerifyCriticalRegionEntry.c)
 *     VerifyCriticalRegionExit @ 0x1C0075B20 (VerifyCriticalRegionExit.c)
 *     VerifyIrqlExit @ 0x1C0075B78 (VerifyIrqlExit.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00D212C (VfWdfObjectGetTypedContext.c)
 */

void __fastcall VfEvtIoDeviceControl(
        WDFQUEUE__ *Queue,
        unsigned __int64 Request,
        unsigned __int64 OutputBufferLength,
        unsigned __int64 InputBufferLength,
        unsigned int IoControlCode)
{
  char *TypedContext; // r14
  void (__fastcall *v10)(WDFQUEUE__ *, unsigned __int64, unsigned __int64, unsigned __int64, unsigned int); // rsi
  unsigned __int16 *v11; // rcx
  _FX_DRIVER_GLOBALS *v12; // rcx
  int (__fastcall *_Arg2)(WDFDRIVER__ *, WDFDEVICE_INIT *); // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int16 v16; // ax
  const void *RegHandle; // rcx
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 critRegion[8]; // [rsp+30h] [rbp-38h] BYREF
  void *PPObject; // [rsp+38h] [rbp-30h] BYREF
  _GUID ActivityId; // [rsp+40h] [rbp-28h] BYREF

  TypedContext = VfWdfObjectGetTypedContext((unsigned __int64)Queue, &WDF_VF_WDFIOQUEUECREATE_CONTEXT_TYPE_INFO);
  v10 = (void (__fastcall *)(WDFQUEUE__ *, unsigned __int64, unsigned __int64, unsigned __int64, unsigned int))*((_QWORD *)TypedContext + 6);
  if ( v10 )
  {
    *(_QWORD *)&ActivityId.Data1 = 0LL;
    v11 = (unsigned __int16 *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)ActivityId.Data4 = 0LL;
    if ( (Request & 1) != 0 )
      v11 = (unsigned __int16 *)((char *)v11 - *v11);
    v12 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v11 + 2);
    if ( (v12->FxEnhancedVerifierOptions & 0xF00000) != 0 )
    {
      _Arg2 = v12->Driver->m_DriverDeviceAdd.Method;
      FxObjectHandleGetPtr(v12, Request, 0x1008u, &PPObject);
      if ( (unsigned int)IoGetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId) == -1073741275 )
      {
        EtwActivityIdControl(3u, &ActivityId);
        IoSetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId);
      }
      if ( ((__int64)WPP_GLOBAL_WDF_Control.Queue.Wcb.BufferChainingDpc & 1) != 0 )
      {
        v14 = 0LL;
        if ( !*((_BYTE *)PPObject + 214) )
          v14 = *((_QWORD *)PPObject + 31);
        v15 = *(_QWORD *)(v14 + 96);
        v16 = *(_WORD *)(v15 + 10);
        RegHandle = (const void *)(v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v16 )
          RegHandle = 0LL;
        Template_cpp(
          (unsigned __int64)RegHandle,
          &FX_REQUEST_START,
          &ActivityId,
          **(_BYTE **)(*((_QWORD *)PPObject + 19) + 184LL),
          _Arg2,
          RegHandle);
      }
      v10(Queue, Request, OutputBufferLength, InputBufferLength, IoControlCode);
    }
    else
    {
      critRegion[0] = 0;
      CurrentIrql = KeGetCurrentIrql();
      VerifyCriticalRegionEntry(critRegion);
      v10(Queue, Request, OutputBufferLength, InputBufferLength, IoControlCode);
      VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
      VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion[0], (unsigned __int64)v10);
    }
  }
}
