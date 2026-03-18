/*
 * XREFs of MmStoreProbeAndLockPages @ 0x140113844
 * Callers:
 *     ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z @ 0x140110F80 (-SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z.c)
 * Callees:
 *     MiReferencePageForModifiedWrite @ 0x14002FDF8 (MiReferencePageForModifiedWrite.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiProbeLeafFrame @ 0x1400A7660 (MiProbeLeafFrame.c)
 *     MiProbeAndLockPrepare @ 0x1400D5844 (MiProbeAndLockPrepare.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1400E86F4 (MiUnlockProbePacketWorkingSet.c)
 *     MiStoreMarkLockedPagesModified @ 0x140113998 (MiStoreMarkLockedPagesModified.c)
 *     MiUnlockStoreLockedPages @ 0x140113C98 (MiUnlockStoreLockedPages.c)
 */

__int64 __fastcall MmStoreProbeAndLockPages(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // r14d
  __int64 v9; // rdi
  _QWORD *v10; // rcx
  _QWORD v12[2]; // [rsp+48h] [rbp-29h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp-19h]
  unsigned __int64 v14; // [rsp+60h] [rbp-11h]
  _QWORD *v15; // [rsp+68h] [rbp-9h]
  __int64 v16; // [rsp+A8h] [rbp+37h]

  CurrentThread = KeGetCurrentThread();
  LODWORD(CurrentThread[1].Queue) |= 4u;
  if ( a2 )
    LODWORD(CurrentThread[1].Queue) |= 2u;
  MiProbeAndLockPrepare(
    (__int64)v12,
    a1,
    *(_QWORD *)(a1 + 32) + *(unsigned int *)(a1 + 44),
    *(_DWORD *)(a1 + 40),
    1,
    0,
    0);
  v5 = v15;
  do
  {
    *v5 = -1LL;
    v8 = MiProbeLeafFrame((__int64)v12);
    if ( v8 == -1073741801 )
      break;
    v9 = 48 * v16 - 0x58000000000LL;
    MiLockPageAtDpcInline(v9, v6, v7);
    if ( (*(_BYTE *)(v9 + 34) & 8) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v8 = -1073740749;
      break;
    }
    MiReferencePageForModifiedWrite(v9, 13);
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v10 = v15;
    v12[0] += 4096LL;
    *v15 = v16;
    v5 = v10 + 1;
    v15 = v5;
    v13 += 8LL;
  }
  while ( v13 <= v14 );
  MiUnlockProbePacketWorkingSet((__int64)v12, v6, v7);
  if ( v8 < 0 )
    MiUnlockStoreLockedPages(a1);
  else
    MiStoreMarkLockedPagesModified(a1);
  if ( a2 )
    LODWORD(CurrentThread[1].Queue) &= ~2u;
  LODWORD(CurrentThread[1].Queue) &= ~4u;
  return (unsigned int)v8;
}
