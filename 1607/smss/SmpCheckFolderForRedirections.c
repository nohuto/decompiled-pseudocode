/*
 * XREFs of SmpCheckFolderForRedirections @ 0x140011CFC
 * Callers:
 *     SmpRenameTargetFile @ 0x140012DA4 (SmpRenameTargetFile.c)
 *     SmpShuffleMove @ 0x14001320C (SmpShuffleMove.c)
 *     SmpTryOverwriteReadonlyFile @ 0x140013380 (SmpTryOverwriteReadonlyFile.c)
 * Callees:
 *     memcpy_0 @ 0x14000CC54 (memcpy_0.c)
 *     SmpOpenTargetFile @ 0x140012B40 (SmpOpenTargetFile.c)
 *     SmpPathCanBeTrustedIsNotARedirection @ 0x140012BD8 (SmpPathCanBeTrustedIsNotARedirection.c)
 *     GetFileAttributesW @ 0x140014AE0 (GetFileAttributesW.c)
 */

char __fastcall SmpCheckFolderForRedirections(unsigned __int16 *a1, HANDLE *a2)
{
  char IsNotARedirection; // si
  int FileAttributesW; // eax
  char v6; // r14
  __int64 v7; // rbx
  PWSTR Buffer; // rcx
  __int64 v9; // r15
  PWSTR v10; // rdx
  ULONG v11; // r8d
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  int v14; // [rsp+40h] [rbp-30h]
  __int64 v15; // [rsp+48h] [rbp-28h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-20h]
  int v17; // [rsp+58h] [rbp-18h]
  __int128 v18; // [rsp+60h] [rbp-10h]
  HANDLE Handle; // [rsp+A0h] [rbp+30h] BYREF

  Handle = (HANDLE)-1LL;
  IsNotARedirection = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( *a1 < 0xEu )
    goto LABEL_20;
  FileAttributesW = GetFileAttributesW(*((PCWSTR *)a1 + 1));
  if ( FileAttributesW == -1 )
  {
LABEL_5:
    v6 = 0;
    goto LABEL_6;
  }
  if ( (FileAttributesW & 0x400) != 0 )
  {
LABEL_20:
    Buffer = DestinationString.Buffer;
    goto LABEL_21;
  }
  v6 = 1;
  if ( (FileAttributesW & 0x10) == 0 )
    goto LABEL_5;
LABEL_6:
  v7 = (*a1 >> 1) - 1;
  if ( !v6 )
  {
    if ( *a1 >> 1 == 1 )
      goto LABEL_20;
    do
    {
      if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * v7) == 92 )
        break;
      v7 = (unsigned int)(v7 - 1);
    }
    while ( (_DWORD)v7 );
    if ( !(_DWORD)v7 )
      goto LABEL_20;
  }
  DestinationString.Buffer = (PWSTR)RtlAllocateHeap(
                                      *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                                      SmBaseTag,
                                      2LL * (unsigned int)(v7 + 3));
  Buffer = DestinationString.Buffer;
  if ( DestinationString.Buffer )
  {
    v9 = (unsigned int)(v7 + 1);
    memcpy_0(DestinationString.Buffer, *((const void **)a1 + 1), 2 * v9);
    v10 = DestinationString.Buffer;
    v11 = 2;
    DestinationString.Length = 2 * (v7 + 1);
    DestinationString.MaximumLength = 2 * (v7 + 2);
    if ( v6 && DestinationString.Buffer[v7] != 92 )
    {
      DestinationString.Buffer[v9] = 92;
      LODWORD(v7) = v7 + 1;
      ++DestinationString.Length;
      ++DestinationString.MaximumLength;
      v10 = DestinationString.Buffer;
    }
    v10[(unsigned int)(v7 + 1)] = 0;
    v14 = 48;
    p_DestinationString = &DestinationString;
    v15 = 0LL;
    v17 = 64;
    if ( v6 )
      v11 = 3;
    v18 = 0LL;
    if ( (int)SmpOpenTargetFile(&Handle, v11) >= 0 )
    {
      IsNotARedirection = SmpPathCanBeTrustedIsNotARedirection(Handle);
      if ( IsNotARedirection )
      {
        *a2 = Handle;
        goto LABEL_23;
      }
    }
    goto LABEL_20;
  }
LABEL_21:
  if ( Handle == (HANDLE)-1LL )
    goto LABEL_24;
  NtClose(Handle);
LABEL_23:
  Buffer = DestinationString.Buffer;
LABEL_24:
  if ( Buffer )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, DestinationString.Buffer);
  return IsNotARedirection;
}
