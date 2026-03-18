/*
 * XREFs of UmfdCreateUsermodeDdiParameters @ 0x1C02D5EAC
 * Callers:
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A3B4C (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C02D5E6C (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 */

__int64 __fastcall UmfdCreateUsermodeDdiParameters(_QWORD *a1, _DWORD *a2)
{
  struct UmfdTls *v4; // rax
  __int64 result; // rax
  _DWORD *v6; // rbx
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = UmfdTls::EnsureTls();
  if ( !v4 )
    return 3221225495LL;
  v6 = (_DWORD *)*((_QWORD *)v4 + 3);
  if ( !v6 )
    return 3221227264LL;
  result = (*(__int64 (__fastcall **)(_QWORD, struct UmfdTls *, __int64 *))(*(_QWORD *)v6 + 16LL))(
             *((_QWORD *)v4 + 3),
             v4,
             &v7);
  if ( (int)result >= 0 )
  {
    *a1 = v7;
    *a2 = v6[2];
    return (unsigned int)result;
  }
  return result;
}
