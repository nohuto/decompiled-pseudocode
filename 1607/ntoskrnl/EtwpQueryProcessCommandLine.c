/*
 * XREFs of EtwpQueryProcessCommandLine @ 0x14045CB04
 * Callers:
 *     EtwpBuildProcessEvent @ 0x14045C730 (EtwpBuildProcessEvent.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14049BF90 (EtwQueryProcessTelemetryInfo.c)
 *     EtwTraceAppStateChange @ 0x14051B448 (EtwTraceAppStateChange.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1406A089C (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwTraceDeniedTokenCreation @ 0x1406A1474 (EtwTraceDeniedTokenCreation.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwpQueryProcessCommandLine(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // bx
  _WORD *v4; // r14
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int16 v8; // ax
  _WORD *PoolWithTag; // rax
  __int64 v10; // rcx
  void *Src; // [rsp+28h] [rbp-30h]
  unsigned __int64 v14; // [rsp+38h] [rbp-20h]

  v3 = 0;
  Src = 0LL;
  *(_WORD *)a2 = 0;
  v4 = *(_WORD **)(a2 + 8);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 1016) + 32LL);
  if ( v5 )
  {
    v6 = v5 + 112;
    if ( v6 >= 0x7FFFFFFF0000LL )
      v6 = 0x7FFFFFFF0000LL;
    v14 = *(_QWORD *)(v6 + 8);
    Src = (void *)v14;
    v3 = *(_DWORD *)v6 & 0xFFFE;
    if ( v3 )
    {
      if ( v14 )
      {
        if ( (v14 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v7 = v14 + v3;
        if ( v7 > 0x7FFFFFFF0000LL || v7 < v14 )
          MEMORY[0x7FFFFFFF0000] = 0;
        if ( v3 > 0x400u )
          v3 = 1024;
      }
      else
      {
        v3 = 0;
      }
    }
  }
  if ( v3 )
  {
    v8 = *(_WORD *)(a2 + 2);
    if ( v8 )
    {
      if ( v3 >= v8 )
        v3 = *(_WORD *)(a2 + 2);
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3, 0x50777445u);
      v4 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      *(_QWORD *)(a2 + 8) = PoolWithTag;
      *(_WORD *)(a2 + 2) = v3;
    }
    memmove(v4, Src, v3);
    if ( v3 >> 1 )
    {
      v10 = v3 >> 1;
      do
      {
        if ( !*v4 )
          *v4 = 32;
        ++v4;
        --v10;
      }
      while ( v10 );
    }
    *(_WORD *)a2 = v3;
  }
  return 0;
}
