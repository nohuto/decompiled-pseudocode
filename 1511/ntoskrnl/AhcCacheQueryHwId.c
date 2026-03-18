/*
 * XREFs of AhcCacheQueryHwId @ 0x14069E060
 * Callers:
 *     NtApphelpCacheControl @ 0x14049C958 (NtApphelpCacheControl.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140043CB0 (RtlCopyUnicodeString.c)
 *     ExGetPreviousMode @ 0x1400D5BD0 (ExGetPreviousMode.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     KseLookupHardwareId @ 0x14061E768 (KseLookupHardwareId.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AhcCacheQueryHwId(ULONG64 a1)
{
  unsigned int v2; // edi
  _OWORD *v3; // rcx
  char *v4; // rax
  __int64 v5; // rdx
  unsigned __int16 Length; // di
  wchar_t *Buffer; // r14
  ULONG64 v8; // rcx
  bool v9; // dl
  _BYTE *v10; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-188h] BYREF
  char v13; // [rsp+30h] [rbp-178h] BYREF
  UNICODE_STRING SourceString; // [rsp+168h] [rbp-40h] BYREF

  DestinationString.Length = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  HIWORD(DestinationString.Buffer) = 0;
  if ( ExGetPreviousMode() == 1 )
  {
    v3 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v3 = (_OWORD *)MmUserProbeAddress;
    v4 = &v13;
    v5 = 2LL;
    do
    {
      *(_OWORD *)v4 = *v3;
      *((_OWORD *)v4 + 1) = v3[1];
      *((_OWORD *)v4 + 2) = v3[2];
      *((_OWORD *)v4 + 3) = v3[3];
      *((_OWORD *)v4 + 4) = v3[4];
      *((_OWORD *)v4 + 5) = v3[5];
      *((_OWORD *)v4 + 6) = v3[6];
      v4 += 128;
      *((_OWORD *)v4 - 1) = v3[7];
      v3 += 8;
      --v5;
    }
    while ( v5 );
    *(_OWORD *)v4 = *v3;
    *((_OWORD *)v4 + 1) = v3[1];
    *((_OWORD *)v4 + 2) = v3[2];
    *((_OWORD *)v4 + 3) = v3[3];
    *((_OWORD *)v4 + 4) = v3[4];
    *((_OWORD *)v4 + 5) = v3[5];
    if ( SourceString.MaximumLength
      && (Length = SourceString.Length) != 0
      && (Buffer = SourceString.Buffer) != 0LL
      && ((LOBYTE(SourceString.MaximumLength) | LOBYTE(SourceString.Length)) & 1) == 0
      && SourceString.Length <= SourceString.MaximumLength
      && SourceString.Length <= 0xFFFCu )
    {
      DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, SourceString.Length + 2LL, 0x6F637061u);
      if ( DestinationString.Buffer )
      {
        DestinationString.MaximumLength = Length + 2;
        DestinationString.Length = 0;
        memset(DestinationString.Buffer, 0, (unsigned __int16)(Length + 2));
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v8 = (ULONG64)Buffer + SourceString.MaximumLength;
        if ( v8 > MmUserProbeAddress || v8 < (unsigned __int64)Buffer )
          *(_BYTE *)MmUserProbeAddress = 0;
        RtlCopyUnicodeString(&DestinationString, &SourceString);
        v9 = (unsigned int)KseLookupHardwareId(DestinationString.Buffer) == 0;
        v10 = (_BYTE *)(a1 + 304);
        if ( a1 + 304 >= MmUserProbeAddress )
          v10 = (_BYTE *)MmUserProbeAddress;
        *v10 = v9;
        v2 = 0;
      }
      else
      {
        v2 = -1073741670;
      }
    }
    else
    {
      v2 = -1073741811;
    }
  }
  else
  {
    v2 = -1073741822;
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0x6F637061u);
  return v2;
}
