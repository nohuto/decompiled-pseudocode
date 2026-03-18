/*
 * XREFs of MiMarkPageActive @ 0x1400214D4
 * Callers:
 *     MiInitializeSystemPageTable @ 0x140020FBC (MiInitializeSystemPageTable.c)
 *     MiDemoteLargePage @ 0x14013EC14 (MiDemoteLargePage.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFDE0 (MiMakeOutswappedPageResident.c)
 *     MmCreateProcessAddressSpace @ 0x1405261BC (MmCreateProcessAddressSpace.c)
 *     MiMapNewSession @ 0x140536994 (MiMapNewSession.c)
 *     MiAllocateTopLevelPage @ 0x140656D60 (MiAllocateTopLevelPage.c)
 *     MiInitializeShadowPageTable @ 0x14065B988 (MiInitializeShadowPageTable.c)
 *     MiInitializeBootProcess @ 0x1407B7300 (MiInitializeBootProcess.c)
 * Callees:
 *     MiLockPageInline @ 0x140022E70 (MiLockPageInline.c)
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
