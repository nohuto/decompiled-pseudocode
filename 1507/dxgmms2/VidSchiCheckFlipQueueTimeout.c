/*
 * XREFs of VidSchiCheckFlipQueueTimeout @ 0x1C00051EC
 * Callers:
 *     VidSchiReportHwHang @ 0x1C001DFB4 (VidSchiReportHwHang.c)
 *     VidSchiCheckHwProgress @ 0x1C0032B80 (VidSchiCheckHwProgress.c)
 * Callees:
 *     ?VidSchiCheckHeadTimeout@@YAHPEAU_VIDSCH_GLOBAL@@IPEAT_ULARGE_INTEGER@@@Z @ 0x1C0012424 (-VidSchiCheckHeadTimeout@@YAHPEAU_VIDSCH_GLOBAL@@IPEAT_ULARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall VidSchiCheckFlipQueueTimeout(KSPIN_LOCK *a1, union _ULARGE_INTEGER *a2, unsigned int *a3)
{
  char v6; // bl
  unsigned int v7; // r8d
  unsigned int v8; // ecx
  char *v9; // rax
  unsigned int v11; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v6 = 0;
  KeAcquireInStackQueuedSpinLock(a1 + 234, &LockHandle);
  v7 = *((_DWORD *)a1 + 10);
  v8 = 0;
  if ( v7 )
  {
    v9 = (char *)(a1 + 330);
    while ( !*(_QWORD *)v9 || !*(_DWORD *)(*(_QWORD *)v9 + 2332LL) )
    {
      ++v8;
      v9 += 8;
      if ( v8 >= v7 )
        goto LABEL_6;
    }
    v6 = 1;
  }
LABEL_6:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !v6 )
    return 0LL;
  v11 = 0;
  if ( !*((_DWORD *)a1 + 10) )
    return 0LL;
  while ( !(unsigned int)VidSchiCheckHeadTimeout((struct _VIDSCH_GLOBAL *)a1, v11, a2) )
  {
    if ( ++v11 >= *((_DWORD *)a1 + 10) )
      return 0LL;
  }
  if ( a3 )
    *a3 = v11;
  return 1LL;
}
