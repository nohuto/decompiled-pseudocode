/*
 * XREFs of EtwpMapEnableFlags @ 0x14054AF88
 * Callers:
 *     EtwpGetLoggerInfoFromContext @ 0x14040EFBC (EtwpGetLoggerInfoFromContext.c)
 *     EtwpUpdateGroupMasks @ 0x14054A404 (EtwpUpdateGroupMasks.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1406E58C8 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall EtwpMapEnableFlags(__int64 a1, char a2)
{
  __int64 *v3; // r9
  __int64 v5; // r10
  unsigned int v6; // edx
  unsigned __int64 result; // rax
  unsigned int v8; // edx
  unsigned __int64 v9; // rcx

  v3 = EtwpEnableFlagMap;
  v5 = 8LL;
  do
  {
    if ( a2 == 1 )
    {
      v8 = *(_DWORD *)v3;
      if ( a1 )
      {
        result = (unsigned __int64)v8 >> 29;
        if ( (v8 & *(_DWORD *)(a1 + 4 * result) & 0x1FFFFFFF) != 0 )
        {
          v9 = *((unsigned int *)v3 + 1);
LABEL_11:
          result = v9 >> 29;
          *(_DWORD *)(a1 + 4 * (v9 >> 29)) |= v9 & 0x1FFFFFFF;
        }
      }
    }
    else
    {
      v6 = *((_DWORD *)v3 + 1);
      if ( a1 )
      {
        result = (unsigned __int64)v6 >> 29;
        if ( (v6 & *(_DWORD *)(a1 + 4 * result) & 0x1FFFFFFF) != 0 )
        {
          v9 = *(unsigned int *)v3;
          goto LABEL_11;
        }
      }
    }
    ++v3;
    --v5;
  }
  while ( v5 );
  return result;
}
