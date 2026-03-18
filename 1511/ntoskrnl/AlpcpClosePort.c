/*
 * XREFs of AlpcpClosePort @ 0x14047E9E0
 * Callers:
 *     <none>
 * Callees:
 *     AlpcpSendCloseMessage @ 0x14047E6B8 (AlpcpSendCloseMessage.c)
 *     AlpcpDoPortCleanup @ 0x14047EB1C (AlpcpDoPortCleanup.c)
 */

void __fastcall AlpcpClosePort(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a3 == 1 )
  {
    if ( (*(_DWORD *)(a2 + 256) & 0x100000) != 0 )
      goto LABEL_6;
    v6 = *(_QWORD *)(a2 + 24);
    if ( (v6 & 1) != 0 )
      v6 = 0LL;
    if ( v6 == a1 )
    {
LABEL_6:
      AlpcpDoPortCleanup(a2, a1);
      if ( (*(_DWORD *)(a2 + 256) & 0x1000) == 0 )
        AlpcpSendCloseMessage(a2);
    }
  }
  KeLeaveCriticalRegion();
}
