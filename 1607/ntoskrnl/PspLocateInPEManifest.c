/*
 * XREFs of PspLocateInPEManifest @ 0x1404FE46C
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x1404FD9F4 (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     LdrResSearchResource @ 0x1404FE548 (LdrResSearchResource.c)
 *     MmCheckImageMapping @ 0x1404FF44C (MmCheckImageMapping.c)
 */

__int64 __fastcall PspLocateInPEManifest(__int64 a1, __int64 a2)
{
  __int64 v3; // r10
  __int64 result; // rax
  int v5; // eax
  _QWORD v6[5]; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+70h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 960);
  if ( *(_QWORD *)(a1 + 1064) )
  {
    result = MmCheckImageMapping(a1, &v7);
    if ( (int)result < 0 )
      return result;
    if ( !(_BYTE)v7 )
      v3 |= 1uLL;
  }
  v6[2] = 0LL;
  v7 = 0LL;
  v6[0] = 24LL;
  v6[1] = 1LL;
  result = LdrResSearchResource(v3, v6, 3LL);
  if ( (int)result >= 0 )
  {
    v5 = v7;
    if ( v7 > 0xFFFFFFFF )
      return 3221225595LL;
    *(_BYTE *)(a2 + 8) |= 0x20u;
    *(_DWORD *)(a2 + 304) = v5;
    *(_DWORD *)(*(_QWORD *)(a2 + 200) + 8LL) |= 0x2000u;
    return 0LL;
  }
  if ( (unsigned int)(result + 1073741687) <= 2 || (_DWORD)result == -1073741308 )
    return 0LL;
  return result;
}
