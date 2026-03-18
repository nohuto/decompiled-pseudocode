/*
 * XREFs of PpmPerfResizeHistoryAll @ 0x1405B1208
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x1405B09A4 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     PpmPerfResetHistory @ 0x140167DA4 (PpmPerfResetHistory.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 PpmPerfResizeHistoryAll()
{
  unsigned __int64 v0; // rsi
  unsigned __int16 i; // bx
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdi
  _DWORD *v5; // rcx
  unsigned __int8 v6; // bp
  __int64 result; // rax
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // r14

  v0 = qword_140320998[0];
  for ( i = 0; ; v0 = qword_140320998[i] )
  {
    while ( v0 )
    {
      _BitScanForward64(&v2, v0);
      v0 &= ~(1LL << v2);
      v3 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * i + (unsigned __int8)v2];
      if ( (unsigned int)v3 >= (unsigned int)KeNumberProcessors_0 )
      {
        v4 = 0LL;
      }
      else
      {
        _mm_lfence();
        v4 = KiProcessorBlock[v3];
      }
      v5 = *(_DWORD **)(v4 + 24208);
      v6 = *((_BYTE *)&PpmCurrentProfile[174 * dword_14032E84C + 8] + *(unsigned __int8 *)(v4 + 23858));
      if ( v5 )
      {
        if ( *v5 != v6 )
        {
          ExFreePoolWithTag(v5, 0x704D5050u);
          *(_QWORD *)(v4 + 24208) = 0LL;
          goto LABEL_6;
        }
      }
      else
      {
LABEL_6:
        if ( v6 > 1u )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * (unsigned int)v6 + 28, 0x704D5050u);
          v9 = PoolWithTag;
          if ( PoolWithTag )
          {
            memset(PoolWithTag, 0, 8 * (unsigned int)v6 + 28);
            *v9 = v6;
            *(_QWORD *)(v4 + 24208) = v9;
            PpmPerfResetHistory(v4);
          }
        }
      }
    }
    result = ++i;
    if ( i >= (unsigned int)LOWORD(PpmCheckRegistered[0]) )
      break;
  }
  return result;
}
