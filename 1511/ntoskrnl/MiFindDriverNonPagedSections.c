/*
 * XREFs of MiFindDriverNonPagedSections @ 0x1403CD5D0
 * Callers:
 *     MiHandleDriverNonPagedSections @ 0x1403CD42C (MiHandleDriverNonPagedSections.c)
 * Callees:
 *     RtlFindNextForwardRunClear @ 0x1400223C0 (RtlFindNextForwardRunClear.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     RtlFindSetBits @ 0x1400A04CC (RtlFindSetBits.c)
 */

__int64 __fastcall MiFindDriverNonPagedSections(__int64 a1, ULONG *a2, __int64 *a3, _QWORD *a4)
{
  _RTL_BITMAP *v4; // rbx
  ULONG v6; // esi
  __int64 v8; // r12
  ULONG SetBits; // eax
  ULONG v11; // edi
  ULONG SizeOfBitMap; // ebx
  ULONG v13; // ebx
  __int64 PteAddress; // rax
  ULONG StartingRunIndex; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_RTL_BITMAP **)(a1 + 240);
  v6 = *a2;
  v8 = *(_QWORD *)(a1 + 48);
  if ( *a2 == v4->SizeOfBitMap )
    return 3221226021LL;
  SetBits = RtlFindSetBits(*(PRTL_BITMAP *)(a1 + 240), 1u, v6);
  v11 = SetBits;
  if ( SetBits < v6 || SetBits == -1 )
    return 3221226021LL;
  if ( RtlFindNextForwardRunClear(v4, SetBits, &StartingRunIndex) )
    SizeOfBitMap = StartingRunIndex;
  else
    SizeOfBitMap = v4->SizeOfBitMap;
  v13 = SizeOfBitMap - v11;
  *a2 = v13 + v11;
  PteAddress = MiGetPteAddress(v8 + (v11 << 12));
  *a3 = PteAddress;
  *a4 = PteAddress + 8LL * (v13 - 1);
  return 0LL;
}
