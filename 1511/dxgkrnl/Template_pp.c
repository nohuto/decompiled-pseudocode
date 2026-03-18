/*
 * XREFs of Template_pp @ 0x1C001E898
 * Callers:
 *     ?DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C0093020 (-DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z.c)
 *     ?DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C0097574 (-DxgkOpenSynchronizationObjectInternal@@YAJPEAU_D3DKMT_OPENSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle @ 0x1C00C2440 (DxgkOpenSyncObjectFromNtHandle.c)
 *     DxgkOpenSyncObjectFromNtHandle2 @ 0x1C0147720 (DxgkOpenSyncObjectFromNtHandle2.c)
 *     ?ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z @ 0x1C015154C (-ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z.c)
 *     DpiMiracastDdiMiracastDestroyContext @ 0x1C016D7BC (DpiMiracastDdiMiracastDestroyContext.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 */

NTSTATUS Template_pp(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF
  va_list v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  __int64 v8; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  va_copy((va_list)v4.Ptr, va);
  v4.Size = 8;
  v4.Reserved = 0;
  va_copy(v5, va1);
  v6 = 8;
  v7 = 0;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 2u, &v4);
}
