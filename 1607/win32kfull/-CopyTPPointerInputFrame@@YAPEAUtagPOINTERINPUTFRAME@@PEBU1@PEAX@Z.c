/*
 * XREFs of ?CopyTPPointerInputFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@PEAX@Z @ 0x1C01C052C
 * Callers:
 *     ?CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01E6C7C (-CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@.c)
 *     ?CreateShellGestureFrame@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01E7000 (-CreateShellGestureFrame@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ?AllocPointerQFrameList@@YAPEAUtagPOINTERQFRAME@@K@Z @ 0x1C01BF714 (-AllocPointerQFrameList@@YAPEAUtagPOINTERQFRAME@@K@Z.c)
 *     ?CopyRawDataList@@YAPEAUtagPOINTERRAWDATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C0464 (-CopyRawDataList@@YAPEAUtagPOINTERRAWDATA@@PEBUtagPOINTERINPUTFRAME@@@Z.c)
 */

struct tagPOINTERINPUTFRAME *__fastcall CopyTPPointerInputFrame(
        const struct tagPOINTERINPUTFRAME *a1,
        unsigned __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  _QWORD *v7; // rbx
  __int64 v8; // rax
  unsigned int v9; // ecx
  void *v10; // rcx
  struct tagPOINTERQFRAME *v11; // rax
  __int64 v12; // r9
  struct tagPOINTERRAWDATA *v13; // rax
  __int64 v14; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx

  v4 = Win32AllocPoolZInit(112LL, 1718645589LL);
  v7 = (_QWORD *)v4;
  if ( v4 )
  {
    *(_OWORD *)v4 = *(_OWORD *)a1;
    *(_OWORD *)(v4 + 16) = *((_OWORD *)a1 + 1);
    *(_OWORD *)(v4 + 32) = *((_OWORD *)a1 + 2);
    *(_OWORD *)(v4 + 48) = *((_OWORD *)a1 + 3);
    *(_OWORD *)(v4 + 64) = *((_OWORD *)a1 + 4);
    *(_OWORD *)(v4 + 80) = *((_OWORD *)a1 + 5);
    *(_OWORD *)(v4 + 96) = *((_OWORD *)a1 + 6);
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_QWORD *)v4 = 0LL;
    *(_QWORD *)(v4 + 104) = 0LL;
    *(_QWORD *)(v4 + 88) = 0LL;
    *(_QWORD *)(v4 + 96) = 0LL;
    *(_QWORD *)(v4 + 80) = 0LL;
    v8 = *((unsigned int *)a1 + 10);
    if ( (_DWORD)v8 && (v9 = 216 * v8, (unsigned __int64)(216 * v8) <= 0xFFFFFFFF) && v9 )
      v10 = (void *)Win32AllocPoolZInit(v9, 1701868373LL);
    else
      v10 = 0LL;
    v7[11] = v10;
    if ( v10 )
    {
      memmove(v10, *((const void **)a1 + 11), 216LL * *((unsigned int *)a1 + 10));
      v11 = AllocPointerQFrameList(*((_DWORD *)a1 + 10));
      v7[12] = v11;
      if ( v11 )
      {
        memmove(v11, *((const void **)a1 + 12), 40LL * *((unsigned int *)a1 + 10));
        if ( !*((_QWORD *)a1 + 10) || (v13 = CopyRawDataList(a1), (v7[10] = v13) != 0LL) )
        {
          LOBYTE(v5) = 19;
          v14 = HMValidateHandleNoSecure(a2, v5, v6, v12);
          HMAssignmentLock(v7 + 13, *(_QWORD *)(v14 + 480));
          return (struct tagPOINTERINPUTFRAME *)v7;
        }
      }
    }
    v16 = v7[11];
    if ( v16 )
      Win32FreePool(v16, v5, v6);
    v17 = v7[12];
    if ( v17 )
      Win32FreePool(v17, v5, v6);
    Win32FreePool(v7, v5, v6);
  }
  return 0LL;
}
