/*
 * XREFs of Bulk_ProcessStreamOnEndpointStopOrHalt @ 0x1C002AA24
 * Callers:
 *     Bulk_EP_EndpointHalted @ 0x1C0029D70 (Bulk_EP_EndpointHalted.c)
 *     Bulk_EP_FSEReceived @ 0x1C0029DD0 (Bulk_EP_FSEReceived.c)
 * Callees:
 *     memmove @ 0x1C0007C40 (memmove.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C001F854 (WPP_RECORDER_SF_DDDD.c)
 *     Bulk_FindStage @ 0x1C002A158 (Bulk_FindStage.c)
 */

__int64 __fastcall Bulk_ProcessStreamOnEndpointStopOrHalt(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r10
  __int64 v4; // rsi
  unsigned __int64 v5; // rax
  __int64 v6; // r8
  int v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // ecx
  __int64 result; // rax
  unsigned int v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v12; // [rsp+68h] [rbp+10h] BYREF

  if ( !Bulk_FindStage(
          a1,
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 136LL) + 32LL) + 16LL)
                    + 16LL * *(unsigned int *)(a1 + 64)) & 0xFFFFFFFFFFFFFFF0uLL,
          (__int64 *)&v12,
          &v11)
    || (v2 = (__int64)v12) == 0 )
  {
    result = *(unsigned int *)(a1 + 300);
    goto LABEL_22;
  }
  v3 = *(_QWORD *)(a1 + 56);
  v4 = *v12;
  v5 = *(_QWORD *)(*(_QWORD *)v3 + 232LL);
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 136) + 32LL) + 16LL) + 16LL * *(unsigned int *)(a1 + 64);
  if ( ((v5 >> 35) & 1) != 0 )
  {
    if ( (v5 & 0x1000000000LL) == 0 )
    {
      v8 = *(_DWORD *)(v6 + 8);
      v9 = v8 >> 8;
      if ( (v5 & 0x200000000000LL) == 0 || (v8 & 0x80u) != 0 )
        goto LABEL_10;
      goto LABEL_9;
    }
  }
  else if ( (v5 & 0x1000000000LL) == 0 )
  {
    v7 = *(_DWORD *)(v6 + 8);
LABEL_20:
    v9 = v7 & 0xFFFFFF;
    goto LABEL_10;
  }
  if ( ((*(_QWORD *)(*(_QWORD *)v3 + 232LL) >> 35) & 1LL) == 0 )
  {
    v7 = *(_DWORD *)(v6 + 12);
    goto LABEL_20;
  }
LABEL_9:
  v9 = 0;
LABEL_10:
  if ( (v5 & 0x10000000000LL) != 0 )
    v9 += *(_DWORD *)(v6 + 12) & 0x1FFFF;
  if ( v9 > *((_DWORD *)v12 + 10) )
  {
    WPP_RECORDER_SF_DDDD(
      *(_QWORD *)(v3 + 80),
      3u,
      0xDu,
      0xCu,
      (__int64)&WPP_3b622249e4c15df141300e65bf8740b4_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(v3 + 144),
      *(_DWORD *)(a1 + 64),
      v9);
    v9 = 0;
  }
  *(_DWORD *)(v4 + 92) += v9;
  if ( (*(_DWORD *)(*(_QWORD *)(v4 + 32) + 32LL) & 1) != 0 && *(_DWORD *)(v4 + 60) == 2 )
    memmove(*(void **)(v2 + 64), *(const void **)(*(_QWORD *)(v2 + 72) + 16LL), v9);
  result = v11;
LABEL_22:
  *(_DWORD *)(a1 + 304) = result;
  return result;
}
