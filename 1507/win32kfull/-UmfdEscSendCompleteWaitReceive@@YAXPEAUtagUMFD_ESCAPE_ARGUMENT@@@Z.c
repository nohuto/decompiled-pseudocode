/*
 * XREFs of ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A4300
 * Callers:
 *     UmfdDispatchEscape @ 0x1C02A47DC (UmfdDispatchEscape.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ?UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z @ 0x1C02A44A8 (-UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C02D4A8C (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     UmfdCreateUsermodeDdiParameters @ 0x1C02D4ACC (UmfdCreateUsermodeDdiParameters.c)
 */

void __fastcall UmfdEscSendCompleteWaitReceive(volatile void **a1)
{
  struct UmfdTls *v2; // rax
  struct UmfdTls *v3; // rdi
  struct UmfdTls *v4; // rax
  int v5; // ebx
  __int64 v6; // rcx
  int v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF
  struct UmfdTls *v9; // [rsp+68h] [rbp+20h]

  v2 = UmfdTls::EnsureTls();
  v3 = v2;
  v9 = v2;
  if ( v2 )
  {
    *((_QWORD *)v2 + 5) = 0LL;
    *((_QWORD *)v2 + 4) = 0LL;
    v4 = UmfdTls::EnsureTls();
    if ( v4 )
    {
      v6 = *((_QWORD *)v4 + 3);
      if ( v6 && **(_QWORD **)v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
      v5 = UmfdHostSendCompleteWaitReceive(*((unsigned int *)a1 + 6));
      if ( v5 >= 0 )
      {
        v5 = UmfdCreateUsermodeDdiParameters(&v8, &v7);
        if ( v5 >= 0 )
        {
          ProbeForWrite(a1[1], 8uLL, 8u);
          ProbeForWrite(a1[2], 4uLL, 8u);
          *(_QWORD *)a1[1] = v8;
          *(_DWORD *)a1[2] = v7;
        }
      }
      if ( v5 >= 0 )
        goto LABEL_12;
    }
    else
    {
      v5 = -1073741801;
    }
    *((_QWORD *)v3 + 5) = 0LL;
    *((_QWORD *)v3 + 4) = 0LL;
LABEL_12:
    *((_DWORD *)a1 + 2) = v5;
  }
}
