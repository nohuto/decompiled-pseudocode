/*
 * XREFs of MmDiscardDriverSection @ 0x1407BC1C8
 * Callers:
 *     KeFreeInitializationCode @ 0x140777A58 (KeFreeInitializationCode.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x1400145B0 (MiLookupDataTableEntry.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025B30 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiFreeInitializationCode @ 0x14047C33C (MiFreeInitializationCode.c)
 *     MiSnapDriverRange @ 0x14047C564 (MiSnapDriverRange.c)
 */

unsigned __int64 __fastcall MmDiscardDriverSection(unsigned __int64 a1)
{
  PVOID *v2; // rdi
  PVOID v3; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v2 = MiLookupDataTableEntry(a1, 0);
  v3 = v2[6];
  result = MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v3);
  if ( !(_DWORD)result || v3 == PsNtosImageBase || v3 == PsHalImageBase )
  {
    result = MiSnapDriverRange((__int64)v2, 0, 0, a1, &v5, &v6);
    if ( v5 )
    {
      result = MiFreeInitializationCode((__int64)v2, (__int64)(v5 << 25) >> 16);
      if ( result )
      {
        if ( v3 == PsNtosImageBase || v3 == PsHalImageBase )
          qword_140327920 -= result;
      }
    }
  }
  return result;
}
