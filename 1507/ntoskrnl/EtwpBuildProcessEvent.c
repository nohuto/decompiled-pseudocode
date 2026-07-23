/*
 * XREFs of EtwpBuildProcessEvent @ 0x14050CB64
 * Callers:
 *     EtwpTraceProcessRundown @ 0x14041C47C (EtwpTraceProcessRundown.c)
 *     EtwTraceProcess @ 0x14050C208 (EtwTraceProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     RtlInitAnsiString @ 0x1400F001C (RtlInitAnsiString.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     RtlUnicodeStringToAnsiString @ 0x1404FF2E0 (RtlUnicodeStringToAnsiString.c)
 *     EtwpQueryProcessCommandLine @ 0x14050C998 (EtwpQueryProcessCommandLine.c)
 *     EtwpQueryProcessOtherInfo @ 0x14050CB2C (EtwpQueryProcessOtherInfo.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     EtwpQueryTokenPackageInfo @ 0x14050D82C (EtwpQueryTokenPackageInfo.c)
 */

unsigned int *__fastcall EtwpBuildProcessEvent(
        PEPROCESS Process,
        __int16 a2,
        char a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6,
        unsigned int *a7,
        ULONG_PTR *PackageSize,
        PANSI_STRING DestinationString,
        _WORD *a10,
        PVOID *a11)
{
  PANSI_STRING v11; // r15
  PVOID *v15; // r12
  int Next; // eax
  int *v17; // rbx
  unsigned int v18; // ebp
  unsigned __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rsi
  PACCESS_TOKEN v22; // rdi
  NTSTATUS v23; // ebx
  PVOID v24; // rdx
  int v25; // ecx
  char *v26; // rbx
  __int64 Length; // rdi
  __int64 v28; // rbx
  unsigned __int16 v29; // ax
  ULONG_PTR *v30; // r8
  __int64 v31; // rax
  unsigned int v32; // ebp
  __int64 v33; // rdx
  int v34; // ecx
  unsigned int v35; // ecx
  __int64 v36; // rdx
  unsigned int v37; // ebp
  unsigned int *result; // rax
  const UNICODE_STRING *v39; // rdx
  char *Buffer; // rax
  __int64 v41; // rcx
  PVOID TokenInformation; // [rsp+60h] [rbp+8h] BYREF
  __int16 v43; // [rsp+68h] [rbp+10h]

  v43 = a2;
  v11 = DestinationString;
  RtlInitAnsiString(DestinationString, 0LL);
  v15 = a11;
  *(_QWORD *)a4 = Process;
  *(_DWORD *)(a4 + 8) = Process[1].Header.WaitListHead.Blink;
  Next = (int)Process[1].SwapListEntry.Next;
  *v15 = 0LL;
  *(_DWORD *)(a4 + 12) = Next;
  *(_DWORD *)(a4 + 16) = MmGetSessionIdEx(Process);
  v17 = (int *)(a4 + 32);
  *(_DWORD *)(a4 + 20) = HIDWORD(Process[2].Affinity.Bitmap[1]);
  v18 = 4;
  v19 = Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(a4 + 32) = 0;
  *(_QWORD *)(a4 + 24) = v19;
  v20 = 0;
  if ( Process[1].ActiveProcessors.Bitmap[7] )
    v20 = 2;
  *v17 = v20;
  if ( (BYTE2(Process[2].ReadyListHead.Blink) & 7) != 0 )
    *v17 |= 4u;
  v21 = a6;
  *(_DWORD *)(a6 + 12) = 0;
  *(_QWORD *)v21 = a4;
  *(_DWORD *)(v21 + 8) = 36;
  v22 = PsReferencePrimaryToken(Process);
  EtwpQueryTokenPackageInfo(v22, PackageSize);
  v23 = SeQueryInformationToken(v22, TokenUser, &TokenInformation);
  ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v22);
  if ( v23 < 0 )
  {
    v25 = 4;
    TokenInformation = &EtwpNull;
    v24 = &EtwpNull;
  }
  else
  {
    v24 = TokenInformation;
    *v15 = TokenInformation;
    v25 = 4 * *(unsigned __int8 *)(*(_QWORD *)v24 + 1LL) + 24;
  }
  *(_QWORD *)(v21 + 16) = v24;
  *(_DWORD *)(v21 + 28) = 0;
  v26 = (char *)&Process[1].ActiveProcessors.Bitmap[11];
  Length = -1LL;
  *(_DWORD *)(v21 + 24) = v25;
  do
    ++Length;
  while ( v26[Length] );
  if ( (_DWORD)Length == 14 )
  {
    v39 = (const UNICODE_STRING *)Process[1].ActiveProcessors.Bitmap[14];
    if ( v39->Length )
    {
      if ( RtlUnicodeStringToAnsiString(v11, v39, 1u) >= 0 )
      {
        Length = v11->Length;
        Buffer = v11->Buffer;
        v26 = &Buffer[Length];
        while ( v26 != Buffer )
        {
          if ( *--v26 == 92 )
          {
            ++v26;
            break;
          }
        }
        LODWORD(Length) = (_DWORD)Buffer - (_DWORD)v26 + Length;
      }
    }
  }
  *(_DWORD *)(v21 + 40) = Length;
  *(_QWORD *)(v21 + 32) = v26;
  *(_DWORD *)(v21 + 44) = 0;
  *(_QWORD *)(v21 + 48) = &EtwpNull;
  *(_QWORD *)(v21 + 56) = 1LL;
  if ( a3 )
    EtwpQueryProcessOtherInfo((__int64)Process, (__int64)a5);
  else
    *a5 = 0LL;
  v28 = (__int64)a10;
  *a10 = 0;
  if ( Process[1].ActiveProcessors.Bitmap[1] )
  {
    if ( a3 )
    {
      EtwpQueryProcessCommandLine((__int64)Process, v28);
      v29 = *(_WORD *)v28;
      if ( *(_WORD *)v28 )
      {
        v18 = 5;
        *(_QWORD *)(v21 + 64) = *(_QWORD *)(v28 + 8);
        *(_QWORD *)(v21 + 72) = v29;
      }
    }
  }
  v30 = PackageSize;
  v31 = v18;
  v32 = v18 + 1;
  v31 *= 2LL;
  v33 = 2LL * v32;
  *(_QWORD *)(v21 + 8 * v31) = &EtwpNull;
  *(_QWORD *)(v21 + 8 * v31 + 8) = 2LL;
  v34 = *(_DWORD *)v30;
  *(_QWORD *)(v21 + 8 * v33) = v30 + 2;
  *(_DWORD *)(v21 + 8 * v33 + 8) = v34;
  *(_DWORD *)(v21 + 8 * v33 + 12) = 0;
  v35 = *((_DWORD *)v30 + 2);
  v36 = v32 + 1;
  v37 = v32 + 2;
  v36 *= 2LL;
  *(_QWORD *)(v21 + 8 * v36) = v30 + 34;
  *(_QWORD *)(v21 + 8 * v36 + 8) = v35;
  if ( v43 == 807 )
  {
    v41 = 2LL * v37++;
    *(_QWORD *)(v21 + 8 * v41) = (char *)Process + 1656;
    *(_QWORD *)(v21 + 8 * v41 + 8) = 8LL;
  }
  result = a7;
  *a7 = v37;
  return result;
}
