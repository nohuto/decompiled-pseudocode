/*
 * XREFs of MiDbgWriteCheck @ 0x14012CB4C
 * Callers:
 *     MiDbgCopyMemory @ 0x140084338 (MiDbgCopyMemory.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025B30 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiIsAddressValid @ 0x1400370C0 (MiIsAddressValid.c)
 *     MiGetPagePrivilege @ 0x1400E15D0 (MiGetPagePrivilege.c)
 *     KeFlushSingleCurrentTb @ 0x14012CDD0 (KeFlushSingleCurrentTb.c)
 *     KeSetPagePrivilege @ 0x140147314 (KeSetPagePrivilege.c)
 *     MiDbgMarkPfnModified @ 0x14014829C (MiDbgMarkPfnModified.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetLeafVa @ 0x1401F2468 (MiGetLeafVa.c)
 *     MiRealVaToFlushType @ 0x1401F2710 (MiRealVaToFlushType.c)
 */

unsigned __int64 __fastcall MiDbgWriteCheck(unsigned __int64 a1, __int64 *a2, int a3)
{
  __int64 *v7; // r14
  __int64 v8; // rbx
  __int16 v9; // ax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r15
  int v12; // r9d
  int v13; // r10d
  __int64 v14; // rsi
  unsigned __int64 v15; // rbp
  int PagePrivilege; // eax
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 LeafVa; // rax
  unsigned int v21; // eax
  _QWORD v22[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v23; // [rsp+68h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( !MiIsAddressValid(a1) )
    return 0LL;
  if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(a1) )
  {
    v7 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v8 = MI_READ_PTE_LOCK_FREE(v7);
    v23 = v8;
    v9 = MiFlags;
    if ( (((unsigned int)MiFlags >> 12) & 1) != 0 && (MiFlags & 0x4000) == 0 )
    {
LABEL_19:
      if ( (v8 & 0x800) != 0 && (v8 & 0x42) != 0 )
      {
LABEL_26:
        if ( (v9 & 0x100) == 0 )
        {
          LeafVa = MiGetLeafVa(a1);
          v21 = MiRealVaToFlushType(LeafVa);
          KeFlushSingleCurrentTb(a1, v21);
        }
        return a1;
      }
      if ( a3 && (unsigned int)MiDbgMarkPfnModified(a1, v8) )
      {
        *a2 = v8;
        v17 = v8 | 0x862;
        v23 = v17;
        _InterlockedIncrement(&dword_140327254);
        *v7 = v17;
        if ( (unsigned int)MiPteInShadowRange(v7, v17) )
          MiWritePteShadow(v19, v18);
        _InterlockedDecrement(&dword_140327254);
        v9 = MiFlags;
        goto LABEL_26;
      }
      return 0LL;
    }
    v10 = MI_GET_PAGE_FRAME_FROM_PTE(&v23);
    v11 = v10;
    if ( v12 )
    {
      if ( !MiIsPfnInline(v10) )
        return 0LL;
      v14 = 48 * v11 - 0x58000000000LL;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
        return 0LL;
      v15 = 0x8000000000000000uLL;
      if ( (v13 & MiFlags) != 0 )
      {
        PagePrivilege = MiGetPagePrivilege(48 * v11 - 0x58000000000LL, 1, (unsigned __int64)v22);
        if ( !PagePrivilege )
        {
          v8 = v23;
LABEL_15:
          if ( v15 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), ~v15);
            v8 = v23;
          }
          if ( PagePrivilege < 0 )
            return 0LL;
          v9 = MiFlags;
          goto LABEL_19;
        }
      }
      v8 = v23;
    }
    else
    {
      v15 = 0LL;
      v22[0] = a1;
      v14 = 0LL;
      v22[1] = 0LL;
    }
    PagePrivilege = KeSetPagePrivilege(v11, v22, 12LL);
    goto LABEL_15;
  }
  return a1;
}
