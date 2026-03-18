/*
 * XREFs of EtwpGetMaxDebugIdBufferSize @ 0x14049256C
 * Callers:
 *     EtwpRealtimeNotifyConsumers @ 0x140492464 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpSendDbgId @ 0x1406A5450 (EtwpSendDbgId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetMaxDebugIdBufferSize(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *v3; // rdx
  int v4; // r8d
  int v5; // eax

  v1 = (_QWORD *)(a1 + 112);
  if ( (_QWORD *)*v1 == v1 )
    return 0LL;
  v3 = (_QWORD *)*v1;
  v4 = 64;
  while ( v3 != v1 )
  {
    v5 = *((_DWORD *)v3 + 5);
    v3 = (_QWORD *)*v3;
    v4 += (v5 + 19) & 0xFFFFFFF8;
  }
  return (unsigned int)(v4 + 72);
}
