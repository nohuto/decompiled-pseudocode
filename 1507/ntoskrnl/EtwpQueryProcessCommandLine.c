/*
 * XREFs of EtwpQueryProcessCommandLine @ 0x14050C998
 * Callers:
 *     EtwQueryProcessTelemetryInfo @ 0x1404F34A0 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpBuildProcessEvent @ 0x14050CB64 (EtwpBuildProcessEvent.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1406E2BC0 (EtwTimLogRedirectionTrustPolicy.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwpQueryProcessCommandLine(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // di
  _WORD *v4; // r14
  __int64 v5; // rdx
  ULONG64 v6; // rdx
  ULONG64 v7; // rdx
  unsigned __int16 v8; // ax
  _WORD *PoolWithTag; // rax
  __int64 v10; // rcx
  void *Src; // [rsp+28h] [rbp-30h]
  ULONG64 v14; // [rsp+38h] [rbp-20h]

  v3 = 0;
  Src = 0LL;
  *(_WORD *)a2 = 0;
  v4 = *(_WORD **)(a2 + 8);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 1016) + 32LL);
  if ( v5 )
  {
    v6 = v5 + 112;
    if ( v6 >= MmUserProbeAddress )
      v6 = MmUserProbeAddress;
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
        if ( v7 > MmUserProbeAddress || v7 < v14 )
          *(_BYTE *)MmUserProbeAddress = 0;
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
