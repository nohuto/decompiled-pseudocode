/*
 * XREFs of ?CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01F1114
 * Callers:
 *     xxxAssessPointerContactState @ 0x1C01CD534 (xxxAssessPointerContactState.c)
 *     ?CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01F0DE4 (-CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@.c)
 *     ?GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HHKPEAH@Z @ 0x1C01F15A8 (-GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01F4EA4 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     ?UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C02308A4 (-UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 * Callees:
 *     ?FreePointerRawDataList@@YAXPEAUtagPOINTERRAWDATA@@@Z @ 0x1C022F54C (-FreePointerRawDataList@@YAXPEAUtagPOINTERRAWDATA@@@Z.c)
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
    v3 = (_QWORD *)((char *)a1 + 1088);
    if ( *v3 )
    {
      HMAssignmentUnlock(v3);
      *((_DWORD *)a1 + 316) &= ~0x8000000u;
      *((_DWORD *)a1 + 317) = 0;
    }
  }
  v4 = (_DWORD *)((char *)a1 + 168);
  v5 = 6LL;
  do
  {
    *v4 &= ~0x40u;
    v4 += 44;
    --v5;
  }
  while ( v5 );
  *((_DWORD *)a1 + 316) &= ~0x400u;
  v6 = *((_QWORD *)a1 + 157);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 72);
    if ( v7 )
      Win32FreePool(v7);
    v8 = *(_QWORD *)(*((_QWORD *)a1 + 157) + 80LL);
    if ( v8 )
      Win32FreePool(v8);
    v9 = (_QWORD *)(*((_QWORD *)a1 + 157) + 88LL);
    if ( *v9 )
      HMAssignmentUnlock(v9);
    FreePointerRawDataList(*(struct tagPOINTERRAWDATA **)(*((_QWORD *)a1 + 157) + 64LL));
    Win32FreePool(*((_QWORD *)a1 + 157));
    *((_QWORD *)a1 + 157) = 0LL;
  }
}
