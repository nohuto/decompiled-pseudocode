/*
 * XREFs of RtlRbInsertNodeEx @ 0x180031350
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x18002A520 (RtlpHpVsChunkSplit.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x180031CD4 (LdrpInsertModuleToIndexLockHeld.c)
 *     EtwpInsertRegistration @ 0x180054648 (EtwpInsertRegistration.c)
 *     RtlpHpSegPageRangeShrink @ 0x180058A98 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeAllocate @ 0x180058BE4 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegHeapCreate @ 0x1800598B0 (RtlpHpSegHeapCreate.c)
 *     RtlpHpLargeAlloc @ 0x18005A614 (RtlpHpLargeAlloc.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlRbInsertNodeEx(unsigned __int64 *a1, unsigned __int64 a2, bool a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // rcx
  BOOL v6; // r11d
  __int64 v7; // rax
  _BOOL8 v8; // r11
  _BOOL8 v9; // rbx
  __int64 v10; // r11
  unsigned __int64 v11; // rax
  __int64 v12; // r9
  _BOOL8 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // rbx

  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  if ( a2 )
  {
    *(_QWORD *)(a2 + 8LL * a3) = a4;
    *(_QWORD *)(a4 + 16) = a2 | 1;
    if ( !a3 && a2 == a1[1] )
      a1[1] = a4;
    while ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
    {
      v5 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v6 = *(_QWORD *)v5 != a2;
      v7 = *(_QWORD *)(v5 + 8LL * (*(_QWORD *)v5 == a2));
      if ( !v7 || (*(_BYTE *)(v7 + 16) & 1) == 0 )
      {
        if ( a3 != v6 )
        {
          if ( (*(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
            __fastfail(0x1Du);
          v13 = *(_QWORD *)v5 == a2;
          if ( *(_QWORD *)(a2 + 8 * v13) != a4 )
            __fastfail(0x1Du);
          if ( *(_QWORD *)(v5 + 8LL * (*(_QWORD *)v5 != a2)) != a2 )
            __fastfail(0x1Du);
          *(_QWORD *)(v5 + 8LL * (*(_QWORD *)v5 != a2)) = a4;
          *(_QWORD *)(a4 + 16) &= 3uLL;
          *(_QWORD *)(a4 + 16) |= v5;
          v14 = *(_QWORD *)(a4 + 8LL * v6);
          if ( v14 )
          {
            v16 = *(_QWORD *)(v14 + 16);
            if ( (v16 & 0xFFFFFFFFFFFFFFFCuLL) != a4 )
              __fastfail(0x1Du);
            *(_QWORD *)(v14 + 16) = a2 | v16 & 3;
          }
          *(_QWORD *)(a2 + 8 * v13) = v14;
          *(_QWORD *)(a4 + 8LL * v6) = a2;
          *(_QWORD *)(a2 + 16) &= 3uLL;
          *(_QWORD *)(a2 + 16) |= a4;
          a2 = a4;
        }
        v8 = !v6;
        if ( (*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v5 )
          __fastfail(0x1Du);
        v9 = v8;
        v10 = !v8;
        if ( *(_QWORD *)(v5 + 8 * v10) != a2 )
          __fastfail(0x1Du);
        v11 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v11 )
        {
          if ( *(_QWORD *)(v11 + 8) == v5 )
          {
            *(_QWORD *)(v11 + 8) = a2;
          }
          else
          {
            if ( *(_QWORD *)v11 != v5 )
              __fastfail(0x1Du);
            *(_QWORD *)v11 = a2;
          }
        }
        else
        {
          if ( *a1 != v5 )
            __fastfail(0x1Du);
          *a1 = a2;
        }
        *(_QWORD *)(a2 + 16) &= 3uLL;
        *(_QWORD *)(a2 + 16) |= v11;
        v12 = *(_QWORD *)(a2 + 8 * v9);
        if ( v12 )
        {
          v15 = *(_QWORD *)(v12 + 16);
          if ( (v15 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
            __fastfail(0x1Du);
          *(_QWORD *)(v12 + 16) = v5 | v15 & 3;
        }
        *(_QWORD *)(v5 + 8 * v10) = v12;
        *(_QWORD *)(a2 + 8 * v9) = v5;
        *(_QWORD *)(v5 + 16) &= 3uLL;
        *(_QWORD *)(v5 + 16) |= a2;
        *(_BYTE *)(v5 + 16) |= 1u;
        *(_BYTE *)(a2 + 16) &= ~1u;
        return;
      }
      *(_BYTE *)(a2 + 16) &= ~1u;
      a4 = v5;
      *(_BYTE *)(v7 + 16) &= ~1u;
      a2 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !a2 )
        return;
      *(_BYTE *)(v5 + 16) |= 1u;
      a3 = v5 != *(_QWORD *)a2;
    }
  }
  else
  {
    *a1 = a4;
    a1[1] = a4;
    *(_QWORD *)(a4 + 16) = 0LL;
  }
}
