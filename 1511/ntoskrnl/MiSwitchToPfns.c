/*
 * XREFs of MiSwitchToPfns @ 0x140746514
 * Callers:
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 * Callees:
 *     KeFlushTb @ 0x1400078BC (KeFlushTb.c)
 *     MiPageToNode @ 0x140071380 (MiPageToNode.c)
 *     MiPageToChannel @ 0x1400C05B0 (MiPageToChannel.c)
 *     MiInitializeLargePageNodeLists @ 0x140131F70 (MiInitializeLargePageNodeLists.c)
 *     RtlCompareMemoryUlong @ 0x14015C040 (RtlCompareMemoryUlong.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiInitializeUnusablePfn @ 0x14074676C (MiInitializeUnusablePfn.c)
 *     MiCreateFreePfns @ 0x1407468E4 (MiCreateFreePfns.c)
 */

__int64 __fastcall MiSwitchToPfns(__int64 a1)
{
  __int64 **v1; // rbp
  ULONG_PTR v3; // rdi
  __int64 *v4; // rdi
  __int64 *v5; // rsi
  unsigned __int64 v6; // r14
  __int64 v7; // r12
  int v8; // eax
  ULONG_PTR v9; // r15
  __int64 v10; // rcx
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  _QWORD *v13; // r13
  __int64 v14; // rcx
  __int64 v16; // [rsp+70h] [rbp+70h] BYREF

  v1 = (__int64 **)((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFC0uLL);
  v3 = MmPfnDatabase + 48 * qword_140301380;
  if ( !qword_140301380 && !*(_WORD *)(v3 + 32) )
  {
    *(_WORD *)(v3 + 32) = 0;
    *(_QWORD *)(v3 + 40) &= 0xFFFFFFF000000000uLL;
    *(_QWORD *)(v3 + 8) = 0xFFFFF68000000000uLL;
    *(_QWORD *)(v3 + 24) = *(_QWORD *)(v3 + 24) & 0xC000000000000000uLL | 1;
    *(_BYTE *)(v3 + 34) = *(_BYTE *)(v3 + 34) & 0x38 | 0x45;
    *(_QWORD *)(v3 + 40) = *(_QWORD *)(v3 + 40) & 0x3FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)MiPageToNode(0LL, 0) << 58);
    *(_QWORD *)(v3 + 40) = *(_QWORD *)(v3 + 40) & 0xFFFFFFCFFFFFFFFFuLL | ((MiPageToChannel(0LL) & 3) << 36) | 0x20000000000000LL;
  }
  MiInitializeLargePageNodeLists((__int64)MiSystemPartition);
  v4 = (__int64 *)(a1 + 32);
  v5 = *(__int64 **)(a1 + 32);
  *v1 = v4;
  while ( v5 != v4 )
  {
    v6 = *((int *)v5 + 4);
    v7 = v5[4];
    if ( (unsigned int)v6 <= 0x18 )
    {
      v8 = 16777524;
      if ( _bittest(&v8, v6) )
      {
        MiCreateFreePfns(v5);
        goto LABEL_31;
      }
    }
    v9 = v5[3];
    if ( !v9 )
    {
      if ( !--v7 )
        goto LABEL_31;
      v9 = 1LL;
    }
    if ( (unsigned int)v6 <= 0x20 )
    {
      v10 = 0x1C0800040LL;
      if ( _bittest64(&v10, v6) )
        goto LABEL_27;
    }
    if ( (_DWORD)v6 != 3 )
    {
      if ( (_DWORD)v6 != 22 )
      {
        v11 = (_QWORD *)(48 * v9 - 0x58000000000LL);
        if ( v7 )
        {
          while ( RtlCompareMemoryUlong(v11, 0x30uLL, 0) != 48 )
          {
            if ( (_DWORD)v6 == 29 )
            {
              v13 = (_QWORD *)v11[1];
              if ( v13 )
              {
                v14 = v11[1];
                *v13 = 0LL;
                if ( MiPteInShadowRange(v14) )
                  MiWritePteShadow((__int64)v13, 0LL);
                v11[1] = 0LL;
              }
              v12 = 29LL;
              goto LABEL_24;
            }
LABEL_25:
            v11 += 6;
            if ( !--v7 )
              goto LABEL_26;
          }
          v12 = (unsigned int)v6;
LABEL_24:
          MiInitializeUnusablePfn(v11, v12);
          goto LABEL_25;
        }
LABEL_26:
        v4 = *v1;
      }
LABEL_27:
      if ( (_DWORD)v6 != 3 )
        goto LABEL_31;
    }
    if ( v9 <= BugCheckParameter3 && v9 + v7 > BugCheckParameter3 + 1 )
      v5[4] = (unsigned int)(BugCheckParameter3 - v9 + 1);
LABEL_31:
    v5 = (__int64 *)*v5;
  }
  return KeFlushTb(3u, 2u);
}
