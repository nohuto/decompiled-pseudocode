/*
 * XREFs of AudioServerGetStreamVpoContext @ 0x180073430
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ??0CVpoContextProxy@@QEAA@PEAUIStreamGroupProxy@@PEAUISaDeviceProxy@@PEAUIVpoContext@@@Z @ 0x180070844 (--0CVpoContextProxy@@QEAA@PEAUIStreamGroupProxy@@PEAUISaDeviceProxy@@PEAUIVpoContext@@@Z.c)
 *     ??_GCVpoContextProxy@@QEAAPEAXI@Z @ 0x180070A08 (--_GCVpoContextProxy@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall AudioServerGetStreamVpoContext(__int64 *a1, __int64 a2, CVpoContextProxy **a3)
{
  __int64 v3; // rax
  CVpoContextProxy *v6; // rbx
  int v7; // edi
  CVpoContextProxy *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  CVpoContextProxy *v13; // rax
  CVpoContextProxy *v14; // rax
  struct IVpoContext *v16; // [rsp+20h] [rbp-20h] BYREF
  struct IStreamGroupProxy *v17; // [rsp+28h] [rbp-18h] BYREF
  struct ISaDeviceProxy *v18; // [rsp+30h] [rbp-10h] BYREF
  struct ISaDeviceProxy *v19; // [rsp+60h] [rbp+20h] BYREF
  __int64 v20; // [rsp+78h] [rbp+38h] BYREF

  v3 = *a1;
  v17 = 0LL;
  v18 = 0LL;
  v16 = 0LL;
  v6 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, struct IStreamGroupProxy **))(v3 + 24))(a1, &v17);
  if ( v7 < 0 )
    goto LABEL_31;
  v7 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *, struct ISaDeviceProxy **))(*(_QWORD *)v17 + 176LL))(
         v17,
         &v18);
  if ( v7 < 0 )
    goto LABEL_31;
  if ( !v18 )
  {
    v19 = 0LL;
    v20 = 0LL;
    v9 = *(_QWORD *)g_DeviceGraphStore;
    v10 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v17 + 48LL))(v17);
    v11 = (*(__int64 (__fastcall **)(CDeviceGraphStore *, __int64, __int64 *))(v9 + 24))(g_DeviceGraphStore, v10, &v20);
    v12 = v20;
    v7 = v11;
    if ( v11 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, struct ISaDeviceProxy **))(*(_QWORD *)v20 + 96LL))(v20, &v19);
      if ( v7 >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(struct ISaDeviceProxy *, struct IVpoContext **))(*(_QWORD *)v19 + 96LL))(
               v19,
               &v16);
        if ( v7 >= 0 )
        {
          v13 = (CVpoContextProxy *)operator new(0x18uLL);
          if ( v13 )
            v6 = CVpoContextProxy::CVpoContextProxy(v13, 0LL, v19, v16);
          if ( !v6 )
          {
            v7 = -2147024882;
            if ( v20 )
              (*(void (**)(void))(*(_QWORD *)v20 + 16LL))();
            if ( v19 )
              (*(void (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v19 + 16LL))(v19);
            goto LABEL_31;
          }
          if ( v20 )
            (*(void (**)(void))(*(_QWORD *)v20 + 16LL))();
          if ( v19 )
            (*(void (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v19 + 16LL))(v19);
          goto LABEL_28;
        }
      }
      v12 = v20;
    }
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v19 )
      (*(void (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v19 + 16LL))(v19);
LABEL_30:
    if ( v7 >= 0 )
      goto LABEL_33;
    goto LABEL_31;
  }
  v7 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *, struct IVpoContext **))(*(_QWORD *)v17 + 200LL))(
         v17,
         &v16);
  if ( v7 < 0 )
    goto LABEL_31;
  v8 = (CVpoContextProxy *)operator new(0x18uLL);
  if ( v8 )
    v6 = CVpoContextProxy::CVpoContextProxy(v8, v17, v18, v16);
  if ( !v6 )
  {
    v7 = -2147024882;
    goto LABEL_31;
  }
LABEL_28:
  v7 = (*(__int64 (__fastcall **)(struct IVpoContext *, __int64))(*(_QWORD *)v16 + 32LL))(v16, a2);
  if ( v7 >= 0 )
  {
    v14 = v6;
    v6 = 0LL;
    *a3 = v14;
    goto LABEL_30;
  }
LABEL_31:
  AudSrvTraceLoggingErrorHelper("AudioServerGetStreamVpoContext", 2955, v7);
  if ( v6 )
    CVpoContextProxy::`scalar deleting destructor'(v6);
LABEL_33:
  if ( v16 )
    (*(void (__fastcall **)(struct IVpoContext *))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v18 )
    (*(void (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v17 )
    (*(void (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v17 + 16LL))(v17);
  return (unsigned int)v7;
}
