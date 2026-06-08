/*
 * XREFs of PepNotifyQueryProcessorIdleStatesV2 @ 0x1C00210C4
 * Callers:
 *     InitPepIdleStates @ 0x1C0020A7C (InitPepIdleStates.c)
 * Callees:
 *     memset @ 0x1C0002D00 (memset.c)
 *     PepQueryName @ 0x1C002142C (PepQueryName.c)
 */

__int64 __fastcall PepNotifyQueryProcessorIdleStatesV2(__int64 a1, unsigned int **a2)
{
  unsigned int v2; // r14d
  unsigned int *PoolWithTag; // rax
  unsigned int *v6; // rdi
  int v7; // ebx
  char v8; // r10
  __int64 v9; // rdx
  unsigned int v10; // ecx
  unsigned int v11; // r8d
  unsigned int *v12; // rcx
  char *v13; // rax
  char *v14; // rsi
  unsigned int v15; // ebx
  char *v16; // rbp

  v2 = *(_DWORD *)(a1 + 1060);
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 12 * v2 + 4, 0x72637250u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 12 * v2 + 4);
    *v6 = v2;
    v7 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1048), 18LL, v6);
    if ( v7 >= 0 )
    {
      v8 = 0;
      v9 = 0LL;
      v7 = -1073741811;
      if ( v2 )
      {
        while ( ((*(_QWORD *)(a1 + 248) & 0x200000000LL) != 0 || (v6[3 * v9 + 1] & 0x78) != 0)
             && ((*(_QWORD *)(a1 + 248) & 0x200LL) != 0 || (v6[3 * v9 + 1] & 0x78) == 0) )
        {
          v10 = v6[3 * v9 + 1];
          if ( (v10 & 0x78) != 0 )
          {
            if ( (v10 & 1) == 0 || (v10 & 2) == 0 || (v10 & 4) == 0 || (v10 & 0x80u) == 0 )
              break;
          }
          else if ( v6[3 * v9 + 2] == -1 )
          {
            break;
          }
          if ( (v10 & 0x81) == 0x80 )
            goto LABEL_32;
          if ( (v10 & 1) != 0 )
            v8 = 1;
          if ( (_DWORD)v9 )
          {
            v11 = v6[3 * v9 + 2];
            v12 = &v6[3 * (unsigned int)(v9 - 1)];
            if ( v11 == -1 )
            {
              if ( v12[2] != -1 )
                break;
            }
            else if ( v11 < v12[2] )
            {
              break;
            }
            if ( v6[3 * v9 + 3] < v12[3] )
              goto LABEL_32;
          }
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= v2 )
          {
            if ( !v8 )
              goto LABEL_32;
            v13 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 16 * v2, 0x72637250u);
            v14 = v13;
            if ( v13 )
            {
              memset(v13, 0, 16 * v2);
              v15 = 0;
              v16 = v14;
              do
              {
                PepQueryName(a1, v15++, 28LL, v16);
                v16 += 16;
              }
              while ( v15 < v2 );
              *a2 = v6;
              v6 = 0LL;
              v7 = 0;
              *(_QWORD *)(a1 + 1088) = v14;
            }
            else
            {
              v7 = -1073741670;
            }
            break;
          }
        }
      }
      else
      {
LABEL_32:
        v7 = -1073741637;
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
