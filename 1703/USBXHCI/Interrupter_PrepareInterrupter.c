/*
 * XREFs of Interrupter_PrepareInterrupter @ 0x1C004D6A0
 * Callers:
 *     Interrupter_PrepareHardware @ 0x1C004C728 (Interrupter_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002180 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0008748 (WPP_RECORDER_SF_qDD.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C0008830 (CommonBuffer_AcquireBuffer.c)
 *     RtlStringCchPrintfA @ 0x1C0008B60 (RtlStringCchPrintfA.c)
 *     CommonBuffer_AcquireBuffers @ 0x1C0009DD8 (CommonBuffer_AcquireBuffers.c)
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C0019CD4 (CommonBuffer_ReleaseBuffer.c)
 *     CommonBuffer_ReleaseBuffers @ 0x1C0019DC0 (CommonBuffer_ReleaseBuffers.c)
 *     Interrupter_DetermineSegmentSizeAndCount @ 0x1C004D604 (Interrupter_DetermineSegmentSizeAndCount.c)
 */

__int64 __fastcall Interrupter_PrepareInterrupter(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rdi
  __int64 v5; // r15
  KSPIN_LOCK *v6; // r14
  __int64 v7; // rcx
  __int64 *v8; // rax
  int v9; // eax
  unsigned int v10; // ebp
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *i; // rax
  __int64 v15; // rdx
  struct _DEVICE_OBJECT *v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  int v19; // edx
  __int64 v20; // rcx
  __int64 result; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  signed __int32 v24[8]; // [rsp+0h] [rbp-98h] BYREF
  int v25[2]; // [rsp+28h] [rbp-70h]
  __int64 v26; // [rsp+30h] [rbp-68h]
  __int64 v27; // [rsp+38h] [rbp-60h]
  __int64 v28; // [rsp+40h] [rbp-58h] BYREF
  int v29; // [rsp+48h] [rbp-50h]
  int v30; // [rsp+4Ch] [rbp-4Ch]
  __int64 v31; // [rsp+50h] [rbp-48h]
  char v32; // [rsp+58h] [rbp-40h]
  int v33; // [rsp+5Ch] [rbp-3Ch]
  char pszDest[16]; // [rsp+60h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = (_QWORD *)(a1 + 160);
  v5 = *(_QWORD *)(v2 + 80);
  v6 = *(KSPIN_LOCK **)(v2 + 88);
  *(_QWORD *)(a1 + 168) = a1 + 160;
  *(_QWORD *)(a1 + 160) = a1 + 160;
  *(_DWORD *)(a1 + 96) ^= (*(_DWORD *)(a1 + 96) ^ a2) & 1;
  Interrupter_DetermineSegmentSizeAndCount(a1);
  v8 = CommonBuffer_AcquireBuffer(v6, 16 * *(_DWORD *)(v7 + 108), v7, 0x31746E49u);
  *(_QWORD *)(a1 + 152) = v8;
  if ( v8 )
  {
    v9 = CommonBuffer_AcquireBuffers(v6, *(_DWORD *)(a1 + 108), *(_DWORD *)(a1 + 104), (int)v3, a1, 846491209, 0LL);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = *(_QWORD *)(v5 + 40) + 32 * (*(unsigned int *)(a1 + 32) + 1LL);
      *(_QWORD *)(a1 + 24) = v11;
      *(_DWORD *)(v11 + 8) = 0;
      _InterlockedOr(v24, 0);
      v12 = 0LL;
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 16LL);
      for ( i = (_QWORD *)*v3; v3 != i; i = (_QWORD *)*i )
      {
        v15 = (unsigned int)v12;
        v12 = (unsigned int)(v12 + 1);
        v15 *= 2LL;
        *(_QWORD *)(v13 + 8 * v15) = i[3];
        *(_WORD *)(v13 + 8 * v15 + 8) = *(_WORD *)(a1 + 116);
      }
      if ( WPP_MAIN_CB.Queue.Wcb.DeviceObject )
      {
        v16 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 248))(
                                         WdfDriverGlobals,
                                         **(_QWORD **)(a1 + 8),
                                         v12,
                                         v13);
        *(_QWORD *)(a1 + 200) = IoAllocateWorkItem(v16);
        KeInitializeEvent((PRKEVENT)(a1 + 176), NotificationEvent, 1u);
      }
      else
      {
        *(_QWORD *)(a1 + 200) = 0LL;
      }
      v17 = *(_QWORD *)(a1 + 8);
      v18 = *(_DWORD *)(a1 + 32);
      v28 = 48LL;
      pszDest[0] = 0;
      v33 = 16;
      v31 = 0LL;
      v32 = 0;
      v29 = 1024;
      v30 = 200;
      RtlStringCchPrintfA(pszDest, 0x10uLL, "%02d INT%02d", *(_DWORD *)(v17 + 144), v18);
      if ( (int)imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v28, a1 + 16) < 0 )
        *(_QWORD *)(a1 + 16) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL);
      v19 = *(_DWORD *)(a1 + 104);
      v20 = *(_QWORD *)(a1 + 8);
      LODWORD(v27) = *(_DWORD *)(a1 + 108);
      LODWORD(v26) = v19;
      WPP_RECORDER_SF_qDD(
        *(_QWORD *)(v20 + 64),
        4u,
        8u,
        0x16u,
        (__int64)&WPP_d9801d1a90713b0d37c531873c83c241_Traceguids,
        *(_QWORD *)(a1 + 24),
        v26,
        v27);
      result = 0LL;
      *(_DWORD *)(a1 + 100) = 1;
      return result;
    }
    v22 = *(_QWORD *)(a1 + 8);
    v25[0] = v9;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v22 + 64),
      2u,
      8u,
      0x15u,
      (__int64)&WPP_d9801d1a90713b0d37c531873c83c241_Traceguids,
      *(_QWORD *)v25);
  }
  else
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      2u,
      8u,
      0x14u,
      (__int64)&WPP_d9801d1a90713b0d37c531873c83c241_Traceguids);
    v10 = -1073741670;
  }
  v23 = *(_QWORD *)(a1 + 152);
  if ( v23 )
  {
    CommonBuffer_ReleaseBuffer((__int64)v6, v23);
    *(_QWORD *)(a1 + 152) = 0LL;
  }
  if ( (_QWORD *)*v3 != v3 )
    CommonBuffer_ReleaseBuffers((__int64)v6, v3);
  return v10;
}
