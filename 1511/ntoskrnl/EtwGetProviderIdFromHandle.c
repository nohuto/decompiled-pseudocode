/*
 * XREFs of EtwGetProviderIdFromHandle @ 0x140123884
 * Callers:
 *     EtwWriteEndScenario @ 0x14050451C (EtwWriteEndScenario.c)
 *     EtwWriteStartScenario @ 0x1405045C4 (EtwWriteStartScenario.c)
 *     WdiDispatchControl @ 0x140505580 (WdiDispatchControl.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     EtwpUnreferenceGuidEntry @ 0x140435D70 (EtwpUnreferenceGuidEntry.c)
 *     EtwpReferenceGuidEntry @ 0x140435FC0 (EtwpReferenceGuidEntry.c)
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
