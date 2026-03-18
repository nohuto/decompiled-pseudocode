/*
 * XREFs of Controller_GetFrameNumber @ 0x1C0014E4C
 * Callers:
 *     Controller_UcxEvtGetCurrentFrameNumber @ 0x1C00161A0 (Controller_UcxEvtGetCurrentFrameNumber.c)
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x1C0025EC4 (Isoch_ProcessTransferRingEmptyEvent.c)
 *     Isoch_Stage_MapIntoRing @ 0x1C00270E8 (Isoch_Stage_MapIntoRing.c)
 *     Isoch_TransferUrb_Initialize @ 0x1C0027BD8 (Isoch_TransferUrb_Initialize.c)
 *     Isoch_TransferUrb_MarkLatePackets @ 0x1C0027D68 (Isoch_TransferUrb_MarkLatePackets.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
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
  _InterlockedExchange64((volatile __int64 *)(a1 + 312), ((unsigned __int64)v8 >> 11) | ((v3 - (v8 & 0x7FF)) << 21));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 64),
      5u,
      3u,
      0xA6u,
      (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids,
      v8);
  return v8;
}
