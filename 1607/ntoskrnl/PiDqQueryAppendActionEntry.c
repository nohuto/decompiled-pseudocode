/*
 * XREFs of PiDqQueryAppendActionEntry @ 0x14048CEA0
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14048B010 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryApplyObjectEvent @ 0x14048C498 (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryEnumObject @ 0x1404DC1E8 (PiDqQueryEnumObject.c)
 * Callees:
 *     PiDqQueryFreeActiveData @ 0x14048D088 (PiDqQueryFreeActiveData.c)
 *     PiDqGetPnpObjectType @ 0x1404E557C (PiDqGetPnpObjectType.c)
 *     PiDmGetObjectCount @ 0x14062F98C (PiDmGetObjectCount.c)
 */

__int64 __fastcall PiDqQueryAppendActionEntry(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 **v4; // rcx
  unsigned int PnpObjectType; // eax

  result = a1 + 192;
  v4 = *(__int64 ***)(a1 + 200);
  if ( *v4 != (__int64 *)result )
    __fastfail(3u);
  *a2 = result;
  a2[1] = (__int64)v4;
  *v4 = a2;
  *(_QWORD *)(result + 8) = a2;
  if ( ++*(_DWORD *)(a1 + 208) > 0x3E8u )
  {
    PnpObjectType = PiDqGetPnpObjectType(*(unsigned int *)(*(_QWORD *)(a1 + 24) + 16LL));
    result = 2 * (unsigned int)PiDmGetObjectCount(PnpObjectType);
    if ( *(_DWORD *)(a1 + 208) > (unsigned int)result )
    {
      *(_DWORD *)(a1 + 216) |= 1u;
      return PiDqQueryFreeActiveData(a1);
    }
  }
  return result;
}
