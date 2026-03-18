/*
 * XREFs of MiSimpleAging @ 0x1400EB918
 * Callers:
 *     MiAllocateWsle @ 0x140055ED0 (MiAllocateWsle.c)
 *     MiReplaceWorkingSetEntryIfNecessary @ 0x1401D80D8 (MiReplaceWorkingSetEntryIfNecessary.c)
 * Callees:
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiTbFlushType @ 0x1400A086C (MiTbFlushType.c)
 *     MiRotateHeadWsle @ 0x1400B6674 (MiRotateHeadWsle.c)
 *     MiClearPteAccessed @ 0x1400B72A0 (MiClearPteAccessed.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiSimpleAging(__int64 a1)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rbp
  unsigned __int64 v4; // rbx
  __int64 v5; // r9
  __int64 v6; // rbx
  unsigned int v7; // r15d
  _KPROCESS *v8; // rdx
  __int64 v9; // rax
  _DWORD *v10; // r14
  __int64 v11; // rdi
  unsigned __int64 v12; // rdi
  unsigned __int64 *v13; // rdi
  unsigned __int64 v14; // rax
  int v15; // [rsp+30h] [rbp-F8h] BYREF
  __int16 v16; // [rsp+34h] [rbp-F4h]
  int v17; // [rsp+38h] [rbp-F0h]
  int v18; // [rsp+3Ch] [rbp-ECh]
  __int64 v19; // [rsp+40h] [rbp-E8h]
  __int64 v20; // [rsp+48h] [rbp-E0h]

  v2 = *(_QWORD *)(a1 + 120);
  if ( (*(_BYTE *)(a1 + 216) & 0x40) != 0
    && v2 >= (((*(unsigned __int64 *)(a1 + 136) * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFFCuLL) )
  {
    v3 = *(_QWORD *)(a1 + 184);
    v4 = *(_QWORD *)(v3 + 112) + *(_QWORD *)(v3 + 120);
    v5 = *(_QWORD *)(v3 + 8);
    if ( v5 + v4 >= (((v2 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFFCuLL)
      && v2 - v5 - v4 < 0x400 )
    {
      if ( v4 > 0x100 )
        v6 = v4 >> 5;
      else
        v6 = 8LL;
      v18 = 0;
      v19 = 0LL;
      v7 = 1;
      v20 = 0LL;
      v15 = MiTbFlushType(a1);
      v16 = 0;
      v17 = 20;
      while ( v6 )
      {
        v9 = MiRotateHeadWsle(v3, v7);
        if ( v9 == 0xFFFFFFFFFLL )
        {
          if ( !v7 )
            break;
          --v7;
        }
        else
        {
          --v6;
          v10 = (_DWORD *)(*(_QWORD *)(v3 + 496) + v9 * *(unsigned int *)(v3 + 64));
          v11 = *(_QWORD *)v10;
          if ( (*(_QWORD *)v10 & 0x800000000000LL) != 0 )
            v12 = v11 | 0xFFFF000000000000uLL;
          else
            v12 = v11 & 0xFFFFFFFFFFFFLL;
          v13 = (unsigned __int64 *)(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          v14 = MI_READ_PTE_LOCK_FREE(v13);
          MiClearPteAccessed(
            a1,
            48 * ((v14 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL,
            v13,
            v10,
            (__int64)&v15,
            dword_1402FED88);
        }
      }
      MiFlushTbList((__int64)&v15, v8);
    }
  }
}
