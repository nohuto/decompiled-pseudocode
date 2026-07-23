/*
 * XREFs of CmpGetVirtualizationID @ 0x1403E1B4C
 * Callers:
 *     CmRealKCBToVirtualPath @ 0x1403E1950 (CmRealKCBToVirtualPath.c)
 *     CmpGetVirtualStoreRoot @ 0x14060175C (CmpGetVirtualStoreRoot.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14000F210 (ObFastDereferenceObject.c)
 *     RtlCopyUnicodeString @ 0x14002D8E0 (RtlCopyUnicodeString.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     RtlAppendUnicodeToString @ 0x1400C17B0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlConvertSidToUnicodeString @ 0x1403F75D0 (RtlConvertSidToUnicodeString.c)
 *     SeQueryUserSidToken @ 0x1403FEB00 (SeQueryUserSidToken.c)
 *     PsReferenceEffectiveToken @ 0x140411380 (PsReferenceEffectiveToken.c)
 *     PsReferencePrimaryToken @ 0x140417AE0 (PsReferencePrimaryToken.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
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
  int v11; // [rsp+40h] [rbp-31h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-29h] BYREF
  _BYTE Sid[80]; // [rsp+58h] [rbp-19h] BYREF

  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  UnicodeString.Length = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  v2 = (void *)PsReferenceEffectiveToken(
                 (unsigned int)KeGetCurrentThread(),
                 (unsigned int)&v10,
                 (unsigned int)&v9,
                 (unsigned int)&v11,
                 0LL);
  v3 = v10;
  v4 = v2;
  if ( v10 == 2 && v11 < 2 )
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
