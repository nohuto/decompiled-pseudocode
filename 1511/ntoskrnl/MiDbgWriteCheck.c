/*
 * XREFs of MiDbgWriteCheck @ 0x1401DE0F4
 * Callers:
 *     MiDbgCopyMemory @ 0x1401DD808 (MiDbgCopyMemory.c)
 * Callees:
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiGetPagePrivilege @ 0x140070730 (MiGetPagePrivilege.c)
 *     MiIsAddressValid @ 0x1400795B0 (MiIsAddressValid.c)
 *     KeFlushSingleCurrentTb @ 0x140115120 (KeFlushSingleCurrentTb.c)
 *     KeSetPagePrivilege @ 0x1401C3384 (KeSetPagePrivilege.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDbgMarkPfnModified @ 0x1401DDAA0 (MiDbgMarkPfnModified.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiGetLeafVa @ 0x1401DFF14 (MiGetLeafVa.c)
 *     MiRealVaToFlushType @ 0x1401DFF40 (MiRealVaToFlushType.c)
 */

unsigned __int64 __fastcall MiDbgWriteCheck(unsigned __int64 a1, __int64 *a2, int a3)
{
  __int64 *v7; // r14
  __int64 v8; // rbx
  unsigned int v9; // esi
  unsigned __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rsi
  unsigned __int64 v13; // rbp
  int PagePrivilege; // eax
  __int64 v15; // rbx
  __int64 LeafVa; // rax
  int v17; // eax
  __int128 v18[3]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+68h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( !MiIsAddressValid(a1) )
    return 0LL;
  if ( (*(_BYTE *)(8 * ((a1 >> 39) & 0x1FF) - 0x90482413000LL) & 1) == 0
    || (*(_BYTE *)(((a1 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) == 0
    || (*(_BYTE *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0x81) != 0x81 )
  {
    v7 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v8 = MI_READ_PTE_LOCK_FREE(v7);
    v19 = v8;
    v9 = ((unsigned int)MiFlags >> 12) & 1;
    if ( v9 && (MiFlags & 0x10000) == 0 )
    {
LABEL_20:
      if ( (v8 & 0x800) != 0 && (v8 & 0x42) != 0 )
      {
LABEL_27:
        if ( (MiFlags & 0x100) == 0 )
        {
          LeafVa = MiGetLeafVa(a1);
          v17 = MiRealVaToFlushType(LeafVa);
          KeFlushSingleCurrentTb(a1, v17);
        }
        return a1;
      }
      if ( a3 && (unsigned int)MiDbgMarkPfnModified(a1, v8) )
      {
        *a2 = v8;
        v19 = v8 | 0x862;
        _InterlockedIncrement(&dword_1402FEE14);
        v15 = v8 | 0x862;
        *v7 = v15;
        if ( (unsigned int)MiPteInShadowRange(v7) )
          MiWritePteShadow(v7, v15);
        _InterlockedDecrement(&dword_1402FEE14);
        goto LABEL_27;
      }
      return 0LL;
    }
    v10 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v19);
    v11 = v10;
    if ( v9 )
    {
      if ( !MI_IS_PFN(v10) )
        return 0LL;
      v12 = 48 * v11 - 0x58000000000LL;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
        return 0LL;
      v13 = 0x8000000000000000uLL;
      if ( (MiFlags & 0x10000) != 0 )
      {
        PagePrivilege = MiGetPagePrivilege(48 * v11 - 0x58000000000LL, 1, (unsigned __int64 *)v18);
        if ( !PagePrivilege )
        {
          v8 = v19;
          goto LABEL_17;
        }
      }
      v8 = v19;
    }
    else
    {
      v13 = 0LL;
      v18[0] = a1;
      v12 = 0LL;
    }
    PagePrivilege = KeSetPagePrivilege(v11, v18, 12);
LABEL_17:
    if ( v13 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), ~v13);
      v8 = v19;
    }
    if ( PagePrivilege < 0 )
      return 0LL;
    goto LABEL_20;
  }
  return a1;
}
