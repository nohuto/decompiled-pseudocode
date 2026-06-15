/*
 * XREFs of ?GetNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAUSharedMessageQueueItem@@@Z @ 0x140039DD4
 * Callers:
 *     ?ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z @ 0x14003B2D0 (-ReleaseInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXI_K@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x14003A424 (-IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 */

char __fastcall CCrossProcessBaseEndpoint::GetNextTimestampMessage(
        CCrossProcessBaseEndpoint *this,
        struct SharedMessageQueueItem *a2)
{
  char v2; // di
  __int64 v5; // rsi
  __int64 v6; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // rax
  __int32 v11; // ecx

  v2 = 0;
  v5 = **((unsigned int **)this + 8);
  if ( (_DWORD)v5 != *(_DWORD *)(*((_QWORD *)this + 8) + 4LL) )
  {
    if ( CCrossProcessBaseEndpoint::IsValidQueueIndex(this, v5) )
    {
      v6 = *((_QWORD *)this + 13);
      v7 = *(_OWORD *)((v5 << 6) + v6 + 16);
      *(_OWORD *)a2 = *(_OWORD *)((v5 << 6) + v6);
      v8 = *(_OWORD *)((v5 << 6) + v6 + 32);
      *((_OWORD *)a2 + 1) = v7;
      v9 = *(_OWORD *)((v5 << 6) + v6 + 48);
      v10 = *((_QWORD *)this + 9);
      v11 = v5 + 1;
      *((_OWORD *)a2 + 2) = v8;
      *((_OWORD *)a2 + 3) = v9;
      if ( (_DWORD)v5 + 1 == *(_DWORD *)(v10 + 132) )
        v11 = 0;
      v2 = 1;
      _InterlockedExchange(*((volatile __int32 **)this + 8), v11);
    }
    else if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x80000) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        0x1Fu,
        (__int64)&WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids,
        0);
    }
  }
  return v2;
}
