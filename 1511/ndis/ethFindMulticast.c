/*
 * XREFs of ethFindMulticast @ 0x1C005DD48
 * Callers:
 *     ndisMIsLoopbackNetBuffer @ 0x1C0050448 (ndisMIsLoopbackNetBuffer.c)
 *     ndisMIsLoopbackPacket @ 0x1C0050698 (ndisMIsLoopbackPacket.c)
 *     ndisFIsLoopbackNetBuffer @ 0x1C0053F94 (ndisFIsLoopbackNetBuffer.c)
 *     EthFilterDprIndicateReceive @ 0x1C005CCA0 (EthFilterDprIndicateReceive.c)
 *     ethFilterDprIndicateReceivePacket @ 0x1C005D320 (ethFilterDprIndicateReceivePacket.c)
 * Callees:
 *     <none>
 */

char __fastcall ethFindMulticast(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r10
  unsigned int i; // r11d
  unsigned int v7; // ecx
  unsigned int v8; // eax
  unsigned __int16 v9; // ax
  unsigned int v10; // eax

  v4 = 0;
  v5 = a1 >> 1;
  if ( a1 )
  {
    for ( i = a1 - 1; ; v5 = v4 + ((i - v4 + 1) >> 1) )
    {
      if ( (unsigned int)v5 > i || (unsigned int)v5 < v4 )
        return 0;
      v7 = *(_DWORD *)(a4 + 2);
      if ( a3 )
      {
        v8 = *(_DWORD *)(a3 + 6 * v5 + 2);
        if ( v8 > v7 )
          goto LABEL_14;
        if ( v8 < v7 )
          goto LABEL_13;
        v9 = *(_WORD *)(a3 + 6 * v5);
      }
      else
      {
        v10 = *(_DWORD *)(a2 + 12 * v5 + 6);
        if ( v10 > v7 )
          goto LABEL_14;
        if ( v10 < v7 )
          goto LABEL_13;
        v9 = *(_WORD *)(a2 + 12 * v5 + 4);
      }
      if ( v9 <= *(_WORD *)a4 )
      {
        if ( v9 >= *(_WORD *)a4 )
          return 1;
LABEL_13:
        v4 = v5 + 1;
        continue;
      }
LABEL_14:
      if ( !(_DWORD)v5 )
        return 0;
      i = v5 - 1;
    }
  }
  return 0;
}
