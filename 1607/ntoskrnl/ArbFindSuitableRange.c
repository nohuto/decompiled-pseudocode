/*
 * XREFs of ArbFindSuitableRange @ 0x14055A244
 * Callers:
 *     IopMemFindSuitableRange @ 0x140558F70 (IopMemFindSuitableRange.c)
 * Callees:
 *     ArbShareDriverExclusive @ 0x140558810 (ArbShareDriverExclusive.c)
 *     RtlFindRange @ 0x14055A330 (RtlFindRange.c)
 */

char __fastcall ArbFindSuitableRange(__int64 a1, __int64 a2)
{
  ULONGLONG v4; // rdx
  ULONGLONG v5; // r8
  __int64 v6; // r9
  ULONG Flags; // ecx
  int v8; // eax

  v4 = *(_QWORD *)(a2 + 16);
  v5 = *(_QWORD *)(a2 + 24);
  if ( v4 > v5 )
    return 0;
  v6 = *(_QWORD *)(a2 + 40);
  if ( !*(_QWORD *)(v6 + 16) )
  {
    *(_QWORD *)a2 = v4;
    *(_QWORD *)(a2 + 8) = v4;
    return 1;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 40LL) & 0xFFFFFFFD) == 0 )
    *(_BYTE *)(a2 + 67) |= 1u;
  Flags = 0;
  if ( (*(_BYTE *)(a2 + 64) & 8) != 0 )
    Flags = 2;
  v8 = *(_DWORD *)(v6 + 36);
  if ( (v8 & 1) != 0 )
    Flags |= 1u;
  if ( (v8 & 8) != 0 )
    *(_BYTE *)(a2 + 67) |= 0x40u;
  if ( RtlFindRange(
         *(PRTL_RANGE_LIST *)(a1 + 48),
         v4,
         v5,
         *(_QWORD *)(v6 + 16),
         *(_QWORD *)(v6 + 24),
         Flags,
         *(_BYTE *)(a2 + 67),
         *(PVOID *)(a1 + 320),
         *(PRTL_CONFLICT_RANGE_CALLBACK *)(a1 + 328),
         (PULONGLONG)a2) >= 0 )
  {
    *(_QWORD *)(a2 + 8) = *(_QWORD *)a2 + *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL) - 1LL;
    return 1;
  }
  if ( ArbShareDriverExclusive(a1, a2) )
    return 1;
  return (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 272))(a1, a2);
}
