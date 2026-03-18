/*
 * XREFs of ?IsVirtualModeDisabledForPath@@YAJU_LUID@@IPEAEPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C00BA6E8
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1C0086040 (DrvSetDisplayConfigValidateParams.c)
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IIIPEAUDISPLAYCONFIG_MODE_INFO@@IHPEAU_D3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00B7F4C (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IIIPEAUD.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IsVirtualModeDisabledForPath(
        struct _LUID a1,
        __int64 a2,
        unsigned __int8 *a3,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a4)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rax
  struct _LUID v15; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v16; // [rsp+48h] [rbp+10h] BYREF

  v16 = a2;
  v15 = a1;
  v6 = ((__int64 (__fastcall *)(struct _LUID *, __int64, struct _LUID *, unsigned int *))qword_1C01016C8)(
         &v15,
         a2,
         &v15,
         &v16);
  v11 = v6;
  if ( v6 < 0
    || (v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))qword_1C01016D8)(v15, v16, a3, a4),
        v11 = v12,
        v12 < 0) )
  {
    v13 = WdLogNewEntry5_WdError(v8, v7, v9, v10);
    *(_QWORD *)(v13 + 24) = v11;
    WdLogEvent5_WdError(v13);
  }
  return (unsigned int)v11;
}
