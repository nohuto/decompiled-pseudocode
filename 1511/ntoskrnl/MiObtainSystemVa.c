/*
 * XREFs of MiObtainSystemVa @ 0x140018A70
 * Callers:
 *     MiExpandPagedPool @ 0x140016110 (MiExpandPagedPool.c)
 *     MiExpandSystemCache @ 0x1400162A8 (MiExpandSystemCache.c)
 *     MiExpandPtes @ 0x140016404 (MiExpandPtes.c)
 *     MiMapWithLargePages @ 0x140124B88 (MiMapWithLargePages.c)
 *     MiExpandSpecialPool @ 0x1401DA974 (MiExpandSpecialPool.c)
 *     MiReserveDriverPtes @ 0x1404A6DA8 (MiReserveDriverPtes.c)
 *     MiInitializeSystemPtes @ 0x140749E68 (MiInitializeSystemPtes.c)
 *     MiMapBBTMemory @ 0x14074E034 (MiMapBBTMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiObtainSystemVa(unsigned int a1, unsigned int a2)
{
  __int64 *v3; // rcx

  switch ( a2 )
  {
    case 8u:
      v3 = &qword_1402FE920;
      break;
    case 6u:
      v3 = (__int64 *)&unk_1402FE880;
      break;
    case 9u:
    case 0xFu:
      v3 = &qword_1402FE790;
      break;
    case 0xCu:
      v3 = &qword_1402FE7E0;
      break;
    default:
      v3 = (__int64 *)&unk_1402FE830;
      if ( a2 != 11 )
        v3 = &qword_1402FE8D0;
      break;
  }
  return MiObtainDynamicVa(v3, a1, a2);
}
