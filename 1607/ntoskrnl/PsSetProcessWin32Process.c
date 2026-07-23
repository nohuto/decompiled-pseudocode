/*
 * XREFs of PsSetProcessWin32Process @ 0x14051BA7C
 * Callers:
 *     <none>
 * Callees:
 *     PspUnlockProcessExclusive @ 0x1400F0128 (PspUnlockProcessExclusive.c)
 *     PspLockProcessExclusive @ 0x14010D1A8 (PspLockProcessExclusive.c)
 */

__int64 __fastcall PsSetProcessWin32Process(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v7; // edi

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  PspLockProcessExclusive(a1, (__int64)CurrentThread);
  if ( a2 )
  {
    if ( (*(_DWORD *)(a1 + 772) & 8) != 0 || *(_QWORD *)(a1 + 936) )
      v7 = -1073741558;
    else
      *(_QWORD *)(a1 + 936) = a2;
  }
  else if ( *(_QWORD *)(a1 + 936) == a3 )
  {
    *(_QWORD *)(a1 + 936) = 0LL;
  }
  else
  {
    v7 = -1073741823;
  }
  PspUnlockProcessExclusive(a1, (__int64)CurrentThread);
  return v7;
}
