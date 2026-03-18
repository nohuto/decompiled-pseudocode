/*
 * XREFs of PnpBusTypeGuidInitialize @ 0x1407E8688
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1407BF6F0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 PnpBusTypeGuidInitialize()
{
  __int64 result; // rax

  PnpBusTypeGuidCountMax = 16;
  PnpBusTypeGuidArray = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x75737050u);
  if ( PnpBusTypeGuidArray )
  {
    PnpBusTypeGuidCount = 0;
    qword_14034B188 = (__int64)&qword_14034B180;
    qword_14034B180 = (__int64)&qword_14034B180;
    result = 0LL;
    LODWORD(PnpBusTypeGuidLock) = 1;
    qword_14034B168 = 0LL;
    dword_14034B170 = 0;
    word_14034B178 = 1;
    byte_14034B17A = 6;
    dword_14034B17C = 0;
  }
  else
  {
    PnpBusTypeGuidCountMax = 0;
    return 3221225626LL;
  }
  return result;
}
