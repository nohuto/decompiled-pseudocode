/*
 * XREFs of ?ReAllocate@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@AEAA_N_K@Z @ 0x1C02A3168
 * Callers:
 *     ?Insert@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAU_FONTFILEVIEW@@@Z @ 0x1C02A2F94 (-Insert@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAU_FONTFILEVIEW@@.c)
 * Callees:
 *     memmove @ 0x1C0152980 (memmove.c)
 *     ULongLongMult @ 0x1C026A57C (ULongLongMult.c)
 */

char __fastcall NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::ReAllocate(__int64 a1, ULONGLONG a2)
{
  char result; // al
  PVOID PoolWithTag; // rax
  PVOID v6; // rdi
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp+18h] BYREF

  NumberOfBytes = 16LL;
  if ( ULongLongMult(0x10uLL, a2, &NumberOfBytes) < 0 )
    return 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, NumberOfBytes, 0x63497355u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  memmove(PoolWithTag, *(const void **)(a1 + 48), 16LL * *(_QWORD *)(a1 + 32));
  ExFreePoolWithTag(*(PVOID *)(a1 + 48), 0);
  result = 1;
  *(_QWORD *)(a1 + 48) = v6;
  *(_QWORD *)(a1 + 32) = a2;
  return result;
}
