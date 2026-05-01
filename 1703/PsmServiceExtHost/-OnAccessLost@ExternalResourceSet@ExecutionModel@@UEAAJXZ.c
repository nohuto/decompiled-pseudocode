/*
 * XREFs of ?OnAccessLost@ExternalResourceSet@ExecutionModel@@UEAAJXZ @ 0x180034CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2@W43ResourceType@2@K@Z @ 0x18001C3DC (-QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::OnAccessLost(
        ExecutionModel::ExternalResourceSet *this,
        __int64 a2,
        __int64 a3)
{
  if ( (*((_BYTE *)this + 1424) & 2) != 0 )
    return 1LL;
  ExecutionModel::ExternalResourceSet::QueueMessage((__int64)this, 2, a3, 0);
  return 0LL;
}
