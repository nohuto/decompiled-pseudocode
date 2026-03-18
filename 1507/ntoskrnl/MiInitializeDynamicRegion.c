/*
 * XREFs of MiInitializeDynamicRegion @ 0x1407CBDF8
 * Callers:
 *     MiInitializeSpecialPool @ 0x140579AAC (MiInitializeSpecialPool.c)
 *     MiInitializeSystemCache @ 0x1407C9B74 (MiInitializeSystemCache.c)
 *     MiBuildPagedPool @ 0x1407C9C28 (MiBuildPagedPool.c)
 *     MiInitializeSystemPtes @ 0x1407CA5BC (MiInitializeSystemPtes.c)
 *     MiInitializeDriverImages @ 0x1407CBC2C (MiInitializeDriverImages.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiInitializeDynamicRegion(int a1, __int64 a2, unsigned __int64 a3)
{
  __int64 *v3; // rcx

  switch ( a1 )
  {
    case 12:
      qword_14034ECE8 = (__int64)dword_14034FF40;
      v3 = &qword_14034ECA0;
      break;
    case 11:
      qword_14034ED38 = (__int64)dword_14034FF40;
      v3 = (__int64 *)&unk_14034ECF0;
      break;
    case 9:
      qword_14034EC98 = (__int64)dword_14034FF40;
      v3 = &qword_14034EC50;
      break;
    case 6:
      qword_14034ED88 = (__int64)dword_14034FE40;
      v3 = (__int64 *)&unk_14034ED40;
      break;
    case 7:
      qword_14034EDD8 = (__int64)dword_14034FE40;
      v3 = &qword_14034ED90;
      break;
    default:
      qword_14034EE28 = (__int64)dword_14034FD40;
      v3 = &qword_14034EDE0;
      break;
  }
  return MiBuildDynamicRegion(v3, a2, a3);
}
