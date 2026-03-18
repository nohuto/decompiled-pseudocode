/*
 * XREFs of AlpcpReadMessageData @ 0x1404B3420
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x140448B60 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404494D0 (AlpcpReceiveMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x14044B990 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpProcessConnectionRequest @ 0x1404B26D4 (AlpcpProcessConnectionRequest.c)
 *     AlpcpGetDataFromMessage @ 0x1404B2E20 (AlpcpGetDataFromMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x1404B3100 (AlpcpReceiveLegacyMessage.c)
 * Callees:
 *     memmove @ 0x140171280 (memmove.c)
 */

void *__fastcall AlpcpReadMessageData(__int64 a1, char *a2)
{
  __int64 v2; // rbx
  size_t v5; // rbx
  size_t v6; // rax
  const void *v7; // rdx
  size_t v8; // rsi
  char *v9; // rcx
  size_t v10; // r8

  v2 = *(_QWORD *)(a1 + 96);
  if ( v2 )
    v5 = *(_QWORD *)(v2 + 32) - 40LL;
  else
    v5 = 512LL;
  v6 = *(unsigned __int16 *)(a1 + 232);
  v7 = (const void *)(a1 + 272);
  v8 = v6;
  v9 = a2;
  if ( v6 > v5 )
  {
    memmove(a2, v7, v5);
    v7 = *(const void **)(a1 + 216);
    v9 = &a2[v5];
    v10 = v8 - v5;
  }
  else
  {
    v10 = (unsigned int)v6;
  }
  return memmove(v9, v7, v10);
}
