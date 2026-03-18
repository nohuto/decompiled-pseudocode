/*
 * XREFs of ?Sqm@OUTPUTDUPL_SESSION_MGR@@AEAAXI@Z @ 0x1C01553E0
 * Callers:
 *     ?ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C008F7C8 (-ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     DxgkSqmCreateDwordStreamEntry @ 0x1C000F300 (DxgkSqmCreateDwordStreamEntry.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DxgkSqmCreateStringStreamEntry @ 0x1C001FAC0 (DxgkSqmCreateStringStreamEntry.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkSqmAddToStream @ 0x1C00DA220 (DxgkSqmAddToStream.c)
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
  __int64 v12; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v14; // r9
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-88h] BYREF
  struct _STRING DestinationString; // [rsp+30h] [rbp-78h] BYREF
  _DWORD v17[16]; // [rsp+40h] [rbp-68h] BYREF

  v2 = a2;
  memset(v17, 0, sizeof(v17));
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
  DxgkSqmCreateStringStreamEntry((__int64)v17, Buffer);
  Current = DXGPROCESS::GetCurrent(v12);
  if ( !Current || !(*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 10) + 224LL))(0LL) )
    v8 = 0;
  DxgkSqmCreateDwordStreamEntry(&v17[4], v8);
  DxgkSqmCreateDwordStreamEntry(&v17[8], *(_DWORD *)(v5 + v6 + 24) / 0x3Cu);
  DxgkSqmCreateDwordStreamEntry(&v17[12], *((_DWORD *)this + 7));
  DxgkSqmAddToStream(7946LL, 4LL, (__int64)v17, v14);
  if ( v11 >= 0 )
    RtlFreeUnicodeString(&UnicodeString);
}
