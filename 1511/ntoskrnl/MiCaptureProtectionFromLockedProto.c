/*
 * XREFs of MiCaptureProtectionFromLockedProto @ 0x1400E2010
 * Callers:
 *     MiQueryAddressState @ 0x14005EA30 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x14005F320 (MiGetPageProtection.c)
 *     MiCaptureProtectionFromProto @ 0x1400E1F9C (MiCaptureProtectionFromProto.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiCaptureProtectionFromLockedProto(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // rdi
  unsigned __int8 v7; // bp
  __int64 v8; // rbx
  unsigned __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  while ( 1 )
  {
    v2 = MI_READ_PTE_LOCK_FREE(a1);
    v10 = v2;
    v3 = v2;
    if ( (v2 & 1) == 0 )
      break;
    v4 = MI_READ_PTE_LOCK_FREE(&v10);
    if ( MI_IS_PFN((v4 >> 12) & 0xFFFFFFFFFLL) )
    {
      v6 = 48 * v5 - 0x58000000000LL;
      v7 = MiLockPageInline(v6);
      if ( v3 == MI_READ_PTE_LOCK_FREE(a1) )
      {
        LODWORD(v8) = (*(_DWORD *)(v6 + 16) >> 5) & 0x1F;
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v7);
        return (unsigned int)v8;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v7);
    }
  }
  return (v2 >> 5) & 0x1F;
}
