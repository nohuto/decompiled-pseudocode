/*
 * XREFs of EtwpFailLogging @ 0x14025C558
 * Callers:
 *     EtwpEventWriteFull @ 0x1400182F0 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140437B50 (EtwpWriteUserEvent.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006E40 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14001A6C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     EtwpTraceLostEvent @ 0x14025EF08 (EtwpTraceLostEvent.c)
 */

__int64 __fastcall EtwpFailLogging(
        unsigned __int8 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned int a6,
        __int64 a7,
        char a8)
{
  __int64 v8; // rax
  __int64 v11; // r15
  volatile signed __int32 **v13; // rdi
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // r8
  signed __int64 *v16; // rdx
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  unsigned __int8 v19; // bp
  __int64 result; // rax
  __int64 v21; // rdx
  unsigned __int8 v22; // al
  __int64 v23; // rdi
  __int64 v24; // rbx
  unsigned int v26; // ecx
  int v28; // [rsp+68h] [rbp+20h]

  v8 = 0LL;
  v11 = a2;
  v28 = 0;
  if ( *(_DWORD *)(a4 + 384) )
  {
    do
    {
      v13 = (volatile signed __int32 **)(a4 + 48 * v8);
      v14 = *v13;
      if ( ((*v13)[3] & 0x8000000) == 0 )
      {
        *v13[1] = *((_DWORD *)v14 + 7) | *v13[1] & v14[8];
        _InterlockedAdd(v14 + 64, 1u);
        if ( (v14[208] & 8) != 0 )
          *((_DWORD *)v14 + 116) = 1;
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
          EtwpTraceLostEvent(a3 + 24, a7, v14 + 38, a6);
      }
      v15 = v13[2];
      v16 = (signed __int64 *)v13[3];
      _m_prefetchw(v16);
      v17 = *v16;
      while ( ((unsigned __int64)v15 ^ v17) < 0xF )
      {
        v18 = v17;
        v17 = _InterlockedCompareExchange64(v16, v17 + 1, v17);
        if ( v18 == v17 )
          goto LABEL_11;
      }
      _InterlockedDecrement(v13[2] + 3);
LABEL_11:
      if ( a8 )
        ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[*(unsigned int *)v14], 1u);
      v8 = (unsigned int)(v28 + 1);
      v28 = v8;
    }
    while ( (unsigned int)v8 < *(_DWORD *)(a4 + 384) );
    v11 = a2;
  }
  v19 = a5;
  for ( result = a5; _BitScanForward(&v26, result); result = v19 )
  {
    v21 = 32LL * v26;
    v19 &= v19 - 1;
    if ( *(_DWORD *)(v21 + a3 + 112) )
    {
      v22 = *(_BYTE *)(v21 + a3 + 116);
      if ( (a1 <= v22 || !v22)
        && ((*(_DWORD *)(v21 + a3 + 120) & 0x40) != 0 && !v11
         || (v11 & *(_QWORD *)(v21 + a3 + 128)) != 0
         && (v11 & *(_QWORD *)(v21 + a3 + 136)) == *(_QWORD *)(v21 + a3 + 136)) )
      {
        v23 = *(unsigned __int16 *)(v21 + a3 + 118);
        if ( !a8 || ExAcquireRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v23], 1u) )
        {
          if ( (unsigned int)v23 >= 0x40 )
          {
            v24 = 1LL;
          }
          else
          {
            _mm_lfence();
            v24 = WmipLoggerContext[v23];
          }
          if ( (v24 & 1) == 0 )
          {
            _InterlockedAdd((volatile signed __int32 *)(v24 + 256), 1u);
            if ( (*(_DWORD *)(v24 + 832) & 8) != 0 )
              *(_DWORD *)(v24 + 464) = 1;
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
              EtwpTraceLostEvent(a3 + 24, a7, v24 + 152, a6);
          }
          if ( a8 )
            ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v23], 1u);
        }
      }
    }
  }
  return result;
}
