/*
 * XREFs of MiMarkLargeNonPagedPool @ 0x1407D4E88
 * Callers:
 *     MiUpdatePoolLargePages @ 0x1407D4E20 (MiUpdatePoolLargePages.c)
 *     MiMarkLargeNonPagedPool @ 0x1407D4E88 (MiMarkLargeNonPagedPool.c)
 * Callees:
 *     RtlSetBitsEx @ 0x1400653BC (RtlSetBitsEx.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiMarkLargeNonPagedPool @ 0x1407D4E88 (MiMarkLargeNonPagedPool.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall MiMarkLargeNonPagedPool(unsigned __int64 *a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 *v3; // rbx
  unsigned __int64 PteShadow; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned __int64)a1 <= a2 )
  {
    v3 = a1;
    do
    {
      PteShadow = *v3;
      if ( (unsigned __int64)(v3 + 0x12090482600LL) <= 0x7F8
        && (unsigned int)MiPteHasShadow()
        && (PteShadow & 1) != 0
        && ((PteShadow & 0x20) == 0 || (PteShadow & 0x42) == 0) )
      {
        v7 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v7 )
        {
          v8 = *(_QWORD *)(v7 + 8 * (((unsigned __int64)v3 >> 3) & 0x1FF));
          if ( (v8 & 0x20) != 0 )
            PteShadow |= 0x20uLL;
          if ( (v8 & 0x42) != 0 )
            PteShadow |= 0x42uLL;
        }
      }
      v9 = PteShadow;
      if ( (PteShadow & 1) != 0 && v3 != (unsigned __int64 *)0xFFFFF6FB7DBEDF68LL )
      {
        if ( a3 == 1 )
        {
          if ( (PteShadow & 0x80u) != 0LL )
          {
            if ( (unsigned __int64)&STACK[0x90482413030] <= 0x7F8 )
              PteShadow = MiReadPteShadow((__int64)&v9, PteShadow);
            RtlSetBitsEx((__int64)&qword_14034FBA0, (PteShadow >> 21) & 0x7FFFFFF, 1uLL);
          }
        }
        else if ( a3 > 1 )
        {
          MiMarkLargeNonPagedPool((__int64)((_QWORD)v3 << 25) >> 16, ((__int64)((_QWORD)v3 << 25) >> 16) + 4088);
        }
      }
      ++v3;
    }
    while ( (unsigned __int64)v3 <= a2 );
  }
}
