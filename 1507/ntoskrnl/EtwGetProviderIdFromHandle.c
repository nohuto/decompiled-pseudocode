/*
 * XREFs of EtwGetProviderIdFromHandle @ 0x14012C584
 * Callers:
 *     WdiDispatchControl @ 0x140551E3C (WdiDispatchControl.c)
 *     EtwWriteStartScenario @ 0x140584044 (EtwWriteStartScenario.c)
 *     EtwWriteEndScenario @ 0x1405843A4 (EtwWriteEndScenario.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     EtwpUnreferenceGuidEntry @ 0x1404CE13C (EtwpUnreferenceGuidEntry.c)
 *     EtwpReferenceGuidEntry @ 0x1404CE3DC (EtwpReferenceGuidEntry.c)
 */

__int64 __fastcall EtwGetProviderIdFromHandle(ULONG_PTR *a1, char a2, _OWORD *a3)
{
  NTSTATUS v3; // edi
  PVOID v6; // rcx
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  if ( a2 )
  {
    v3 = ObReferenceObjectByHandle(a1, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
    if ( v3 >= 0 )
    {
      v6 = Object;
      *a3 = *(_OWORD *)(*((_QWORD *)Object + 4) + 24LL);
      ObfDereferenceObjectWithTag(v6, 0x746C6644u);
    }
    return (unsigned int)v3;
  }
  if ( a1 && (unsigned __int8)EtwpReferenceGuidEntry(a1[4]) )
  {
    *a3 = *(_OWORD *)(a1[4] + 24);
    EtwpUnreferenceGuidEntry(a1[4]);
    return (unsigned int)v3;
  }
  return 3221225480LL;
}
