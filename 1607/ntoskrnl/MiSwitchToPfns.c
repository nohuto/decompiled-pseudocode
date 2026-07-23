/*
 * XREFs of MiSwitchToPfns @ 0x1407965E0
 * Callers:
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     MiPageToChannel @ 0x14001B5C0 (MiPageToChannel.c)
 *     MiPageToNode @ 0x14001B5D4 (MiPageToNode.c)
 *     KeFlushTb @ 0x14001D96C (KeFlushTb.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiInitializeUnusablePfns @ 0x14013B8F0 (MiInitializeUnusablePfns.c)
 *     MiRestrictRangeToNode @ 0x14013BB78 (MiRestrictRangeToNode.c)
 *     RtlCompareMemoryUlong @ 0x140167A50 (RtlCompareMemoryUlong.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiInitializeLargePageNodeLists @ 0x14054FAD8 (MiInitializeLargePageNodeLists.c)
 *     MiCreateFreePfns @ 0x140796948 (MiCreateFreePfns.c)
 */

__int64 __fastcall MiSwitchToPfns(__int64 a1)
{
  __int64 **v1; // rbp
  ULONG_PTR v3; // rsi
  unsigned __int64 v4; // rdi
  __int64 v5; // rcx
  char v6; // al
  __int64 *v7; // rdi
  __int64 *v8; // r14
  unsigned __int64 v9; // rsi
  __int64 v10; // r13
  int v12; // eax
  unsigned __int64 v13; // r12
  __int64 v14; // rcx
  _QWORD *v15; // r15
  unsigned __int128 v16; // rax
  unsigned __int64 v17; // rax
  char v18; // r9
  unsigned __int64 v19; // rdi
  _QWORD *v20; // rcx
  __int64 v21; // rcx
  _BYTE v22[16]; // [rsp+70h] [rbp+70h] BYREF

  v1 = (__int64 **)((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL);
  v3 = MmPfnDatabase + 48 * qword_140324E00;
  if ( !qword_140324E00 && !*(_WORD *)(v3 + 32) )
  {
    v4 = (unsigned __int8)MiLockPageInline(MmPfnDatabase + 48 * qword_140324E00);
    *(_QWORD *)(v3 + 40) &= 0xFFFFFFF000000000uLL;
    v5 = *(_QWORD *)(v3 + 24);
    *(_QWORD *)(v3 + 8) = 0xFFFFF68000000000uLL;
    *(_WORD *)(v3 + 32) = 0;
    v6 = *(_BYTE *)(v3 + 34) & 0xFD;
    *(_QWORD *)(v3 + 24) = v5 & 0xC000000000000000uLL | 1;
    *(_BYTE *)(v3 + 34) = v6 | 5;
    *(_BYTE *)(v3 + 34) = *(_BYTE *)(v3 + 34) & 0x3F | 0x40;
    *(_QWORD *)(v3 + 40) = ((unsigned __int64)(unsigned int)MiPageToNode(0LL, 0) << 58) | *(_QWORD *)(v3 + 40) & 0x3FFFFFFFFFFFFFFLL;
    *(_QWORD *)(v3 + 40) = *(_QWORD *)(v3 + 40) & 0xFFFFFFCFFFFFFFFFuLL | ((MiPageToChannel(0LL) & 3) << 36) | 0x20000000000000LL;
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v4);
  }
  MiInitializeLargePageNodeLists((__int64)MiSystemPartition);
  v7 = (__int64 *)(a1 + 32);
  v8 = *(__int64 **)(a1 + 32);
  *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v7;
  *v1 = v8;
  while ( v8 != v7 )
  {
    v9 = *((int *)v8 + 4);
    v10 = v8[4];
    if ( (v9 & 0x80000000) == 0LL )
    {
      if ( (v9 & 0x40000000) != 0
        || (unsigned int)v9 <= 0x18 && (v12 = 16777524, _bittest(&v12, v9))
        || (_DWORD)v9 == 29 && (MiFlags & 0x2000) == 0 )
      {
        MiCreateFreePfns(v8);
      }
      else
      {
        v13 = v8[3];
        if ( !v13 )
        {
          if ( !--v10 )
            goto LABEL_9;
          v13 = 1LL;
        }
        if ( (unsigned int)v9 > 0x20 || (v14 = 0x1C0800040LL, !_bittest64(&v14, v9)) )
        {
          if ( (_DWORD)v9 == 3 )
            goto LABEL_37;
          if ( (_DWORD)v9 != 22 )
          {
            v15 = (_QWORD *)(48 * v13 - 0x58000000000LL);
            if ( v10 )
            {
              do
              {
                v16 = RtlCompareMemoryUlong(v15, 48 * v10, 0) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
                if ( *((_QWORD *)&v16 + 1) >> 5 )
                {
                  v13 = (__int64)(v15 + 0xB000000000LL) / 48;
                  v17 = MiRestrictRangeToNode(v13, *((_QWORD *)&v16 + 1) >> 5);
                  v18 = 64;
                  v19 = v17;
                  if ( (_DWORD)v9 == 29 )
                    v18 = 0x80;
                  MiInitializeUnusablePfns(v15, v17, 0, v18);
                  v10 -= v19;
                  v15 += 6 * v19;
                }
                else
                {
                  if ( (_DWORD)v9 == 29 )
                  {
                    v20 = (_QWORD *)v15[1];
                    if ( v20 )
                    {
                      *v20 = 0LL;
                      if ( MiPteInShadowRange((unsigned __int64)v20) )
                        MiWritePteShadow(v21, 0LL);
                      v15[1] = 0LL;
                    }
                    MiInitializeUnusablePfns(v15, 1uLL, 0, 128);
                  }
                  v15 += 6;
                  --v10;
                }
              }
              while ( v10 );
              v8 = *v1;
              v7 = *(__int64 **)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
            }
          }
        }
        if ( (_DWORD)v9 == 3 )
        {
LABEL_37:
          if ( v13 <= BugCheckParameter3 && v13 + v10 > BugCheckParameter3 + 1 )
            v8[4] = (unsigned int)(BugCheckParameter3 - v13 + 1);
        }
      }
    }
    else
    {
      *((_DWORD *)v8 + 4) = v9 & 0x7FFFFFFF;
    }
LABEL_9:
    v8 = (__int64 *)*v8;
    *v1 = v8;
  }
  return KeFlushTb(3u, 2u);
}
