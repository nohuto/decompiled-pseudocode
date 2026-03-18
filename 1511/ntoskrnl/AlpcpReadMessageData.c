/*
 * XREFs of AlpcpReadMessageData @ 0x1404233F0
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x1404069A0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x140423610 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404271A0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404280D0 (AlpcpReceiveMessage.c)
 *     AlpcpProcessConnectionRequest @ 0x1404807A4 (AlpcpProcessConnectionRequest.c)
 *     AlpcpGetDataFromMessage @ 0x140482550 (AlpcpGetDataFromMessage.c)
 * Callees:
 *     <none>
 */

void *__fastcall AlpcpReadMessageData(__int64 a1, __int64 a2)
{
  size_t v2; // r8
  __int64 v6; // r8
  _OWORD *v7; // rax
  _OWORD *v8; // rcx
  __int128 v9; // xmm1

  v2 = *(unsigned __int16 *)(a1 + 224);
  if ( v2 <= 0x200 )
    return memmove((void *)a2, (const void *)(a1 + 264), v2);
  v6 = 4LL;
  v7 = (_OWORD *)(a1 + 264);
  v8 = (_OWORD *)a2;
  do
  {
    *v8 = *v7;
    v8[1] = v7[1];
    v8[2] = v7[2];
    v8[3] = v7[3];
    v8[4] = v7[4];
    v8[5] = v7[5];
    v8[6] = v7[6];
    v8 += 8;
    v9 = v7[7];
    v7 += 8;
    *(v8 - 1) = v9;
    --v6;
  }
  while ( v6 );
  return memmove((void *)(a2 + 512), *(const void **)(a1 + 208), *(unsigned __int16 *)(a1 + 224) - 512LL);
}
