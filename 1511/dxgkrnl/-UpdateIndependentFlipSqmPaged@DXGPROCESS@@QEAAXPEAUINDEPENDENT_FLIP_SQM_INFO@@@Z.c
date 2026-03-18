/*
 * XREFs of ?UpdateIndependentFlipSqmPaged@DXGPROCESS@@QEAAXPEAUINDEPENDENT_FLIP_SQM_INFO@@@Z @ 0x1C015061C
 * Callers:
 *     ?UpdateIndependentFlipSqm@DXGPROCESS@@QEAAXXZ @ 0x1C00018B0 (-UpdateIndependentFlipSqm@DXGPROCESS@@QEAAXXZ.c)
 * Callees:
 *     DxgkSqmCreateDwordStreamEntry @ 0x1C0010120 (DxgkSqmCreateDwordStreamEntry.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DxgkSqmCreateStringStreamEntry @ 0x1C001F830 (DxgkSqmCreateStringStreamEntry.c)
 *     DxgkSqmAddToStream @ 0x1C00E7550 (DxgkSqmAddToStream.c)
 */

void __fastcall DXGPROCESS::UpdateIndependentFlipSqmPaged(DXGPROCESS *this, struct INDEPENDENT_FLIP_SQM_INFO *a2)
{
  struct _KPROCESS *v4; // rcx
  PACCESS_TOKEN v5; // rax
  wchar_t *Buffer; // rdi
  void *v7; // rbx
  int v8; // eax
  const wchar_t *v9; // rdx
  const char *ProcessImageFileName; // rax
  __int64 v11; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+40h] [rbp-C8h] BYREF
  struct _STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v14; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v15[32]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v16[144]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v17[256]; // [rsp+178h] [rbp+70h] BYREF

  memset(v15, 0, sizeof(v15));
  DxgkSqmCreateDwordStreamEntry(v15, *(_DWORD *)a2);
  DxgkSqmCreateDwordStreamEntry(&v15[4], *((_DWORD *)a2 + 1));
  DxgkSqmCreateDwordStreamEntry(&v15[8], *((_DWORD *)a2 + 2));
  DxgkSqmCreateDwordStreamEntry(&v15[12], *((_DWORD *)a2 + 3));
  DxgkSqmCreateDwordStreamEntry(&v15[16], *((_DWORD *)a2 + 4));
  DxgkSqmCreateDwordStreamEntry(&v15[20], *((_DWORD *)a2 + 5));
  v4 = (struct _KPROCESS *)*((_QWORD *)this + 7);
  LOBYTE(v11) = 0;
  v5 = PsReferencePrimaryToken(v4);
  Buffer = L"FAILED";
  v7 = v5;
  if ( v5 )
  {
    PsQueryProcessAttributesByToken(v5, &v11, 0LL);
    if ( (_BYTE)v11 )
    {
      *(_QWORD *)&DestinationString.Length = 256LL;
      v12 = 130LL;
      v8 = RtlQueryPackageIdentity(v7, v17, &DestinationString, v16, &v12, 0LL);
      v9 = (const wchar_t *)v16;
      if ( v8 < 0 )
        v9 = L"FAILED";
      DxgkSqmCreateStringStreamEntry((__int64)&v15[24], v9);
      DxgkSqmCreateDwordStreamEntry(&v15[28], 0);
    }
    PsDereferencePrimaryToken(v7);
  }
  if ( !(_BYTE)v11 )
  {
    ProcessImageFileName = (const char *)PsGetProcessImageFileName(*((_QWORD *)this + 7));
    RtlInitAnsiString(&DestinationString, ProcessImageFileName);
    if ( RtlAnsiStringToUnicodeString(&v14, &DestinationString, 1u) >= 0 )
      Buffer = v14.Buffer;
    DxgkSqmCreateStringStreamEntry((__int64)&v15[24], Buffer);
    DxgkSqmCreateDwordStreamEntry(&v15[28], 1);
  }
  DxgkSqmAddToStream(12219LL, 8u, (__int64)v15);
}
