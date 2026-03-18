/*
 * XREFs of AlpcSectionDeleteProcedure @ 0x140533F94
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcDeleteBlobByHandle @ 0x140476B58 (AlpcDeleteBlobByHandle.c)
 */

char __fastcall AlpcSectionDeleteProcedure(
        volatile signed __int32 *BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _UNKNOWN **v4; // rax
  _QWORD *v6; // rcx
  unsigned __int64 *v7; // r15
  volatile signed __int32 *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rbx
  signed __int64 BugCheckParameter4; // rax
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rax
  volatile signed __int32 **v17; // rcx
  int v18; // ebp
  char v19; // cl
  signed __int64 v20; // rcx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  v4 = &retaddr;
  v6 = (_QWORD *)*((_QWORD *)BugCheckParameter2 + 2);
  if ( v6 )
  {
    LOBYTE(v4) = AlpcDeleteBlobByHandle(v6, *((_QWORD *)BugCheckParameter2 + 3), (__int64)BugCheckParameter2, a4);
    *((_QWORD *)BugCheckParameter2 + 2) = 0LL;
  }
  v7 = (unsigned __int64 *)*((_QWORD *)BugCheckParameter2 + 5);
  if ( v7 )
  {
    v8 = BugCheckParameter2 - 12;
    v9 = KeAbPreAcquire((ULONG_PTR)(BugCheckParameter2 - 4), 0LL, 0LL, a4);
    v11 = v9;
    if ( _interlockedbittestandset64(BugCheckParameter2 - 4, 0LL) )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)BugCheckParameter2 - 2,
        v9,
        (ULONG_PTR)(BugCheckParameter2 - 4),
        v10);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    *((_BYTE *)v8 + 16) |= 1u;
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 3, 0x10000uLL) + 0x10000;
    if ( BugCheckParameter4 <= 0 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)BugCheckParameter2, 0x26uLL, BugCheckParameter4);
    v13 = KeAbPreAcquire((ULONG_PTR)(v7 + 41), 0LL, 0LL, v10);
    v15 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7 + 82, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7 + 41, v13, (ULONG_PTR)(v7 + 41), v14);
    if ( v15 )
      *(_BYTE *)(v15 + 26) |= 1u;
    v16 = *(_QWORD *)v8;
    if ( *(volatile signed __int32 **)v8 != v8 )
    {
      v17 = (volatile signed __int32 **)*((_QWORD *)v8 + 1);
      if ( *(volatile signed __int32 **)(v16 + 8) != v8 || *v17 != v8 )
        __fastfail(3u);
      *v17 = (volatile signed __int32 *)v16;
      *(_QWORD *)(v16 + 8) = v17;
      *((_QWORD *)v8 + 1) = v8;
      *(_QWORD *)v8 = v8;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7 + 41, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v7 + 41);
    KeAbPostRelease((ULONG_PTR)(v7 + 41));
    *((_QWORD *)BugCheckParameter2 + 5) = 0LL;
    v18 = 0;
    v19 = *((_BYTE *)v8 + 16);
    if ( (v19 & 1) != 0 )
    {
      v18 = 0x10000 - *((__int16 *)v8 + 9);
      *((_WORD *)v8 + 9) = 0;
      *((_BYTE *)v8 + 16) = v19 & 0xFE;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v8 + 4);
    KeAbPostRelease((ULONG_PTR)(v8 + 8));
    if ( v18 > 0 )
    {
      v20 = -v18 + _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 3, -v18);
      if ( v20 <= 0 )
      {
        if ( v20 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)BugCheckParameter2, 0x28uLL, v20);
        AlpcpDestroyBlob((__int64)BugCheckParameter2);
      }
    }
    LOBYTE(v4) = ObfDereferenceObject(v7);
  }
  return (char)v4;
}
