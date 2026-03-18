/*
 * XREFs of MxFillPhysicalPage @ 0x1407C76BC
 * Callers:
 *     MiInitializeSystemPageTable @ 0x14006A1F8 (MiInitializeSystemPageTable.c)
 *     MiZeroPfn @ 0x140156414 (MiZeroPfn.c)
 *     MxMapVa @ 0x1407C5B80 (MxMapVa.c)
 *     MiInitializeDummyPages @ 0x1407C6220 (MiInitializeDummyPages.c)
 * Callees:
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x140186BF0 (KeZeroPages.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MxGetPhase0Mapping @ 0x1407C78D0 (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MxFillPhysicalPage(ULONG_PTR BugCheckParameter2, unsigned __int64 a2)
{
  unsigned __int64 Phase0Mapping; // rax
  void *v5; // rsi
  unsigned __int64 *v6; // rbx
  ULONG_PTR v7; // rdi
  unsigned __int64 v8; // rdx

  Phase0Mapping = MxGetPhase0Mapping();
  v5 = (void *)Phase0Mapping;
  if ( !Phase0Mapping )
    KeBugCheckEx(0x1Au, 0x3030305uLL, BugCheckParameter2, 0LL, 0LL);
  v6 = (unsigned __int64 *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v7 = qword_1403D0230 ^ (qword_1403D0230 ^ (BugCheckParameter2 << 12)) & 0xFFFFFFFFF000LL | 0x21;
  if ( (unsigned __int64)(v6 + 0x12098000000LL) <= 0x3FFFFFFF )
    v7 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
  if ( (unsigned __int64)v6 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && (unsigned __int64)v6 >= 0xFFFFF68000000000uLL
    || (unsigned __int64)v6 >= 0xFFFFF6FB40000000uLL
    && (unsigned __int64)v6 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
    || (unsigned __int64)v6 >= 0xFFFFF6FB7DA00000uLL
    && (unsigned __int64)v6 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
    || (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v6 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
  {
    v7 |= 4uLL;
  }
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL((unsigned __int64)v6) )
    v7 |= 0x100uLL;
  v8 = v7 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8) | 0x42;
  *v6 = v8;
  if ( (unsigned __int64)(v6 + 0x12090482600LL) <= 0x7F8 )
    MiWritePteShadow((__int64)v6, v8);
  if ( a2 )
    memset64(v5, a2, 0x200uLL);
  else
    KeZeroPages((int *)v5, 0x1000uLL);
  *v6 = 0LL;
  if ( (unsigned __int64)(v6 + 0x12090482600LL) <= 0x7F8 )
    MiWritePteShadow((__int64)v6, 0LL);
  return KeFlushSingleTb((unsigned __int64)v5, 0, 1);
}
