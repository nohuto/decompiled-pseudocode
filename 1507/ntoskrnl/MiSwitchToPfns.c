/*
 * XREFs of MiSwitchToPfns @ 0x1407C4AD4
 * Callers:
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 * Callees:
 *     KeFlushTb @ 0x140042090 (KeFlushTb.c)
 *     MiPageToNode @ 0x14005AA30 (MiPageToNode.c)
 *     MiPageToChannel @ 0x1400FFFF0 (MiPageToChannel.c)
 *     MiInitializeLargePageNodeLists @ 0x14015F898 (MiInitializeLargePageNodeLists.c)
 *     RtlCompareMemoryUlong @ 0x14018BB20 (RtlCompareMemoryUlong.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiInitializeUnusablePfn @ 0x1407C4D2C (MiInitializeUnusablePfn.c)
 *     MiCreateFreePfns @ 0x1407C4F18 (MiCreateFreePfns.c)
 */

__int64 __fastcall MiSwitchToPfns(__int64 a1)
{
  ULONG_PTR v2; // rdi
  __int64 **v3; // r13
  __int64 **i; // rsi
  unsigned __int64 v5; // r14
  __int64 *v6; // r12
  int v7; // eax
  ULONG_PTR v8; // r15
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  _QWORD *v12; // rcx

  v2 = MmPfnDatabase + 48 * qword_1403551C0;
  if ( !qword_1403551C0 && !*(_WORD *)(v2 + 32) )
  {
    *(_WORD *)(v2 + 32) = 0;
    *(_QWORD *)(v2 + 40) &= 0xFFFFFFF000000000uLL;
    *(_QWORD *)(v2 + 8) = 0xFFFFF68000000000uLL;
    *(_QWORD *)(v2 + 24) = *(_QWORD *)(v2 + 24) & 0xC000000000000000uLL | 1;
    *(_BYTE *)(v2 + 34) = *(_BYTE *)(v2 + 34) & 0x38 | 0x45;
    *(_QWORD *)(v2 + 40) = *(_QWORD *)(v2 + 40) & 0x3FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)MiPageToNode(0LL, 0) << 58);
    *(_QWORD *)(v2 + 40) = *(_QWORD *)(v2 + 40) & 0xFFFFFFCFFFFFFFFFuLL | ((MiPageToChannel(0LL) & 3) << 36) | 0x20000000000000LL;
  }
  MiInitializeLargePageNodeLists((__int64)MiSystemPartition);
  v3 = (__int64 **)(a1 + 32);
  for ( i = (__int64 **)*v3; i != v3; i = (__int64 **)*i )
  {
    v5 = *((int *)i + 4);
    v6 = i[4];
    if ( (unsigned int)v5 <= 0x18 )
    {
      v7 = 16777524;
      if ( _bittest(&v7, v5) )
      {
        MiCreateFreePfns(i);
        continue;
      }
    }
    v8 = (ULONG_PTR)i[3];
    if ( !v8 )
    {
      v6 = (__int64 *)((char *)v6 - 1);
      if ( !v6 )
        continue;
      v8 = 1LL;
    }
    if ( (unsigned int)v5 <= 0x20 )
    {
      v9 = 0x1C0800040LL;
      if ( _bittest64(&v9, v5) )
        goto LABEL_26;
    }
    if ( (_DWORD)v5 != 3 )
    {
      if ( (_DWORD)v5 != 22 )
      {
        v10 = (_QWORD *)(48 * v8 - 0x58000000000LL);
        if ( v6 )
        {
          while ( RtlCompareMemoryUlong(v10, 0x30uLL, 0) != 48 )
          {
            if ( (_DWORD)v5 == 29 )
            {
              v12 = (_QWORD *)v10[1];
              if ( v12 )
              {
                *v12 = 0LL;
                if ( (unsigned __int64)(v12 + 0x12090482600LL) <= 0x7F8 )
                  MiWritePteShadow((__int64)v12, 0LL);
                v10[1] = 0LL;
              }
              v11 = 29LL;
              goto LABEL_24;
            }
LABEL_25:
            v10 += 6;
            v6 = (__int64 *)((char *)v6 - 1);
            if ( !v6 )
              goto LABEL_26;
          }
          v11 = (unsigned int)v5;
LABEL_24:
          MiInitializeUnusablePfn(v10, v11);
          goto LABEL_25;
        }
      }
LABEL_26:
      if ( (_DWORD)v5 != 3 )
        continue;
    }
    if ( v8 <= BugCheckParameter3 && (unsigned __int64)v6 + v8 > BugCheckParameter3 + 1 )
      i[4] = (__int64 *)(unsigned int)(BugCheckParameter3 - v8 + 1);
  }
  return KeFlushTb(3, 2);
}
