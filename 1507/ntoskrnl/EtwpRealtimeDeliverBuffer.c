/*
 * XREFs of EtwpRealtimeDeliverBuffer @ 0x1404A224C
 * Callers:
 *     EtwpFlushBufferToRealtime @ 0x1404A218C (EtwpFlushBufferToRealtime.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x1404A264C (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x1404ACD84 (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x1405C13D0 (EtwpRealtimeUpdateReferenceTime.c)
 * Callees:
 *     EtwpRealtimeInjectEtwBuffer @ 0x1404A2364 (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwpDisassociateConsumer @ 0x140558FEC (EtwpDisassociateConsumer.c)
 */

__int64 __fastcall EtwpRealtimeDeliverBuffer(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  char v4; // r13
  int v6; // eax
  _QWORD *v7; // r15
  _QWORD *v8; // r14
  __int16 v9; // r12
  _QWORD *v10; // rbp
  int v11; // eax
  char v12; // al
  char v13; // cl
  char v15; // [rsp+50h] [rbp+8h]

  v3 = 0LL;
  v4 = 0;
  v15 = 0;
  v6 = *(_DWORD *)(a1 + 464);
  if ( v6 )
  {
    if ( v6 == 3 )
    {
      *(_WORD *)(a2 + 52) |= 8u;
    }
    else if ( v6 == 2 )
    {
      *(_WORD *)(a2 + 52) |= 4u;
    }
    else
    {
      *(_WORD *)(a2 + 52) |= 2u;
    }
    v4 = 1;
  }
  v7 = (_QWORD *)(a1 + 344);
  v8 = *(_QWORD **)(a1 + 344);
  if ( v8 == (_QWORD *)(a1 + 344) )
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
        v10[4] = v3;
        v3 = v10;
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
    if ( (*((_BYTE *)v10 + 90) & ((*(_BYTE *)(a2 + 52) & 1) != 0)) != 0 )
      goto LABEL_21;
  }
  while ( v8 != v7 );
  if ( !v13 )
    return 3221225473LL;
  if ( v4 )
    *(_DWORD *)(a1 + 464) = 0;
  if ( *(_WORD *)(a2 + 54) != 6 )
    ++*(_DWORD *)(a1 + 272);
  while ( v3 )
  {
    *((_BYTE *)v3 + 90) |= 2u;
    ++*((_DWORD *)v3 + 20);
    v3 = (_QWORD *)v3[4];
  }
  return 0LL;
}
