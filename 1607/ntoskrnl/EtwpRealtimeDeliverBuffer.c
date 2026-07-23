/*
 * XREFs of EtwpRealtimeDeliverBuffer @ 0x1404920CC
 * Callers:
 *     EtwpRealtimeFlushSavedBuffers @ 0x140490D9C (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x140491D60 (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpFlushBufferToRealtime @ 0x140492064 (EtwpFlushBufferToRealtime.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x14057EF78 (EtwpRealtimeUpdateReferenceTime.c)
 * Callees:
 *     EtwpRealtimeInjectEtwBuffer @ 0x1404921F0 (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwpDisassociateConsumer @ 0x140493610 (EtwpDisassociateConsumer.c)
 */

__int64 __fastcall EtwpRealtimeDeliverBuffer(__int64 a1, __int64 a2)
{
  int v2; // eax
  char v5; // r13
  _QWORD *v6; // rbx
  _QWORD *v7; // r15
  _QWORD *v8; // r14
  __int16 v9; // r12
  _QWORD *v10; // rbp
  int v11; // eax
  char v12; // al
  char v13; // cl
  char v15; // [rsp+50h] [rbp+8h]

  v2 = *(_DWORD *)(a1 + 448);
  v15 = 0;
  v5 = 0;
  v6 = 0LL;
  if ( v2 )
  {
    if ( v2 == 3 )
    {
      *(_WORD *)(a2 + 52) |= 8u;
    }
    else if ( v2 == 2 )
    {
      *(_WORD *)(a2 + 52) |= 4u;
    }
    else
    {
      *(_WORD *)(a2 + 52) |= 2u;
    }
    v5 = 1;
  }
  v7 = (_QWORD *)(a1 + 328);
  v8 = *(_QWORD **)(a1 + 328);
  if ( v8 == (_QWORD *)(a1 + 328) )
    return 3221225473LL;
  do
  {
    v9 = *(_WORD *)(a2 + 52);
    v10 = v8;
    v8 = (_QWORD *)*v8;
    if ( (*((_BYTE *)v10 + 90) & 2) != 0 )
      *(_WORD *)(a2 + 52) = v9 | 4;
    v11 = EtwpRealtimeInjectEtwBuffer(a1, v10, a2);
    *(_WORD *)(a2 + 52) = v9;
    if ( v11 < 0 )
    {
      if ( v11 == -1073741764 )
      {
        v10[4] = v6;
        v6 = v10;
      }
      else
      {
LABEL_21:
        EtwpDisassociateConsumer(a1, v10);
      }
      v13 = v15;
      continue;
    }
    v12 = *((_BYTE *)v10 + 90);
    if ( (v12 & 2) != 0 )
      *((_BYTE *)v10 + 90) = v12 & 0xFD;
    v13 = 1;
    v15 = 1;
    if ( (*((_BYTE *)v10 + 90) & ((*(_WORD *)(a2 + 52) & 1) != 0)) != 0 )
      goto LABEL_21;
  }
  while ( v8 != v7 );
  if ( !v13 )
    return 3221225473LL;
  if ( v5 )
    *(_DWORD *)(a1 + 448) = 0;
  if ( *(_WORD *)(a2 + 54) != 6 )
    ++*(_DWORD *)(a1 + 256);
  while ( v6 )
  {
    *((_BYTE *)v6 + 90) |= 2u;
    ++*((_DWORD *)v6 + 20);
    v6 = (_QWORD *)v6[4];
  }
  return 0LL;
}
