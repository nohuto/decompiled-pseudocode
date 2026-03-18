/*
 * XREFs of PiDqQueryAppendActionEntry @ 0x1404407A4
 * Callers:
 *     PiDqQueryEnumObject @ 0x14043E924 (PiDqQueryEnumObject.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140444E04 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryApplyObjectEvent @ 0x14053CF2C (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     PiDqGetPnpObjectType @ 0x14043FA70 (PiDqGetPnpObjectType.c)
 *     PiDqQueryFreeActiveData @ 0x14053D550 (PiDqQueryFreeActiveData.c)
 *     PiDmGetObjectCount @ 0x1406804BC (PiDmGetObjectCount.c)
 */

__int64 __fastcall PiDqQueryAppendActionEntry(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 **v4; // rcx
  unsigned int PnpObjectType; // eax

  result = a1 + 192;
  v4 = *(__int64 ***)(a1 + 200);
  *a2 = result;
  a2[1] = (__int64)v4;
  if ( *v4 != (__int64 *)result )
    __fastfail(3u);
  *v4 = a2;
  *(_QWORD *)(result + 8) = a2;
  if ( ++*(_DWORD *)(a1 + 208) > 0x3E8u )
  {
    PnpObjectType = PiDqGetPnpObjectType(*(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL));
    result = 2 * (unsigned int)PiDmGetObjectCount(PnpObjectType);
    if ( *(_DWORD *)(a1 + 208) > (unsigned int)result )
    {
      *(_DWORD *)(a1 + 216) |= 1u;
      return PiDqQueryFreeActiveData(a1);
    }
  }
  return result;
}
