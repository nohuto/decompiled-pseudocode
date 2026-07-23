/*
 * XREFs of MiFindDriverNonPagedSections @ 0x14057531C
 * Callers:
 *     MiHandleDriverNonPagedSections @ 0x14057516C (MiHandleDriverNonPagedSections.c)
 * Callees:
 *     RtlFindSetBits @ 0x140062390 (RtlFindSetBits.c)
 *     RtlFindNextForwardRunClear @ 0x140063958 (RtlFindNextForwardRunClear.c)
 */

__int64 __fastcall MiFindDriverNonPagedSections(__int64 a1, ULONG *a2, unsigned __int64 *a3, _QWORD *a4)
{
  _RTL_BITMAP *v4; // rdi
  ULONG v6; // esi
  __int64 v8; // r12
  ULONG SetBits; // eax
  ULONG v11; // ebx
  ULONG NextForwardRunClear; // eax
  ULONG SizeOfBitMap; // ecx
  ULONG v14; // ecx
  unsigned __int64 v15; // rdx
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
  NextForwardRunClear = RtlFindNextForwardRunClear(v4, SetBits, &StartingRunIndex);
  SizeOfBitMap = StartingRunIndex;
  if ( !NextForwardRunClear )
    SizeOfBitMap = v4->SizeOfBitMap;
  v14 = SizeOfBitMap - v11;
  *a2 = v14 + v11;
  v15 = (((v8 + (unsigned __int64)(v11 << 12)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *a3 = v15;
  *a4 = v15 + 8LL * (v14 - 1);
  return 0LL;
}
