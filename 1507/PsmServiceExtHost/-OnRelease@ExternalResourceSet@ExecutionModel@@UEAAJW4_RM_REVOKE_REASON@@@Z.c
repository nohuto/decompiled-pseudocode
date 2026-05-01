/*
 * XREFs of ?OnRelease@ExternalResourceSet@ExecutionModel@@UEAAJW4_RM_REVOKE_REASON@@@Z @ 0x18003FA50
 * Callers:
 *     <none>
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAJW4Enum@ExternalResourceNotificationType@2@W43ResourceType@2@K@Z @ 0x18003FBC8 (-QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAJW4Enum@ExternalResourceNotificationType@2.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::OnRelease(__int64 a1, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r12
  int v5; // ebx
  __int64 v6; // r8

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 1424);
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 1424));
  if ( a2 == 2 )
    *(_BYTE *)(a1 + 1393) = 1;
  if ( *(_QWORD *)(a1 + 1464) )
  {
    v5 = 1;
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 128LL)
                                                                                      + 24LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 24) + 128LL),
           *(unsigned int *)(*(_QWORD *)(a1 + 24) + 192LL),
           *(unsigned int *)(*(_QWORD *)(a1 + 24) + 196LL),
           a1 + 1368,
           4660LL,
           a1 + 1464);
    if ( v5 >= 0 )
      v5 = ExecutionModel::ExternalResourceSet::QueueMessage(a1, 1LL, v6, a2);
  }
  RtlLeaveCriticalSection(v2);
  return (unsigned int)v5;
}
