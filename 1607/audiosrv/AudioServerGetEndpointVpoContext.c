/*
 * XREFs of AudioServerGetEndpointVpoContext @ 0x180072FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ??0CVpoContextProxy@@QEAA@PEAUIStreamGroupProxy@@PEAUISaDeviceProxy@@PEAUIVpoContext@@@Z @ 0x180070844 (--0CVpoContextProxy@@QEAA@PEAUIStreamGroupProxy@@PEAUISaDeviceProxy@@PEAUIVpoContext@@@Z.c)
 *     ??_GCVpoContextProxy@@QEAAPEAXI@Z @ 0x180070A08 (--_GCVpoContextProxy@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall AudioServerGetEndpointVpoContext(__int64 a1, __int64 a2, __int64 a3, CVpoContextProxy **a4)
{
  CVpoContextProxy *v5; // rbx
  int v7; // edi
  CVpoContextProxy *v8; // rax
  CVpoContextProxy *v9; // rsi
  struct IVpoContext *v11; // [rsp+20h] [rbp-20h] BYREF
  struct ISaDeviceProxy *v12; // [rsp+28h] [rbp-18h] BYREF
  __int64 v13; // [rsp+30h] [rbp-10h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  v5 = 0LL;
  v13 = 0LL;
  v7 = (*(__int64 (__fastcall **)(CDeviceGraphStore *, __int64, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
         g_DeviceGraphStore,
         a2,
         &v13);
  if ( v7 < 0 )
    goto LABEL_9;
  v7 = (*(__int64 (__fastcall **)(__int64, struct ISaDeviceProxy **))(*(_QWORD *)v13 + 96LL))(v13, &v12);
  if ( v7 < 0 )
    goto LABEL_9;
  v7 = (*(__int64 (__fastcall **)(struct ISaDeviceProxy *, struct IVpoContext **))(*(_QWORD *)v12 + 96LL))(v12, &v11);
  if ( v7 < 0 )
    goto LABEL_9;
  v8 = (CVpoContextProxy *)operator new(0x18uLL);
  if ( v8 )
    v9 = CVpoContextProxy::CVpoContextProxy(v8, 0LL, v12, v11);
  else
    v9 = 0LL;
  v5 = v9;
  if ( !v9 )
  {
    v7 = -2147024882;
LABEL_9:
    AudSrvTraceLoggingErrorHelper("AudioServerGetEndpointVpoContext", 2997, v7);
    goto LABEL_10;
  }
  v7 = (*(__int64 (__fastcall **)(struct IVpoContext *, __int64))(*(_QWORD *)v11 + 32LL))(v11, a3);
  if ( v7 < 0 )
    goto LABEL_9;
  v5 = 0LL;
  *a4 = v9;
LABEL_10:
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v5 )
    CVpoContextProxy::`scalar deleting destructor'(v5);
  if ( v11 )
    (*(void (__fastcall **)(struct IVpoContext *))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v12 )
    (*(void (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)v7;
}
