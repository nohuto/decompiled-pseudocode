/*
 * XREFs of PopFxConvertV1Components @ 0x140567D48
 * Callers:
 *     PoFxRegisterCoreDevice @ 0x140566E7C (PoFxRegisterCoreDevice.c)
 *     PoFxRegisterDevice @ 0x140566F90 (PoFxRegisterDevice.c)
 *     PoFxRegisterPrimaryDevice @ 0x14066C53C (PoFxRegisterPrimaryDevice.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

char *__fastcall PopFxConvertV1Components(__int64 a1, unsigned int a2)
{
  char *v2; // r15
  unsigned __int64 v3; // rdi
  unsigned int v5; // r8d
  unsigned int v6; // edx
  int *v7; // rax
  int v8; // ecx
  unsigned int v9; // r9d
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  size_t v12; // rbp
  char *PoolWithTag; // rax
  char *v14; // rbx
  unsigned int v15; // r11d
  char *v16; // r10
  __int64 v17; // r8
  char *v18; // r9
  __int128 v19; // xmm0
  __int64 v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rdx

  v2 = 0LL;
  v3 = a2;
  if ( a2 )
  {
    v5 = 0;
    v6 = 0;
    v7 = (int *)(a1 + 16);
    while ( 1 )
    {
      v8 = *v7;
      if ( !*v7 || v8 + v5 < v5 )
        break;
      ++v6;
      v7 += 8;
      v9 = v8 + v5;
      v5 += v8;
      if ( v6 >= (unsigned int)v3 )
      {
        if ( is_mul_ok(v3, 0x38uLL) )
        {
          v10 = (56 * v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          v11 = 24LL * v9;
          if ( v11 <= 0xFFFFFFFF )
          {
            v12 = (unsigned int)v11 + v10;
            if ( v12 >= (unsigned int)v11 )
            {
              PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v11 + v10, 0x4D584650u);
              v14 = PoolWithTag;
              if ( PoolWithTag )
              {
                memset(PoolWithTag, 0, v12);
                v15 = 0;
                v16 = &v14[v10];
                if ( (_DWORD)v3 )
                {
                  v17 = a1 + 16;
                  v18 = v14 + 28;
                  while ( 1 )
                  {
                    v19 = *(_OWORD *)(v17 - 16);
                    *(_QWORD *)(v18 - 12) = 0LL;
                    v20 = 0LL;
                    *(_OWORD *)(v18 - 28) = v19;
                    *(_DWORD *)v18 = *(_DWORD *)v17;
                    *(_QWORD *)(v18 + 4) = v16;
                    *((_DWORD *)v18 - 1) = *(_DWORD *)(v17 + 4);
                    if ( *(_DWORD *)v17 )
                      break;
LABEL_15:
                    ++v15;
                    v17 += 32LL;
                    v18 += 56;
                    if ( v15 >= (unsigned int)v3 )
                      goto LABEL_16;
                  }
                  while ( v16 - v14 <= v12 - 24 )
                  {
                    v21 = *(_QWORD *)(v17 + 8);
                    v22 = 3 * v20;
                    v20 = (unsigned int)(v20 + 1);
                    *((_DWORD *)v16 + 4) = *(_DWORD *)(v21 + 8 * v22 + 16);
                    *(_QWORD *)v16 = *(_QWORD *)(v21 + 8 * v22);
                    *((_QWORD *)v16 + 1) = *(_QWORD *)(v21 + 8 * v22 + 8);
                    v16 += 24;
                    if ( (unsigned int)v20 >= *(_DWORD *)v17 )
                      goto LABEL_15;
                  }
                }
                else
                {
LABEL_16:
                  v2 = v14;
                  v14 = 0LL;
                }
                if ( v14 )
                  ExFreePoolWithTag(v14, 0x4D584650u);
              }
            }
          }
        }
        return v2;
      }
    }
  }
  return v2;
}
