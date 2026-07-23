/*
 * XREFs of MiObtainSystemVa @ 0x1400A194C
 * Callers:
 *     MiExpandPagedPool @ 0x1400A1294 (MiExpandPagedPool.c)
 *     MiExpandSystemCache @ 0x1400A1428 (MiExpandSystemCache.c)
 *     MiExpandPtes @ 0x1400A1590 (MiExpandPtes.c)
 *     MiMapWithLargePages @ 0x14012E7FC (MiMapWithLargePages.c)
 *     MiGetLargePageWorkMapping @ 0x14013B330 (MiGetLargePageWorkMapping.c)
 *     MiExpandSpecialPool @ 0x1401EB444 (MiExpandSpecialPool.c)
 *     MiReserveDriverPtes @ 0x1404B2B08 (MiReserveDriverPtes.c)
 *     MiInitializeSystemPtes @ 0x1407A4D44 (MiInitializeSystemPtes.c)
 *     MiMapBBTMemory @ 0x1407A6948 (MiMapBBTMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiObtainSystemVa(unsigned int a1, unsigned int a2)
{
  __int64 *v3; // rcx

  switch ( a2 )
  {
    case 8u:
      v3 = &qword_140326CA0;
      break;
    case 6u:
      v3 = (__int64 *)&unk_140326C00;
      break;
    case 9u:
    case 0xFu:
      v3 = &qword_140326B10;
      break;
    case 0xCu:
      v3 = &qword_140326B60;
      break;
    default:
      v3 = (__int64 *)&unk_140326BB0;
      if ( a2 != 11 )
        v3 = &qword_140326C50;
      break;
  }
  return MiObtainDynamicVa(v3, a1, a2, 0LL);
}
