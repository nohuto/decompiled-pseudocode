/*
 * XREFs of VidSchExitIndependentFlip @ 0x1C001C700
 * Callers:
 *     <none>
 * Callees:
 *     VidSchExitIndependentFlipInternal @ 0x1C001C7D4 (VidSchExitIndependentFlipInternal.c)
 */

unsigned __int64 __fastcall VidSchExitIndependentFlip(
        __int64 a1,
        int a2,
        struct _LUID *a3,
        int a4,
        unsigned int a5,
        int a6,
        char a7,
        _DWORD *a8)
{
  unsigned __int64 result; // rax
  _DWORD *v9; // r14
  unsigned int v13; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  struct _LUID v16; // [rsp+80h] [rbp+8h] BYREF

  result = (unsigned __int64)&retaddr;
  v9 = a8;
  *a8 = 0;
  if ( *(_BYTE *)(a1 + 47) && a2 != -1 )
  {
    v13 = a5;
    if ( a5 < *(_DWORD *)(a1 + 124) )
    {
      RtlCopyLuid(&v16, a3);
      LOBYTE(a8) = 0;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1872), &LockHandle);
      VidSchExitIndependentFlipInternal(a1, a2, (unsigned int)&v16, a4, v13, a6, a7, (__int64)&a8);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      result = (unsigned __int8)a8;
      *v9 = (unsigned __int8)a8;
    }
  }
  return result;
}
