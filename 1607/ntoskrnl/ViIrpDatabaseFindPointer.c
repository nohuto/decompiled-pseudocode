/*
 * XREFs of ViIrpDatabaseFindPointer @ 0x140716C98
 * Callers:
 *     VfIrpDatabaseCheckExFreePool @ 0x140716988 (VfIrpDatabaseCheckExFreePool.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140716A10 (VfIrpDatabaseEntryFindAndLock.c)
 * Callees:
 *     VfUtilAddressRangeFit @ 0x140702BB0 (VfUtilAddressRangeFit.c)
 */

_QWORD *__fastcall ViIrpDatabaseFindPointer(unsigned __int64 a1)
{
  __int64 v1; // r10
  __int64 v2; // r11
  _QWORD *i; // rax

  if ( (unsigned int)VfUtilAddressRangeFit(
                       (unsigned __int64 *)(16LL * (unsigned __int8)(-125 * (a1 >> 12)) + ViIrpDatabaseAddressRanges),
                       a1,
                       a1 + 208) )
  {
    for ( i = *(_QWORD **)(v1 + ViIrpDatabase); i != (_QWORD *)(v1 + ViIrpDatabase); i = (_QWORD *)*i )
    {
      if ( *(i - 4) == v2 )
        return i - 4;
    }
  }
  return 0LL;
}
