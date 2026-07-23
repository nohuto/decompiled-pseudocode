/*
 * XREFs of PopFxVerifyDependencies @ 0x14066D870
 * Callers:
 *     PopFxRegisterDeviceWorker @ 0x140567268 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopFxVerifyDependencies(_DWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // ebx
  _DWORD *PoolWithTag; // r14
  unsigned int v8; // edx
  unsigned int v9; // r15d
  _DWORD *v10; // r12
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // ebp
  unsigned int *v14; // r10
  unsigned int v15; // eax
  unsigned int v16; // r9d
  __int64 v17; // r11
  unsigned int v18; // ecx
  unsigned int v20; // r8d
  unsigned int v21; // r11d
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rax

  v6 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * a3, 0x4D584650u);
  if ( PoolWithTag )
  {
    v8 = 0;
    v9 = 0;
    if ( a3 )
    {
      v10 = a1;
      while ( 1 )
      {
        if ( !*v10 )
        {
          PoolWithTag[v8++] = v9;
          if ( v8 )
            break;
        }
LABEL_26:
        ++v9;
        v10 += 3;
        if ( v9 >= a3 )
          goto LABEL_17;
      }
      while ( 1 )
      {
        v11 = (unsigned int)PoolWithTag[v8 - 1];
        if ( (unsigned int)v11 >= a3 )
          break;
        v12 = 3 * v11;
        v13 = a1[3 * v11];
        if ( v13 == 2 )
          break;
        _mm_lfence();
        v14 = *(unsigned int **)(*(_QWORD *)(*(_QWORD *)(a2 + 624) + 8 * v11) + 176LL);
        _mm_lfence();
        if ( v13 == 1 )
        {
          a1[3 * v11] = 2;
          --v8;
          v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 624) + 8LL * (unsigned int)v11) + 172LL);
          if ( v15 )
          {
            v16 = a1[3 * v11 + 1];
            v17 = v15;
            do
            {
              v18 = a1[3 * *v14 + 1];
              if ( v18 > v16 )
              {
                v16 = a1[3 * *v14 + 1];
                a1[v12 + 1] = v18;
              }
              v14 += 2;
              --v17;
            }
            while ( v17 );
            if ( ++a1[v12 + 1] > 4u )
              break;
          }
        }
        else
        {
          a1[3 * v11] = 1;
          v20 = 0;
          v21 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 624) + 8LL * (unsigned int)v11) + 172LL);
          if ( v21 )
          {
            do
            {
              v22 = *v14;
              v23 = a1[3 * v22];
              if ( v23 == 1 )
                goto LABEL_16;
              if ( !v23 )
              {
                if ( v8 >= a3 )
                  goto LABEL_16;
                v24 = v8++;
                PoolWithTag[v24] = v22;
              }
              ++v20;
              v14 += 2;
            }
            while ( v20 < v21 );
          }
        }
        if ( !v8 )
          goto LABEL_26;
      }
LABEL_16:
      v6 = -1073741811;
    }
LABEL_17:
    ExFreePoolWithTag(PoolWithTag, 0x4D584650u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
