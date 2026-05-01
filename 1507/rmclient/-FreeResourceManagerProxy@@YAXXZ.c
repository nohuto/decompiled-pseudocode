/*
 * XREFs of ?FreeResourceManagerProxy@@YAXXZ @ 0x1800069D0
 * Callers:
 *     DllMain @ 0x18000BD98 (DllMain.c)
 * Callees:
 *     ??_GResourceManagerProxy@@UEAAPEAXI@Z @ 0x1800067F0 (--_GResourceManagerProxy@@UEAAPEAXI@Z.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

void FreeResourceManagerProxy(void)
{
  RPC_BINDING_HANDLE *(__fastcall *v0)(RPC_BINDING_HANDLE *, char); // rdi

  if ( qword_180022790 )
  {
    v0 = **(RPC_BINDING_HANDLE *(__fastcall ***)(RPC_BINDING_HANDLE *, char))qword_180022790;
    if ( v0 == ResourceManagerProxy::`scalar deleting destructor' )
      ResourceManagerProxy::`scalar deleting destructor'((RPC_BINDING_HANDLE *)qword_180022790, 1);
    else
      v0((RPC_BINDING_HANDLE *)qword_180022790, 1);
  }
  qword_180022790 = 0LL;
  RtlDeleteCriticalSection(&s_csProxy);
}
