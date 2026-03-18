/*
 * XREFs of MiUpdatePrefetchPriority @ 0x140070C90
 * Callers:
 *     MiValidFault @ 0x140070910 (MiValidFault.c)
 *     MiPrefetchJumpVad @ 0x1401D6AD0 (MiPrefetchJumpVad.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiLocateAddress @ 0x140038340 (MiLocateAddress.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MI_GET_PFN_PRIORITY @ 0x1400B8498 (MI_GET_PFN_PRIORITY.c)
 *     MiUpdatePfnPriority @ 0x1400B9884 (MiUpdatePfnPriority.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiUpdatePrefetchPriority(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  unsigned __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // r9
  __int64 v10; // rbx
  int v11; // eax
  unsigned __int8 v12; // si
  unsigned __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  v13 = a3;
  v5 = *(_DWORD *)(a1 + 80) & 7;
  if ( (a3 & 1) == 0 )
  {
    v10 = 48 * ((a3 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v12 = MiLockPageInline(v10);
    if ( (unsigned int)MI_GET_PFN_PRIORITY(v10) == v5 )
    {
LABEL_17:
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      result = v12;
      __writecr8(v12);
      return result;
    }
LABEL_16:
    MiUpdatePfnPriority(v10, v5, 0LL);
    goto LABEL_17;
  }
  v7 = MI_READ_PTE_LOCK_FREE(&v13);
  result = MI_IS_PFN((v7 >> 12) & 0xFFFFFFFFFLL);
  if ( (_DWORD)result )
  {
    v10 = 48 * v9 - 0x58000000000LL;
    result = (*(_BYTE *)(v10 + 35) & 8) != 0 ? 5LL : *(_BYTE *)(v10 + 35) & 7;
    if ( (_DWORD)result != v5 )
    {
      if ( a4 )
      {
        v11 = *(_DWORD *)(a4 + 48);
      }
      else
      {
        if ( !KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[3] && !MEMORY[0xFFFFF58010804268] )
        {
LABEL_14:
          v12 = MiLockPageInline(v10);
          goto LABEL_16;
        }
        result = MiLocateAddress(a2);
        if ( !result )
          return result;
        v11 = *(_DWORD *)(result + 48);
      }
      result = (v11 & 7u) - 1;
      if ( (result & 0xFFFFFFFD) == 0 )
        return result;
      goto LABEL_14;
    }
  }
  return result;
}
