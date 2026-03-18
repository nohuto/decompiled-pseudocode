/*
 * XREFs of MiObtainSystemVa @ 0x140067684
 * Callers:
 *     MiExpandPtes @ 0x140068530 (MiExpandPtes.c)
 *     MiExpandSystemCache @ 0x14006B790 (MiExpandSystemCache.c)
 *     MiExpandPagedPool @ 0x140128FF4 (MiExpandPagedPool.c)
 *     MiMapWithLargePages @ 0x140158140 (MiMapWithLargePages.c)
 *     MiExpandSpecialPool @ 0x14021F2B8 (MiExpandSpecialPool.c)
 *     MiReserveDriverPtes @ 0x140579058 (MiReserveDriverPtes.c)
 *     MiMapBBTMemory @ 0x1407C8220 (MiMapBBTMemory.c)
 *     MiInitializeSystemPtes @ 0x1407CA5BC (MiInitializeSystemPtes.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiObtainSystemVa(unsigned int a1, int a2)
{
  __int64 *v3; // rcx

  switch ( a2 )
  {
    case 8:
      v3 = &qword_14034EDE0;
      break;
    case 6:
      v3 = (__int64 *)&unk_14034ED40;
      break;
    case 9:
    case 15:
      v3 = &qword_14034EC50;
      break;
    case 12:
      v3 = &qword_14034ECA0;
      break;
    default:
      v3 = (__int64 *)&unk_14034ECF0;
      if ( a2 != 11 )
        v3 = &qword_14034ED90;
      break;
  }
  return MiObtainDynamicVa(v3, a1, a2);
}
