/*
 * XREFs of xxxActivateApp @ 0x1C0099540
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00F994C (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 */

__int64 __fastcall xxxActivateApp(__int64 a1, __int64 a2)
{
  int v3; // r8d
  __int64 v4; // r9

  if ( *(_QWORD *)(a1 + 16) == *(_QWORD *)a2 )
  {
    v3 = *(_DWORD *)(a2 + 12);
    v4 = *(unsigned int *)(a2 + 8);
    if ( (v3 & 2) != 0 )
    {
      QueueNotifyTransformableMessage((struct tagWND *)a1, 0x1Cu, v3 & 1, v4, 0, 0);
    }
    else
    {
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout((struct tagWND *)a1, 28LL, v3 & 1, v4, 0, 0, 0LL, 1, 1);
    }
  }
  return 1LL;
}
