/*
 * XREFs of AudioServerGetEndpointVpoContext @ 0x180089C90
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCVpoContextProxy@@QEAAPEAXI@Z @ 0x180001888 (--_GCVpoContextProxy@@QEAAPEAXI@Z.c)
 *     ??0CVpoContextProxy@@QEAA@PEAUIStreamGroupProxy@@PEAUISaDeviceProxy@@PEAUIVpoContext@@@Z @ 0x180001914 (--0CVpoContextProxy@@QEAA@PEAUIStreamGroupProxy@@PEAUISaDeviceProxy@@PEAUIVpoContext@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioServerGetEndpointVpoContext(__int64 a1, __int64 a2, __int64 a3, CVpoContextProxy **a4)
{
  CVpoContextProxy *v4; // r15
  CVpoContextProxy *v7; // rdi
  int v8; // r14d
  CVpoContextProxy *v9; // rax
  struct IVpoContext *v11; // [rsp+20h] [rbp-20h] BYREF
  struct ISaDeviceProxy *v12; // [rsp+28h] [rbp-18h] BYREF
  __int64 v13; // [rsp+30h] [rbp-10h] BYREF

  v4 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  v13 = 0LL;
  v7 = 0LL;
  v8 = (*(__int64 (__fastcall **)(CDeviceGraphStore *, __int64, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
         g_DeviceGraphStore,
         a2,
         &v13);
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, struct ISaDeviceProxy **))(*(_QWORD *)v13 + 40LL))(v13, &v12);
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(struct ISaDeviceProxy *, struct IVpoContext **))(*(_QWORD *)v12 + 96LL))(
             v12,
             &v11);
      if ( v8 >= 0 )
      {
        v9 = (CVpoContextProxy *)operator new(0x18uLL);
        if ( v9 )
          v4 = CVpoContextProxy::CVpoContextProxy(v9, 0LL, v12, v11);
        v7 = v4;
        if ( v4 )
        {
          v8 = (*(__int64 (__fastcall **)(struct IVpoContext *, __int64))(*(_QWORD *)v11 + 32LL))(v11, a3);
          if ( v8 >= 0 )
          {
            v7 = 0LL;
            *a4 = v4;
            goto LABEL_12;
          }
        }
        else
        {
          v8 = -2147024882;
        }
      }
    }
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x50u, (__int64)&WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids, v8);
  }
LABEL_12:
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v7 )
    CVpoContextProxy::`scalar deleting destructor'(v7);
  if ( v11 )
    (*(void (__fastcall **)(struct IVpoContext *))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v12 )
    (*(void (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)v8;
}
