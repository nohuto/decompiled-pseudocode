/*
 * XREFs of rimHandleAnyPnpRemovePendingDevices @ 0x1C0010F40
 * Callers:
 *     RIMReadInput @ 0x1C00117E0 (RIMReadInput.c)
 * Callees:
 *     RIMFreeDev @ 0x1C000B268 (RIMFreeDev.c)
 *     rimDoRimDevChange @ 0x1C000FAC0 (rimDoRimDevChange.c)
 *     WPP_RECORDER_SF_q @ 0x1C0010310 (WPP_RECORDER_SF_q.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 */

__int64 __fastcall rimHandleAnyPnpRemovePendingDevices(__int64 a1)
{
  __int64 v2; // rsi
  int v3; // ebp
  __int64 i; // rbx
  int v5; // eax
  __int64 result; // rax
  int v7; // eax

  v2 = a1 + 696;
  while ( 1 )
  {
    v3 = 0;
    RIMLockExclusive(v2);
    for ( i = *(_QWORD *)(a1 + 552); i; i = *(_QWORD *)(i + 40) )
    {
      v5 = *(_DWORD *)(i + 184);
      if ( (v5 & 0x1000000) != 0 )
      {
        *(_DWORD *)(i + 184) = v5 & 0xFEFFFFFF;
        WPP_RECORDER_SF_q(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          5u,
          0x1Eu,
          (__int64)&WPP_952a1f57a19f3321a82489c5b0904b88_Traceguids,
          i);
      }
      if ( (*(_DWORD *)(i + 200) & 1) != 0 )
      {
        v7 = *(_DWORD *)(i + 184);
        if ( (v7 & 0x2000000) == 0 && (v7 & 0x4000000) == 0 && !*(_QWORD *)(i + 192) )
        {
          *(_DWORD *)(i + 200) &= ~1u;
          v3 = 1;
          WPP_RECORDER_SF_q(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            5u,
            0x1Fu,
            (__int64)&WPP_952a1f57a19f3321a82489c5b0904b88_Traceguids,
            i);
          break;
        }
      }
    }
    result = RIMUnlockExclusive(v2);
    if ( !v3 )
      return result;
    rimDoRimDevChange(a1, i, 3);
    RIMFreeDev(a1, i);
  }
}
