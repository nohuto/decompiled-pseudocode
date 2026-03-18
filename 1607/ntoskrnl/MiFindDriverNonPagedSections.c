/*
 * XREFs of MiFindDriverNonPagedSections @ 0x14047EC4C
 * Callers:
 *     MiHandleDriverNonPagedSections @ 0x14047EAEC (MiHandleDriverNonPagedSections.c)
 * Callees:
 *     RtlFindSetBits @ 0x14000AFC0 (RtlFindSetBits.c)
 *     MiGetPteAddress @ 0x14002BA64 (MiGetPteAddress.c)
 *     RtlFindNextForwardRunClear @ 0x140084724 (RtlFindNextForwardRunClear.c)
 */

__int64 __fastcall MiFindDriverNonPagedSections(__int64 a1, ULONG *a2, __int64 *a3, _QWORD *a4)
{
  struct _RTL_BITMAP *v4; // rdi
  ULONG v6; // esi
  __int64 v8; // r12
  ULONG SetBits; // eax
  ULONG v11; // ebx
  ULONG NextForwardRunClear; // eax
  ULONG SizeOfBitMap; // edx
  __int64 PteAddress; // rax
  int v15; // edx
  ULONG StartingRunIndex; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(struct _RTL_BITMAP **)(a1 + 240);
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
  *a2 = SizeOfBitMap;
  PteAddress = MiGetPteAddress(v8 + (v11 << 12));
  *a3 = PteAddress;
  *a4 = PteAddress + 8LL * (unsigned int)(v15 - 1);
  return 0LL;
}
