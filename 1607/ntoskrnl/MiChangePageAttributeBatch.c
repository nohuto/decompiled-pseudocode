/*
 * XREFs of MiChangePageAttributeBatch @ 0x14001D1C0
 * Callers:
 *     MiGetPageChain @ 0x14003D000 (MiGetPageChain.c)
 *     MiConvertContiguousPages @ 0x140104754 (MiConvertContiguousPages.c)
 *     MiInitializeMdlPages @ 0x14010480C (MiInitializeMdlPages.c)
 *     MiSwitchToTransition @ 0x1401E8974 (MiSwitchToTransition.c)
 *     MiPerformFinalZeroing @ 0x1401F2C6C (MiPerformFinalZeroing.c)
 *     MiZeroAndConvertLargePage @ 0x1401FC2F8 (MiZeroAndConvertLargePage.c)
 * Callees:
 *     MiAbortCombineScan @ 0x14001D390 (MiAbortCombineScan.c)
 *     MiFlushCacheForAttributeChange @ 0x14001D474 (MiFlushCacheForAttributeChange.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14001D918 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     KeInvalidateAllCaches @ 0x1400B3758 (KeInvalidateAllCaches.c)
 */

void __fastcall MiChangePageAttributeBatch(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // r15
  unsigned __int8 v5; // r13
  int v6; // ebp
  unsigned int v7; // edi
  int v8; // esi
  __int64 v9; // rbx
  int v10; // edx
  __int64 v11; // rbx
  unsigned int v12; // ecx
  char v13; // al
  unsigned int v14; // ecx
  __int64 *v15; // rcx
  int v16; // [rsp+60h] [rbp+8h]

  if ( a1 )
  {
    v4 = a1;
    v5 = 17;
    v6 = 0;
    do
    {
      v16 = 0;
      v7 = 0;
      v8 = 1;
      v9 = v4;
      do
      {
        if ( v7 >= 0x1000 )
          break;
        if ( v7 )
        {
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
            break;
        }
        else
        {
          v5 = MiLockPageInline(v9);
        }
        if ( (*(_BYTE *)(v9 + 34) & 0xC0) != 0xC0 )
          v8 = 0;
        MiAbortCombineScan(v9);
        v9 = *(_QWORD *)(v9 + 16);
        ++v7;
      }
      while ( v9 );
      if ( v8 || (MiFlushEntireTbDueToAttributeChange(), v7 < dword_140326A54) || a2 == 1 )
      {
        v10 = 0;
      }
      else
      {
        ++dword_140326A4C;
        KeInvalidateAllCaches();
        v10 = 1;
        v16 = 1;
      }
      v11 = v4;
      do
      {
        v12 = *(unsigned __int8 *)(v11 + 34);
        v13 = ((_BYTE)a2 << 6) | v12 & 0x3F;
        v14 = v12 >> 6;
        *(_BYTE *)(v11 + 34) = v13;
        if ( !v10 && !v8 && a2 != 1 && v14 != a2 && v14 == 1 )
        {
          ++dword_140326A50;
          MiFlushCacheForAttributeChange((v11 + 0x58000000000LL) / 48, 1LL, a2);
          v10 = v16;
        }
        v15 = (__int64 *)(v11 + 16);
        *(_QWORD *)(v11 + 24) &= 0xF0FFFFFFFFFFFFFFuLL;
        ++v6;
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v6 == v7 )
        {
          __writecr8(v5);
          v4 = *v15;
          v11 = 0LL;
        }
        else
        {
          v11 = *v15;
        }
        if ( a3 != -1 )
          *v15 = a3;
      }
      while ( v11 );
      v6 = 0;
    }
    while ( v4 );
  }
}
