/*
 * XREFs of PopBatteryIrpComplete @ 0x140205B64
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     PopBatteryQueueWork @ 0x140131E08 (PopBatteryQueueWork.c)
 */

__int64 __fastcall PopBatteryIrpComplete(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  char v4; // bl

  v3 = *(_DWORD *)(a2 + 48);
  if ( v3 == -1073741536 )
    goto LABEL_2;
  v4 = 1;
  if ( v3 >= 0 )
  {
    if ( !*(_DWORD *)(a3 + 104) )
    {
      *(_DWORD *)(a3 + 108) = *(_DWORD *)(a3 + 168);
      *(_DWORD *)(a3 + 104) = 1;
    }
  }
  else
  {
    if ( !*(_DWORD *)(a3 + 104) )
    {
      *(_DWORD *)(a3 + 104) = 4;
LABEL_2:
      v4 = 0;
      goto LABEL_9;
    }
    *(_DWORD *)(a3 + 104) = 2;
  }
LABEL_9:
  KeSetEvent((PRKEVENT)(a3 + 80), 0, 0);
  if ( v4 )
    PopBatteryQueueWork(1u);
  return 3221225494LL;
}
