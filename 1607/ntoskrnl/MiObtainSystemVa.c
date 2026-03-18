/*
 * XREFs of MiObtainSystemVa @ 0x1400A3024
 * Callers:
 *     MiExpandPagedPool @ 0x1400A296C (MiExpandPagedPool.c)
 *     MiExpandSystemCache @ 0x1400A2B00 (MiExpandSystemCache.c)
 *     MiExpandPtes @ 0x1400A2C68 (MiExpandPtes.c)
 *     MiMapWithLargePages @ 0x14012E28C (MiMapWithLargePages.c)
 *     MiGetLargePageWorkMapping @ 0x14013ADC0 (MiGetLargePageWorkMapping.c)
 *     MiExpandSpecialPool @ 0x1401EB618 (MiExpandSpecialPool.c)
 *     MiReserveDriverPtes @ 0x1404CD0DC (MiReserveDriverPtes.c)
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
      v3 = &qword_140326C60;
      break;
    case 6u:
      v3 = (__int64 *)&unk_140326BC0;
      break;
    case 9u:
    case 0xFu:
      v3 = &qword_140326AD0;
      break;
    case 0xCu:
      v3 = &qword_140326B20;
      break;
    default:
      v3 = (__int64 *)&unk_140326B70;
      if ( a2 != 11 )
        v3 = &qword_140326C10;
      break;
  }
  return MiObtainDynamicVa(v3, a1, a2, 0LL);
}
