/*
 * XREFs of ndisIovInitializeNicSwitch @ 0x1C0068A68
 * Callers:
 *     ndisOidPostIovCreateNicSwitch @ 0x1C0068FD0 (ndisOidPostIovCreateNicSwitch.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00AC004 (ndisIovCreateDefaultNicSwitch.c)
 * Callees:
 *     memset @ 0x1C0027500 (memset.c)
 */

__int64 __fastcall ndisIovInitializeNicSwitch(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  unsigned int v5; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rsi
  _QWORD *v12; // rax
  _QWORD *v13; // r14
  _DWORD *v14; // rax
  _DWORD *v15; // rdi

  v5 = 0;
  if ( !a3 || !a4 || !a5 )
    return (unsigned int)-1073741811;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2A0uLL, 0x6F69444Eu);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x2A0uLL);
    v11[1] = v11;
    *v11 = v11;
    v11[11] = v11 + 10;
    v11[10] = v11 + 10;
    v11[8] = v11 + 7;
    v11[7] = v11 + 7;
    v11[2] = a1;
    *((_DWORD *)v11 + 9) = *(_DWORD *)(a2 + 12);
    *((_DWORD *)v11 + 8) = 1;
    v12 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x6F69444Eu);
    v13 = v12;
    if ( v12 )
    {
      memset(v12, 0, 0x30uLL);
      *v13 = a1;
      v13[2] = v11;
      v13[5] = v13 + 4;
      v13[4] = v13 + 4;
      v11[5] = v13;
      v14 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x378uLL, 0x6F69444Eu);
      v15 = v14;
      if ( v14 )
      {
        memset(v14, 0, 0x378uLL);
        v15[16] |= 1u;
        *((_QWORD *)v15 + 9) = a1;
        *((_QWORD *)v15 + 10) = 0LL;
        *((_QWORD *)v15 + 11) = v11;
        *((_QWORD *)v15 + 12) = v13;
        *((_QWORD *)v15 + 14) = 49283456LL;
        v15[30] = *((_DWORD *)v11 + 9);
        *((_WORD *)v15 + 322) = -1;
        v15[31] = 0;
        v15[163] = 0;
        v15[164] = 1;
        v15[162] = *(_DWORD *)(a2 + 548);
        *((_QWORD *)v15 + 110) = v15 + 218;
        *((_QWORD *)v15 + 109) = v15 + 218;
        *a3 = v11;
        *a4 = v13;
        *a5 = v15;
        return v5;
      }
      v5 = -1073741670;
      ExFreePoolWithTag(v13, 0);
    }
    else
    {
      v5 = -1073741670;
    }
    ExFreePoolWithTag(v11, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
