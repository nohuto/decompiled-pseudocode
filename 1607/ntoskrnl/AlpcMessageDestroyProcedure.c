/*
 * XREFs of AlpcMessageDestroyProcedure @ 0x140447850
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     AlpcpReleaseDirectAttribute @ 0x1400A7D50 (AlpcpReleaseDirectAttribute.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     AlpcpDereferenceBlobEx @ 0x14040B134 (AlpcpDereferenceBlobEx.c)
 *     PsReleaseProcessWakeCounter @ 0x1404674F0 (PsReleaseProcessWakeCounter.c)
 *     AlpcpReleaseAttributes @ 0x14049F9A8 (AlpcpReleaseAttributes.c)
 *     AlpcpReleaseViewAttribute @ 0x14049FFDC (AlpcpReleaseViewAttribute.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1404ACBE0 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpClearOwnerPortMessageUnsafe @ 0x1404CFF30 (AlpcpClearOwnerPortMessageUnsafe.c)
 *     PsReturnSharedPoolQuota @ 0x14051E3D0 (PsReturnSharedPoolQuota.c)
 *     AlpcpEnterFreeEventMessageLog @ 0x140654F24 (AlpcpEnterFreeEventMessageLog.c)
 */

__int64 __fastcall AlpcMessageDestroyProcedure(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  ULONG_PTR v5; // rcx
  ULONG_PTR v6; // rcx
  ULONG_PTR v7; // rcx
  __int64 v8; // rcx
  int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rdx

  if ( AlpcpMessageLogEnabled )
    AlpcpEnterFreeEventMessageLog();
  *(_DWORD *)(a1 + 256) |= 0x80000000;
  if ( *(_QWORD *)(a1 + 96) )
  {
    v10 = (*(_DWORD *)(a1 + 40) >> 13) & 1;
    AlpcpClearOwnerPortMessageUnsafe(a1);
    *(_DWORD *)(a1 + 40) = 0;
    AlpcpReleaseAttributes(a1 + 104);
    v11 = *(_QWORD *)(a1 + 208);
    if ( v11 )
    {
      PsReleaseProcessWakeCounter(v11, *(unsigned int *)(a1 + 256));
      *(_QWORD *)(a1 + 208) = 0LL;
    }
    *(_DWORD *)(a1 + 232) = 2621440;
    *(_QWORD *)(a1 + 184) = 0LL;
    *(_QWORD *)(a1 + 192) = 0LL;
    if ( v10 )
    {
      _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 96) + 40LL), 0);
      AlpcpDereferenceBlobEx(*(_QWORD *)(a1 + 96), 1);
    }
    return 3221225473LL;
  }
  else
  {
    v2 = *(void **)(a1 + 48);
    if ( v2 )
    {
      v12 = 784LL;
      if ( *(_QWORD *)(a1 + 216) )
        v12 = *(_QWORD *)(a1 + 224) + 784LL;
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
    v3 = *(void **)(a1 + 216);
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
    v8 = *(_QWORD *)(a1 + 208);
    if ( v8 )
    {
      PsReleaseProcessWakeCounter(v8, *(unsigned int *)(a1 + 256));
      *(_QWORD *)(a1 + 208) = 0LL;
    }
    return 0LL;
  }
}
