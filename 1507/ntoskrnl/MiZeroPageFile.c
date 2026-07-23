/*
 * XREFs of MiZeroPageFile @ 0x14020DB5C
 * Callers:
 *     MiZeroAllPageFiles @ 0x140402E6C (MiZeroAllPageFiles.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     RtlClearBits @ 0x140062740 (RtlClearBits.c)
 *     MmZeroPageWrite @ 0x140112288 (MmZeroPageWrite.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiZeroPageFile(_QWORD *a1)
{
  _QWORD *v1; // rdi
  struct _KEVENT *v2; // r12
  ULONG v3; // ebp
  int v4; // ebx
  ULONG v5; // r15d
  _RTL_BITMAP *v6; // r14
  unsigned int v7; // esi
  unsigned __int64 v8; // rcx
  __int64 v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v13; // [rsp+88h] [rbp+10h] BYREF

  v1 = (_QWORD *)a1[4];
  v2 = (struct _KEVENT *)a1[5];
  ExFreePoolWithTag(a1, 0);
  v3 = 0;
  v4 = 0;
  v5 = 0;
  KeAcquireInStackQueuedSpinLock(v1 + 24, &LockHandle);
  v6 = (_RTL_BITMAP *)(v1[16] + 8LL);
  v7 = 1;
  if ( *v1 > 1uLL )
  {
    v8 = 1LL;
    do
    {
      if ( _bittest64((const signed __int64 *)v6->Buffer, v8) )
      {
        if ( v3 )
          v4 = 1;
      }
      else
      {
        _bittestandset((signed __int32 *)v6->Buffer, v7);
        if ( !v3 )
          v5 = v7;
        if ( ++v3 == 16 || v8 == *v1 - 1LL )
          v4 = 1;
      }
      if ( v4 )
      {
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v9 = v1[8];
        v13 = (unsigned __int64)v5 << 12;
        v12 = (unsigned __int64)v3 << 12;
        MmZeroPageWrite(v9, (__int64)&v13, (__int64 *)&v12, 0);
        v4 = 0;
        KeAcquireInStackQueuedSpinLock(v1 + 24, &LockHandle);
        v6 = (_RTL_BITMAP *)(v1[16] + 8LL);
        RtlClearBits(v6, v5, v3);
        v3 = 0;
      }
      v8 = ++v7;
    }
    while ( (unsigned __int64)v7 < *v1 );
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return KeSetEvent(v2, 0, 0);
}
