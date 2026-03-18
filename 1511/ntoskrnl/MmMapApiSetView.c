/*
 * XREFs of MmMapApiSetView @ 0x140463CA4
 * Callers:
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 *     PspSetupUserProcessAddressSpace @ 0x14046390C (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     MmMapViewOfSection @ 0x1404644F4 (MmMapViewOfSection.c)
 */

__int64 __fastcall MmMapApiSetView(__int64 a1)
{
  __int64 result; // rax
  int v3; // edx
  __int64 v4; // rcx
  __int64 *v5; // r8
  __int64 v6; // [rsp+68h] [rbp+10h] BYREF
  __int64 v7; // [rsp+70h] [rbp+18h] BYREF
  __int64 v8; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0LL;
  v8 = 0LL;
  v7 = 0LL;
  result = MmMapViewOfSection(
             qword_1402FE498,
             a1,
             (unsigned int)&v6,
             0,
             0LL,
             (__int64)&v8,
             (__int64)&v7,
             1,
             0x400000,
             2);
  if ( (int)result >= 0 )
  {
    v3 = v6;
    *(_QWORD *)(*(_QWORD *)(a1 + 1016) + 104LL) = v6;
    v4 = 0LL;
    v5 = *(__int64 **)(a1 + 1064);
    if ( v5 )
      v4 = *v5;
    if ( v4 )
      *(_DWORD *)(v4 + 56) = v3;
  }
  return result;
}
