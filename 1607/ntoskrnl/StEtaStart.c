/*
 * XREFs of StEtaStart @ 0x140005860
 * Callers:
 *     ?StartHelper@StEtaHelper@@SAJPEAU_ST_ETA_CONTEXT@@K@Z @ 0x1400057A0 (-StartHelper@StEtaHelper@@SAJPEAU_ST_ETA_CONTEXT@@K@Z.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall StEtaStart(__int64 a1, int **a2, _QWORD *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rbp
  __int64 v7; // r12
  int *v8; // r15
  int *v9; // rax
  unsigned int v10; // ebx
  int *PoolWithTag; // rax
  int *v12; // r13
  int *v13; // r12
  int v14; // ebx
  LONGLONG v15; // rdi
  __int64 v17; // [rsp+20h] [rbp-48h]
  LARGE_INTEGER v20; // [rsp+88h] [rbp+20h] BYREF

  LODWORD(v4) = 0;
  v20.QuadPart = 0LL;
  KeQueryPerformanceCounter(&v20);
  if ( v20.QuadPart )
  {
    v6 = 0LL;
    v7 = a1 - (_QWORD)a2;
    v17 = a1 - (_QWORD)a2;
    while ( 1 )
    {
      v8 = *a2;
      if ( *a2 )
      {
        v9 = *a2;
        v10 = 1;
        if ( *v8 != -1 )
        {
          do
          {
            v9 += 2;
            ++v10;
          }
          while ( *v9 != -1 );
        }
        PoolWithTag = (int *)ExAllocatePoolWithTag(NonPagedPoolNx, 32 * v10, 0x74496D73u);
        v12 = PoolWithTag;
        if ( !PoolWithTag )
        {
          LODWORD(v4) = -1073741670;
          return (unsigned int)v4;
        }
        if ( v10 )
        {
          v13 = PoolWithTag;
          v4 = v10;
          do
          {
            v14 = *v8;
            v15 = v20.QuadPart * (unsigned int)v8[1] / 1000000;
            memset(v13, 0, 0x20uLL);
            *v13 = v14;
            v8 += 2;
            *((_QWORD *)v13 + 1) = v15;
            v13 += 8;
            --v4;
          }
          while ( v4 );
          v7 = v17;
        }
        *(int **)((char *)a2 + v7 + 16) = v12;
      }
      ++v6;
      ++a2;
      if ( v6 >= 2 )
      {
        *(_QWORD *)(a1 + 32) = *a3;
        return (unsigned int)v4;
      }
    }
  }
  LODWORD(v4) = -1073741637;
  return (unsigned int)v4;
}
