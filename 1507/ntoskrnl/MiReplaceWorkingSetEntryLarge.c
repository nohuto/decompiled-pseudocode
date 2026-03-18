/*
 * XREFs of MiReplaceWorkingSetEntryLarge @ 0x140080B2C
 * Callers:
 *     MiAllocateWsle @ 0x1400BE0E0 (MiAllocateWsle.c)
 *     MiReplaceWorkingSetEntryIfNecessary @ 0x14021AEB8 (MiReplaceWorkingSetEntryIfNecessary.c)
 * Callees:
 *     MiTbFlushType @ 0x14003C144 (MiTbFlushType.c)
 *     MiUpdateWorkingSetAgeDistribution @ 0x1400808F0 (MiUpdateWorkingSetAgeDistribution.c)
 *     MiSetWsleAge @ 0x14008090C (MiSetWsleAge.c)
 *     MiRotateHeadWsle @ 0x140081B34 (MiRotateHeadWsle.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiClearPteAccessed @ 0x1400ADE80 (MiClearPteAccessed.c)
 *     MiTrimSingleWsle @ 0x140122378 (MiTrimSingleWsle.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiReplaceWorkingSetEntrySmall @ 0x14021AF0C (MiReplaceWorkingSetEntrySmall.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiReplaceWorkingSetEntryLarge(__int64 a1, int a2)
{
  __int64 v2; // rsi
  bool v4; // zf
  int v6; // eax
  __int64 v7; // r14
  unsigned __int64 v8; // rcx
  unsigned int v9; // r13d
  __int64 v10; // r11
  unsigned int v11; // ebx
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 *v15; // r14
  __int64 v16; // r10
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rdx
  unsigned __int8 v20; // r9
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned __int64 v23; // r8
  unsigned __int8 v24; // r9
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // eax
  unsigned __int64 v29; // [rsp+38h] [rbp-D0h]
  __int64 v30; // [rsp+40h] [rbp-C8h]
  __int64 v31; // [rsp+48h] [rbp-C0h]
  int v33; // [rsp+54h] [rbp-B4h]
  unsigned __int64 v34; // [rsp+58h] [rbp-B0h] BYREF
  int v35; // [rsp+68h] [rbp-A0h] BYREF
  int v36; // [rsp+6Ch] [rbp-9Ch]
  __int64 v37; // [rsp+70h] [rbp-98h]
  __int64 v38; // [rsp+78h] [rbp-90h]
  __int64 v39; // [rsp+80h] [rbp-88h]
  char v40; // [rsp+128h] [rbp+20h]
  int v41; // [rsp+129h] [rbp+21h]
  __int16 v42; // [rsp+12Dh] [rbp+25h]
  char v43; // [rsp+12Fh] [rbp+27h]

  v2 = *(_QWORD *)(a1 + 184);
  v40 = 0;
  v41 = 0;
  v4 = *(_DWORD *)(v2 + 64) == 16;
  v42 = 0;
  v43 = 0;
  if ( !v4 )
    return MiReplaceWorkingSetEntrySmall();
  v6 = MiTbFlushType(a1);
  v33 = v6;
  v7 = 0LL;
  while ( 2 )
  {
    v31 = v7;
    v8 = 0LL;
    v35 = v6;
    v9 = 7;
    v38 = 0LL;
    v10 = 0xFFFFFFFFFLL;
    v39 = 0LL;
    LOWORD(v36) = 0;
    v11 = 15;
    v37 = 20LL;
    v12 = *(_QWORD *)(v2 + 232);
    v30 = 0xFFFFFFFFFLL;
LABEL_5:
    v29 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v12 )
        {
          v13 = MiRotateHeadWsle(v2, v11, 0x90482413000LL);
          v10 = v30;
          v8 = v29;
          --v12;
          v14 = v13;
        }
        else
        {
          v14 = 0xFFFFFFFFFLL;
        }
        if ( v14 == 0xFFFFFFFFFLL )
          break;
        v15 = (__int64 *)(*(_QWORD *)(v2 + 496) + v14 * *(unsigned int *)(v2 + 64));
        v16 = *v15;
        if ( (*v15 & 0x800000000000LL) != 0 )
          v17 = v16 | 0xFFFF000000000000uLL;
        else
          v17 = v16 & 0xFFFFFFFFFFFFLL;
        v18 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v19 = *(_QWORD *)v18;
        if ( v18 + 0x90482413000LL <= 0x7F8
          && (unsigned int)MiPteHasShadow(v8, v19)
          && ((unsigned __int8)v19 & v20) != 0
          && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
        {
          v21 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v21 )
          {
            v22 = *(_QWORD *)(v21 + 8 * ((v18 >> 3) & 0x1FF));
            if ( (v22 & 0x20) != 0 )
              v19 |= 0x20uLL;
            if ( (v22 & 0x42) != 0 )
              v19 |= 0x42uLL;
          }
        }
        v34 = v19;
        v23 = v19;
        if ( (unsigned __int64)&STACK[0x90482413058] <= 0x7F8
          && (unsigned int)MiPteHasShadow(0x90482413000LL, v19)
          && ((unsigned __int8)v19 & v24) != 0
          && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
        {
          v25 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v25 )
          {
            v26 = *(_QWORD *)(v25 + 8 * (((unsigned __int64)&v34 >> 3) & 0x1FF));
            if ( (v26 & 0x20) != 0 )
              v23 |= 0x20uLL;
            if ( (v26 & 0x42) != 0 )
              v23 |= 0x42uLL;
          }
        }
        v27 = 48 * ((v23 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        if ( v31 || (v19 & 0x20) == 0 )
        {
          MiFlushTbList(&v35);
          v28 = MiTrimSingleWsle(a1, v14);
          v10 = v30;
          v7 = v31;
          v8 = v29;
          if ( v28 == 1 )
          {
            if ( !v31 )
              return MiFlushTbList(&v35);
            v7 = v31 - 1;
            v31 = v7;
            if ( !v7 )
              return MiFlushTbList(&v35);
          }
        }
        else
        {
          if ( v9 - 1 > 5 )
          {
            if ( ((*(_QWORD *)(v27 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1
               || (*(_QWORD *)(v27 + 40) & 0x200000000000000LL) != 0)
              && ((*(_BYTE *)(a1 + 216) & 7) == 0 || *(_WORD *)(v27 + 32) <= 1u) )
            {
              ++v29;
              if ( v10 == 0xFFFFFFFFFLL )
                v10 = v14;
              v30 = v10;
            }
            MiClearPteAccessed(a1, 48 * (v23 >> 12), v18, (_DWORD)v15, (__int64)&v35, 0);
          }
          else
          {
            MiUpdateWorkingSetAgeDistribution(a1, v9, -1LL);
            MiSetWsleAge(v2, v15, 0);
          }
          v10 = v30;
          v7 = 0LL;
          v8 = v29;
        }
      }
      if ( !*(&v40 + v9) && v8 > 6 && (!a2 || (v11 & 1) == 0) )
      {
        *(&v40 + v9) = 1;
        if ( !v9 )
        {
          v9 = 1;
          v11 = 3;
        }
        if ( v10 != 0xFFFFFFFFFLL )
        {
          MiFlushTbList(&v35);
          if ( (unsigned int)MiTrimSingleWsle(a1, v30) == 1 )
            return MiFlushTbList(&v35);
          v10 = 0xFFFFFFFFFLL;
          v30 = 0xFFFFFFFFFLL;
        }
        v8 = 0LL;
        v12 = *(_QWORD *)(v2 + 8LL * v11 + 112);
        goto LABEL_5;
      }
      MiRotateHeadWsle(v2, v11, 0x90482413000LL);
      if ( !v11 )
        break;
      if ( !a2 && (v11 & 1) != 0 )
        v11 &= ~1u;
      if ( !v11 )
        break;
      if ( (v11 & 1) != 0 )
      {
        v10 = v30;
        v8 = v29;
      }
      else
      {
        --v9;
        v30 = 0xFFFFFFFFFLL;
        v8 = 0LL;
        v10 = 0xFFFFFFFFFLL;
        v29 = 0LL;
      }
      v12 = *(_QWORD *)(v2 + 8LL * --v11 + 112);
    }
    if ( !a2 && !v7 )
    {
      MiFlushTbList(&v35);
      v6 = v33;
      v7 = 6LL;
      continue;
    }
    return MiFlushTbList(&v35);
  }
}
