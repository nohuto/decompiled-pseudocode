/*
 * XREFs of PepNotifyQueryProcessorIdleStates @ 0x1C0019B7C
 * Callers:
 *     InitPepIdleStates @ 0x1C001916C (InitPepIdleStates.c)
 * Callees:
 *     memset @ 0x1C0006140 (memset.c)
 */

__int64 __fastcall PepNotifyQueryProcessorIdleStates(__int64 a1, unsigned int **a2)
{
  unsigned int v2; // ebp
  unsigned int *PoolWithTag; // rax
  unsigned int *v6; // rbx
  int v7; // edi
  char v8; // r8
  __int64 v9; // rdx
  unsigned int v10; // ecx

  v2 = *(_DWORD *)(a1 + 1060);
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 4 * v2 + 8, 0x72637250u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 4 * v2 + 8);
    *v6 = v2;
    v7 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1048), 2LL, v6);
    if ( v7 >= 0 )
    {
      v7 = -1073741811;
      if ( v6[1] <= 0x280 )
      {
        v8 = 0;
        v9 = 0LL;
        if ( v2 )
        {
          while ( (*(_QWORD *)(a1 + 248) & 0x100000000LL) != 0 || (v6[v9 + 2] & 0x78) != 0 )
          {
            if ( (*(_QWORD *)(a1 + 248) & 0x100LL) == 0 && (v6[v9 + 2] & 0x78) != 0 )
              break;
            v10 = v6[v9 + 2];
            if ( (v10 & 0x78) != 0 && ((v10 & 1) == 0 || (v10 & 2) == 0 || (v10 & 4) == 0) )
              break;
            if ( (v10 & 1) != 0 )
              v8 = 1;
            v9 = (unsigned int)(v9 + 1);
            if ( (unsigned int)v9 >= v2 )
            {
              if ( !v8 )
                goto LABEL_19;
              *a2 = v6;
              v6 = 0LL;
              v7 = 0;
              break;
            }
          }
        }
        else
        {
LABEL_19:
          v7 = -1073741637;
        }
      }
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0x72637250u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v7;
}
