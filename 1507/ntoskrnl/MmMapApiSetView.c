/*
 * XREFs of MmMapApiSetView @ 0x140465A3C
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x14046567C (PspSetupUserProcessAddressSpace.c)
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 * Callees:
 *     MmMapViewOfSection @ 0x140466864 (MmMapViewOfSection.c)
 */

__int64 __fastcall MmMapApiSetView(__int64 a1)
{
  __int64 result; // rax
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // [rsp+68h] [rbp+10h] BYREF
  __int64 v6; // [rsp+70h] [rbp+18h] BYREF
  __int64 v7; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0LL;
  v7 = 0LL;
  v6 = 0LL;
  result = MmMapViewOfSection(
             qword_14034E960,
             a1,
             (unsigned int)&v5,
             0,
             0LL,
             (__int64)&v7,
             (__int64)&v6,
             1,
             0x400000,
             2);
  if ( (int)result >= 0 )
  {
    v3 = v5;
    *(_QWORD *)(*(_QWORD *)(a1 + 1016) + 104LL) = v5;
    v4 = *(_QWORD *)(a1 + 1064);
    if ( v4 )
      *(_DWORD *)(v4 + 56) = v3;
  }
  return result;
}
