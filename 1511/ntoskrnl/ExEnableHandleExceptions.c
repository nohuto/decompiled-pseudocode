/*
 * XREFs of ExEnableHandleExceptions @ 0x140452258
 * Callers:
 *     PspApplyMitigationOptions @ 0x14044F404 (PspApplyMitigationOptions.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 * Callees:
 *     ExpUnlockHandleTableExclusive @ 0x14009642C (ExpUnlockHandleTableExclusive.c)
 *     ExpLockHandleTableExclusive @ 0x14009646C (ExpLockHandleTableExclusive.c)
 */

bool __fastcall ExEnableHandleExceptions(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // r14
  bool v5; // di
  __int64 v6; // rcx
  char v7; // cl
  int v9; // eax

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  ExpLockHandleTableExclusive(a1, (__int64)CurrentThread);
  v6 = *(_QWORD *)(a1 + 96);
  if ( v6 )
  {
    v9 = *(_DWORD *)(v6 + 8);
    if ( (v9 & 8) != 0 )
    {
      v5 = a2 == 0;
    }
    else if ( a2 )
    {
      *(_DWORD *)(v6 + 8) = v9 | 8;
    }
  }
  else
  {
    v7 = *(_BYTE *)(a1 + 44);
    if ( (v7 & 2) != 0 )
      v5 = a2 == 0;
    else
      *(_BYTE *)(a1 + 44) = v7 ^ (v7 ^ (2 * (a2 != 0))) & 2;
  }
  ExpUnlockHandleTableExclusive(a1, (__int64)CurrentThread);
  return !v5;
}
