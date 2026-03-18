/*
 * XREFs of PnpDeviceCompletionProcessCompletedRequests @ 0x1404589E4
 * Callers:
 *     PipProcessDevNodeTree @ 0x1404583C8 (PipProcessDevNodeTree.c)
 * Callees:
 *     PnpDeviceCompletionQueueIsEmpty @ 0x14009985C (PnpDeviceCompletionQueueIsEmpty.c)
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x140125C38 (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1404573BC (PnpDeviceCompletionProcessCompletedRequest.c)
 */

__int64 __fastcall PnpDeviceCompletionProcessCompletedRequests(int a1, int a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  __int64 CompletedRequest; // rax
  int v9; // eax

  *a3 = 0;
  v6 = 0;
  while ( !PnpDeviceCompletionQueueIsEmpty() )
  {
    if ( !dword_1402FA3CC && (!a2 || !a1 && *a3) )
      break;
    CompletedRequest = PnpDeviceCompletionQueueGetCompletedRequest();
    v9 = PnpDeviceCompletionProcessCompletedRequest(CompletedRequest);
    *a3 = 1;
    if ( v9 == -1073741106 )
      v6 = -1073741106;
  }
  return v6;
}
