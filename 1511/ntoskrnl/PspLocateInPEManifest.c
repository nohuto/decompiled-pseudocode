/*
 * XREFs of PspLocateInPEManifest @ 0x140464C34
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x14046390C (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     MmCheckImageMapping @ 0x140461E38 (MmCheckImageMapping.c)
 *     LdrResSearchResource @ 0x140464D10 (LdrResSearchResource.c)
 */

__int64 __fastcall PspLocateInPEManifest(__int64 a1, __int64 a2)
{
  __int64 v3; // r10
  __int64 result; // rax
  _QWORD v5[5]; // [rsp+40h] [rbp-28h] BYREF
  char v6; // [rsp+70h] [rbp+8h]

  v3 = *(_QWORD *)(a1 + 960);
  if ( *(_QWORD *)(a1 + 1064) )
  {
    result = MmCheckImageMapping(a1);
    if ( (int)result < 0 )
      return result;
    if ( !v6 )
      v3 |= 1uLL;
  }
  v5[2] = 0LL;
  v5[0] = 24LL;
  v5[1] = 1LL;
  result = LdrResSearchResource(v3, v5, 3LL);
  if ( (int)result >= 0 )
  {
    *(_BYTE *)(a2 + 8) |= 0x20u;
    *(_DWORD *)(a2 + 304) = 0;
    *(_DWORD *)(*(_QWORD *)(a2 + 200) + 8LL) |= 0x2000u;
    return 0LL;
  }
  if ( (unsigned int)(result + 1073741687) <= 2 || (_DWORD)result == -1073741308 )
    return 0LL;
  return result;
}
