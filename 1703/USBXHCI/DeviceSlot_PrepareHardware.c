/*
 * XREFs of DeviceSlot_PrepareHardware @ 0x1C004D8E0
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C004C600 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002180 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C0008830 (CommonBuffer_AcquireBuffer.c)
 *     WPP_RECORDER_SF_q @ 0x1C0009BA0 (WPP_RECORDER_SF_q.c)
 *     CommonBuffer_AcquireBuffers @ 0x1C0009DD8 (CommonBuffer_AcquireBuffers.c)
 *     memset @ 0x1C0010E80 (memset.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C0019CD4 (CommonBuffer_ReleaseBuffer.c)
 *     CommonBuffer_ReleaseBuffers @ 0x1C0019DC0 (CommonBuffer_ReleaseBuffers.c)
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
  SIZE_T v15; // rdi
  PVOID PoolWithTag; // rax
  unsigned __int16 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rdx
  _QWORD *v21; // rdx
  void *v22; // rcx
  int v23[2]; // [rsp+28h] [rbp-30h]

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
      (__int64)&WPP_456b2d758866307348448590413771d8_Traceguids);
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
    v18 = 13;
LABEL_14:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
      2u,
      9u,
      v18,
      (__int64)&WPP_456b2d758866307348448590413771d8_Traceguids);
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
    *(_DWORD *)(a1 + 16) = v14;
    v15 = 8LL * (unsigned int)(v14 + 1);
    PoolWithTag = ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), v15, 0x49434858u);
    *(_QWORD *)(a1 + 32) = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v15);
      WPP_RECORDER_SF_q(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
        4u,
        9u,
        0x10u,
        (__int64)&WPP_456b2d758866307348448590413771d8_Traceguids,
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL));
      return 0LL;
    }
    v18 = 15;
    goto LABEL_14;
  }
  v23[0] = v8;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
    2u,
    9u,
    0xEu,
    (__int64)&WPP_456b2d758866307348448590413771d8_Traceguids,
    *(_QWORD *)v23);
LABEL_16:
  v19 = *(_QWORD *)(a1 + 24);
  if ( v19 )
  {
    CommonBuffer_ReleaseBuffer((__int64)v3, v19);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  v20 = *(_QWORD *)(a1 + 40);
  if ( v20 )
  {
    CommonBuffer_ReleaseBuffer((__int64)v3, v20);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v21 = (_QWORD *)(a1 + 48);
  if ( (_QWORD *)*v21 != v21 )
    CommonBuffer_ReleaseBuffers((__int64)v3, v21);
  v22 = *(void **)(a1 + 32);
  if ( v22 )
  {
    ExFreePoolWithTag(v22, 0x49434858u);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  return v9;
}
