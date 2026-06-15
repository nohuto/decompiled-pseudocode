/*
 * XREFs of ?AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@W4AddTimestampMessageOptions@1@@Z @ 0x140017320
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x140017138 (-IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?CanCoalesceTimestampMessages@CCrossProcessServerOutputEndpoint@@IEAAHIW4EndpointMessageID@@IPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@@Z @ 0x140024C08 (-CanCoalesceTimestampMessages@CCrossProcessServerOutputEndpoint@@IEAAHIW4EndpointMessageID@@IPEA.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z @ 0x140039BF8 (-AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z.c)
 *     Template_pqqqx @ 0x14003B108 (Template_pqqqx.c)
 *     ?AEWMILOG_TIMESTAMP@@YAXKPEAXEE_K1111@Z @ 0x14003C050 (-AEWMILOG_TIMESTAMP@@YAXKPEAXEE_K1111@Z.c)
 *     ?AEWMILOG_DROP@@YAXKPEAXE_K1@Z @ 0x14003C47C (-AEWMILOG_DROP@@YAXKPEAXE_K1@Z.c)
 */

__int64 __fastcall CCrossProcessServerOutputEndpoint::AddTimestampMessage(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        int a6,
        int a7)
{
  unsigned int v7; // ebx
  int v9; // r13d
  unsigned int v10; // ebp
  unsigned __int64 v11; // r15
  unsigned __int8 v12; // r8
  __int32 v13; // r12d
  unsigned int v14; // ecx
  unsigned int v16; // eax
  unsigned int v17; // esi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  double v21; // xmm1_8
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rcx
  double v27; // xmm1_8
  unsigned __int64 v28; // [rsp+20h] [rbp-68h]

  v7 = 0;
  v9 = 0;
  v10 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4LL);
  v11 = **(unsigned int **)(a1 + 64);
  if ( !CCrossProcessBaseEndpoint::IsValidQueueIndex((CCrossProcessBaseEndpoint *)a1, v10)
    || !CCrossProcessBaseEndpoint::IsValidQueueIndex((CCrossProcessBaseEndpoint *)a1, v11) )
  {
    v7 = -2005139387;
LABEL_7:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_50292f6487a5368530fe30e21e48c679_Traceguids, v7);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessServerOutputEndpoint::AddTimestampMessage", 0x253u, v7);
    return v7;
  }
  v13 = v10 + 1;
  v14 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 132LL);
  if ( v10 + 1 == v14 )
    v13 = 0;
  if ( v13 == (_DWORD)v11 )
  {
    AEWMILOG_DROP(v14, (void *)a1, v12, v10, v11);
    v7 = -2005139385;
    goto LABEL_7;
  }
  if ( a7 == 1 && v14 > 5 )
  {
    v16 = (unsigned int)v11 > v10 ? v10 + v14 - v11 : v10 - (unsigned int)v11;
    if ( v16 >= 5 )
    {
      v17 = v10 - 1;
      if ( !v10 )
        v17 = v14 - 1;
      if ( (unsigned int)CCrossProcessServerOutputEndpoint::CanCoalesceTimestampMessages(a1, v17, a2, a3, a5, a6) )
      {
        v13 = v10;
        v9 = 1;
        v10 = v17;
      }
    }
  }
  v18 = *(_QWORD *)a5;
  v19 = *(_QWORD *)(a5 + 8);
  if ( *(_QWORD *)a5 < v19 )
  {
    v26 = v19 - v18;
    v27 = (double)(int)v26;
    if ( v26 < 0 )
      v27 = v27 + 1.844674407370955e19;
    v22 = *(_QWORD *)(a5 + 24) + (unsigned int)(int)(v27 * 10000000.0 / *(float *)(a5 + 32) + 0.5);
  }
  else
  {
    v20 = v18 - v19;
    v21 = (double)(int)v20;
    if ( v20 < 0 )
      v21 = v21 + 1.844674407370955e19;
    v22 = *(_QWORD *)(a5 + 24) - (unsigned int)(int)(v21 * 10000000.0 / *(float *)(a5 + 32) + 0.5);
  }
  v23 = *(_QWORD *)(a1 + 104);
  v24 = (unsigned __int64)v10 << 6;
  if ( v9 )
  {
    *(_DWORD *)(v24 + v23 + 56) += a4;
    *(_QWORD *)(v24 + *(_QWORD *)(a1 + 104) + 32) += *(_QWORD *)(a5 + 16);
  }
  else
  {
    *(_DWORD *)(v24 + v23) = a2;
    *(_DWORD *)(v24 + *(_QWORD *)(a1 + 104) + 4) = a3;
    *(_DWORD *)(v24 + *(_QWORD *)(a1 + 104) + 56) = a4;
    *(_DWORD *)(v24 + *(_QWORD *)(a1 + 104) + 8) = a6;
    v25 = *(_QWORD *)(a1 + 104);
    *(_OWORD *)(v24 + v25 + 16) = *(_OWORD *)a5;
    *(_OWORD *)(v24 + v25 + 32) = *(_OWORD *)(a5 + 16);
    *(_QWORD *)(v24 + v25 + 48) = *(_QWORD *)(a5 + 32);
    *(_QWORD *)(v24 + *(_QWORD *)(a1 + 104) + 40) = v22;
  }
  if ( _InterlockedExchange((volatile __int32 *)(a1 + 136), 0) == 1 )
    *(_DWORD *)(v24 + *(_QWORD *)(a1 + 104) + 52) = 1;
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 64) + 4LL), v13);
  v28 = *(int *)(v24 + *(_QWORD *)(a1 + 104) + 52);
  AEWMILOG_TIMESTAMP(v28, (void *)a1, v12, 2u, v28, *(_QWORD *)(a5 + 16), v22, *(_QWORD *)a5, *(_QWORD *)(a5 + 8));
  if ( (Microsoft_Windows_AudioEnableBits & 0x400) != 0 )
    Template_pqqqx(
      *(_DWORD *)(v24 + *(_QWORD *)(a1 + 104) + 56),
      *(_QWORD *)(a1 + 104),
      a1,
      v11,
      v10,
      *(_DWORD *)(v24 + *(_QWORD *)(a1 + 104) + 56),
      *(_QWORD *)(v24 + *(_QWORD *)(a1 + 104) + 40));
  return v7;
}
