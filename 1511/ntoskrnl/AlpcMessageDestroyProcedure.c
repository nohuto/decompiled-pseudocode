/*
 * XREFs of AlpcMessageDestroyProcedure @ 0x140426FA0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     AlpcpReleaseDirectAttribute @ 0x1400BBFFC (AlpcpReleaseDirectAttribute.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PsReleaseProcessWakeCounter @ 0x1403E967C (PsReleaseProcessWakeCounter.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1403F4A84 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpDereferenceBlobEx @ 0x1404243CC (AlpcpDereferenceBlobEx.c)
 *     PsReturnSharedPoolQuota @ 0x14046C2DC (PsReturnSharedPoolQuota.c)
 *     AlpcpReleaseAttributes @ 0x14047E354 (AlpcpReleaseAttributes.c)
 *     AlpcpReleaseViewAttribute @ 0x1404B80D8 (AlpcpReleaseViewAttribute.c)
 *     AlpcpClearOwnerPortMessageUnsafe @ 0x1404C2BA8 (AlpcpClearOwnerPortMessageUnsafe.c)
 *     AlpcpEnterFreeEventMessageLog @ 0x14061FB9C (AlpcpEnterFreeEventMessageLog.c)
 */

__int64 __fastcall AlpcMessageDestroyProcedure(__int64 a1)
{
  struct _KPROCESS *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  ULONG_PTR v5; // rcx
  ULONG_PTR v6; // rcx
  ULONG_PTR v7; // rcx
  __int64 v8; // rcx
  int v10; // esi
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx

  if ( AlpcpMessageLogEnabled )
    AlpcpEnterFreeEventMessageLog();
  *(_DWORD *)(a1 + 248) |= 0x80000000;
  if ( *(_QWORD *)(a1 + 96) )
  {
    v10 = (*(_DWORD *)(a1 + 40) >> 13) & 1;
    AlpcpClearOwnerPortMessageUnsafe(a1);
    *(_DWORD *)(a1 + 40) = 0;
    AlpcpReleaseAttributes(a1 + 104);
    v11 = *(_QWORD *)(a1 + 200);
    if ( v11 )
    {
      PsReleaseProcessWakeCounter(v11, *(unsigned int *)(a1 + 248));
      *(_QWORD *)(a1 + 200) = 0LL;
    }
    *(_DWORD *)(a1 + 224) = 2621440;
    *(_QWORD *)(a1 + 176) = 0LL;
    *(_QWORD *)(a1 + 184) = 0LL;
    if ( v10 )
    {
      _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 96) + 32LL), 0);
      AlpcpDereferenceBlobEx(*(_QWORD *)(a1 + 96), 1);
    }
    return 3221225473LL;
  }
  else
  {
    v2 = *(struct _KPROCESS **)(a1 + 48);
    if ( v2 )
    {
      v12 = 776LL;
      if ( *(_QWORD *)(a1 + 208) )
        v12 = *(_QWORD *)(a1 + 216) + 776LL;
      if ( (*(_DWORD *)(a1 + 40) & 0x400) != 0 )
      {
        PsReturnSharedPoolQuota(v2);
      }
      else
      {
        AlpcpReleasePagedPoolQuota(v2, v12);
        ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 48), 0x63706C41u);
      }
      *(_QWORD *)(a1 + 48) = 0LL;
    }
    v3 = *(void **)(a1 + 208);
    if ( v3 )
      ExFreePoolWithTag(v3, 0x42456C41u);
    v4 = *(void **)(a1 + 24);
    if ( v4 )
    {
      if ( (*(_DWORD *)(a1 + 40) & 0x1000) != 0 )
        ObfDereferenceObject(v4);
      *(_QWORD *)(a1 + 24) = 0LL;
    }
    v5 = *(_QWORD *)(a1 + 136);
    if ( v5 )
    {
      AlpcpDereferenceBlobEx(v5, 1);
      *(_QWORD *)(a1 + 136) = 0LL;
    }
    v6 = *(_QWORD *)(a1 + 144);
    if ( v6 )
    {
      AlpcpReleaseViewAttribute(v6);
      *(_QWORD *)(a1 + 144) = 0LL;
    }
    v7 = *(_QWORD *)(a1 + 152);
    if ( v7 )
    {
      AlpcpDereferenceBlobEx(v7, 1);
      *(_QWORD *)(a1 + 152) = 0LL;
    }
    if ( *(_QWORD *)(a1 + 160) )
    {
      AlpcpReleaseDirectAttribute(*(_QWORD *)(a1 + 160));
      *(_QWORD *)(a1 + 160) = 0LL;
    }
    v8 = *(_QWORD *)(a1 + 200);
    if ( v8 )
    {
      PsReleaseProcessWakeCounter(v8, *(unsigned int *)(a1 + 248));
      *(_QWORD *)(a1 + 200) = 0LL;
    }
    return 0LL;
  }
}
