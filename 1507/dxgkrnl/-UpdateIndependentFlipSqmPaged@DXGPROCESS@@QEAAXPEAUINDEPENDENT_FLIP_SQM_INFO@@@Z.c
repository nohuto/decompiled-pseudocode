/*
 * XREFs of ?UpdateIndependentFlipSqmPaged@DXGPROCESS@@QEAAXPEAUINDEPENDENT_FLIP_SQM_INFO@@@Z @ 0x1C014B8CC
 * Callers:
 *     ?UpdateIndependentFlipSqm@DXGPROCESS@@QEAAXXZ @ 0x1C0002CE0 (-UpdateIndependentFlipSqm@DXGPROCESS@@QEAAXXZ.c)
 * Callees:
 *     DxgkSqmCreateDwordStreamEntry @ 0x1C000F300 (DxgkSqmCreateDwordStreamEntry.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DxgkSqmCreateStringStreamEntry @ 0x1C001FAC0 (DxgkSqmCreateStringStreamEntry.c)
 *     DxgkSqmAddToStream @ 0x1C00DA220 (DxgkSqmAddToStream.c)
 */

void __fastcall DXGPROCESS::UpdateIndependentFlipSqmPaged(DXGPROCESS *this, struct INDEPENDENT_FLIP_SQM_INFO *a2)
{
  struct _KPROCESS *v4; // rcx
  PACCESS_TOKEN v5; // rax
  __int64 v6; // r9
  wchar_t *Buffer; // rdi
  void *v8; // rbx
  int v9; // eax
  const wchar_t *v10; // rdx
  const char *ProcessImageFileName; // rax
  __int64 v12; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+40h] [rbp-C8h] BYREF
  struct _STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v15; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v16[32]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v17[144]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v18[256]; // [rsp+178h] [rbp+70h] BYREF

  memset(v16, 0, sizeof(v16));
  DxgkSqmCreateDwordStreamEntry(v16, *(_DWORD *)a2);
  DxgkSqmCreateDwordStreamEntry(&v16[4], *((_DWORD *)a2 + 1));
  DxgkSqmCreateDwordStreamEntry(&v16[8], *((_DWORD *)a2 + 2));
  DxgkSqmCreateDwordStreamEntry(&v16[12], *((_DWORD *)a2 + 3));
  DxgkSqmCreateDwordStreamEntry(&v16[16], *((_DWORD *)a2 + 4));
  DxgkSqmCreateDwordStreamEntry(&v16[20], *((_DWORD *)a2 + 5));
  v4 = (struct _KPROCESS *)*((_QWORD *)this + 7);
  LOBYTE(v12) = 0;
  v5 = PsReferencePrimaryToken(v4);
  Buffer = L"FAILED";
  v8 = v5;
  if ( v5 )
  {
    PsQueryProcessAttributesByToken(v5, &v12, 0LL);
    if ( (_BYTE)v12 )
    {
      *(_QWORD *)&DestinationString.Length = 256LL;
      v13 = 130LL;
      v9 = RtlQueryPackageIdentity(v8, v18, &DestinationString, v17, &v13, 0LL);
      v10 = (const wchar_t *)v17;
      if ( v9 < 0 )
        v10 = L"FAILED";
      DxgkSqmCreateStringStreamEntry((__int64)&v16[24], v10);
      DxgkSqmCreateDwordStreamEntry(&v16[28], 0);
    }
    PsDereferencePrimaryToken(v8);
  }
  if ( !(_BYTE)v12 )
  {
    ProcessImageFileName = (const char *)PsGetProcessImageFileName(*((_QWORD *)this + 7));
    RtlInitAnsiString(&DestinationString, ProcessImageFileName);
    if ( RtlAnsiStringToUnicodeString(&v15, &DestinationString, 1u) >= 0 )
      Buffer = v15.Buffer;
    DxgkSqmCreateStringStreamEntry((__int64)&v16[24], Buffer);
    DxgkSqmCreateDwordStreamEntry(&v16[28], 1);
  }
  DxgkSqmAddToStream(12219LL, 8LL, (__int64)v16, v6);
}
