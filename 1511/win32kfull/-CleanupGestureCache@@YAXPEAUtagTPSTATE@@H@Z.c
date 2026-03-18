/*
 * XREFs of ?CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01F1074
 * Callers:
 *     xxxAssessPointerContactState @ 0x1C01CF118 (xxxAssessPointerContactState.c)
 *     ?CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01F0D44 (-CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@.c)
 *     ?GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HHKPEAH@Z @ 0x1C01F16F8 (-GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01F52B4 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     ?UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C0230CD4 (-UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 * Callees:
 *     ?FreePointerRawDataList@@YAXPEAUtagPOINTERRAWDATA@@@Z @ 0x1C022F92C (-FreePointerRawDataList@@YAXPEAUtagPOINTERRAWDATA@@@Z.c)
 */

void __fastcall CleanupGestureCache(struct tagTPSTATE *a1, int a2)
{
  _QWORD *v3; // rcx
  _DWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rcx

  if ( !a2 )
  {
    v3 = (_QWORD *)((char *)a1 + 1328);
    if ( *v3 )
    {
      HMAssignmentUnlock(v3);
      *((_DWORD *)a1 + 386) &= ~0x4000000u;
      *((_DWORD *)a1 + 388) = 0;
    }
  }
  v4 = (_DWORD *)((char *)a1 + 212);
  v5 = 6LL;
  do
  {
    *v4 &= ~0x40u;
    v4 += 54;
    --v5;
  }
  while ( v5 );
  *((_DWORD *)a1 + 386) &= ~0x400u;
  v6 = *((_QWORD *)a1 + 192);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 72);
    if ( v7 )
      Win32FreePool(v7);
    v8 = *(_QWORD *)(*((_QWORD *)a1 + 192) + 80LL);
    if ( v8 )
      Win32FreePool(v8);
    v9 = (_QWORD *)(*((_QWORD *)a1 + 192) + 88LL);
    if ( *v9 )
      HMAssignmentUnlock(v9);
    FreePointerRawDataList(*(struct tagPOINTERRAWDATA **)(*((_QWORD *)a1 + 192) + 64LL));
    Win32FreePool(*((_QWORD *)a1 + 192));
    *((_QWORD *)a1 + 192) = 0LL;
  }
}
