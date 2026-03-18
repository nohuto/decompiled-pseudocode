/*
 * XREFs of MiReduceWs @ 0x14012F17C
 * Callers:
 *     MiCountSharedPages @ 0x14003A9D0 (MiCountSharedPages.c)
 *     MiChargeWsles @ 0x14003EE30 (MiChargeWsles.c)
 *     NtResetWriteWatch @ 0x14007CF90 (NtResetWriteWatch.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 *     MiCommitExistingVad @ 0x14008E680 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1400922F0 (MiDecommitPages.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 * Callees:
 *     MiTrimWorkingSet @ 0x140080FFC (MiTrimWorkingSet.c)
 */

void __fastcall MiReduceWs(__int64 a1, char a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r10
  unsigned int i; // ebx
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rax

  v3 = *(_QWORD *)(a1 + 120);
  for ( i = 7; v3 > a3; --i )
  {
    v8 = v3 - a3;
    if ( i )
    {
      v9 = v8;
      v8 = *(_QWORD *)(a1 + 8LL * (i - 1) + 40);
      if ( v8 > v9 )
        v8 = v9;
    }
    if ( v8 )
    {
      MiTrimWorkingSet(v8, a1, a2, i, 0);
      if ( !i )
        break;
    }
    v3 = *(_QWORD *)(a1 + 120);
  }
}
