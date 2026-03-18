/*
 * XREFs of MiSimpleAging @ 0x1401271B8
 * Callers:
 *     MiAllocateWsle @ 0x1400BE0E0 (MiAllocateWsle.c)
 *     MiReplaceWorkingSetEntryIfNecessary @ 0x14021AEB8 (MiReplaceWorkingSetEntryIfNecessary.c)
 * Callees:
 *     MiTbFlushType @ 0x14003C144 (MiTbFlushType.c)
 *     MiRotateHeadWsle @ 0x140081B34 (MiRotateHeadWsle.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiClearPteAccessed @ 0x1400ADE80 (MiClearPteAccessed.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

void __fastcall MiSimpleAging(__int64 a1)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  __int64 v5; // r9
  __int64 v6; // rbx
  unsigned int v7; // ebp
  __int64 v8; // rax
  unsigned __int64 *v9; // r9
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r10
  __int64 *v12; // r10
  unsigned __int64 PteShadow; // rax
  int v14; // [rsp+30h] [rbp-E8h] BYREF
  __int16 v15; // [rsp+34h] [rbp-E4h]
  int v16; // [rsp+38h] [rbp-E0h]
  int v17; // [rsp+3Ch] [rbp-DCh]
  __int64 v18; // [rsp+40h] [rbp-D8h]
  __int64 v19; // [rsp+48h] [rbp-D0h]

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
      v17 = 0;
      v18 = 0LL;
      v7 = 1;
      v19 = 0LL;
      v14 = MiTbFlushType(a1);
      v15 = 0;
      v16 = 20;
      while ( v6 )
      {
        v8 = MiRotateHeadWsle(v3, v7);
        if ( v8 == 0xFFFFFFFFFLL )
        {
          if ( !v7 )
            break;
          --v7;
        }
        else
        {
          --v6;
          v9 = (unsigned __int64 *)(*(_QWORD *)(v3 + 496) + v8 * *(unsigned int *)(v3 + 64));
          v10 = *v9;
          if ( (*v9 & 0x800000000000LL) != 0 )
            v11 = v10 | 0xFFFF000000000000uLL;
          else
            v11 = v10 & 0xFFFFFFFFFFFFLL;
          v12 = (__int64 *)(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          PteShadow = *v12;
          if ( (unsigned __int64)(v12 + 0x12090482600LL) <= 0x7F8 )
            PteShadow = MiReadPteShadow(v12, *v12);
          MiClearPteAccessed(
            a1,
            48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL,
            v12,
            v9,
            (__int64)&v14,
            dword_14034F248);
        }
      }
      MiFlushTbList((__int64)&v14);
    }
  }
}
