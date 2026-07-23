/*
 * XREFs of PspRelinquishUmsThreadSpecialApc @ 0x140682780
 * Callers:
 *     <none>
 * Callees:
 *     PspDisassociateUmsThreadFromPrimary @ 0x140682478 (PspDisassociateUmsThreadFromPrimary.c)
 */

void __fastcall PspRelinquishUmsThreadSpecialApc(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 *a5)
{
  int *v6; // r8
  int v7; // ecx
  struct _KTHREAD *CurrentThread; // rax

  v6 = *(int **)(a1 + 88);
  v7 = 0;
  CurrentThread = (struct _KTHREAD *)*a4;
  if ( !*a4 )
    CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->Header.Reserved1 & 0x80u) != 0 )
    v7 = PspDisassociateUmsThreadFromPrimary(*a4, *a5, v6);
  else
    *v6 |= 2u;
  *(_DWORD *)(a1 + 96) = v7;
  KeSignalGate(a1 + 104, 1u);
}
