/*
 * XREFs of MmDiscardDriverSection @ 0x14074E43C
 * Callers:
 *     KeFreeInitializationCode @ 0x14072DA18 (KeFreeInitializationCode.c)
 *     KeInitSystem @ 0x14074E20C (KeInitSystem.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x140035B30 (MiLookupDataTableEntry.c)
 *     MiFreeInitializationCode @ 0x1403CDAD4 (MiFreeInitializationCode.c)
 *     MiSnapDriverRange @ 0x1403CEF0C (MiSnapDriverRange.c)
 */

char __fastcall MmDiscardDriverSection(unsigned __int64 a1)
{
  unsigned __int64 *v2; // rdi
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v2 = (unsigned __int64 *)MiLookupDataTableEntry(a1, 0);
  v3 = v2[6];
  if ( (*(_BYTE *)(8 * ((v3 >> 39) & 0x1FF) - 0x90482413000LL) & 1) == 0
    || (*(_BYTE *)(((v3 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) == 0
    || (LOBYTE(v4) = *(_BYTE *)(((v3 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0x81, (PVOID)v3 == PsNtosImageBase)
    || (_BYTE)v4 != 0x81
    || (PVOID)v3 == PsHalImageBase )
  {
    LOBYTE(v4) = MiSnapDriverRange((__int64)v2, 0, 0, a1, &v6, &v7);
    if ( v6 )
    {
      v4 = MiFreeInitializationCode(v2, (__int64)(v6 << 25) >> 16, (__int64)((v7 << 25) | 0xFFF0000) >> 16);
      if ( v4 )
      {
        if ( (PVOID)v3 == PsNtosImageBase || (PVOID)v3 == PsHalImageBase )
          qword_1402FF818 -= v4;
        else
          LOBYTE(v4) = _InterlockedExchangeAdd(&dword_1402FF858, -(int)v4);
      }
    }
  }
  return v4;
}
