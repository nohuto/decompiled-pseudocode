/*
 * XREFs of MiMarkPageActive @ 0x140018440
 * Callers:
 *     MiInitializeSystemPageTable @ 0x140017F70 (MiInitializeSystemPageTable.c)
 *     MiDemoteLargePage @ 0x140132C08 (MiDemoteLargePage.c)
 *     MiMakeOutswappedPageResident @ 0x1401CFB54 (MiMakeOutswappedPageResident.c)
 *     MmCreateProcessAddressSpace @ 0x1403CB7AC (MmCreateProcessAddressSpace.c)
 *     MiMapNewSession @ 0x1404FFD90 (MiMapNewSession.c)
 *     MiAllocateTopLevelPage @ 0x140621CD4 (MiAllocateTopLevelPage.c)
 *     MiInitializeShadowPageTable @ 0x1406260E8 (MiInitializeShadowPageTable.c)
 *     MiInitializeBootProcess @ 0x14076CFE4 (MiInitializeBootProcess.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 */

__int64 __fastcall MiMarkPageActive(__int64 a1)
{
  unsigned __int8 v2; // cl
  __int64 result; // rax

  v2 = MiLockPageInline(a1);
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v2 != 17 )
  {
    result = v2;
    __writecr8(v2);
  }
  return result;
}
