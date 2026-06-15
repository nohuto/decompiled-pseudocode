/*
 * XREFs of ?AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@W4AddTimestampMessageOptions@1@@Z @ 0x140017D00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x140017AF4 (-IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?CanCoalesceTimestampMessages@CCrossProcessServerOutputEndpoint@@IEAAHIW4EndpointMessageID@@IPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@@Z @ 0x140025E38 (-CanCoalesceTimestampMessages@CCrossProcessServerOutputEndpoint@@IEAAHIW4EndpointMessageID@@IPEA.c)
 *     Template_pqqqx @ 0x14003C204 (Template_pqqqx.c)
 *     ?AEWMILOG_TIMESTAMP@@YAXKPEAXE_K1111@Z @ 0x14003E0A4 (-AEWMILOG_TIMESTAMP@@YAXKPEAXE_K1111@Z.c)
 *     ?AEWMILOG_DROP@@YAXKPEAX_K1@Z @ 0x14003E494 (-AEWMILOG_DROP@@YAXKPEAX_K1@Z.c)
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
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r15
  __int32 v12; // r12d
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // esi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  double v19; // xmm1_8
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  double v22; // xmm1_8
  __int64 v23; // rax
  unsigned __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rax

  v7 = 0;
  v9 = 0;
  v10 = *(unsigned int *)(*(_QWORD *)(a1 + 64) + 4LL);
  v11 = **(unsigned int **)(a1 + 64);
  if ( !CCrossProcessBaseEndpoint::IsValidQueueIndex(
          (CCrossProcessBaseEndpoint *)a1,
          *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4LL))
    || !CCrossProcessBaseEndpoint::IsValidQueueIndex((CCrossProcessBaseEndpoint *)a1, v11) )
  {
    v7 = -2005139387;
LABEL_8:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_b13bd2a1e9ef5ff2d9119971e2144d05_Traceguids, v7);
    }
    return v7;
  }
  v12 = v10 + 1;
  v13 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 132LL);
  if ( (_DWORD)v10 + 1 == v13 )
    v12 = 0;
  if ( v12 == (_DWORD)v11 )
  {
    AEWMILOG_DROP(v13, (void *)a1, v10, v11);
    v7 = -2005139385;
    goto LABEL_8;
  }
  if ( a7 == 1 && v13 > 5 )
  {
    v14 = (unsigned int)v11 > (unsigned int)v10 ? v10 + v13 - v11 : (int)v10 - (int)v11;
    if ( v14 >= 5 )
    {
      v15 = v10 - 1;
      if ( !(_DWORD)v10 )
        v15 = v13 - 1;
      if ( (unsigned int)CCrossProcessServerOutputEndpoint::CanCoalesceTimestampMessages(a1, v15, a2, a3, a5, a6) )
      {
        v12 = v10;
        v9 = 1;
        LODWORD(v10) = v15;
      }
    }
  }
  v16 = *(_QWORD *)a5;
  v17 = *(_QWORD *)(a5 + 8);
  if ( *(_QWORD *)a5 < v17 )
  {
    v21 = v17 - v16;
    v22 = (double)(int)v21;
    if ( v21 < 0 )
      v22 = v22 + 1.844674407370955e19;
    v20 = *(_QWORD *)(a5 + 24) + (unsigned int)(int)(v22 * 10000000.0 / *(float *)(a5 + 32) + 0.5);
  }
  else
  {
    v18 = v16 - v17;
    v19 = (double)(int)v18;
    if ( v18 < 0 )
      v19 = v19 + 1.844674407370955e19;
    v20 = *(_QWORD *)(a5 + 24) - (unsigned int)(int)(v19 * 10000000.0 / *(float *)(a5 + 32) + 0.5);
  }
  v23 = *(_QWORD *)(a1 + 104);
  v24 = (unsigned __int64)(unsigned int)v10 << 6;
  if ( v9 )
  {
    *(_DWORD *)(v24 + v23 + 56) += a4;
    v25 = *(_QWORD *)(a1 + 104);
    *(_QWORD *)(v24 + v25 + 32) += *(_QWORD *)(a5 + 16);
  }
  else
  {
    *(_DWORD *)(v24 + v23) = a2;
    *(_DWORD *)(v24 + *(_QWORD *)(a1 + 104) + 4) = a3;
    *(_DWORD *)(v24 + *(_QWORD *)(a1 + 104) + 56) = a4;
    LODWORD(v25) = a6;
    *(_DWORD *)(v24 + *(_QWORD *)(a1 + 104) + 8) = a6;
    v26 = *(_QWORD *)(a1 + 104);
    *(_OWORD *)(v24 + v26 + 16) = *(_OWORD *)a5;
    *(_OWORD *)(v24 + v26 + 32) = *(_OWORD *)(a5 + 16);
    *(_QWORD *)(v24 + v26 + 48) = *(_QWORD *)(a5 + 32);
    *(_QWORD *)(v24 + *(_QWORD *)(a1 + 104) + 40) = v20;
  }
  if ( _InterlockedExchange((volatile __int32 *)(a1 + 136), 0) == 1 )
    *(_DWORD *)(v24 + *(_QWORD *)(a1 + 104) + 52) = 1;
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 64) + 4LL), v12);
  AEWMILOG_TIMESTAMP(
    v25,
    (void *)a1,
    2u,
    *(int *)(v24 + *(_QWORD *)(a1 + 104) + 52),
    *(_QWORD *)(a5 + 16),
    v20,
    *(_QWORD *)a5,
    *(_QWORD *)(a5 + 8));
  if ( (Microsoft_Windows_AudioEnableBits & 0x200) != 0 )
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
