/*
 * XREFs of CmpSnapshotKcbStackSecurity @ 0x140602B50
 * Callers:
 *     CmDeleteValueKey @ 0x1403FAE34 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1404037B0 (CmSetValueKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140087418 (CmpAllocateTransientPoolWithTag.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x140440140 (CmpGetSecurityCacheEntryForKcbStack.c)
 */

__int64 __fastcall CmpSnapshotKcbStackSecurity(__int64 a1, __int64 a2, ULONG a3, _QWORD *a4)
{
  __int64 SecurityCacheEntryForKcbStack; // rdi
  __int64 v7; // rcx
  PVOID TransientPoolWithTag; // rax
  unsigned int v9; // ebx
  PVOID v10; // rsi

  SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a1, a2, 0LL);
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(v7, *(unsigned int *)(SecurityCacheEntryForKcbStack + 24), a3);
  v9 = 0;
  v10 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    memmove(
      TransientPoolWithTag,
      (const void *)(SecurityCacheEntryForKcbStack + 32),
      *(unsigned int *)(SecurityCacheEntryForKcbStack + 24));
    *a4 = v10;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v9;
}
