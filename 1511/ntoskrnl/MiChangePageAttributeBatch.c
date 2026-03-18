/*
 * XREFs of MiChangePageAttributeBatch @ 0x1400A9630
 * Callers:
 *     MiZeroFault @ 0x14004D290 (MiZeroFault.c)
 *     MiResolveDemandZeroFault @ 0x140052430 (MiResolveDemandZeroFault.c)
 *     MiInitializeMdlPages @ 0x1400BCA18 (MiInitializeMdlPages.c)
 *     MiConvertContiguousPages @ 0x1400BFF60 (MiConvertContiguousPages.c)
 *     MiSwitchToTransition @ 0x1401D6E6C (MiSwitchToTransition.c)
 * Callees:
 *     KeFlushTb @ 0x1400078BC (KeFlushTb.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiAbortCombineScan @ 0x1400A980C (MiAbortCombineScan.c)
 *     MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE @ 0x1400A9904 (MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE.c)
 *     HvlFlushTbAllPartitions @ 0x1400E8120 (HvlFlushTbAllPartitions.c)
 *     KeInvalidateAllCaches @ 0x1400F3D78 (KeInvalidateAllCaches.c)
 */

void __fastcall MiChangePageAttributeBatch(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  _QWORD *v4; // r15
  unsigned int v5; // edi
  int v6; // r13d
  __int64 v7; // rbx
  int v8; // r14d
  int v9; // esi
  _QWORD *v10; // rbx
  unsigned int v11; // ecx
  char v12; // al
  unsigned int v13; // ecx
  unsigned __int8 v14; // [rsp+60h] [rbp+8h]

  if ( a1 )
  {
    v3 = a2;
    v4 = a1;
    v14 = 17;
    do
    {
      v5 = 0;
      v6 = 0;
      v7 = (__int64)v4;
      v8 = 1;
      do
      {
        if ( v5 >= 0x1000 )
          break;
        if ( v5 )
        {
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
            break;
        }
        else
        {
          v14 = MiLockPageInline(v7);
        }
        if ( (*(_BYTE *)(v7 + 34) & 0xC0) != 0xC0 )
          v8 = 0;
        MiAbortCombineScan(v7);
        v7 = *(_QWORD *)(v7 + 16);
        ++v5;
      }
      while ( v7 );
      if ( !v8 )
      {
        ++dword_1402FE710;
        HvlFlushTbAllPartitions(a1, a2, a3);
        KeFlushTb(3u, 2u);
        if ( v5 >= dword_1402FE71C && v3 != 1 )
        {
          ++dword_1402FE714;
          KeInvalidateAllCaches();
          v6 = 1;
        }
      }
      v9 = 0;
      v10 = v4;
      do
      {
        v11 = *((unsigned __int8 *)v10 + 34);
        v12 = ((_BYTE)v3 << 6) | v11 & 0x3F;
        v13 = v11 >> 6;
        *((_BYTE *)v10 + 34) = v12;
        if ( !v6 && !v8 && v3 != 1 && v13 == 1 )
        {
          ++dword_1402FE718;
          MI_FLUSH_CACHE_DUE_TO_ATTRIBUTE_CHANGE((__int64)(v10 + 0xB000000000LL) / 48, 1LL, v3);
        }
        a1 = v10 + 2;
        v10[3] &= 0xF0FFFFFFFFFFFFFFuLL;
        ++v9;
        _InterlockedAnd64(v10 + 3, 0x7FFFFFFFFFFFFFFFuLL);
        if ( v9 == v5 )
        {
          __writecr8(v14);
          v4 = (_QWORD *)*a1;
          v10 = 0LL;
        }
        else
        {
          v10 = (_QWORD *)*a1;
        }
        if ( a3 != -1 )
          *a1 = a3;
      }
      while ( v10 );
    }
    while ( v4 );
  }
}
