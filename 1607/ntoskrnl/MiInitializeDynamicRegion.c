/*
 * XREFs of MiInitializeDynamicRegion @ 0x1407A517C
 * Callers:
 *     MiInitializeSpecialPool @ 0x14053629C (MiInitializeSpecialPool.c)
 *     MiInitializeSystemCache @ 0x14055453C (MiInitializeSystemCache.c)
 *     MiBuildPagedPool @ 0x14078E258 (MiBuildPagedPool.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 */

ULONG_PTR __fastcall MiInitializeDynamicRegion(int a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // r8
  __int64 *v3; // r9

  switch ( a1 )
  {
    case 12:
      qword_140326BA8 = (__int64)MiGetAnyMultiplexedVm(1);
      break;
    case 11:
      qword_140326BF8 = (__int64)MiGetAnyMultiplexedVm(1);
      break;
    case 9:
      qword_140326B58 = (__int64)MiGetAnyMultiplexedVm(1);
      break;
    case 6:
      qword_140326C48 = (__int64)MiGetAnyMultiplexedVm(2);
      break;
    case 7:
      qword_140326C98 = (__int64)MiGetAnyMultiplexedVm(2);
      break;
    default:
      qword_140326CE8 = (__int64)MiGetAnyMultiplexedVm(0);
      break;
  }
  return MiBuildDynamicRegion(v3, v1, v2);
}
