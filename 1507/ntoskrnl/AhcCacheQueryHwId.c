/*
 * XREFs of AhcCacheQueryHwId @ 0x14071E6BC
 * Callers:
 *     NtApphelpCacheControl @ 0x14040D608 (NtApphelpCacheControl.c)
 * Callees:
 *     ExGetPreviousMode @ 0x140006ED0 (ExGetPreviousMode.c)
 *     RtlCopyUnicodeString @ 0x140047E40 (RtlCopyUnicodeString.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     KseLookupHardwareId @ 0x14069D464 (KseLookupHardwareId.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
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
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  bool v12; // dl
  _BYTE *v13; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-188h] BYREF
  char v16; // [rsp+30h] [rbp-178h] BYREF
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
    v4 = &v16;
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
        v12 = (unsigned int)KseLookupHardwareId(DestinationString.Buffer, v9, v10, v11) == 0;
        v13 = (_BYTE *)(a1 + 304);
        if ( a1 + 304 >= MmUserProbeAddress )
          v13 = (_BYTE *)MmUserProbeAddress;
        *v13 = v12;
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
