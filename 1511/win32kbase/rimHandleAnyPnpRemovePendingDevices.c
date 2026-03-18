/*
 * XREFs of rimHandleAnyPnpRemovePendingDevices @ 0x1C00063A4
 * Callers:
 *     RIMReadInput @ 0x1C0006150 (RIMReadInput.c)
 * Callees:
 *     RIMFreeDev @ 0x1C000F020 (RIMFreeDev.c)
 *     WPP_RECORDER_SF_q @ 0x1C000FA94 (WPP_RECORDER_SF_q.c)
 *     rimDoRimDevChangeCallback @ 0x1C0011374 (rimDoRimDevChangeCallback.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 */

__int64 __fastcall rimHandleAnyPnpRemovePendingDevices(__int64 a1)
{
  __int64 v2; // rsi
  int v3; // ebp
  int v4; // edx
  __int64 i; // rbx
  int v6; // eax
  __int64 result; // rax
  int v8; // eax

  v2 = a1 + 744;
  while ( 1 )
  {
    v3 = 0;
    RIMLockExclusive(v2);
    for ( i = *(_QWORD *)(a1 + 544); i; i = *(_QWORD *)(i + 40) )
    {
      v6 = *(_DWORD *)(i + 176);
      if ( (v6 & 0x1000000) != 0 )
      {
        *(_DWORD *)(i + 176) = v6 & 0xFEFFFFFF;
        LOBYTE(v4) = 3;
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          v4,
          5,
          26,
          (__int64)&WPP_2cf43eb6f084e9fb81263413500054a8_Traceguids,
          i);
      }
      if ( (*(_DWORD *)(i + 192) & 1) != 0 )
      {
        v8 = *(_DWORD *)(i + 176);
        if ( (v8 & 0x2000000) == 0 && (v8 & 0x4000000) == 0 && !*(_QWORD *)(i + 184) )
        {
          *(_DWORD *)(i + 192) &= ~1u;
          v3 = 1;
          LOBYTE(v4) = 3;
          WPP_RECORDER_SF_q(
            WPP_GLOBAL_Control->DeviceExtension,
            v4,
            5,
            27,
            (__int64)&WPP_2cf43eb6f084e9fb81263413500054a8_Traceguids,
            i);
          break;
        }
      }
    }
    result = RIMUnlockExclusive(v2);
    if ( !v3 )
      return result;
    rimDoRimDevChangeCallback(a1, i, 3LL);
    RIMFreeDev(a1, i);
  }
}
