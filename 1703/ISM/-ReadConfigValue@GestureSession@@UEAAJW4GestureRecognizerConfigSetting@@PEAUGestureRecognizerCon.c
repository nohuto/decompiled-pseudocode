/*
 * XREFs of ?ReadConfigValue@GestureSession@@UEAAJW4GestureRecognizerConfigSetting@@PEAUGestureRecognizerConfigValue@@@Z @ 0x180036B60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GestureSession::ReadConfigValue(__int64 a1, unsigned int a2, __int64 a3)
{
  int v5; // ebx
  _QWORD *v6; // rdi

  if ( a2 > 0x23 || !a3 )
    return 2147942487LL;
  v5 = 0;
  v6 = (_QWORD *)(a1 + 824);
  do
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v6 + 48LL))(*v6, a2, a3) )
      break;
    ++v5;
    ++v6;
  }
  while ( v5 < 7 );
  return 0LL;
}
