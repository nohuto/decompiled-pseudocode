/*
 * XREFs of ?CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01E6F3C
 * Callers:
 *     ?UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C01C1E24 (-UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 *     ?CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01E6C7C (-CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@.c)
 *     ?CreateShellGestureFrame@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01E7000 (-CreateShellGestureFrame@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 *     ?GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HHKPEAH@Z @ 0x1C01E7B6C (-GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01EC198 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     ?FreePointerRawDataList@@YAXPEAUtagPOINTERRAWDATA@@@Z @ 0x1C01C0D20 (-FreePointerRawDataList@@YAXPEAUtagPOINTERRAWDATA@@@Z.c)
 */

void __fastcall CleanupGestureCache(struct tagTPSTATE *a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rcx
  _DWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8

  v4 = (_QWORD *)((char *)a1 + 1672);
  if ( *v4 )
  {
    HMAssignmentUnlock(v4);
    *((_DWORD *)a1 + 480) &= ~0x1000000u;
    *((_DWORD *)a1 + 481) = 0;
  }
  v5 = (_DWORD *)((char *)a1 + 264);
  v6 = 6LL;
  do
  {
    *v5 &= ~0x40u;
    v5 += 68;
    --v6;
  }
  while ( v6 );
  *((_DWORD *)a1 + 480) &= ~0x400u;
  v7 = *((_QWORD *)a1 + 239);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 88);
    if ( v8 )
      Win32FreePool(v8, a2, a3);
    v9 = *(_QWORD *)(*((_QWORD *)a1 + 239) + 96LL);
    if ( v9 )
      Win32FreePool(v9, a2, a3);
    v10 = (_QWORD *)(*((_QWORD *)a1 + 239) + 104LL);
    if ( *v10 )
      HMAssignmentUnlock(v10);
    FreePointerRawDataList(*(struct tagPOINTERRAWDATA **)(*((_QWORD *)a1 + 239) + 80LL), a2, a3);
    Win32FreePool(*((_QWORD *)a1 + 239), v11, v12);
    *((_QWORD *)a1 + 239) = 0LL;
  }
}
