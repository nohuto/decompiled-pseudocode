/*
 * XREFs of Controller_GetFrameNumber @ 0x1C0002CD8
 * Callers:
 *     Isoch_TransferUrb_Initialize @ 0x1C0002B30 (Isoch_TransferUrb_Initialize.c)
 *     Isoch_Stage_MapIntoRing @ 0x1C000E5A0 (Isoch_Stage_MapIntoRing.c)
 *     Controller_UcxEvtGetCurrentFrameNumber @ 0x1C001F870 (Controller_UcxEvtGetCurrentFrameNumber.c)
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x1C002BB14 (Isoch_ProcessTransferRingEmptyEvent.c)
 *     Isoch_TransferUrb_MarkLatePackets @ 0x1C002BEF8 (Isoch_TransferUrb_MarkLatePackets.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Controller_GetFrameNumber(__int64 a1, int a2)
{
  __int64 v3; // rdx
  unsigned int v4; // r8d
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rtt
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // eax
  __int64 v10; // rdx

  v3 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(a1 + 324) / 10000LL;
  v4 = ((unsigned int)(a2 + **(_DWORD **)(*(_QWORD *)(a1 + 80) + 40LL)) >> 3) & 0x7FF;
  _m_prefetchw((const void *)(a1 + 312));
  v5 = *(_QWORD *)(a1 + 312);
  do
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 312), v5, v5);
  }
  while ( v6 != v5 );
  v7 = v3 + ((_DWORD)v5 << 11) - (v5 >> 21);
  v8 = v4 | v7 & 0xFFFFF800;
  v9 = v7 & 0x7FF;
  if ( v9 >= v4 )
  {
    if ( v9 - v4 > 0x400 )
      v8 += 2048;
  }
  else if ( v4 - v9 > 0x400 )
  {
    v8 -= 2048;
  }
  v10 = _InterlockedExchange64(
          (volatile __int64 *)(a1 + 312),
          ((unsigned __int64)v8 >> 11) | ((v3 - (v8 & 0x7FF)) << 21));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 64), v10, 3, 168, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, v8);
  }
  return v8;
}
