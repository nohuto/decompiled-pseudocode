/*
 * XREFs of MiSimpleAging @ 0x1400AA7CC
 * Callers:
 *     MiAllocateWsle @ 0x14003BC70 (MiAllocateWsle.c)
 *     MiReplaceWorkingSetEntryIfNecessary @ 0x1401E9CCC (MiReplaceWorkingSetEntryIfNecessary.c)
 * Callees:
 *     MiRotateHeadWsle @ 0x140016970 (MiRotateHeadWsle.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiClearPteAccessed @ 0x1400DFD90 (MiClearPteAccessed.c)
 *     MiTbFlushType @ 0x1400FEB3C (MiTbFlushType.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiSimpleAging(__int64 a1)
{
  ULONG_PTR *SharedWorkingSetList; // rbp
  unsigned __int64 v3; // r8
  __int64 v4; // rdx
  unsigned __int64 v5; // rbx
  ULONG_PTR v6; // r9
  unsigned __int64 v7; // r10
  __int64 v8; // rbx
  unsigned int v9; // esi
  __int64 v10; // rax
  __int64 v11; // r10
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rax
  int v14; // r9d
  int v15; // r10d
  int v16; // [rsp+30h] [rbp-E8h] BYREF
  __int16 v17; // [rsp+34h] [rbp-E4h]
  int v18; // [rsp+38h] [rbp-E0h]
  int v19; // [rsp+3Ch] [rbp-DCh]
  __int64 v20; // [rsp+40h] [rbp-D8h]
  __int64 v21; // [rsp+48h] [rbp-D0h]

  if ( (*(_BYTE *)(a1 + 184) & 0x40) != 0
    && *(_QWORD *)(a1 + 128) >= (((*(unsigned __int64 *)(a1 + 144) * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFFCuLL) )
  {
    SharedWorkingSetList = MiGetSharedWorkingSetList(a1);
    v5 = *(_QWORD *)(v4 + 32) + *(_QWORD *)(v4 + 40);
    v6 = SharedWorkingSetList[1];
    if ( v6 + v5 >= (((v3 * (unsigned __int128)v7) >> 64) & 0xFFFFFFFFFFFFFFFCuLL) && v3 - v6 - v5 < 0x400 )
    {
      if ( v5 > 0x100 )
        v8 = v5 >> 5;
      else
        v8 = 8LL;
      v19 = 0;
      v17 = 0;
      v9 = 1;
      v20 = 0LL;
      v21 = 0LL;
      v16 = MiTbFlushType(a1);
      v18 = 20;
      while ( v8 )
      {
        v10 = MiRotateHeadWsle(a1, v9);
        if ( v10 == 0xFFFFFFFFFLL )
        {
          if ( !v9 )
            break;
          --v9;
        }
        else
        {
          --v8;
          v11 = *(_QWORD *)(SharedWorkingSetList[10] + v10 * *((unsigned int *)SharedWorkingSetList + 8));
          if ( (v11 & 0x800000000000LL) != 0 )
            v12 = v11 | 0xFFFF000000000000uLL;
          else
            v12 = v11 & 0xFFFFFFFFFFFFLL;
          v13 = MI_READ_PTE_LOCK_FREE(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          MiClearPteAccessed(a1, 48 * (v13 >> 12), v15, v14, (__int64)&v16, dword_1403271C8);
        }
      }
      MiFlushTbList(&v16);
    }
  }
}
