/*
 * XREFs of ExEnableHandleExceptions @ 0x1404B7C54
 * Callers:
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     PspApplyMitigationOptions @ 0x140470CE8 (PspApplyMitigationOptions.c)
 * Callees:
 *     ExpUnlockHandleTableExclusive @ 0x1400A6FC4 (ExpUnlockHandleTableExclusive.c)
 *     ExpLockHandleTableExclusive @ 0x1400A7004 (ExpLockHandleTableExclusive.c)
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
