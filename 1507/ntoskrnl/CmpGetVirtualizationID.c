/*
 * XREFs of CmpGetVirtualizationID @ 0x140407F88
 * Callers:
 *     CmRealKCBToVirtualPath @ 0x140407BD4 (CmRealKCBToVirtualPath.c)
 *     CmpGetVirtualStoreRoot @ 0x140658CB4 (CmpGetVirtualStoreRoot.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1400151B4 (RtlAppendUnicodeToString.c)
 *     RtlCopyUnicodeString @ 0x140047E40 (RtlCopyUnicodeString.c)
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SeQueryUserSidToken @ 0x140438B84 (SeQueryUserSidToken.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     PsReferenceEffectiveToken @ 0x140481AE0 (PsReferenceEffectiveToken.c)
 *     RtlConvertSidToUnicodeString @ 0x1405006DC (RtlConvertSidToUnicodeString.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 */

__int64 __fastcall CmpGetVirtualizationID(PUNICODE_STRING Destination)
{
  void *v2; // rax
  int v3; // r14d
  PACCESS_TOKEN v4; // rbx
  NTSTATUS v5; // edi
  SIZE_T v6; // rdx
  wchar_t *PoolWithTag; // rax
  char v9; // [rsp+38h] [rbp-39h] BYREF
  int v10; // [rsp+3Ch] [rbp-35h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-31h] BYREF
  int v12; // [rsp+50h] [rbp-21h] BYREF
  _BYTE Sid[80]; // [rsp+58h] [rbp-19h] BYREF

  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  UnicodeString.Length = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  v2 = (void *)PsReferenceEffectiveToken(
                 (unsigned int)KeGetCurrentThread(),
                 (unsigned int)&v12,
                 (unsigned int)&v9,
                 (unsigned int)&v10,
                 0LL);
  v3 = v12;
  v4 = v2;
  if ( v12 == 2 && v10 < 2 )
  {
    if ( v2 )
      ObfDereferenceObject(v2);
    v4 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
    v3 = 1;
  }
  SeQueryUserSidToken(v4, Sid, 68LL);
  v5 = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
  if ( v5 >= 0 )
  {
    v6 = (unsigned __int16)(UnicodeString.Length + 20);
    Destination->MaximumLength = v6;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v6, 0x65564D43u);
    Destination->Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      RtlCopyUnicodeString(Destination, &UnicodeString);
      RtlAppendUnicodeToString(Destination, L"_Classes");
    }
    else
    {
      v5 = -1073741670;
    }
  }
  if ( v3 == 1 )
  {
    ObFastDereferenceObject(
      (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
      (unsigned __int64)v4);
  }
  else if ( v4 )
  {
    ObfDereferenceObject(v4);
  }
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)v5;
}
