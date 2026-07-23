/*
 * XREFs of TppCancelWait @ 0x18003BE68
 * Callers:
 *     TpSetWaitEx @ 0x18003BD50 (TpSetWaitEx.c)
 *     TpReleaseWait @ 0x180064580 (TpReleaseWait.c)
 *     TpWaitForWait @ 0x180064F30 (TpWaitForWait.c)
 *     TppStopWaitCallbackGeneration @ 0x180065070 (TppStopWaitCallbackGeneration.c)
 * Callees:
 *     TppCancelTimer @ 0x18003C258 (TppCancelTimer.c)
 *     TppBarrierAdjust @ 0x180063E74 (TppBarrierAdjust.c)
 *     ZwCancelWaitCompletionPacket @ 0x1800A7610 (ZwCancelWaitCompletionPacket.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
 */

char __fastcall TppCancelWait(__int64 a1, __int64 a2, char a3, int *a4)
{
  BOOLEAN v5; // r8
  char v8; // di
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // al
  __int64 v16; // r9
  int v17; // ecx
  bool v18; // zf
  char v19; // al

  v5 = (a3 & 2) != 0;
  if ( *(_QWORD *)(a1 + 360) )
  {
    v10 = ZwCancelWaitCompletionPacket(*(HANDLE *)(a1 + 368), v5);
    if ( v10 )
    {
      if ( v10 != 259 && v10 != -1073741536 )
        TppRaiseInvalidParameter(v12, v11, v13, v14);
      v19 = *(_BYTE *)(a1 + 464);
      v8 = 0;
      if ( (v19 & 4) == 0 )
      {
        *(_BYTE *)(a1 + 464) = v19 | 4;
        TppBarrierAdjust(a1 + 56, 1LL, 0LL, v14);
      }
      *a4 = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 360) = 0LL;
      v8 = 1;
      LOBYTE(v13) = 1;
      v15 = TppCancelTimer(a1, a2, v13);
      v17 = -1;
      if ( v15 )
        v17 = -2;
      v18 = (*(_BYTE *)(a1 + 464) & 4) == 0;
      *a4 = v17;
      if ( !v18 )
      {
        TppBarrierAdjust(a1 + 56, 0xFFFFFFFFLL, 0LL, v16);
        *(_BYTE *)(a1 + 464) &= ~4u;
      }
    }
  }
  else
  {
    *a4 = 0;
    v8 = 1;
  }
  *(_BYTE *)(a1 + 464) &= 0xFCu;
  return v8;
}
