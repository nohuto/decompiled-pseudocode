/*
 * XREFs of MiCaptureProtectionFromLockedProto @ 0x1400BBA68
 * Callers:
 *     MiGetPageProtection @ 0x1400BB5A0 (MiGetPageProtection.c)
 *     MiCaptureProtectionFromProto @ 0x1401F000C (MiCaptureProtectionFromProto.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401F23E4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiCaptureProtectionFromLockedProto(__int64 a1)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // rdi
  unsigned __int8 v6; // r9
  __int64 result; // rax
  unsigned __int8 v8; // r9
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  while ( 1 )
  {
    v9 = MI_READ_PTE_LOCK_FREE(a1);
    v2 = v9;
    if ( (v9 & 1) == 0 )
      break;
    v3 = MI_GET_PAGE_FRAME_FROM_PTE(&v9);
    if ( MiIsPfnInline(v3) )
    {
      v5 = 48 * v4 - 0x58000000000LL;
      MiLockPageInline(v5);
      if ( v2 == MI_READ_PTE_LOCK_FREE(a1) )
      {
        result = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v5 + 16);
        _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v8);
        return result;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v6);
    }
  }
  return MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v9);
}
