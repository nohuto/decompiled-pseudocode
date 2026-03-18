/*
 * XREFs of Interrupter_ReleaseInterrupter @ 0x1C0055768
 * Callers:
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C0054360 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1C0019CD4 (CommonBuffer_ReleaseBuffer.c)
 *     CommonBuffer_ReleaseBuffers @ 0x1C0019DC0 (CommonBuffer_ReleaseBuffers.c)
 */

void __fastcall Interrupter_ReleaseInterrupter(__int64 a1)
{
  __int64 v2; // rdi
  __int128 v3; // xmm0
  __int64 v4; // rax
  __int64 v5; // rax
  char v6; // cl
  __int64 v7; // rdx
  _QWORD *v8; // rdx
  struct _IO_WORKITEM *v9; // rcx
  __int64 v10; // rdx
  signed __int32 v11[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v12; // [rsp+20h] [rbp-28h]
  __int128 v13; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  if ( *(_DWORD *)(a1 + 100) == 1 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) = 0;
    _InterlockedOr(v11, 0);
    v3 = *(_OWORD *)(*(_QWORD *)(a1 + 8) + 232LL);
    v4 = *(_QWORD *)(a1 + 24);
    v12 = v3;
    if ( (v3 & 1) != 0 )
    {
      *(_DWORD *)(v4 + 16) = 0;
      _InterlockedOr(v11, 0);
      *(_DWORD *)(v4 + 20) = 0;
    }
    else
    {
      *(_QWORD *)(v4 + 16) = 0LL;
    }
    _InterlockedOr(v11, 0);
    v5 = *(_QWORD *)(a1 + 24);
    v6 = *(_OWORD *)(*(_QWORD *)(a1 + 8) + 232LL) & 1;
    v13 = *(_OWORD *)(*(_QWORD *)(a1 + 8) + 232LL);
    if ( v6 )
    {
      *(_DWORD *)(v5 + 24) = 0;
      _InterlockedOr(v11, 0);
      *(_DWORD *)(v5 + 28) = 0;
    }
    else
    {
      *(_QWORD *)(v5 + 24) = 0LL;
    }
    _InterlockedOr(v11, 0);
    v7 = *(_QWORD *)(a1 + 152);
    if ( v7 )
    {
      CommonBuffer_ReleaseBuffer(v2, v7);
      *(_QWORD *)(a1 + 152) = 0LL;
    }
    v8 = (_QWORD *)(a1 + 160);
    if ( (_QWORD *)*v8 != v8 )
      CommonBuffer_ReleaseBuffers(v2, v8);
    v9 = *(struct _IO_WORKITEM **)(a1 + 200);
    if ( v9 )
    {
      IoFreeWorkItem(v9);
      *(_QWORD *)(a1 + 200) = 0LL;
    }
    v10 = *(_QWORD *)(a1 + 16);
    if ( v10 && v10 != *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL) )
      imp_WppRecorderLogDelete(WPP_GLOBAL_Control, v10);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  *(_DWORD *)(a1 + 100) = 2;
}
