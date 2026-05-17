/*
 * XREFs of TppCancelWait @ 0x18000AA60
 * Callers:
 *     TppStopWaitCallbackGeneration @ 0x180003F20 (TppStopWaitCallbackGeneration.c)
 *     TpWaitForWait @ 0x180004C20 (TpWaitForWait.c)
 *     TpReleaseWait @ 0x1800078A0 (TpReleaseWait.c)
 *     TpSetWaitEx @ 0x18000A960 (TpSetWaitEx.c)
 * Callees:
 *     TppBarrierAdjust @ 0x1800042B4 (TppBarrierAdjust.c)
 *     TppCancelTimer @ 0x18000B028 (TppCancelTimer.c)
 *     ZwCancelWaitCompletionPacket @ 0x1800A62B0 (ZwCancelWaitCompletionPacket.c)
 *     TppRaiseInvalidParameter @ 0x1800F5658 (TppRaiseInvalidParameter.c)
 */

char __fastcall TppCancelWait(__int64 a1, __int64 a2, char a3, int *a4)
{
  bool v5; // r8
  __int64 v6; // rbp
  char v8; // di
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // al
  int v16; // ecx
  bool v17; // zf
  char v18; // al

  v5 = (a3 & 2) != 0;
  v6 = a2;
  if ( *(_QWORD *)(a1 + 352) )
  {
    LOBYTE(a2) = v5;
    v10 = ZwCancelWaitCompletionPacket(*(_QWORD *)(a1 + 360), a2);
    if ( v10 )
    {
      if ( v10 != -1073741536 && v10 != 259 )
        TppRaiseInvalidParameter(v12, v11, v13, v14);
      v18 = *(_BYTE *)(a1 + 456);
      v8 = 0;
      if ( (v18 & 4) == 0 )
      {
        *(_BYTE *)(a1 + 456) = v18 | 4;
        TppBarrierAdjust((unsigned __int64 *)(a1 + 56), 1, 0);
      }
      *a4 = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 352) = 0LL;
      v8 = 1;
      LOBYTE(v13) = 1;
      v15 = TppCancelTimer(a1, v6, v13);
      v16 = -1;
      if ( v15 )
        v16 = -2;
      v17 = (*(_BYTE *)(a1 + 456) & 4) == 0;
      *a4 = v16;
      if ( !v17 )
      {
        TppBarrierAdjust((unsigned __int64 *)(a1 + 56), -1, 0);
        *(_BYTE *)(a1 + 456) &= ~4u;
      }
    }
  }
  else
  {
    *a4 = 0;
    v8 = 1;
  }
  *(_BYTE *)(a1 + 456) &= 0xFCu;
  return v8;
}
