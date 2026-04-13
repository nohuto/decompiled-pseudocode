/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_2c31ea12bccf7d61b4ea1b66f1c008a8___ @ 0x18003E760
 * Callers:
 *     _lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca_::operator() @ 0x18003A498 (_lambda_5aad7e4d6d4c7cf45baebe76dbcaeaca_--operator().c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2c31ea12bccf7d61b4ea1b66f1c008a8_____lambda_2c31ea12bccf7d61b4ea1b66f1c008a8___ @ 0x18003F4C8 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2c31ea12bccf7.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_2c31ea12bccf7d61b4ea1b66f1c008a8___(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2c31ea12bccf7d61b4ea1b66f1c008a8_____lambda_2c31ea12bccf7d61b4ea1b66f1c008a8___(&v6);
  v3 = *v2;
  *v2 = 0LL;
  v4 = v6;
  *a1 = v3;
  if ( v4 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
