/*
 * XREFs of PfSnBuildDumpFromTrace @ 0x1404F70F4
 * Callers:
 *     PfSnEndTrace @ 0x1404F6D18 (PfSnEndTrace.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PfVerifyTraceBuffer @ 0x1404F7338 (PfVerifyTraceBuffer.c)
 */

__int64 __fastcall PfSnBuildDumpFromTrace(char **a1, __int64 a2)
{
  int v2; // ebx
  char **v4; // rbp
  SIZE_T v5; // rdi
  char *PoolWithTag; // rax
  char *v7; // r13
  char *v8; // r14
  char *v9; // r12
  __int64 *v10; // r15
  int v11; // r14d
  int v12; // edi
  __int64 *v13; // rdx
  unsigned int v14; // edi
  unsigned int v15; // ebx
  int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // ebx
  int v21; // [rsp+68h] [rbp+10h]
  char v22; // [rsp+70h] [rbp+18h] BYREF

  *a1 = 0LL;
  v2 = 0;
  v4 = a1;
  if ( *(int *)(a2 + 332) < 32 )
  {
    return (unsigned int)-1073741789;
  }
  else if ( (*(_BYTE *)(a2 + 484) & 2) != 0 )
  {
    return (unsigned int)-1072103399;
  }
  else
  {
    v5 = ((16 * (*(_DWORD *)(a2 + 120) + *(_DWORD *)(a2 + 344)) + 215) & 0xFFFFFFF8)
       + 8 * (*(_DWORD *)(a2 + 480) + 2 * (*(_DWORD *)(a2 + 480) + 1));
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v5, 0x44506343u);
    *v4 = PoolWithTag;
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, (unsigned int)v5);
      v8 = v7 + 16;
      *((_DWORD *)v7 + 4) = 30;
      *((_DWORD *)v7 + 5) = 1128485697;
      v9 = (char *)((unsigned __int64)(v7 + 231) & 0xFFFFFFFFFFFFFFF8uLL);
      *(_OWORD *)(v7 + 28) = *(_OWORD *)(a2 + 24);
      *(_OWORD *)(v7 + 44) = *(_OWORD *)(a2 + 40);
      *(_OWORD *)(v7 + 60) = *(_OWORD *)(a2 + 56);
      *(_OWORD *)(v7 + 76) = *(_OWORD *)(a2 + 72);
      *((_DWORD *)v7 + 23) = *(_DWORD *)(a2 + 88);
      *((_QWORD *)v7 + 21) = *(_QWORD *)(a2 + 464);
      *((_QWORD *)v7 + 15) = *(_QWORD *)(a2 + 200);
      *((_DWORD *)v7 + 44) ^= (*((_DWORD *)v7 + 44) ^ *(unsigned __int16 *)(a2 + 484)) & 1;
      *((_DWORD *)v7 + 44) ^= ((unsigned __int8)*((_DWORD *)v7 + 44) ^ (unsigned __int8)(2 * *(_WORD *)(a2 + 486))) & 2;
      *((_DWORD *)v7 + 24) = (((_DWORD)v7 + 231) & 0xFFFFFFF8) - ((_DWORD)v7 + 16);
      v10 = *(__int64 **)(a2 + 104);
      if ( v10 != (__int64 *)(a2 + 104) )
      {
        v11 = 0;
        do
        {
          v12 = *((_DWORD *)v10 + 4);
          v13 = v10;
          v10 = (__int64 *)*v10;
          memmove(v9, v13 + 3, (unsigned int)(16 * v12));
          v9 += (unsigned int)(16 * v12);
          v11 += v12;
        }
        while ( v10 != (__int64 *)(a2 + 104) );
        v4 = a1;
        v21 = v11;
        v8 = v7 + 16;
        v2 = v21;
      }
      *((_DWORD *)v8 + 21) = v2;
      *((_DWORD *)v8 + 22) = *(_DWORD *)(a2 + 332);
      v14 = (((_DWORD)v9 + 7) & 0xFFFFFFF8) - (_DWORD)v8;
      *((_DWORD *)v8 + 23) = *(_DWORD *)(a2 + 336);
      *((_OWORD *)v8 + 7) = *(_OWORD *)(a2 + 284);
      *((_OWORD *)v8 + 8) = *(_OWORD *)(a2 + 300);
      *((_QWORD *)v8 + 18) = *(_QWORD *)(a2 + 316);
      *((_DWORD *)v8 + 24) = v14;
      v15 = 24 * *(_DWORD *)(a2 + 480);
      memmove((void *)((unsigned __int64)(v9 + 7) & 0xFFFFFFFFFFFFFFF8uLL), *(const void **)(a2 + 472), v15);
      v16 = *(_DWORD *)(a2 + 480);
      v17 = v14 + v15;
      *((_DWORD *)v8 + 2) = v17;
      *((_DWORD *)v8 + 25) = v16;
      if ( (unsigned __int8)PfVerifyTraceBuffer(v8, v17, &v22) )
      {
        return 0;
      }
      else
      {
        v18 = -1073741823;
        ExFreePoolWithTag(v7, 0);
        *v4 = 0LL;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v18;
}
