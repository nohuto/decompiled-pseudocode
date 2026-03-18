/*
 * XREFs of ?GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x1C00C7C1C
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C005D2A0 (xxxUserSetDisplayConfig.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1C008A260 (DrvSetDisplayConfigValidateParams.c)
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IIIPEAUDISPLAYCONFIG_MODE_INFO@@IHPEAU_D3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00C5AEC (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IIIPEAUD.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetTargetVirtualization(
        struct _LUID a1,
        __int64 a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a5,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a6)
{
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rax
  struct _LUID v17; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v18; // [rsp+58h] [rbp+10h] BYREF

  v18 = a2;
  v17 = a1;
  v8 = ((__int64 (__fastcall *)(struct _LUID *, __int64, struct _LUID *, unsigned int *))qword_1C011B830)(
         &v17,
         a2,
         &v17,
         &v18);
  v13 = v8;
  if ( v8 < 0
    || (v14 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))qword_1C011B840)(
                v17,
                v18,
                a3,
                a4,
                a5,
                a6),
        v13 = v14,
        v14 < 0) )
  {
    v15 = WdLogNewEntry5_WdError(v10, v9, v11, v12);
    *(_QWORD *)(v15 + 24) = v13;
    WdLogEvent5_WdError(v15);
  }
  return (unsigned int)v13;
}
