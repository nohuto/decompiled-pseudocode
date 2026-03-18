/*
 * XREFs of PfSnBuildDumpFromTrace @ 0x1404D2E60
 * Callers:
 *     PfSnEndTrace @ 0x1404D2B18 (PfSnEndTrace.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PfVerifyTraceBuffer @ 0x1404D30A4 (PfVerifyTraceBuffer.c)
 */

__int64 __fastcall PfSnBuildDumpFromTrace(_QWORD *a1, __int64 a2)
{
  int v2; // ebx
  _QWORD *v4; // rbp
  char *PoolWithTag; // rax
  _DWORD *v6; // r13
  _DWORD *v7; // r14
  char *v8; // rdi
  __int128 v9; // xmm0
  char *v10; // r12
  __int64 *v11; // r15
  int v12; // r14d
  int v13; // edi
  __int64 *v14; // rdx
  unsigned int v15; // edi
  unsigned int v16; // ebx
  int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // ebx
  int v22; // [rsp+78h] [rbp+10h]
  char v23; // [rsp+80h] [rbp+18h] BYREF
  char *v24; // [rsp+88h] [rbp+20h]

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
    PoolWithTag = (char *)ExAllocatePoolWithTag(
                            PagedPool,
                            ((16 * (*(_DWORD *)(a2 + 120) + *(_DWORD *)(a2 + 344)) + 215) & 0xFFFFFFF8)
                          + 24 * *(_DWORD *)(a2 + 480)
                          + 16,
                            0x44506343u);
    *v4 = PoolWithTag;
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      v7 = PoolWithTag + 16;
      *((_DWORD *)PoolWithTag + 4) = 30;
      v8 = PoolWithTag + 128;
      *((_DWORD *)PoolWithTag + 5) = 1128485697;
      v9 = *(_OWORD *)(a2 + 24);
      v24 = PoolWithTag + 128;
      *(_OWORD *)(PoolWithTag + 28) = v9;
      *(_OWORD *)(PoolWithTag + 44) = *(_OWORD *)(a2 + 40);
      *(_OWORD *)(PoolWithTag + 60) = *(_OWORD *)(a2 + 56);
      *(_OWORD *)(PoolWithTag + 76) = *(_OWORD *)(a2 + 72);
      *((_DWORD *)PoolWithTag + 23) = *(_DWORD *)(a2 + 88);
      *((_QWORD *)PoolWithTag + 21) = *(_QWORD *)(a2 + 464);
      *((_QWORD *)PoolWithTag + 15) = *(_QWORD *)(a2 + 200);
      *((_DWORD *)PoolWithTag + 44) ^= (*((_DWORD *)PoolWithTag + 44) ^ *(unsigned __int16 *)(a2 + 484)) & 1;
      *((_DWORD *)PoolWithTag + 44) ^= ((unsigned __int8)*((_DWORD *)PoolWithTag + 44) ^ (unsigned __int8)(2 * *(_WORD *)(a2 + 486))) & 2;
      memset(PoolWithTag + 128, 0, 0x28uLL);
      v10 = (char *)(((unsigned __int64)v7 + 215) & 0xFFFFFFFFFFFFFFF8uLL);
      v7[20] = (((_DWORD)v7 + 215) & 0xFFFFFFF8) - (_DWORD)v7;
      v11 = *(__int64 **)(a2 + 104);
      if ( v11 != (__int64 *)(a2 + 104) )
      {
        v12 = 0;
        do
        {
          v13 = *((_DWORD *)v11 + 4);
          v14 = v11;
          v11 = (__int64 *)*v11;
          memmove(v10, v14 + 3, (unsigned int)(16 * v13));
          v10 += (unsigned int)(16 * v13);
          v12 += v13;
        }
        while ( v11 != (__int64 *)(a2 + 104) );
        v4 = a1;
        v8 = v24;
        v22 = v12;
        v7 = v6 + 4;
        v2 = v22;
      }
      v7[21] = v2;
      v7[22] = *(_DWORD *)(a2 + 332);
      v7[23] = *(_DWORD *)(a2 + 336);
      *(_OWORD *)v8 = *(_OWORD *)(a2 + 284);
      *((_OWORD *)v8 + 1) = *(_OWORD *)(a2 + 300);
      *((_QWORD *)v8 + 4) = *(_QWORD *)(a2 + 316);
      v15 = (((_DWORD)v10 + 7) & 0xFFFFFFF8) - (_DWORD)v7;
      v7[24] = v15;
      v16 = 24 * *(_DWORD *)(a2 + 480);
      memmove((void *)((unsigned __int64)(v10 + 7) & 0xFFFFFFFFFFFFFFF8uLL), *(const void **)(a2 + 472), v16);
      v17 = *(_DWORD *)(a2 + 480);
      v18 = v15 + v16;
      v7[2] = v18;
      v7[25] = v17;
      if ( (unsigned __int8)PfVerifyTraceBuffer(v7, v18, &v23) )
      {
        return 0;
      }
      else
      {
        v19 = -1073741823;
        ExFreePoolWithTag(v6, 0);
        *v4 = 0LL;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v19;
}
