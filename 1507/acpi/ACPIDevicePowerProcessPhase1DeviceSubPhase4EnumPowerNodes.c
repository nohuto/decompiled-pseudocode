/*
 * XREFs of ACPIDevicePowerProcessPhase1DeviceSubPhase4EnumPowerNodes @ 0x1C0038040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIDevicePowerProcessPhase1DeviceSubPhase4EnumPowerNodes(__int64 a1, int a2, __int64 a3)
{
  int v3; // r10d
  int v4; // eax

  v3 = 0;
  if ( a2
    || *(_DWORD *)(a1 + 64)
    || (LOBYTE(v3) = *(_DWORD *)(a1 + 24) != 0, v3 ^ (*(_DWORD *)(*(_QWORD *)(a3 + 40) + 496LL) != 0)) )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), 3, 0) == 1 )
      *(_DWORD *)(a1 + 68) = 3;
    if ( a2 == 1 )
    {
      v4 = *(_DWORD *)(a3 + 56);
      if ( (v4 & 0x10) != 0 )
      {
        _InterlockedOr64((volatile signed __int64 *)(a1 + 16), 0x20020uLL);
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 16), 0xFFFFFFFFFFFFFFBFuLL);
      }
      else if ( (v4 & 0x20) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 16), 0xFFFFFFFFFFFDFFDFuLL);
      }
    }
  }
  return 0LL;
}
