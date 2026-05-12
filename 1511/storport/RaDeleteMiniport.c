/*
 * XREFs of RaDeleteMiniport @ 0x1C0057C20
 * Callers:
 *     RaidDeleteAdapter @ 0x1C0025F90 (RaidDeleteAdapter.c)
 * Callees:
 *     RaCallMiniportFreeResources @ 0x1C0028F8C (RaCallMiniportFreeResources.c)
 */

void __fastcall RaDeleteMiniport(__int64 a1, char a2)
{
  void *v3; // rcx
  void *v4; // rcx

  if ( a2 )
    RaCallMiniportFreeResources(a1);
  v3 = *(void **)(a1 + 64);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x43506152u);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  *(_DWORD *)(a1 + 8) = 0;
  if ( *(_QWORD *)(a1 + 232) )
    *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)a1 = 0LL;
  v4 = *(void **)(a1 + 240);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x454D6152u);
    *(_QWORD *)(a1 + 240) = 0LL;
  }
}
