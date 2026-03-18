/*
 * XREFs of UmfdCreateUsermodeDdiParameters @ 0x1C02D8F4C
 * Callers:
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A4C80 (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C02D8F0C (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 */

__int64 __fastcall UmfdCreateUsermodeDdiParameters(_QWORD *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  struct UmfdTls *v6; // rax
  __int64 result; // rax
  _DWORD *v8; // rbx
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v6 = UmfdTls::EnsureTls((__int64)a1, (__int64)a2, a3, a4);
  if ( !v6 )
    return 3221225495LL;
  v8 = (_DWORD *)*((_QWORD *)v6 + 3);
  if ( !v8 )
    return 3221227264LL;
  result = (*(__int64 (__fastcall **)(_QWORD, struct UmfdTls *, __int64 *))(*(_QWORD *)v8 + 16LL))(
             *((_QWORD *)v6 + 3),
             v6,
             &v9);
  if ( (int)result >= 0 )
  {
    *a1 = v9;
    *a2 = v8[2];
    return (unsigned int)result;
  }
  return result;
}
