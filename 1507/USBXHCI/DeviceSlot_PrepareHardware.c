/*
 * XREFs of DeviceSlot_PrepareHardware @ 0x1C0048360
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C004AEE0 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C0005400 (CommonBuffer_AcquireBuffer.c)
 *     CommonBuffer_AcquireBuffers @ 0x1C00058A4 (CommonBuffer_AcquireBuffers.c)
 *     WPP_RECORDER_SF_q @ 0x1C0005E40 (WPP_RECORDER_SF_q.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C0013F64 (CommonBuffer_ReleaseBuffer.c)
 *     CommonBuffer_ReleaseBuffers @ 0x1C001404C (CommonBuffer_ReleaseBuffers.c)
 */

__int64 __fastcall DeviceSlot_PrepareHardware(__int64 a1)
{
  __int64 v1; // rax
  KSPIN_LOCK *v3; // r14
  __int64 v4; // r15
  __int64 *v5; // rax
  int v6; // edx
  __int64 *v7; // rax
  int v8; // eax
  unsigned int v9; // esi
  _QWORD *v10; // r8
  __int64 v11; // r9
  unsigned int i; // eax
  __int64 v13; // rdx
  int v14; // eax
  POOL_TYPE v15; // ecx
  SIZE_T v16; // rdi
  PVOID PoolWithTag; // rax
  unsigned __int16 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rdx
  _QWORD *v22; // rdx
  void *v23; // rcx
  int v24[2]; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(KSPIN_LOCK **)(v1 + 88);
  v4 = *(_QWORD *)(v1 + 80);
  v5 = CommonBuffer_AcquireBuffer(v3, 0x1000u, a1, 0x31746C53u);
  *(_QWORD *)(a1 + 24) = v5;
  if ( !v5 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      2u,
      9u,
      0xCu,
      (__int64)&WPP_8f3cd058beeffb6efe52ec5bc38919c3_Traceguids);
LABEL_15:
    v9 = -1073741670;
    goto LABEL_16;
  }
  *(_QWORD *)(a1 + 56) = a1 + 48;
  *(_QWORD *)(a1 + 48) = a1 + 48;
  v6 = *(_DWORD *)(v4 + 96);
  *(_DWORD *)(a1 + 20) = v6;
  if ( !v6 )
    goto LABEL_8;
  v7 = CommonBuffer_AcquireBuffer(v3, 8 * v6, a1, 0x32746C53u);
  *(_QWORD *)(a1 + 40) = v7;
  if ( !v7 )
  {
    v19 = 13;
LABEL_14:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      2u,
      9u,
      v19,
      (__int64)&WPP_8f3cd058beeffb6efe52ec5bc38919c3_Traceguids);
    goto LABEL_15;
  }
  v8 = CommonBuffer_AcquireBuffers(v3, *(_DWORD *)(a1 + 20), 0x1000u, (int)a1 + 48, a1, 863267923, 0LL);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = *(_QWORD **)(a1 + 48);
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL);
    for ( i = 0; i < *(_DWORD *)(a1 + 20); v10 = (_QWORD *)*v10 )
    {
      v13 = i++;
      *(_QWORD *)(v11 + 8 * v13) = v10[3];
    }
    **(_QWORD **)(*(_QWORD *)(a1 + 24) + 16LL) = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 24LL);
LABEL_8:
    v14 = *(_DWORD *)(v4 + 80);
    v15 = *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type;
    *(_DWORD *)(a1 + 16) = v14;
    v16 = 8LL * (unsigned int)(v14 + 1);
    PoolWithTag = ExAllocatePoolWithTag(v15, v16, 0x49434858u);
    *(_QWORD *)(a1 + 32) = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v16);
      WPP_RECORDER_SF_q(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
        4u,
        9u,
        0x10u,
        (__int64)&WPP_8f3cd058beeffb6efe52ec5bc38919c3_Traceguids,
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL));
      return 0LL;
    }
    v19 = 15;
    goto LABEL_14;
  }
  v24[0] = v8;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    2u,
    9u,
    0xEu,
    (__int64)&WPP_8f3cd058beeffb6efe52ec5bc38919c3_Traceguids,
    *(_QWORD *)v24);
LABEL_16:
  v20 = *(_QWORD *)(a1 + 24);
  if ( v20 )
  {
    CommonBuffer_ReleaseBuffer((__int64)v3, v20);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  v21 = *(_QWORD *)(a1 + 40);
  if ( v21 )
  {
    CommonBuffer_ReleaseBuffer((__int64)v3, v21);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v22 = (_QWORD *)(a1 + 48);
  if ( (_QWORD *)*v22 != v22 )
    CommonBuffer_ReleaseBuffers((__int64)v3, v22);
  v23 = *(void **)(a1 + 32);
  if ( v23 )
  {
    ExFreePoolWithTag(v23, 0x49434858u);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  return v9;
}
