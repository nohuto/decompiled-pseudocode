/*
 * XREFs of ?ResetConfigValues@GestureSession@@UEAAJXZ @ 0x180036C40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GestureSession::ResetConfigValues(GestureSession *this)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdi

  v1 = (_QWORD *)((char *)this + 824);
  v2 = 7LL;
  do
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 64LL))(*v1);
    ++v1;
    --v2;
  }
  while ( v2 );
  return 0LL;
}
