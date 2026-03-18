/*
 * XREFs of MiDbgWriteCheck @ 0x1402236C0
 * Callers:
 *     MiDbgCopyMemory @ 0x140222AD0 (MiDbgCopyMemory.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x1400597B0 (MiGetPagePrivilege.c)
 *     MiIsAddressValid @ 0x14005E8E0 (MiIsAddressValid.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     KeFlushSingleCurrentTb @ 0x14014A648 (KeFlushSingleCurrentTb.c)
 *     KeSetPagePrivilege @ 0x1401FF2DC (KeSetPagePrivilege.c)
 *     MiDbgMarkPfnModified @ 0x140222E0C (MiDbgMarkPfnModified.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiGetLeafVa @ 0x140225AFC (MiGetLeafVa.c)
 *     MiRealVaToFlushType @ 0x140225F80 (MiRealVaToFlushType.c)
 */

// local variable allocation has failed, the output may be wrong!
unsigned __int64 __fastcall MiDbgWriteCheck(unsigned __int64 a1, unsigned __int64 *a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v9; // r10d
  unsigned __int64 *v10; // rsi
  unsigned __int64 PteShadow; // rbx
  __int64 v12; // r9
  unsigned __int64 v13; // r14
  __int64 v14; // r14
  int v15; // r10d
  __int64 v16; // rbp
  unsigned __int64 v17; // r15
  int PagePrivilege; // eax
  __int64 LeafVa; // rax
  int v20; // eax
  __int128 v21[3]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v22; // [rsp+68h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( !MiIsAddressValid(a1) )
    return 0LL;
  v9 = 1;
  if ( (*(_BYTE *)(8 * ((a1 >> 39) & 0x1FF) - 0x90482413000LL) & 1) == 0
    || (*(_BYTE *)(((a1 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) == 0
    || (*(_BYTE *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0x81) != 0x81 )
  {
    v10 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    PteShadow = *v10;
    if ( (unsigned __int64)(v10 + 0x12090482600LL) <= 0x7F8 )
      PteShadow = MiReadPteShadow(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *v10);
    v22 = PteShadow;
    v12 = v9 & ((unsigned int)MiFlags >> 12);
    if ( (v9 & ((unsigned int)MiFlags >> 12)) != 0 && (MiFlags & 0x30000) == 0 )
    {
LABEL_23:
      if ( (PteShadow & 0x800) != 0 && (PteShadow & 0x42) != 0 )
      {
LABEL_30:
        if ( (MiFlags & 0x100) == 0 )
        {
          LeafVa = MiGetLeafVa(a1, v6, v7, v12);
          v20 = MiRealVaToFlushType(LeafVa);
          KeFlushSingleCurrentTb(a1, v20);
        }
        return a1;
      }
      if ( a3 && (unsigned int)MiDbgMarkPfnModified(a1, PteShadow) )
      {
        *a2 = PteShadow;
        v22 = PteShadow | 0x862;
        _InterlockedIncrement(&dword_14034F2D4);
        v6 = PteShadow | 0x862;
        *v10 = PteShadow | 0x862;
        if ( (unsigned __int64)(v10 + 0x12090482600LL) <= 0x7F8 )
          MiWritePteShadow(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v6);
        _InterlockedDecrement(&dword_14034F2D4);
        goto LABEL_30;
      }
      return 0LL;
    }
    v13 = PteShadow;
    if ( (unsigned __int64)&STACK[0x90482413068] <= 0x7F8 )
      v13 = MiReadPteShadow(&v22, PteShadow);
    v14 = (v13 >> 12) & 0xFFFFFFFFFLL;
    if ( (_DWORD)v12 )
    {
      if ( !MI_IS_PFN(v14) )
        return 0LL;
      v16 = 48 * v14 - 0x58000000000LL;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
        return 0LL;
      v17 = 0x8000000000000000uLL;
      if ( (MiFlags & 0x30000) != 0 )
      {
        PagePrivilege = MiGetPagePrivilege(48 * v14 - 0x58000000000LL, v15, (unsigned __int64 *)v21);
        if ( !PagePrivilege )
          goto LABEL_20;
      }
    }
    else
    {
      v17 = 0LL;
      v21[0] = a1;
      v16 = 0LL;
    }
    PagePrivilege = KeSetPagePrivilege(v14, v21, 12);
LABEL_20:
    if ( v17 )
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), ~v17);
    if ( PagePrivilege < 0 )
      return 0LL;
    goto LABEL_23;
  }
  return a1;
}
