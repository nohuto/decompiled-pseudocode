/*
 * XREFs of MiUpdateEnclavePfnProtection @ 0x1401F0588
 * Callers:
 *     MiProtectEnclavePages @ 0x14065F6F8 (MiProtectEnclavePages.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 */

__int64 __fastcall MiUpdateEnclavePfnProtection(__int64 a1, int a2)
{
  __int64 result; // rax

  LOBYTE(result) = MiLockPageInline(a1);
  *(_QWORD *)(a1 + 16) ^= (*(_DWORD *)(a1 + 16) ^ (32 * a2)) & 0x3E0;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned __int8)result;
  __writecr8((unsigned __int8)result);
  return result;
}
