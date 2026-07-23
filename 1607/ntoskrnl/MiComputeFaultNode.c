/*
 * XREFs of MiComputeFaultNode @ 0x1400E3FD0
 * Callers:
 *     MiMigratePfn @ 0x140036990 (MiMigratePfn.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     MiResolveMappedFileFault @ 0x1400E4740 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x1401218D0 (MiResolvePageFileFault.c)
 * Callees:
 *     MiLocateAddress @ 0x14001EC10 (MiLocateAddress.c)
 *     KeIsAttachedProcess @ 0x1400E5D20 (KeIsAttachedProcess.c)
 */

__int64 __fastcall MiComputeFaultNode(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  unsigned int v5; // ebx
  __int64 v6; // r11
  unsigned __int64 v7; // r10
  unsigned __int64 Address; // rax
  unsigned int v10; // edx
  struct _KTHREAD *CurrentThread; // rax

  v5 = 0;
  v6 = a3;
  *a5 = 0LL;
  if ( (a4 & 1) != 0 )
  {
    v7 = a4 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
      v5 = *(unsigned __int8 *)(v7 + 40);
  }
  else
  {
    v7 = 0LL;
  }
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    return v5;
  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL
    || !v7
    && !*(_QWORD *)(qword_140327FD0 + 276840648)
    && !*(_QWORD *)(qword_140327FD0 + 276840656)
    && *(_BYTE *)(qword_140327FD0 + 276840624) != 1
    || (Address = MiLocateAddress(a2)) == 0 )
  {
LABEL_9:
    if ( v5 )
      goto LABEL_12;
    goto LABEL_10;
  }
  v10 = *(_DWORD *)(Address + 48);
  *a5 = Address;
  v5 = (v10 >> 8) & 0x3F;
  if ( v5 )
    goto LABEL_12;
  if ( (v10 & 0x8000) == 0 )
  {
    v5 = (*(_DWORD *)(**(_QWORD **)(Address + 72) + 56LL) >> 20) & 0x3F;
    goto LABEL_9;
  }
LABEL_10:
  if ( v6 )
    v5 = (*(_DWORD *)(v6 + 56) >> 20) & 0x3F;
LABEL_12:
  if ( !v7 || v5 || !(unsigned __int8)KeIsAttachedProcess() )
    return v5;
  CurrentThread = KeGetCurrentThread();
  return (unsigned int)CurrentThread->ApcState.Process->IdealNode[CurrentThread->Affinity.Group] + 1;
}
