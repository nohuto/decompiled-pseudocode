/*
 * XREFs of VidSchEnterIndependentFlip @ 0x1C001C530
 * Callers:
 *     <none>
 * Callees:
 *     Template_txqqqtxt @ 0x1C001C0B8 (Template_txqqqtxt.c)
 */

void __fastcall VidSchEnterIndependentFlip(
        __int64 a1,
        __int64 a2,
        struct _LUID *a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        _DWORD *a7)
{
  __int64 v8; // rbp
  _QWORD *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // r12
  _DWORD *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  char v17; // si
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-48h] BYREF
  struct _LUID DestinationLuid; // [rsp+B0h] [rbp+8h] BYREF

  v8 = (unsigned int)a2;
  v11 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(a1, a2);
  v12 = a5;
  v13 = a5;
  v11[3] = *a3;
  v11[4] = a4;
  v11[5] = v12;
  WdLogEvent5_WdPresentTokenEvent(v11);
  v14 = a7;
  *a7 = 0;
  if ( *(_BYTE *)(a1 + 47) && (_DWORD)v8 != -1 && (unsigned int)v12 < *(_DWORD *)(a1 + 124) )
  {
    RtlCopyLuid(&DestinationLuid, a3);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1872), &LockHandle);
    v15 = 280 * v13 + *(_QWORD *)(a1 + 8 * v8 + 2640);
    v16 = 5LL * *(unsigned int *)(v15 + 352);
    *(_QWORD *)(v15 + 8 * v16 + 224) = MEMORY[0xFFFFF78000000320];
    *(_WORD *)(v15 + 8 * v16 + 192) = 257;
    *(struct _LUID *)(v15 + 8 * v16 + 196) = DestinationLuid;
    *(_QWORD *)(v15 + 8 * v16 + 208) = a4;
    *(_QWORD *)(v15 + 8 * v16 + 216) = *(_QWORD *)(v15 + 136);
    *(_DWORD *)(v15 + 352) = ((unsigned __int8)*(_DWORD *)(v15 + 352) + 1) & 3;
    if ( (unsigned int)(*(_DWORD *)(v15 + 148) - 1) > 1 )
    {
      *(_DWORD *)(v15 + 160) = 0;
      *(_DWORD *)(v15 + 148) = 1;
      *(struct _LUID *)(v15 + 120) = DestinationLuid;
      *(_QWORD *)(v15 + 128) = a4;
      *(_WORD *)(v15 + 144) = 0;
      *(_BYTE *)(v15 + 146) = 0;
    }
    v17 = a6;
    *(_DWORD *)(v15 + 112) = a6;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_txqqqtxt(v19, v18, v20, 1, DestinationLuid.LowPart, v8, v12, v17, 0, a4, 1);
    }
    *v14 = 1;
  }
}
