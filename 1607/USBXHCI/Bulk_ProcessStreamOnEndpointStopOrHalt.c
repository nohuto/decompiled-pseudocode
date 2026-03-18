/*
 * XREFs of Bulk_ProcessStreamOnEndpointStopOrHalt @ 0x1C002E550
 * Callers:
 *     Bulk_EP_EndpointHalted @ 0x1C002DEE0 (Bulk_EP_EndpointHalted.c)
 *     Bulk_EP_FSEReceived @ 0x1C002DF40 (Bulk_EP_FSEReceived.c)
 * Callees:
 *     memmove @ 0x1C000FEC0 (memmove.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C002846C (WPP_RECORDER_SF_DDDD.c)
 *     Bulk_FindStage @ 0x1C002E26C (Bulk_FindStage.c)
 */

__int64 __fastcall Bulk_ProcessStreamOnEndpointStopOrHalt(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r10
  __int64 v4; // rsi
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // r8d
  size_t v8; // r8
  __int64 result; // rax
  int v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+30h] [rbp-28h]
  int v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+40h] [rbp-18h]
  unsigned int v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v15; // [rsp+68h] [rbp+10h] BYREF

  if ( !Bulk_FindStage(
          a1,
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 136LL) + 32LL) + 16LL)
                    + 16LL * *(unsigned int *)(a1 + 64)) & 0xFFFFFFFFFFFFFFF0uLL,
          (__int64 *)&v15,
          &v14)
    || (v2 = (__int64)v15) == 0 )
  {
    result = *(unsigned int *)(a1 + 300);
    goto LABEL_20;
  }
  v3 = *(_QWORD *)(a1 + 56);
  v4 = *v15;
  v5 = *(_QWORD *)(*(_QWORD *)v3 + 232LL);
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 136) + 32LL) + 16LL) + 16LL * *(unsigned int *)(a1 + 64);
  if ( (v5 & 0x1800000000LL) == 0 )
  {
    v7 = *(_DWORD *)(v6 + 8);
LABEL_18:
    v8 = v7 & 0xFFFFFF;
    goto LABEL_8;
  }
  if ( (v5 & 0x1000000000LL) != 0 )
  {
    if ( (v5 & 0x800000000LL) == 0 )
    {
      v7 = *(_DWORD *)(v6 + 12);
      goto LABEL_18;
    }
    goto LABEL_7;
  }
  v8 = *(_DWORD *)(v6 + 8) >> 8;
  if ( (*(_DWORD *)(v6 + 8) & 0x80u) == 0 && (v5 & 0x200000000000LL) != 0 )
LABEL_7:
    v8 = 0LL;
LABEL_8:
  if ( (v5 & 0x10000000000LL) != 0 )
    v8 = (*(_DWORD *)(v6 + 12) & 0x1FFFF) + (unsigned int)v8;
  if ( (unsigned int)v8 > *((_DWORD *)v15 + 10) )
  {
    v13 = v8;
    v12 = *(_DWORD *)(a1 + 64);
    v11 = *(_DWORD *)(v3 + 144);
    v10 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    WPP_RECORDER_SF_DDDD(
      *(_QWORD *)(v3 + 80),
      3u,
      0xDu,
      0xCu,
      (__int64)&WPP_67ca0b9ba6d331f4aeeb1b749b99e189_Traceguids,
      v10,
      v11,
      v12,
      v13);
    v8 = 0LL;
  }
  *(_DWORD *)(v4 + 92) += v8;
  if ( (*(_DWORD *)(*(_QWORD *)(v4 + 32) + 32LL) & 1) != 0 && *(_DWORD *)(v4 + 60) == 2 )
    memmove(*(void **)(v2 + 64), *(const void **)(*(_QWORD *)(v2 + 72) + 16LL), v8);
  result = v14;
LABEL_20:
  *(_DWORD *)(a1 + 304) = result;
  return result;
}
