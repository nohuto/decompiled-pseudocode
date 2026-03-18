/*
 * XREFs of rimHandleAnyPnpRemovePendingDevices @ 0x1C00825E0
 * Callers:
 *     RIMReadInput @ 0x1C00785F0 (RIMReadInput.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     RIMFreeDev @ 0x1C00759DC (RIMFreeDev.c)
 *     rimDoRimDevChangeCallback @ 0x1C0076588 (rimDoRimDevChangeCallback.c)
 *     WPP_RECORDER_SF_q @ 0x1C0077B00 (WPP_RECORDER_SF_q.c)
 */

void __fastcall rimHandleAnyPnpRemovePendingDevices(__int64 a1)
{
  __int64 v2; // rsi
  int v3; // ebp
  __int64 i; // rbx
  int v5; // eax
  int v6; // eax

  v2 = a1 + 712;
  while ( 1 )
  {
    v3 = 0;
    RIMLockExclusive(v2);
    for ( i = *(_QWORD *)(a1 + 512); i; i = *(_QWORD *)(i + 40) )
    {
      v5 = *(_DWORD *)(i + 184);
      if ( (v5 & 0x1000000) != 0 )
      {
        *(_DWORD *)(i + 184) = v5 & 0xFEFFFFFF;
        WPP_RECORDER_SF_q(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          5u,
          0x18u,
          (__int64)&WPP_505169cae3bc6ac582b8fcf89871eb02_Traceguids,
          i);
      }
      if ( (*(_DWORD *)(i + 200) & 1) != 0 )
      {
        v6 = *(_DWORD *)(i + 184);
        if ( (v6 & 0x2000000) == 0 && (v6 & 0x4000000) == 0 && !*(_QWORD *)(i + 192) )
        {
          *(_DWORD *)(i + 200) &= ~1u;
          v3 = 1;
          WPP_RECORDER_SF_q(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            5u,
            0x19u,
            (__int64)&WPP_505169cae3bc6ac582b8fcf89871eb02_Traceguids,
            i);
          break;
        }
      }
    }
    RIMUnlockExclusive(v2);
    if ( !v3 )
      break;
    rimDoRimDevChangeCallback(a1, i, 3);
    RIMFreeDev(a1, i);
  }
}
