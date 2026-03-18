/*
 * XREFs of PsChangeQuantumTable @ 0x14050B020
 * Callers:
 *     NtSetSystemInformation @ 0x1404D4654 (NtSetSystemInformation.c)
 *     PspInitPhase0 @ 0x140759ACC (PspInitPhase0.c)
 * Callees:
 *     PspUnlockProcessListShared @ 0x14009253C (PspUnlockProcessListShared.c)
 *     PspLockProcessListShared @ 0x14009257C (PspLockProcessListShared.c)
 *     KeSetQuantumProcess @ 0x1400960D4 (KeSetQuantumProcess.c)
 *     MmIsThisAnNtAsSystem @ 0x1400F3790 (MmIsThisAnNtAsSystem.c)
 *     PspComputeQuantum @ 0x14044F844 (PspComputeQuantum.c)
 */

char __fastcall PsChangeQuantumTable(char a1, char a2)
{
  unsigned int v3; // eax
  int v5; // eax
  char *v6; // rbx
  int v7; // edi
  char result; // al
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *i; // rbx
  char v11; // al
  __int64 v12; // r8

  v3 = a2 & 3;
  if ( v3 >= 2 )
    v3 = 2;
  PsPrioritySeparation = v3;
  v5 = a2 & 0xC;
  if ( v5 == 4 )
  {
    v6 = (char *)&PspVariableQuantums;
  }
  else if ( v5 == 8 )
  {
    v6 = PspFixedQuantums;
  }
  else
  {
    v6 = PspFixedQuantums;
    if ( !MmIsThisAnNtAsSystem() )
      v6 = (char *)&PspVariableQuantums;
  }
  v7 = a2 & 0x30;
  if ( v7 != 32 && (v7 == 16 || MmIsThisAnNtAsSystem()) )
    v6 += 3;
  PspForegroundQuantum = *(_WORD *)v6;
  result = v6[2];
  PspUseJobSchedulingClasses = v6 == &byte_1406A171F;
  byte_1406FBD2A = result;
  if ( a1 )
  {
    CurrentThread = KeGetCurrentThread();
    PspLockProcessListShared((__int64)CurrentThread);
    for ( i = (__int64 *)PsActiveProcessHead; i != &PsActiveProcessHead; i = (__int64 *)*i )
    {
      v11 = PspComputeQuantum((__int64)(i - 94), *((_BYTE *)i + 746));
      KeSetQuantumProcess(v12, v11);
    }
    return PspUnlockProcessListShared((__int64)CurrentThread);
  }
  return result;
}
