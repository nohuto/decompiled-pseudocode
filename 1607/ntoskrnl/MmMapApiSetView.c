/*
 * XREFs of MmMapApiSetView @ 0x14046BD4C
 * Callers:
 *     PspAllocateProcess @ 0x14046F030 (PspAllocateProcess.c)
 *     PspSetupUserProcessAddressSpace @ 0x14051A604 (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140013620 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x1400766B0 (PsGetServerSiloGlobals.c)
 *     PsIsHostSilo @ 0x140079F68 (PsIsHostSilo.c)
 *     MmMapViewOfSection @ 0x14046BFE8 (MmMapViewOfSection.c)
 */

__int64 __fastcall MmMapApiSetView(__int64 a1)
{
  __int64 CurrentServerSilo; // rdi
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // edx
  __int64 v6; // rcx
  __int64 *v7; // r8
  __int64 v8; // [rsp+68h] [rbp+10h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( PsIsHostSilo(CurrentServerSilo) )
    LODWORD(v3) = qword_140326760;
  else
    v3 = *((_QWORD *)PsGetServerSiloGlobals(CurrentServerSilo) + 118);
  result = MmMapViewOfSection(v3, a1, (unsigned int)&v8, 0, 0LL, (__int64)&v10, (__int64)&v9, 1, 0x400000, 2);
  if ( (int)result >= 0 )
  {
    v5 = v8;
    *(_QWORD *)(*(_QWORD *)(a1 + 1016) + 104LL) = v8;
    v6 = 0LL;
    v7 = *(__int64 **)(a1 + 1064);
    if ( v7 )
      v6 = *v7;
    if ( v6 )
      *(_DWORD *)(v6 + 56) = v5;
  }
  return result;
}
