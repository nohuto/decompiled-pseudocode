/*
 * XREFs of MiInitializeDynamicRegion @ 0x14074A95C
 * Callers:
 *     MiInitializeSpecialPool @ 0x1404FF0AC (MiInitializeSpecialPool.c)
 *     MiInitializeSystemCache @ 0x140749490 (MiInitializeSystemCache.c)
 *     MiBuildPagedPool @ 0x140749564 (MiBuildPagedPool.c)
 *     MiInitializeSystemPtes @ 0x140749E68 (MiInitializeSystemPtes.c)
 *     MiInitializeDriverImages @ 0x14074A790 (MiInitializeDriverImages.c)
 * Callees:
 *     <none>
 */

ULONG_PTR __fastcall MiInitializeDynamicRegion(int a1, __int64 a2, unsigned __int64 a3)
{
  __int64 *v3; // rcx

  switch ( a1 )
  {
    case 12:
      qword_1402FE828 = (__int64)&dword_1402FFA80;
      v3 = &qword_1402FE7E0;
      break;
    case 11:
      qword_1402FE878 = (__int64)&dword_1402FFA80;
      v3 = (__int64 *)&unk_1402FE830;
      break;
    case 9:
      qword_1402FE7D8 = (__int64)&dword_1402FFA80;
      v3 = &qword_1402FE790;
      break;
    case 6:
      qword_1402FE8C8 = (__int64)&dword_1402FF980;
      v3 = (__int64 *)&unk_1402FE880;
      break;
    case 7:
      qword_1402FE918 = (__int64)&dword_1402FF980;
      v3 = &qword_1402FE8D0;
      break;
    default:
      qword_1402FE968 = (__int64)&dword_1402FF880;
      v3 = &qword_1402FE920;
      break;
  }
  return MiBuildDynamicRegion(v3, a2, a3);
}
