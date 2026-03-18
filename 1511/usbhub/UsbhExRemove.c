/*
 * XREFs of UsbhExRemove @ 0x1C004EB80
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 */

void __fastcall UsbhExRemove(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rdi
  int v6; // eax
  __int64 **v7; // rbx
  __int64 *v8; // rax
  __int64 v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v5 = FdoExt(a1, a2, a3, a4);
  Log(a1, 128, 1702381138, 0LL, 0LL);
  v6 = v5[640];
  if ( (v6 & 0x2000) != 0 )
  {
    v5[640] = v6 & 0xFFFFDFFF;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v5 + 609, &LockHandle);
    v7 = (__int64 **)(v5 + 1214);
    while ( *v7 != (__int64 *)v7 )
    {
      v8 = *v7;
      v9 = **v7;
      if ( (__int64 **)(*v7)[1] != v7 || *(__int64 **)(v9 + 8) != v8 )
        __fastfail(3u);
      *v7 = (__int64 *)v9;
      *(_QWORD *)(v9 + 8) = v7;
      if ( v8 != (__int64 *)48 )
        ExFreePoolWithTag(v8 - 6, 0);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
