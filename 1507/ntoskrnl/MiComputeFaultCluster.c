/*
 * XREFs of MiComputeFaultCluster @ 0x1400DF61C
 * Callers:
 *     MiResolveMappedFileFault @ 0x14005D550 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x140145F70 (MiResolvePageFileFault.c)
 * Callees:
 *     MiAdvanceFaultList @ 0x1400DF8F4 (MiAdvanceFaultList.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiComputeFaultCluster(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  __int64 v4; // r13
  __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  _QWORD *v11; // r11
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  int v18; // r13d
  unsigned __int64 v19; // r12
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rax
  char v23; // al
  int v24; // eax
  unsigned __int64 v25; // rsi
  __int64 result; // rax
  unsigned __int64 v27; // [rsp+20h] [rbp-58h]
  __int64 v28; // [rsp+28h] [rbp-50h]
  __int64 v29; // [rsp+30h] [rbp-48h]
  __int64 v31; // [rsp+88h] [rbp+10h] BYREF
  int v32; // [rsp+98h] [rbp+20h]

  v32 = a4;
  v4 = a2[3];
  v5 = a2[4];
  v6 = a2[2];
  v28 = v4;
  v29 = v5;
  v9 = *(_QWORD *)(a2[1] + 16 * v4) + (v5 << 12);
  v27 = v6;
  MiAdvanceFaultList(a2);
  v12 = v11[3];
  v13 = 1LL;
  if ( v12 < v6 )
  {
    v14 = 256LL;
    LODWORD(v31) = 0;
    v15 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF8LL;
    if ( a4 )
    {
      v16 = *(unsigned int *)(a1 + 1052);
      if ( v16 < 0x100 )
        v14 = (unsigned int)v16;
    }
    if ( a3 )
    {
      if ( v14 > (*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) - (v9 >> 12) + 1 )
        v14 = (*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) - (v9 >> 12) + 1;
      v17 = *(unsigned int *)(a3 + 52);
      LODWORD(v17) = v17 & 0x7FFFFFFF;
      v10 = v17 | ((unsigned __int64)*(unsigned __int8 *)(a3 + 34) << 31);
      if ( v10 )
      {
        a3 = 0LL;
        LODWORD(v31) = 1;
      }
    }
    if ( v14 > 1 )
    {
      v18 = v31;
      v19 = v15 + 0x90482413000LL;
      while ( 1 )
      {
        if ( !a3 )
        {
          if ( (v15 & 0xFFF) == 0 )
            goto LABEL_41;
          v20 = *(_QWORD *)v15;
          if ( v19 <= 0x7F8
            && (unsigned int)MiPteHasShadow(v10, 0x90482413000LL)
            && (v20 & 1) != 0
            && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
          {
            v21 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
            if ( v21 )
            {
              v22 = *(_QWORD *)(v21 + 8 * ((v15 >> 3) & 0x1FF));
              if ( (v22 & 0x20) != 0 )
                v20 |= 0x20uLL;
              if ( (v22 & 0x42) != 0 )
                v20 |= 0x42uLL;
            }
          }
          v31 = v20;
          if ( (v20 & 1) != 0 )
          {
LABEL_41:
            v4 = v28;
            v5 = v29;
            break;
          }
          if ( v18 )
          {
            if ( (v20 & 0x400) == 0 )
              goto LABEL_41;
          }
          else
          {
            if ( (v20 & 0x400) != 0 || (v20 & 0x800) != 0 )
              goto LABEL_41;
            v23 = v20;
            if ( (unsigned __int64)&STACK[0x90482413088] <= 0x7F8 )
              v23 = MiReadPteShadow(&v31, v20);
            if ( (v23 & 4) == 0 )
              goto LABEL_41;
            v24 = (v20 & 4) != 0 && (unsigned __int16)v20 >> 12 == *(_DWORD *)(a1 + 1044);
            if ( v32 != v24 )
              goto LABEL_41;
          }
          v15 += 8LL;
          v19 += 8LL;
        }
        v25 = *(_QWORD *)(v11[1] + 16 * v12) + (v11[4] << 12);
        if ( (v25 & 0xFFFFFFFFFFFFF000uLL) - 4096 == (v9 & 0xFFFFFFFFFFFFF000uLL) )
        {
          ++v13;
          MiAdvanceFaultList(v11);
          v12 = v11[3];
          if ( v12 != v27 )
          {
            v9 = v25;
            if ( v13 < v14 )
              continue;
          }
        }
        goto LABEL_41;
      }
    }
  }
  result = (unsigned int)v13;
  v11[3] = v4;
  v11[4] = v5;
  return result;
}
