/*
 * XREFs of ?OnAcquired@ExternalResourceSet@ExecutionModel@@UEAAJXZ @ 0x180036AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2@W43ResourceType@2@K@Z @ 0x180036B04 (-QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::OnAcquired(
        ExecutionModel::ExternalResourceSet *this,
        __int64 a2,
        __int64 a3)
{
  if ( (*((_BYTE *)this + 1424) & 2) == 0 )
    ExecutionModel::ExternalResourceSet::QueueMessage(this, 0LL, a3, 0LL);
  return 0LL;
}
