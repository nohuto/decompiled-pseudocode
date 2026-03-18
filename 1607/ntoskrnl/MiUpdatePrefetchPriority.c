/*
 * XREFs of MiUpdatePrefetchPriority @ 0x1400E6670
 * Callers:
 *     MiValidFault @ 0x1400E6250 (MiValidFault.c)
 *     MiPrefetchJumpVad @ 0x1401E8798 (MiPrefetchJumpVad.c)
 * Callees:
 *     MiLocateAddress @ 0x14001F090 (MiLocateAddress.c)
 *     MiLockPageAtDpcInline @ 0x14002EB30 (MiLockPageAtDpcInline.c)
 *     MiIsPfnInline @ 0x140030920 (MiIsPfnInline.c)
 *     MiLockTransitionLeafPage @ 0x1400B8FB8 (MiLockTransitionLeafPage.c)
 *     MiUpdatePfnPriority @ 0x1400BDCE0 (MiUpdatePfnPriority.c)
 *     MiGetPfnPriority @ 0x1400E67A4 (MiGetPfnPriority.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F2550 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiUpdatePrefetchPriority(__int64 a1, unsigned __int64 a2)
{
  int v2; // edi
  __int64 *v3; // rcx
  __int64 result; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // r10
  unsigned __int64 v8; // r11
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 80) & 7;
  v3 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  result = *v3;
  v12 = result;
  if ( (result & 1) == 0 )
  {
    if ( !result )
      return result;
    if ( (result & 0x400) != 0 )
      return result;
    if ( (result & 0x800) == 0 )
      return result;
    result = MiLockTransitionLeafPage((ULONG_PTR)v3, 0LL);
    v9 = result;
    if ( !result )
      return result;
    goto LABEL_16;
  }
  v5 = MI_GET_PAGE_FRAME_FROM_PTE(&v12);
  result = MiIsPfnInline(v5);
  if ( !(_DWORD)result )
    return result;
  v9 = 48 * v6 - 0x58000000000LL;
  result = *(_BYTE *)(v9 + 35) & 7;
  if ( (_DWORD)result == v2 )
    return result;
  if ( v7 )
  {
    v10 = *(_DWORD *)(v7 + 48);
    goto LABEL_10;
  }
  if ( KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[3] || *(_QWORD *)(qword_140327F90 + 276840560) )
  {
    result = MiLocateAddress(v8);
    if ( !result )
      return result;
    v10 = *(_DWORD *)(result + 48);
LABEL_10:
    result = (v10 & 7u) - 1;
    if ( (result & 0xFFFFFFFD) == 0 )
      return result;
  }
  MiLockPageAtDpcInline(v9);
LABEL_16:
  if ( (unsigned int)MiGetPfnPriority(v9) != v2 )
    MiUpdatePfnPriority(v11);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
