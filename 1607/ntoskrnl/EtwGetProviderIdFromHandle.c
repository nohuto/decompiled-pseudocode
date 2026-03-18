/*
 * XREFs of EtwGetProviderIdFromHandle @ 0x1400AFE9C
 * Callers:
 *     WdiDispatchControl @ 0x1404E3CDC (WdiDispatchControl.c)
 *     EtwWriteStartScenario @ 0x140547A90 (EtwWriteStartScenario.c)
 *     EtwWriteEndScenario @ 0x1405485B4 (EtwWriteEndScenario.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     EtwpReferenceGuidEntry @ 0x14040E5A0 (EtwpReferenceGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x14040ED4C (EtwpUnreferenceGuidEntry.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
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
