/*
 * XREFs of MmStoreProbeAndLockPages @ 0x140145CAC
 * Callers:
 *     ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@@Z @ 0x140143658 (-SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@@Z.c)
 * Callees:
 *     MiProbeLeafFrame @ 0x140034440 (MiProbeLeafFrame.c)
 *     MiReferencePageForModifiedWrite @ 0x1400E69AC (MiReferencePageForModifiedWrite.c)
 *     MiProbeAndLockPrepare @ 0x14011B3E0 (MiProbeAndLockPrepare.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1401207B0 (MiUnlockProbePacketWorkingSet.c)
 *     MiStoreMarkLockedPagesModified @ 0x140145DC8 (MiStoreMarkLockedPagesModified.c)
 *     MiUnlockStoreLockedPages @ 0x14014744C (MiUnlockStoreLockedPages.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall MmStoreProbeAndLockPages(__int64 a1)
{
  _QWORD *v2; // rcx
  int v3; // esi
  ULONG_PTR v4; // rbx
  unsigned int v5; // r14d
  _QWORD *v6; // rcx
  _QWORD v8[2]; // [rsp+48h] [rbp-29h] BYREF
  unsigned __int64 v9; // [rsp+58h] [rbp-19h]
  unsigned __int64 v10; // [rsp+60h] [rbp-11h]
  _QWORD *v11; // [rsp+68h] [rbp-9h]
  __int64 v12; // [rsp+A8h] [rbp+37h]

  MiProbeAndLockPrepare(
    (__int64)v8,
    a1,
    *(_QWORD *)(a1 + 32) + *(unsigned int *)(a1 + 44),
    *(_DWORD *)(a1 + 40),
    1,
    1,
    0);
  v2 = v11;
  while ( 1 )
  {
    *v2 = -1LL;
    v3 = MiProbeLeafFrame((__int64)v8);
    v4 = 48 * v12 - 0x58000000000LL;
    v5 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v5);
      }
      while ( *(__int64 *)(v4 + 24) < 0 );
    }
    if ( (*(_BYTE *)(v4 + 34) & 8) != 0 )
      break;
    MiReferencePageForModifiedWrite(v4, 13);
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v6 = v11;
    v8[0] += 4096LL;
    *v11 = v12;
    v2 = v6 + 1;
    v11 = v2;
    v9 += 8LL;
    if ( v9 > v10 )
      goto LABEL_6;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v3 = -1073740749;
LABEL_6:
  MiUnlockProbePacketWorkingSet((__int64)v8);
  if ( v3 < 0 )
    MiUnlockStoreLockedPages(a1);
  else
    MiStoreMarkLockedPagesModified(a1);
  return (unsigned int)v3;
}
