/*
 * XREFs of ValidateUniqueGpuVaMapping @ 0x1C0095050
 * Callers:
 *     ?AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C00926F0 (-AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENT.c)
 * Callees:
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0012BAC (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 */

char __fastcall ValidateUniqueGpuVaMapping(__int64 a1)
{
  __int64 VidMmGlobalAllocFromOwner; // rax
  _QWORD *v2; // r8
  unsigned __int64 v3; // rcx
  _QWORD *v4; // r12
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r15
  __int64 v7; // rsi
  _QWORD *v8; // rbx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r9
  __int64 v14; // rbp
  char v15; // dl
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  _QWORD *v18; // rax

  VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(
                                (int)(*(_DWORD *)(a1 + 64) << 28) >> 28,
                                *(_QWORD *)(a1 + 56));
  if ( VidMmGlobalAllocFromOwner )
  {
    v3 = v2[9];
    v4 = (_QWORD *)(VidMmGlobalAllocFromOwner + 192);
    v5 = v2[13];
    v6 = v2[12];
    v7 = v2[10] & 0x7FFFFFFFFFFFFFFFLL;
    v8 = *(_QWORD **)(VidMmGlobalAllocFromOwner + 192);
    v9 = v3 + v5 - v6;
    while ( 1 )
    {
      if ( v8 == v4 )
        return 1;
      v10 = v8[4];
      v11 = v8[8];
      v12 = v8[7];
      v13 = v10 + v11 - v12;
      v14 = v8[5] & 0x7FFFFFFFFFFFFFFFLL;
      if ( v9 <= v10 )
        return 1;
      if ( v3 < v13 && v7 != v14 )
      {
        v15 = 1;
        if ( *v2 == *(v8 - 5) && (v6 > v12 || v5 < v11) )
          break;
      }
LABEL_23:
      v8 = (_QWORD *)*v8;
    }
    v16 = 0LL;
    v17 = 0LL;
    if ( v6 > v12 && v6 < v11 )
      v16 = v6 - v12;
    if ( v5 < v11 && v5 > v12 )
      v17 = v11 - v5;
    if ( v16 )
    {
      v15 = v2[9] >= v10 + v16;
      if ( !v17 )
      {
LABEL_21:
        if ( !v15 )
        {
LABEL_18:
          v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v17);
          v18[3] = v8[7];
          v18[4] = v8[8];
          v18[5] = v14;
          v18[6] = v7;
          WdLogEvent5_WdWarning(v18);
          return 0;
        }
        v3 = v2[9];
        goto LABEL_23;
      }
    }
    else if ( !v17 )
    {
      goto LABEL_18;
    }
    v15 &= v9 <= v13 - v17;
    goto LABEL_21;
  }
  return 1;
}
