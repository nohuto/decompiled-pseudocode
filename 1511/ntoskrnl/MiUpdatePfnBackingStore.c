/*
 * XREFs of MiUpdatePfnBackingStore @ 0x14010B604
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14010A610 (MiStoreWriteModifiedPages.c)
 *     MiGatherPagefilePages @ 0x14010AF5C (MiGatherPagefilePages.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MI_SET_PAGING_FILE_INFO @ 0x1400F5214 (MI_SET_PAGING_FILE_INFO.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiUpdatePfnBackingStore(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned __int8 v4; // si
  char v9; // bl
  int v10; // r10d
  unsigned __int64 v11; // rbx
  __int64 result; // rax
  unsigned __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  v9 = 1;
  if ( !a4 )
    v4 = MiLockPageInline(a1);
  if ( (*(_QWORD *)(a1 + 16) & 0x1000LL) != 0 )
    v9 = 3;
  MI_SET_PAGING_FILE_INFO((__int64)&v13, (_DWORD *)(a1 + 16), a2, a3, v9);
  v11 = ((unsigned int)v13 ^ v10) & 0x1FFC000 ^ v13;
  v13 = v11;
  *(_QWORD *)(a1 + 16) = v11;
  result = MiPteInShadowRange(a1 + 16);
  if ( (_DWORD)result )
    result = MiWritePteShadow(a1 + 16, v11);
  if ( !a4 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    result = v4;
    __writecr8(v4);
  }
  return result;
}
