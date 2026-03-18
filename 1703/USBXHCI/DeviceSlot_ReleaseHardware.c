/*
 * XREFs of DeviceSlot_ReleaseHardware @ 0x1C0054644
 * Callers:
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C0054360 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1C0019CD4 (CommonBuffer_ReleaseBuffer.c)
 *     CommonBuffer_ReleaseBuffers @ 0x1C0019DC0 (CommonBuffer_ReleaseBuffers.c)
 */

void __fastcall DeviceSlot_ReleaseHardware(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  _DWORD *v4; // rdx
  __int128 v5; // xmm0
  __int64 v6; // rdx
  _QWORD *v7; // rdx
  void *v8; // rcx
  signed __int32 v9[8]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v10; // [rsp+20h] [rbp-18h]

  v1 = a1[1];
  v3 = *(_QWORD *)(v1 + 88);
  v4 = *(_DWORD **)(*(_QWORD *)(v1 + 80) + 32LL);
  if ( a1[3] )
  {
    v4[14] = 0;
    _InterlockedOr(v9, 0);
    v5 = *(_OWORD *)(a1[1] + 232LL);
    v10 = v5;
    if ( (v5 & 1) != 0 )
    {
      v4[12] = 0;
      _InterlockedOr(v9, 0);
      v4[13] = 0;
    }
    else
    {
      *((_QWORD *)v4 + 6) = 0LL;
    }
    _InterlockedOr(v9, 0);
    CommonBuffer_ReleaseBuffer(v3, a1[3]);
    v6 = a1[5];
    if ( v6 )
    {
      CommonBuffer_ReleaseBuffer(v3, v6);
      a1[5] = 0LL;
    }
    v7 = a1 + 6;
    if ( (_QWORD *)*v7 != v7 )
      CommonBuffer_ReleaseBuffers(v3, v7);
    a1[3] = 0LL;
  }
  v8 = (void *)a1[4];
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x49434858u);
    a1[4] = 0LL;
  }
}
