/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C00722DC
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C006EE0C (rimProcessDeviceBufferAndStartRead.c)
 *     RIMCALMPurgeContacts @ 0x1C0072214 (RIMCALMPurgeContacts.c)
 *     RIMAbortDeviceActivity @ 0x1C00C37A4 (RIMAbortDeviceActivity.c)
 *     RIMEndAllActiveContacts @ 0x1C00C3D88 (RIMEndAllActiveContacts.c)
 *     RIMPrepareLastStateDelivery @ 0x1C00C4414 (RIMPrepareLastStateDelivery.c)
 *     RIMUpdateDeviceFrameState @ 0x1C00C451C (RIMUpdateDeviceFrameState.c)
 *     traceFrame @ 0x1C00C8104 (traceFrame.c)
 *     RIMCALMAddAfterLifeContact @ 0x1C00C8F70 (RIMCALMAddAfterLifeContact.c)
 *     RIMCALMGetAfterLifePosition @ 0x1C00C9110 (RIMCALMGetAfterLifePosition.c)
 *     RIMGetMultiContactDeviceState @ 0x1C00CABDC (RIMGetMultiContactDeviceState.c)
 *     RIMReassessContactDelivery @ 0x1C00CBEA0 (RIMReassessContactDelivery.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_d(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v8; // rbx
  int v9; // eax
  int v11; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  v8 = (unsigned __int64)a3 >> 16;
  v9 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v9, (a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= 3u )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      va,
      4LL,
      0LL);
  LOWORD(v11) = a4;
  return WppAutoLogTrace(a1, 3LL, a3, a5, v11, va);
}
