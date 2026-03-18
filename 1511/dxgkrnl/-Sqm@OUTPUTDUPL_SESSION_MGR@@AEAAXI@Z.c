/*
 * XREFs of ?Sqm@OUTPUTDUPL_SESSION_MGR@@AEAAXI@Z @ 0x1C01596C4
 * Callers:
 *     ?ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00BBCE4 (-ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     DxgkSqmCreateDwordStreamEntry @ 0x1C0010120 (DxgkSqmCreateDwordStreamEntry.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DxgkSqmCreateStringStreamEntry @ 0x1C001F830 (DxgkSqmCreateStringStreamEntry.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkSqmAddToStream @ 0x1C00E7550 (DxgkSqmAddToStream.c)
 */

void __fastcall OUTPUTDUPL_SESSION_MGR::Sqm(OUTPUTDUPL_SESSION_MGR *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 *v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rbp
  const char *ProcessImageFileName; // rax
  int v8; // ebx
  NTSTATUS v9; // eax
  wchar_t *Buffer; // rdx
  int v11; // r14d
  struct DXGPROCESS *Current; // rax
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-88h] BYREF
  struct _STRING DestinationString; // [rsp+30h] [rbp-78h] BYREF
  _DWORD v15[16]; // [rsp+40h] [rbp-68h] BYREF

  v2 = a2;
  memset(v15, 0, sizeof(v15));
  v4 = (__int64 *)*((_QWORD *)this + 2);
  v5 = 32 * v2;
  v6 = *v4;
  ProcessImageFileName = (const char *)PsGetProcessImageFileName(*(_QWORD *)(v5 + *v4 + 8));
  RtlInitAnsiString(&DestinationString, ProcessImageFileName);
  v8 = 1;
  v9 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  Buffer = L"FAILED";
  v11 = v9;
  if ( v9 >= 0 )
    Buffer = UnicodeString.Buffer;
  DxgkSqmCreateStringStreamEntry((__int64)v15, Buffer);
  Current = DXGPROCESS::GetCurrent();
  if ( !Current || !(*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 10) + 224LL))(0LL) )
    v8 = 0;
  DxgkSqmCreateDwordStreamEntry(&v15[4], v8);
  DxgkSqmCreateDwordStreamEntry(&v15[8], *(_DWORD *)(v5 + v6 + 24) / 0x3Cu);
  DxgkSqmCreateDwordStreamEntry(&v15[12], *((_DWORD *)this + 7));
  DxgkSqmAddToStream(7946LL, 4u, (__int64)v15);
  if ( v11 >= 0 )
    RtlFreeUnicodeString(&UnicodeString);
}
