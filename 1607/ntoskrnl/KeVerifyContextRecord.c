/*
 * XREFs of KeVerifyContextRecord @ 0x1400F0E00
 * Callers:
 *     KiContinuePreviousModeUser @ 0x1400F4474 (KiContinuePreviousModeUser.c)
 *     PspSetContextThreadInternal @ 0x1404FA764 (PspSetContextThreadInternal.c)
 * Callees:
 *     RtlGuardIsValidStackPointer @ 0x1404FA9FC (RtlGuardIsValidStackPointer.c)
 */

__int64 __fastcall KeVerifyContextRecord(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 440LL) & 0x20) != 0 && (*(_DWORD *)(a2 + 48) & 0x100001) == 0x100001 )
    return (unsigned int)RtlGuardIsValidStackPointer(*(_QWORD *)(a2 + 152)) == 0 ? 0xC000000D : 0;
  else
    return 0LL;
}
