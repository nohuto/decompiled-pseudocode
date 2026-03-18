/*
 * XREFs of ?InitializeGpuVaState@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAVVIDMM_GLOBAL@@IPEBQEAVVIDMM_SEGMENT@@PEBUDXGADAPTER_GPUMMUCAPS@@PEBUDXGK_PHYSICALADAPTERINFO@@I@Z @ 0x1C004E080
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C003B7A8 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_PHYSICAL_ADAPTER::InitializeGpuVaState(
        VIDMM_PHYSICAL_ADAPTER *this,
        struct VIDMM_GLOBAL *a2,
        __int64 a3,
        struct VIDMM_SEGMENT *const *a4,
        const struct DXGADAPTER_GPUMMUCAPS *a5,
        const struct DXGK_PHYSICALADAPTERINFO *a6,
        unsigned int a7)
{
  unsigned int v10; // r9d
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  int v18; // eax
  unsigned int v19; // esi
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // ebx
  __int64 v23; // r8
  __int64 v24; // rcx
  unsigned int v25; // eax
  int v26; // edx
  int v27; // edx
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rax
  int v31; // edi
  unsigned int v32; // ebx
  __int64 v33; // r14
  unsigned int v34; // ebp
  __int64 v35; // r15
  __int64 v36; // rdx

  *((_BYTE *)this + 420) |= 0x20u;
  if ( (*((_BYTE *)a2 + 40552) & 1) != 0 )
  {
    v10 = 0;
    *((_QWORD *)this + 53) = a5;
    v11 = *((_DWORD *)a2 + 10136);
    if ( v11 )
    {
      if ( *((_DWORD *)a5 + 2) != v11 )
      {
        v13 = WdLogNewEntry5_WdAssertion(this, a2, a3, 0LL);
        *(_QWORD *)(v13 + 24) = 487LL;
        goto LABEL_5;
      }
    }
    else
    {
      v12 = *((_DWORD *)a5 + 2);
      *((_DWORD *)a2 + 10136) = v12;
      if ( (unsigned int)(v12 - 13) > 0x32 )
      {
        v13 = WdLogNewEntry5_WdAssertion(this, a2, a3, 0LL);
        *(_QWORD *)(v13 + 24) = 478LL;
LABEL_5:
        WdLogEvent5_WdAssertion(v13);
        return 3221225485LL;
      }
    }
    v16 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
    v15 = 6LL * (unsigned int)a3;
    LOBYTE(v16) = (*((_BYTE *)this + 420) ^ (4 * *(_BYTE *)(*(_QWORD *)(v16 + 1896) + 48LL * (unsigned int)a3 + 40))) & 4;
    *((_BYTE *)this + 420) ^= v16;
    if ( (*(_DWORD *)a5 & 0x80u) != 0 )
    {
      v17 = *((_DWORD *)a5 + 3);
      if ( !v17 || (v17 & 0xFFF) != 0 )
      {
        v13 = WdLogNewEntry5_WdAssertion(v15, v16, a3, 0LL);
        *(_QWORD *)(v13 + 24) = 502LL;
        goto LABEL_5;
      }
    }
    v18 = *((_DWORD *)a5 + 9);
    v19 = *((_DWORD *)a2 + 10136) - 12;
    *((_DWORD *)this + 4) = v18;
    if ( !v18 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v15, v16, a3, 0LL);
      *(_QWORD *)(v13 + 24) = 512LL;
      goto LABEL_5;
    }
    *((_DWORD *)this + 4) = (v18 + 4095) & 0xFFFFF000;
    v20 = *((unsigned int *)a5 + 7);
    *((_DWORD *)this + 6) = v20;
    *((_DWORD *)this + 10) = *((_DWORD *)a5 + 12);
    *((_DWORD *)this + 8) = *((_DWORD *)a5 + 8);
    v21 = *((unsigned int *)a5 + 13);
    *((_DWORD *)this + 12) = v21;
    if ( (unsigned int)v20 > a7 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v21, v20, a3, 0LL);
      *(_QWORD *)(v13 + 24) = 524LL;
      goto LABEL_5;
    }
    v22 = *((_DWORD *)this + 10);
    if ( v22 > a7 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v21, v20, a3, 0LL);
      *(_QWORD *)(v13 + 24) = 529LL;
      goto LABEL_5;
    }
    v23 = *((unsigned int *)this + 8);
    if ( (unsigned int)v23 > a7 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v21, v20, v23, 0LL);
      *(_QWORD *)(v13 + 24) = 534LL;
      goto LABEL_5;
    }
    if ( (unsigned int)v21 > a7 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v21, v20, v23, 0LL);
      *(_QWORD *)(v13 + 24) = 539LL;
      goto LABEL_5;
    }
    v24 = *((unsigned int *)a5 + 6);
    *((_DWORD *)this + 15) = 1 << v24;
    *((_DWORD *)this + 16) = (unsigned int)(1 << v24) >> 4;
    *((_DWORD *)this + 13) = v24;
    *((_DWORD *)this + 14) = (1 << v24) - 1;
    v25 = *((_DWORD *)a5 + 1);
    *((_DWORD *)this + 102) = v25;
    if ( !(_DWORD)v24 || (unsigned int)v24 >= v19 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v24, v20, v23, 0LL);
      *(_QWORD *)(v13 + 24) = 551LL;
      goto LABEL_5;
    }
    if ( v25 > 2 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v24, v20, v23, 0LL);
      *(_QWORD *)(v13 + 24) = 559LL;
      goto LABEL_5;
    }
    *((_DWORD *)this + 5) = v20;
    if ( (_DWORD)v20 )
    {
      LOBYTE(v24) = *((_BYTE *)a4[(unsigned int)(v20 - 1)] + 56) & 1;
      if ( (_BYTE)v24 )
        LODWORD(v20) = 0;
      *((_DWORD *)this + 5) = v20;
    }
    *((_DWORD *)this + 9) = v22;
    if ( v22 )
    {
      LOBYTE(v24) = *((_BYTE *)a4[v22 - 1] + 56) & 1;
      if ( (_BYTE)v24 )
        v22 = 0;
      *((_DWORD *)this + 9) = v22;
    }
    *((_DWORD *)this + 7) = v23;
    if ( (_DWORD)v23 )
    {
      LOBYTE(v24) = *((_BYTE *)a4[(unsigned int)(v23 - 1)] + 56) & 1;
      if ( (_BYTE)v24 )
        v23 = 0LL;
      *((_DWORD *)this + 7) = v23;
    }
    v26 = *((_DWORD *)this + 12);
    *((_DWORD *)this + 11) = v26;
    if ( v26 )
    {
      LOBYTE(v24) = *((_BYTE *)a4[v26 - 1] + 56) & 1;
      if ( (_BYTE)v24 )
        v26 = 0;
      *((_DWORD *)this + 11) = v26;
    }
    *((_DWORD *)this + 103) = *((_DWORD *)a5 + 4) - 1;
    *((_QWORD *)this + 12) = 0LL;
    *((_DWORD *)this + 19) = *((_DWORD *)this + 13);
    v27 = *((_DWORD *)this + 15);
    *((_QWORD *)this + 13) = 0LL;
    v28 = (unsigned int)(v27 - 1);
    *((_QWORD *)this + 11) = v28;
    *((_DWORD *)this + 18) = *((_DWORD *)this + 15);
    *((_DWORD *)this + 20) = *((_DWORD *)this + 4);
    *((_QWORD *)this + 14) = 1LL;
    v29 = *((_DWORD *)this + 103);
    if ( v29 == 1 )
    {
      *((_DWORD *)this + 31) = *((_DWORD *)a2 + 10136) - *((_DWORD *)this + 13);
      *((_QWORD *)this + 18) = *((unsigned int *)this + 13);
      *((_QWORD *)this + 19) = v28;
      *((_QWORD *)this + 17) = ~v28;
      *((_DWORD *)this + 30) = 0;
      *((_DWORD *)this + 32) = 0;
      *((_QWORD *)this + 20) = 1LL << *((_DWORD *)this + 13);
    }
    else
    {
      v31 = *((_DWORD *)this + 19);
      v32 = 1;
      if ( v29 )
      {
        while ( 1 )
        {
          v33 = v32;
          v34 = *((_DWORD *)a5 + 5 * v32 + 6);
          if ( !v34 || v34 > v19 - v31 )
            break;
          v31 += v34;
          v35 = 6LL * v32;
          *((_DWORD *)this + 2 * v35 + 19) = v34;
          v23 = *((_QWORD *)this + 6 * v32 + 6) + *((unsigned int *)this + 12 * v32 + 7);
          *((_QWORD *)this + 6 * v32 + 12) = v23;
          v36 = *((_QWORD *)this + 6 * v32 + 5) | *((_QWORD *)this + 6 * v32 + 7);
          *((_QWORD *)this + v35 + 13) = v36;
          *((_QWORD *)this + v35 + 11) = ~v36 & ((1LL << v31) - 1);
          v24 = v23;
          *((_DWORD *)this + 2 * v35 + 18) = 1LL << v34;
          v28 = *((unsigned int *)a5 + 5 * v32 + 9);
          *((_DWORD *)this + 2 * v35 + 20) = v28;
          *((_QWORD *)this + v35 + 14) = 1LL << v23;
          if ( !(_DWORD)v28 )
          {
            v13 = WdLogNewEntry5_WdAssertion(v23, v28, v23, 0LL);
            *(_QWORD *)(v13 + 24) = 638LL;
            goto LABEL_5;
          }
          ++v32;
          *((_DWORD *)this + 12 * v33 + 20) = (v28 + 4095) & 0xFFFFF000;
          if ( v32 > *((_DWORD *)this + 103) )
            goto LABEL_51;
        }
        v13 = WdLogNewEntry5_WdAssertion(v24, v28, v23, 0LL);
        *(_QWORD *)(v13 + 24) = 623LL;
        goto LABEL_5;
      }
LABEL_51:
      if ( v31 != v19 )
      {
        v13 = WdLogNewEntry5_WdAssertion(v24, v28, v23, 0LL);
        *(_QWORD *)(v13 + 24) = 645LL;
        goto LABEL_5;
      }
    }
    do
    {
      v30 = v10++;
      *((_DWORD *)this + 12 * v30 + 21) = *((_DWORD *)a5 + 5 * v30 + 10);
    }
    while ( v10 <= *((_DWORD *)this + 103) );
  }
  return 0LL;
}
