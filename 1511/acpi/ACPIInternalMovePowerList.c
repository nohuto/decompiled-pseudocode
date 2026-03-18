/*
 * XREFs of ACPIInternalMovePowerList @ 0x1C001C604
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C001C040 (ACPIDevicePowerDpc.c)
 *     ACPIMovePowerListUnblockedItems @ 0x1C00398CC (ACPIMovePowerListUnblockedItems.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIInternalMovePowerList(_QWORD **a1, __int64 a2)
{
  _QWORD *v2; // r9
  _QWORD *v4; // r8
  int v5; // edx
  bool v6; // zf
  int v7; // eax
  int v9; // eax

  v2 = *a1;
  while ( v2 != a1 )
  {
    v4 = v2;
    v2 = (_QWORD *)*v2;
    if ( !*((_DWORD *)v4 + 12) )
    {
      v5 = *(_DWORD *)(v4[5] + 684LL);
      v6 = v5 == 0;
      if ( v5 <= 0 )
        goto LABEL_4;
      v9 = *((_DWORD *)v4 + 14);
      if ( (v9 & 0x2000000) != 0 )
      {
        v6 = v5 == 0;
LABEL_4:
        if ( v6 )
        {
          v7 = *((_DWORD *)v4 + 14);
          if ( (v7 & 0x2000000) != 0 )
          {
            *((_DWORD *)v4 + 14) = v7 & 0xFDFFFFFF;
            _InterlockedDecrement(&AcpiPowerCurrentPagingPathTransitions);
          }
        }
        goto LABEL_7;
      }
      *((_DWORD *)v4 + 14) = v9 | 0x2000000;
      _InterlockedIncrement(&AcpiPowerCurrentPagingPathTransitions);
    }
LABEL_7:
    _InterlockedExchange((volatile __int32 *)v4 + 52, 3);
  }
  return ACPIInternalMoveList(a1, a2);
}
