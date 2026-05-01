/*
 * XREFs of ?OnAccessLost@ExternalResourceSet@ExecutionModel@@UEAAJXZ @ 0x18003F8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAJW4Enum@ExternalResourceNotificationType@2@W43ResourceType@2@K@Z @ 0x18003FBC8 (-QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAJW4Enum@ExternalResourceNotificationType@2.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::OnAccessLost(ExecutionModel::ExternalResourceSet *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rsi
  __int64 v3; // r8
  unsigned int v4; // ebx

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 1424);
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 1424));
  v4 = 1;
  if ( *((_BYTE *)this + 1393) != 1 )
    v4 = ExecutionModel::ExternalResourceSet::QueueMessage(this, 4LL, v3, 0LL);
  RtlLeaveCriticalSection(v1);
  return v4;
}
