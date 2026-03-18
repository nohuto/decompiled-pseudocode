/*
 * XREFs of Interrupter_ReleaseInterrupter @ 0x1C0051AD8
 * Callers:
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C0050590 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1C001D504 (CommonBuffer_ReleaseBuffer.c)
 *     CommonBuffer_ReleaseBuffers @ 0x1C001D5EC (CommonBuffer_ReleaseBuffers.c)
 */

void __fastcall Interrupter_ReleaseInterrupter(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rdx
  struct _IO_WORKITEM *v7; // rcx
  __int64 v8; // rdx
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  if ( *(_DWORD *)(a1 + 108) == 1 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) = 0;
    _InterlockedOr(v9, 0);
    v3 = *(_QWORD *)(a1 + 24);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 232LL) & 1) != 0 )
    {
      *(_DWORD *)(v3 + 16) = 0;
      _InterlockedOr(v9, 0);
      *(_DWORD *)(v3 + 20) = 0;
    }
    else
    {
      *(_QWORD *)(v3 + 16) = 0LL;
    }
    _InterlockedOr(v9, 0);
    v4 = *(_QWORD *)(a1 + 24);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 232LL) & 1) != 0 )
    {
      *(_DWORD *)(v4 + 24) = 0;
      _InterlockedOr(v9, 0);
      *(_DWORD *)(v4 + 28) = 0;
    }
    else
    {
      *(_QWORD *)(v4 + 24) = 0LL;
    }
    _InterlockedOr(v9, 0);
    v5 = *(_QWORD *)(a1 + 160);
    if ( v5 )
    {
      CommonBuffer_ReleaseBuffer(v2, v5);
      *(_QWORD *)(a1 + 160) = 0LL;
    }
    v6 = (_QWORD *)(a1 + 168);
    if ( (_QWORD *)*v6 != v6 )
      CommonBuffer_ReleaseBuffers(v2, v6);
    v7 = *(struct _IO_WORKITEM **)(a1 + 208);
    if ( v7 )
    {
      IoFreeWorkItem(v7);
      *(_QWORD *)(a1 + 208) = 0LL;
    }
    v8 = *(_QWORD *)(a1 + 16);
    if ( v8 && v8 != *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL) )
      imp_WppRecorderLogDelete(WPP_GLOBAL_Control, v8);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  *(_DWORD *)(a1 + 108) = 2;
}
