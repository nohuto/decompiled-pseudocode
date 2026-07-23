/*
 * XREFs of MmMapApiSetView @ 0x14046AC1C
 * Callers:
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 *     PspSetupUserProcessAddressSpace @ 0x1404FD9F4 (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1400131A0 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140076730 (PsGetServerSiloGlobals.c)
 *     PsIsHostSilo @ 0x140079FE8 (PsIsHostSilo.c)
 *     MmMapViewOfSection @ 0x14046AEB8 (MmMapViewOfSection.c)
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
    LODWORD(v3) = qword_1403267A0;
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
