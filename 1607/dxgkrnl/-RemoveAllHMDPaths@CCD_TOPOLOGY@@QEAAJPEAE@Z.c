/*
 * XREFs of ?RemoveAllHMDPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z @ 0x1C008AC48
 * Callers:
 *     ?HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C00DB89C (-HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z.c)
 * Callees:
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C008C8D4 (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::RemoveAllHMDPaths(CCD_TOPOLOGY *this, unsigned __int8 *a2)
{
  unsigned __int16 v2; // r8
  unsigned int v4; // r9d
  unsigned int v5; // ebx
  __int64 v7; // r11
  unsigned __int16 v8; // ax
  _OWORD *v9; // r10
  _OWORD *v11; // rdx
  __int128 v12; // xmm1
  _OWORD *v13; // r10
  __int64 v14; // rax

  v2 = 0;
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    v7 = *((_QWORD *)this + 8);
    v8 = v7 ? *(_WORD *)(v7 + 20) : 0;
    if ( v4 >= v8 )
      break;
    v9 = (_OWORD *)(v7 + 216LL * v4);
    if ( (v9[3] & 0x10) != 0 )
    {
      *a2 = 1;
    }
    else
    {
      if ( v4 != v5 )
      {
        v11 = (_OWORD *)(v7 + 216LL * v5);
        v11[3] = v9[3];
        v11[4] = v9[4];
        v11[5] = v9[5];
        v11[6] = v9[6];
        v11[7] = v9[7];
        v11[8] = v9[8];
        v11[9] = v9[9];
        v11 += 11;
        v12 = v9[10];
        v13 = v9 + 11;
        *(v11 - 1) = v12;
        *v11 = *v13;
        v11[1] = v13[1];
        v11[2] = v13[2];
        v11[3] = v13[3];
        v11[4] = v13[4];
        *((_QWORD *)v11 + 10) = *((_QWORD *)v13 + 10);
      }
      ++v5;
    }
    ++v4;
  }
  if ( *a2 )
  {
    if ( v7 )
      v2 = *(_WORD *)(v7 + 22);
    if ( v5 > v2 )
    {
      v14 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v14);
    }
    *(_WORD *)(*((_QWORD *)this + 8) + 20LL) = v5;
    CCD_TOPOLOGY::ClearModalitySetId(this);
  }
  return 0LL;
}
