/*
 * XREFs of ObpInitStackTrace @ 0x1407BAD00
 * Callers:
 *     ObInitSystem @ 0x1407A0370 (ObInitSystem.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObpInitStackAndObjectTables @ 0x140667E80 (ObpInitStackAndObjectTables.c)
 */

int ObpInitStackTrace()
{
  int v0; // ebx
  wchar_t *PoolWithTag; // rax
  __int64 v2; // rdi
  __int64 v3; // rbx
  unsigned __int16 v4; // bx
  unsigned int v5; // edi
  unsigned int v6; // edx
  int v7; // r9d
  __int64 v8; // r10
  int *v9; // r8
  int v10; // edx
  unsigned int v11; // r11d
  int v12; // eax
  int v13; // ecx
  int v14; // ebx

  ObpStackTraceLock = 0LL;
  ObpPushStackInfoWorkItem.Parameter = 0LL;
  ObpPushStackInfoWorkItem.List.Flink = 0LL;
  ObpPushStackInfoList = 0LL;
  v0 = 0;
  ObpPushStackInfoWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ObpPushStackInfoQueue;
  memset(&ObpRegTracePoolTags, 0, 0x40uLL);
  LODWORD(PoolWithTag) = (unsigned int)memset(&ObpRuntimeTracePoolTags, 0, 0x40uLL);
  v2 = -1LL;
  ObpNumTracedObjects = 0;
  ObpStackSequence = 0;
  if ( ObpTraceProcessNameBuffer[0] )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( ObpTraceProcessNameBuffer[v3] );
    v4 = 2 * v3;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v4 + 2LL, 0x7452624Fu);
    ObpRegTraceProcessName.Buffer = PoolWithTag;
    if ( !PoolWithTag )
      return (int)PoolWithTag;
    ObpRegTraceProcessName.Length = v4;
    ObpRegTraceProcessName.MaximumLength = v4 + 2;
    LODWORD(PoolWithTag) = (unsigned int)memmove(PoolWithTag, ObpTraceProcessNameBuffer, (unsigned __int16)(v4 + 2));
    v0 = 32;
  }
  if ( ObpTracePoolTagsBuffer[0] )
  {
    do
      ++v2;
    while ( ObpTracePoolTagsBuffer[v2] );
    v5 = v2 + 1;
    LODWORD(PoolWithTag) = -858993459 * v5;
    v6 = v5 / 5;
    if ( v5 / 5 > 0x10 )
      v6 = 16;
    if ( v6 )
    {
      v7 = 0;
      v8 = v6;
      v9 = (int *)&ObpRegTracePoolTags;
      do
      {
        v10 = *v9;
        v11 = 0;
        do
        {
          v12 = v7 - v11++;
          PoolWithTag = (wchar_t *)(unsigned int)(v12 + 3);
          v13 = (v10 << 8) | (unsigned __int16)ObpTracePoolTagsBuffer[(_QWORD)PoolWithTag];
          v10 = v13;
        }
        while ( v11 < 4 );
        *v9 = v13;
        v7 += 5;
        ++v9;
        --v8;
      }
      while ( v8 );
    }
    v0 |= 0x10u;
  }
  if ( v0 )
  {
    if ( ObpTracePermanent )
      v0 |= 0x40u;
    LODWORD(PoolWithTag) = ObpInitStackAndObjectTables();
    if ( (int)PoolWithTag < 0 )
    {
      if ( (v0 & 0x10) != 0 )
        LODWORD(PoolWithTag) = (unsigned int)memset(&ObpRegTracePoolTags, 0, 0x40uLL);
      if ( (v0 & 0x20) != 0 )
      {
        ExFreePoolWithTag(ObpRegTraceProcessName.Buffer, 0x7452624Fu);
        LODWORD(PoolWithTag) = RtlInitUnicodeStringEx(&ObpRegTraceProcessName, 0LL);
      }
    }
    else
    {
      v14 = v0 | 1;
      ObpRegTraceFlags = v14;
      ObpTraceFlags = v14;
      if ( (v14 & 0x10) != 0 )
        ObpTracePoolTags = (__int64)&ObpRegTracePoolTags;
      if ( (v14 & 0x20) != 0 )
        ObpTraceProcessName = &ObpRegTraceProcessName;
    }
  }
  return (int)PoolWithTag;
}
