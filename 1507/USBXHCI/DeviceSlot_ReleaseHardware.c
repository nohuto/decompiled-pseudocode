/*
 * XREFs of DeviceSlot_ReleaseHardware @ 0x1C004F7FC
 * Callers:
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C004F540 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1C0013F64 (CommonBuffer_ReleaseBuffer.c)
 *     CommonBuffer_ReleaseBuffers @ 0x1C001404C (CommonBuffer_ReleaseBuffers.c)
 */

void __fastcall DeviceSlot_ReleaseHardware(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  _DWORD *v4; // rdx
  __int64 v5; // rdx
  _QWORD *v6; // rdx
  void *v7; // rcx
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = a1[1];
  v3 = *(_QWORD *)(v1 + 88);
  v4 = *(_DWORD **)(*(_QWORD *)(v1 + 80) + 32LL);
  if ( a1[3] )
  {
    v4[14] = 0;
    _InterlockedOr(v8, 0);
    if ( (*(_BYTE *)(a1[1] + 232LL) & 1) != 0 )
    {
      v4[12] = 0;
      _InterlockedOr(v8, 0);
      v4[13] = 0;
    }
    else
    {
      *((_QWORD *)v4 + 6) = 0LL;
    }
    _InterlockedOr(v8, 0);
    CommonBuffer_ReleaseBuffer(v3, a1[3]);
    v5 = a1[5];
    if ( v5 )
    {
      CommonBuffer_ReleaseBuffer(v3, v5);
      a1[5] = 0LL;
    }
    v6 = a1 + 6;
    if ( (_QWORD *)*v6 != v6 )
      CommonBuffer_ReleaseBuffers(v3, v6);
    a1[3] = 0LL;
  }
  v7 = (void *)a1[4];
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x49434858u);
    a1[4] = 0LL;
  }
}
