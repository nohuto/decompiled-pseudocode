/*
 * XREFs of ?CopyTPPointerInputFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@PEAX@Z @ 0x1C022EDBC
 * Callers:
 *     ?CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01F0DE4 (-CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     ?AllocPointerInfoNodeList@@YAPEAUtagPOINTERINFONODE@@K@Z @ 0x1C022DFB0 (-AllocPointerInfoNodeList@@YAPEAUtagPOINTERINFONODE@@K@Z.c)
 *     ?AllocPointerQFrameList@@YAPEAUtagPOINTERQFRAME@@K@Z @ 0x1C022DFDC (-AllocPointerQFrameList@@YAPEAUtagPOINTERQFRAME@@K@Z.c)
 *     ?CopyRawDataList@@YAPEAUtagPOINTERRAWDATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C022ECF4 (-CopyRawDataList@@YAPEAUtagPOINTERRAWDATA@@PEBUtagPOINTERINPUTFRAME@@@Z.c)
 */

struct tagPOINTERINPUTFRAME *__fastcall CopyTPPointerInputFrame(
        const struct tagPOINTERINPUTFRAME *a1,
        unsigned __int64 a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx
  struct tagPOINTERINFONODE *v6; // rax
  struct tagPOINTERQFRAME *v7; // rax
  struct tagPOINTERRAWDATA *v8; // rax
  __int64 v9; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx

  v4 = Win32AllocPoolZInit(96LL, 1718645589LL);
  v5 = (_QWORD *)v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = *(_OWORD *)a1;
    *(_OWORD *)(v4 + 16) = *((_OWORD *)a1 + 1);
    *(_OWORD *)(v4 + 32) = *((_OWORD *)a1 + 2);
    *(_OWORD *)(v4 + 48) = *((_OWORD *)a1 + 3);
    *(_OWORD *)(v4 + 64) = *((_OWORD *)a1 + 4);
    *(_OWORD *)(v4 + 80) = *((_OWORD *)a1 + 5);
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_QWORD *)v4 = 0LL;
    *(_QWORD *)(v4 + 88) = 0LL;
    *(_QWORD *)(v4 + 72) = 0LL;
    *(_QWORD *)(v4 + 80) = 0LL;
    *(_QWORD *)(v4 + 64) = 0LL;
    v6 = AllocPointerInfoNodeList(*((_DWORD *)a1 + 6));
    v5[9] = v6;
    if ( v6 )
    {
      memmove(v6, *((const void **)a1 + 9), 216LL * *((unsigned int *)a1 + 6));
      v7 = AllocPointerQFrameList(*((_DWORD *)a1 + 6));
      v5[10] = v7;
      if ( v7 )
      {
        memmove(v7, *((const void **)a1 + 10), 40LL * *((unsigned int *)a1 + 6));
        if ( !*((_QWORD *)a1 + 8) || (v8 = CopyRawDataList(a1), (v5[8] = v8) != 0LL) )
        {
          v9 = HMValidateHandleNoSecure(a2, 19);
          HMAssignmentLock(v5 + 11, *(_QWORD *)(v9 + 416));
          return (struct tagPOINTERINPUTFRAME *)v5;
        }
      }
    }
    v11 = v5[9];
    if ( v11 )
      Win32FreePool(v11);
    v12 = v5[10];
    if ( v12 )
      Win32FreePool(v12);
    Win32FreePool(v5);
  }
  return 0LL;
}
