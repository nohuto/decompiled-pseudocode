/*
 * XREFs of EtwpBuildProcessEvent @ 0x140449F40
 * Callers:
 *     EtwTraceProcess @ 0x1404497E4 (EtwTraceProcess.c)
 *     EtwpTraceProcessRundown @ 0x140500BA4 (EtwpTraceProcessRundown.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     ObFastDereferenceObject @ 0x140043280 (ObFastDereferenceObject.c)
 *     RtlInitAnsiString @ 0x140092408 (RtlInitAnsiString.c)
 *     RtlUnicodeStringToAnsiString @ 0x1403B8140 (RtlUnicodeStringToAnsiString.c)
 *     SeQueryInformationToken @ 0x1403FE580 (SeQueryInformationToken.c)
 *     PsReferencePrimaryToken @ 0x140412C90 (PsReferencePrimaryToken.c)
 *     EtwpQueryTokenPackageInfo @ 0x14044A220 (EtwpQueryTokenPackageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x14044A2DC (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryProcessCommandLine @ 0x14044A314 (EtwpQueryProcessCommandLine.c)
 */

unsigned int *__fastcall EtwpBuildProcessEvent(
        PEPROCESS Process,
        __int16 a2,
        char a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6,
        unsigned int *a7,
        PSIZE_T PackageSize,
        PANSI_STRING DestinationString,
        unsigned __int16 *a10,
        _QWORD *TokenInformation)
{
  _QWORD *v14; // r12
  int Next; // eax
  int *v16; // rbx
  unsigned int v17; // ebp
  unsigned __int64 v18; // rax
  int v19; // eax
  PACCESS_TOKEN v20; // rdi
  NTSTATUS InformationToken; // ebx
  PVOID v22; // rdx
  int v23; // ecx
  char *v24; // rbx
  __int64 Length; // rdi
  unsigned __int16 v26; // ax
  __int64 v27; // rax
  unsigned int v28; // ebp
  __int64 v29; // rdx
  int v30; // ecx
  unsigned int v31; // ecx
  __int64 v32; // rdx
  unsigned int v33; // ebp
  unsigned int *result; // rax
  const UNICODE_STRING *v35; // rdx
  char *Buffer; // rax
  __int64 v37; // rcx

  RtlInitAnsiString(DestinationString, 0LL);
  v14 = TokenInformation;
  *(_QWORD *)a4 = Process;
  *(_DWORD *)(a4 + 8) = Process[1].Header.WaitListHead.Blink;
  Next = (int)Process[1].SwapListEntry.Next;
  *v14 = 0LL;
  *(_DWORD *)(a4 + 12) = Next;
  *(_DWORD *)(a4 + 16) = MmGetSessionIdEx(Process);
  v16 = (int *)(a4 + 32);
  *(_DWORD *)(a4 + 20) = HIDWORD(Process[2].Affinity.Bitmap[2]);
  v17 = 4;
  v18 = Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(a4 + 32) = 0;
  *(_QWORD *)(a4 + 24) = v18;
  v19 = 0;
  if ( Process[1].ActiveProcessors.Bitmap[7] )
    v19 = 2;
  *v16 = v19;
  if ( (BYTE2(Process[2].SwapListEntry.Next) & 7) != 0 )
    *v16 |= 4u;
  *(_DWORD *)(a6 + 12) = 0;
  *(_QWORD *)a6 = a4;
  *(_DWORD *)(a6 + 8) = 36;
  v20 = PsReferencePrimaryToken(Process);
  EtwpQueryTokenPackageInfo(v20, PackageSize);
  InformationToken = SeQueryInformationToken(v20, TokenUser, (PVOID *)&TokenInformation);
  ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v20);
  if ( InformationToken < 0 )
  {
    v23 = 4;
    v22 = &EtwpNull;
  }
  else
  {
    v22 = TokenInformation;
    *v14 = TokenInformation;
    v23 = 4 * *(unsigned __int8 *)(*(_QWORD *)v22 + 1LL) + 24;
  }
  *(_QWORD *)(a6 + 16) = v22;
  *(_DWORD *)(a6 + 28) = 0;
  v24 = (char *)&Process[1].ActiveProcessors.Bitmap[12];
  Length = -1LL;
  *(_DWORD *)(a6 + 24) = v23;
  do
    ++Length;
  while ( v24[Length] );
  if ( (_DWORD)Length == 14 )
  {
    v35 = (const UNICODE_STRING *)Process[1].ActiveProcessors.Bitmap[15];
    if ( v35->Length )
    {
      if ( RtlUnicodeStringToAnsiString(DestinationString, v35, 1u) >= 0 )
      {
        Length = DestinationString->Length;
        Buffer = DestinationString->Buffer;
        v24 = &Buffer[Length];
        while ( v24 != Buffer )
        {
          if ( *--v24 == 92 )
          {
            ++v24;
            break;
          }
        }
        LODWORD(Length) = (_DWORD)Buffer - (_DWORD)v24 + Length;
      }
    }
  }
  *(_DWORD *)(a6 + 40) = Length;
  *(_QWORD *)(a6 + 32) = v24;
  *(_DWORD *)(a6 + 44) = 0;
  *(_QWORD *)(a6 + 48) = &EtwpNull;
  *(_QWORD *)(a6 + 56) = 1LL;
  if ( a3 )
    EtwpQueryProcessOtherInfo(Process, a5);
  else
    *a5 = 0LL;
  *a10 = 0;
  if ( Process[1].ActiveProcessors.Bitmap[1] )
  {
    if ( a3 )
    {
      EtwpQueryProcessCommandLine(Process, a10);
      v26 = *a10;
      if ( *a10 )
      {
        v17 = 5;
        *(_QWORD *)(a6 + 64) = *((_QWORD *)a10 + 1);
        *(_QWORD *)(a6 + 72) = v26;
      }
    }
  }
  v27 = v17;
  v28 = v17 + 1;
  v27 *= 2LL;
  v29 = 2LL * v28;
  *(_QWORD *)(a6 + 8 * v27) = &EtwpNull;
  *(_QWORD *)(a6 + 8 * v27 + 8) = 2LL;
  v30 = *(_DWORD *)PackageSize;
  *(_QWORD *)(a6 + 8 * v29) = PackageSize + 2;
  *(_DWORD *)(a6 + 8 * v29 + 8) = v30;
  *(_DWORD *)(a6 + 8 * v29 + 12) = 0;
  v31 = *((_DWORD *)PackageSize + 2);
  v32 = v28 + 1;
  v33 = v28 + 2;
  v32 *= 2LL;
  *(_QWORD *)(a6 + 8 * v32) = PackageSize + 34;
  *(_QWORD *)(a6 + 8 * v32 + 8) = v31;
  if ( a2 == 807 )
  {
    v37 = 2LL * v33++;
    *(_QWORD *)(a6 + 8 * v37) = (char *)Process + 1664;
    *(_QWORD *)(a6 + 8 * v37 + 8) = 8LL;
  }
  result = a7;
  *a7 = v33;
  return result;
}
