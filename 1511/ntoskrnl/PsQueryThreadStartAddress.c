/*
 * XREFs of PsQueryThreadStartAddress @ 0x140007D48
 * Callers:
 *     NtQueryInformationThread @ 0x1403EE050 (NtQueryInformationThread.c)
 *     PspAllocateThread @ 0x1403F0BB0 (PspAllocateThread.c)
 *     EtwpPsProvTraceThread @ 0x140661CA4 (EtwpPsProvTraceThread.c)
 *     sub_140742B34 @ 0x140742B34 (sub_140742B34.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsQueryThreadStartAddress(__int64 a1, int a2)
{
  __int64 v3; // rdx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0 || !a2 )
    return *(_QWORD *)(a1 + 1664);
  if ( (*(_BYTE *)(a1 + 1732) & 8) != 0 )
    return 0LL;
  v3 = *(_QWORD *)(a1 + 1536);
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  if ( (*(_BYTE *)(a1 + 1732) & 8) != 0 )
    return 0LL;
  return v3;
}
