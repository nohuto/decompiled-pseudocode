/*
 * XREFs of TppCancelWait @ 0x18003C930
 * Callers:
 *     TpSetWaitEx @ 0x18003C830 (TpSetWaitEx.c)
 *     TpReleaseWait @ 0x18007D2D0 (TpReleaseWait.c)
 *     TpWaitForWait @ 0x18007D430 (TpWaitForWait.c)
 *     TppStopWaitCallbackGeneration @ 0x18007DFD0 (TppStopWaitCallbackGeneration.c)
 * Callees:
 *     TppCancelTimer @ 0x18003CF70 (TppCancelTimer.c)
 *     TppBarrierAdjust @ 0x18007DD84 (TppBarrierAdjust.c)
 *     ZwCancelWaitCompletionPacket @ 0x180094200 (ZwCancelWaitCompletionPacket.c)
 *     TppRaiseInvalidParameter @ 0x1800F5C58 (TppRaiseInvalidParameter.c)
 */

char __fastcall TppCancelWait(__int64 a1, __int64 a2, char a3, int *a4)
{
  BOOLEAN v5; // r8
  char v8; // di
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  char v14; // al
  int v15; // ecx
  bool v16; // zf
  char v17; // al

  v5 = (a3 & 2) != 0;
  if ( *(_QWORD *)(a1 + 352) )
  {
    v10 = ZwCancelWaitCompletionPacket(*(HANDLE *)(a1 + 360), v5);
    if ( v10 )
    {
      if ( v10 != -1073741536 && v10 != 259 )
        TppRaiseInvalidParameter(v12, v11, v13);
      v17 = *(_BYTE *)(a1 + 456);
      v8 = 0;
      if ( (v17 & 4) == 0 )
      {
        *(_BYTE *)(a1 + 456) = v17 | 4;
        TppBarrierAdjust(a1 + 56, 1LL);
      }
      *a4 = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 352) = 0LL;
      v8 = 1;
      LOBYTE(v13) = 1;
      v14 = TppCancelTimer(a1, a2, v13);
      v15 = -1;
      if ( v14 )
        v15 = -2;
      v16 = (*(_BYTE *)(a1 + 456) & 4) == 0;
      *a4 = v15;
      if ( !v16 )
      {
        TppBarrierAdjust(a1 + 56, 0xFFFFFFFFLL);
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
