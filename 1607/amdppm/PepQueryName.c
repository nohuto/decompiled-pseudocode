/*
 * XREFs of PepQueryName @ 0x1C001570C
 * Callers:
 *     PepNotifyQueryCoordinatedStates @ 0x1C00151DC (PepNotifyQueryCoordinatedStates.c)
 *     PepQueryVetoList @ 0x1C00155E4 (PepQueryVetoList.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0015834 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     RegisterKernelPlatformStates @ 0x1C0017A78 (RegisterKernelPlatformStates.c)
 * Callees:
 *     memset @ 0x1C0006B40 (memset.c)
 */

__int64 __fastcall PepQueryName(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // rcx
  unsigned int v8; // ebx
  SIZE_T v9; // rbx
  _WORD *PoolWithTag; // rax
  _WORD *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  _WORD *v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-28h] BYREF
  _WORD *v17; // [rsp+28h] [rbp-20h]

  v16 = 0LL;
  v17 = 0LL;
  v6 = *(_QWORD *)(a1 + 1064);
  LODWORD(v16) = a2;
  v8 = PoFxProcessorNotification(v6, a3, &v16);
  if ( !v8 )
  {
    v9 = 2 * (unsigned int)WORD2(v16) + 2;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x72637250u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v9);
      v12 = *(_QWORD *)(a1 + 1064);
      v17 = v11;
      v8 = PoFxProcessorNotification(v12, a3, &v16);
      if ( !v8 )
      {
        *(_DWORD *)a4 = 0;
        v13 = 0x7FFFLL;
        *(_QWORD *)(a4 + 8) = 0LL;
        v14 = v11;
        do
        {
          if ( !*v14 )
            break;
          ++v14;
          --v13;
        }
        while ( v13 );
        if ( v13 )
        {
          *(_QWORD *)(a4 + 8) = v11;
          v8 = 0;
          v11 = 0LL;
          *(_WORD *)a4 = 2 * (0x7FFF - v13);
          *(_WORD *)(a4 + 2) = 2 * (0x7FFF - v13) + 2;
        }
        else
        {
          v8 = -1073741811;
        }
      }
      if ( v11 )
        ExFreePoolWithTag(v11, 0x72637250u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v8;
}
