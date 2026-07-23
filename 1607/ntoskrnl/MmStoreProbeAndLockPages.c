/*
 * XREFs of MmStoreProbeAndLockPages @ 0x1401228E0
 * Callers:
 *     ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z @ 0x14011F440 (-SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiProbeLeafFrame @ 0x14002F940 (MiProbeLeafFrame.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140099F9C (MiUnlockProbePacketWorkingSet.c)
 *     MiProbeAndLockPrepare @ 0x140099FD8 (MiProbeAndLockPrepare.c)
 *     MiReferencePageForModifiedWrite @ 0x1400FFD38 (MiReferencePageForModifiedWrite.c)
 *     MiStoreMarkLockedPagesModified @ 0x140122A2C (MiStoreMarkLockedPagesModified.c)
 *     MiUnlockStoreLockedPages @ 0x140122F8C (MiUnlockStoreLockedPages.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall MmStoreProbeAndLockPages(ULONG_PTR BugCheckParameter4, int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v4; // eax
  unsigned int v5; // eax
  _QWORD *v6; // rcx
  int v7; // eax
  int v8; // ebx
  __int64 v9; // r14
  _QWORD *v10; // rcx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+48h] [rbp-39h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp-29h]
  unsigned __int64 v14; // [rsp+60h] [rbp-21h]
  _QWORD *v15; // [rsp+68h] [rbp-19h]
  __int64 v16; // [rsp+A8h] [rbp+27h]

  CurrentThread = KeGetCurrentThread();
  v4 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
  if ( a2 )
    v5 = v4 & 0xFFFFFFF3 | 8;
  else
    v5 = v4 & 0xFFFFFFF3 | 4;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) = v5;
  MiProbeAndLockPrepare(
    (__int64)BugCheckParameter3,
    BugCheckParameter4,
    *(_QWORD *)(BugCheckParameter4 + 32) + *(unsigned int *)(BugCheckParameter4 + 44),
    *(_DWORD *)(BugCheckParameter4 + 40),
    1,
    0,
    0);
  v6 = v15;
  do
  {
    *v6 = -1LL;
    v7 = MiProbeLeafFrame((__int64)BugCheckParameter3);
    v8 = v7;
    if ( v7 == -1073741801 )
      break;
    if ( v7 < 0 )
      KeBugCheckEx(0x1Au, 0x6001uLL, v7, BugCheckParameter3[0], BugCheckParameter4);
    v9 = 48 * v16 - 0x58000000000LL;
    MiLockPageAtDpcInline(v9);
    if ( (*(_BYTE *)(v9 + 34) & 8) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v8 = -1073740749;
      break;
    }
    MiReferencePageForModifiedWrite(v9, 13);
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v10 = v15;
    BugCheckParameter3[0] += 4096LL;
    *v15 = v16;
    v6 = v10 + 1;
    v15 = v6;
    v13 += 8LL;
  }
  while ( v13 <= v14 );
  MiUnlockProbePacketWorkingSet((__int64)BugCheckParameter3);
  if ( v8 < 0 )
    MiUnlockStoreLockedPages(BugCheckParameter4);
  else
    MiStoreMarkLockedPagesModified(BugCheckParameter4);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= 0xFFFFFFF3;
  return (unsigned int)v8;
}
