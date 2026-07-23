/*
 * XREFs of MmDiscardDriverSection @ 0x1407E7104
 * Callers:
 *     KeFreeInitializationCode @ 0x14079AA14 (KeFreeInitializationCode.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x140010760 (MiLookupDataTableEntry.c)
 *     MiFreeInitializationCode @ 0x140573D08 (MiFreeInitializationCode.c)
 *     MiSnapDriverRange @ 0x140574030 (MiSnapDriverRange.c)
 */

char __fastcall MmDiscardDriverSection(unsigned __int64 a1)
{
  PVOID *v2; // rdi
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v2 = MiLookupDataTableEntry(a1, 0);
  v3 = (unsigned __int64)v2[6];
  if ( (*(_BYTE *)(8 * ((v3 >> 39) & 0x1FF) - 0x90482413000LL) & 1) == 0
    || (*(_BYTE *)(((v3 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) == 0
    || (LOBYTE(v4) = *(_BYTE *)(((v3 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0x81, (PVOID)v3 == PsNtosImageBase)
    || (_BYTE)v4 != 0x81
    || (PVOID)v3 == PsHalImageBase )
  {
    LOBYTE(v4) = MiSnapDriverRange((__int64)v2, 0, 0, a1, &v6, &v7);
    if ( v6 )
    {
      v4 = MiFreeInitializationCode((__int64)v2, (__int64)(v6 << 25) >> 16, (__int64)((v7 << 25) | 0xFFF0000) >> 16);
      if ( v4 )
      {
        if ( (PVOID)v3 == PsNtosImageBase || (PVOID)v3 == PsHalImageBase )
          qword_14034FCD8 -= v4;
        else
          LOBYTE(v4) = _InterlockedExchangeAdd(&dword_14034FD18, -(int)v4);
      }
    }
  }
  return v4;
}
