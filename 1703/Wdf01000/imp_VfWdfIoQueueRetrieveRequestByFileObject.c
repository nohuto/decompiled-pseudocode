/*
 * XREFs of imp_VfWdfIoQueueRetrieveRequestByFileObject @ 0x1C00CF200
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C003E280 (__security_check_cookie.c)
 *     Template_cpp @ 0x1C0075614 (Template_cpp.c)
 */

__int64 __fastcall imp_VfWdfIoQueueRetrieveRequestByFileObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        WDFFILEOBJECT__ *FileObject,
        WDFREQUEST__ **OutRequest)
{
  unsigned int v5; // edi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int16 *v8; // rcx
  _FX_DRIVER_GLOBALS *v9; // rcx
  int (__fastcall *_Arg2)(WDFDRIVER__ *, WDFDEVICE_INIT *); // rbx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int16 v13; // ax
  const void *RegHandle; // rdx
  void *PPObject; // [rsp+30h] [rbp-38h] BYREF
  _GUID ActivityId; // [rsp+38h] [rbp-30h] BYREF

  v5 = ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFQUEUE__ *, WDFFILEOBJECT__ *))WdfVersion.Functions.pfnWdfIoQueueRetrieveRequestByFileObject)(
         DriverGlobals,
         Queue,
         FileObject);
  if ( !v5 )
  {
    v6 = (unsigned __int64)*OutRequest;
    v7 = (unsigned __int64)*OutRequest;
    *(_QWORD *)&ActivityId.Data1 = 0LL;
    *(_QWORD *)ActivityId.Data4 = 0LL;
    v8 = (unsigned __int16 *)(~v7 & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (v6 & 1) != 0 )
      v8 = (unsigned __int16 *)((char *)v8 - *v8);
    v9 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v8 + 2);
    if ( (v9->FxEnhancedVerifierOptions & 0xF00000) != 0 )
    {
      _Arg2 = v9->Driver->m_DriverDeviceAdd.Method;
      FxObjectHandleGetPtr(v9, v6, 0x1008u, &PPObject);
      if ( (unsigned int)IoGetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId) == -1073741275 )
      {
        EtwActivityIdControl(3u, &ActivityId);
        IoSetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId);
      }
      if ( ((__int64)WPP_GLOBAL_WDF_Control.Queue.Wcb.BufferChainingDpc & 1) != 0 )
      {
        v11 = 0LL;
        if ( !*((_BYTE *)PPObject + 214) )
          v11 = *((_QWORD *)PPObject + 31);
        v12 = *(_QWORD *)(v11 + 96);
        v13 = *(_WORD *)(v12 + 10);
        RegHandle = (const void *)(v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v13 )
          RegHandle = 0LL;
        Template_cpp(
          *(_QWORD *)(*((_QWORD *)PPObject + 19) + 184LL),
          &FX_REQUEST_START,
          &ActivityId,
          **(_BYTE **)(*((_QWORD *)PPObject + 19) + 184LL),
          _Arg2,
          RegHandle);
      }
    }
  }
  return v5;
}
