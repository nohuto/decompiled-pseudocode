/*
 * XREFs of ?InitializeGpuVaState@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAVVIDMM_GLOBAL@@IPEBQEAVVIDMM_SEGMENT@@PEBUDXGADAPTER_GPUMMUCAPS@@PEBUDXGK_PHYSICALADAPTERINFO@@I@Z @ 0x1C006AF58
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C006DA98 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_PHYSICAL_ADAPTER::InitializeGpuVaState(
        VIDMM_PHYSICAL_ADAPTER *this,
        struct VIDMM_GLOBAL *a2,
        unsigned int a3,
        struct VIDMM_SEGMENT *const *a4,
        const struct DXGADAPTER_GPUMMUCAPS *a5,
        const struct DXGK_PHYSICALADAPTERINFO *a6,
        unsigned int a7)
{
  unsigned int v10; // r9d
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  int v16; // eax
  unsigned int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // ebx
  unsigned int v21; // r8d
  __int64 v22; // rcx
  unsigned int v23; // eax
  int v24; // edx
  int v25; // edx
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rax
  __int64 v30; // rax
  int v31; // edi
  unsigned int v32; // ebx
  __int64 v33; // r14
  unsigned int v34; // ebp
  __int64 v35; // r15
  __int64 v36; // r8
  __int64 v37; // rdx

  *((_BYTE *)this + 420) |= 0x20u;
  if ( (*((_BYTE *)a2 + 40872) & 1) == 0 )
    return 0LL;
  v10 = 0;
  *((_QWORD *)this + 53) = a5;
  v11 = *((_DWORD *)a2 + 10216);
  if ( v11 )
  {
    if ( *((_DWORD *)a5 + 2) != v11 )
    {
      v30 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v30 + 24) = 524LL;
      goto LABEL_36;
    }
  }
  else
  {
    v12 = *((_DWORD *)a5 + 2);
    *((_DWORD *)a2 + 10216) = v12;
    if ( (unsigned int)(v12 - 13) > 0x32 )
    {
      v30 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v30 + 24) = 515LL;
      goto LABEL_36;
    }
  }
  v14 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  v13 = 6LL * a3;
  LOBYTE(v14) = (*((_BYTE *)this + 420) ^ (4 * *(_BYTE *)(*(_QWORD *)(v14 + 2040) + 48LL * a3 + 40))) & 4;
  *((_BYTE *)this + 420) ^= v14;
  if ( (*(_DWORD *)a5 & 0x80u) != 0 && ((v15 = *((_DWORD *)a5 + 3)) == 0 || (v15 & 0xFFF) != 0) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v13, v14);
    *(_QWORD *)(v30 + 24) = 539LL;
  }
  else
  {
    v16 = *((_DWORD *)a5 + 9);
    v17 = *((_DWORD *)a2 + 10216) - 12;
    *((_DWORD *)this + 4) = v16;
    if ( v16 )
    {
      *((_DWORD *)this + 4) = (v16 + 4095) & 0xFFFFF000;
      v18 = *((unsigned int *)a5 + 7);
      *((_DWORD *)this + 6) = v18;
      *((_DWORD *)this + 10) = *((_DWORD *)a5 + 12);
      *((_DWORD *)this + 8) = *((_DWORD *)a5 + 8);
      v19 = *((unsigned int *)a5 + 13);
      *((_DWORD *)this + 12) = v19;
      if ( (unsigned int)v18 > a7 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v19, v18);
        *(_QWORD *)(v30 + 24) = 561LL;
      }
      else
      {
        v20 = *((_DWORD *)this + 10);
        if ( v20 > a7 )
        {
          v30 = WdLogNewEntry5_WdAssertion(v19, v18);
          *(_QWORD *)(v30 + 24) = 566LL;
        }
        else
        {
          v21 = *((_DWORD *)this + 8);
          if ( v21 > a7 )
          {
            v30 = WdLogNewEntry5_WdAssertion(v19, v18);
            *(_QWORD *)(v30 + 24) = 571LL;
          }
          else if ( (unsigned int)v19 > a7 )
          {
            v30 = WdLogNewEntry5_WdAssertion(v19, v18);
            *(_QWORD *)(v30 + 24) = 576LL;
          }
          else
          {
            v22 = *((unsigned int *)a5 + 6);
            *((_DWORD *)this + 15) = 1 << v22;
            *((_DWORD *)this + 16) = (unsigned int)(1 << v22) >> 4;
            *((_DWORD *)this + 13) = v22;
            *((_DWORD *)this + 14) = (1 << v22) - 1;
            v23 = *((_DWORD *)a5 + 1);
            *((_DWORD *)this + 102) = v23;
            if ( (_DWORD)v22 && (unsigned int)v22 < v17 )
            {
              if ( v23 > 2 )
              {
                v30 = WdLogNewEntry5_WdAssertion(v22, v18);
                *(_QWORD *)(v30 + 24) = 596LL;
              }
              else
              {
                *((_DWORD *)this + 5) = v18;
                if ( (_DWORD)v18 )
                {
                  if ( (*((_BYTE *)a4[(unsigned int)(v18 - 1)] + 56) & 1) != 0 )
                    LODWORD(v18) = 0;
                  *((_DWORD *)this + 5) = v18;
                }
                *((_DWORD *)this + 9) = v20;
                if ( v20 )
                {
                  if ( (*((_BYTE *)a4[v20 - 1] + 56) & 1) != 0 )
                    v20 = 0;
                  *((_DWORD *)this + 9) = v20;
                }
                *((_DWORD *)this + 7) = v21;
                if ( v21 )
                {
                  if ( (*((_BYTE *)a4[v21 - 1] + 56) & 1) != 0 )
                    v21 = 0;
                  *((_DWORD *)this + 7) = v21;
                }
                v24 = *((_DWORD *)this + 12);
                *((_DWORD *)this + 11) = v24;
                if ( v24 )
                {
                  if ( (*((_BYTE *)a4[v24 - 1] + 56) & 1) != 0 )
                    v24 = 0;
                  *((_DWORD *)this + 11) = v24;
                }
                *((_DWORD *)this + 103) = *((_DWORD *)a5 + 4) - 1;
                *((_QWORD *)this + 12) = 0LL;
                *((_DWORD *)this + 19) = v22;
                v25 = *((_DWORD *)this + 15);
                *((_QWORD *)this + 13) = 0LL;
                v26 = (unsigned int)(v25 - 1);
                *((_QWORD *)this + 11) = v26;
                *((_DWORD *)this + 18) = *((_DWORD *)this + 15);
                *((_DWORD *)this + 20) = *((_DWORD *)this + 4);
                *((_QWORD *)this + 14) = 1LL;
                v27 = *((_DWORD *)this + 103);
                if ( v27 == 1 )
                {
                  *((_DWORD *)this + 31) = *((_DWORD *)a2 + 10216) - *((_DWORD *)this + 13);
                  *((_QWORD *)this + 18) = *((unsigned int *)this + 13);
                  *((_QWORD *)this + 19) = v26;
                  *((_QWORD *)this + 17) = ~v26;
                  *((_DWORD *)this + 30) = 0;
                  *((_DWORD *)this + 32) = 0;
                  *((_QWORD *)this + 20) = 1LL << *((_DWORD *)this + 13);
                  goto LABEL_33;
                }
                v31 = *((_DWORD *)this + 19);
                v32 = 1;
                if ( v27 )
                {
                  while ( 1 )
                  {
                    v33 = v32;
                    v34 = *((_DWORD *)a5 + 5 * v32 + 6);
                    if ( !v34 || v34 > v17 - v31 )
                      break;
                    v31 += v34;
                    v35 = 6LL * v32;
                    *((_DWORD *)this + 2 * v35 + 19) = v34;
                    v36 = *((_QWORD *)this + 6 * v32 + 6) + *((unsigned int *)this + 12 * v32 + 7);
                    *((_QWORD *)this + 6 * v32 + 12) = v36;
                    v37 = *((_QWORD *)this + 6 * v32 + 5) | *((_QWORD *)this + 6 * v32 + 7);
                    *((_QWORD *)this + v35 + 13) = v37;
                    *((_QWORD *)this + v35 + 11) = ~v37 & ((1LL << v31) - 1);
                    v22 = v36;
                    *((_DWORD *)this + 2 * v35 + 18) = 1LL << v34;
                    v26 = *((unsigned int *)a5 + 5 * v32 + 9);
                    *((_DWORD *)this + 2 * v35 + 20) = v26;
                    *((_QWORD *)this + v35 + 14) = 1LL << v36;
                    if ( !(_DWORD)v26 )
                    {
                      v30 = WdLogNewEntry5_WdAssertion(v36, v26);
                      *(_QWORD *)(v30 + 24) = 675LL;
                      goto LABEL_36;
                    }
                    ++v32;
                    *((_DWORD *)this + 12 * v33 + 20) = (v26 + 4095) & 0xFFFFF000;
                    if ( v32 > *((_DWORD *)this + 103) )
                      goto LABEL_51;
                  }
                  v30 = WdLogNewEntry5_WdAssertion(v22, v26);
                  *(_QWORD *)(v30 + 24) = 660LL;
                }
                else
                {
LABEL_51:
                  if ( v31 == v17 )
                  {
                    do
                    {
LABEL_33:
                      v28 = v10++;
                      *((_DWORD *)this + 12 * v28 + 21) = *((_DWORD *)a5 + 5 * v28 + 10);
                    }
                    while ( v10 <= *((_DWORD *)this + 103) );
                    return 0LL;
                  }
                  v30 = WdLogNewEntry5_WdAssertion(v22, v26);
                  *(_QWORD *)(v30 + 24) = 682LL;
                }
              }
            }
            else
            {
              v30 = WdLogNewEntry5_WdAssertion(v22, v18);
              *(_QWORD *)(v30 + 24) = 588LL;
            }
          }
        }
      }
    }
    else
    {
      v30 = WdLogNewEntry5_WdAssertion(v13, v14);
      *(_QWORD *)(v30 + 24) = 549LL;
    }
  }
LABEL_36:
  WdLogEvent5_WdAssertion(v30);
  return 3221225485LL;
}
