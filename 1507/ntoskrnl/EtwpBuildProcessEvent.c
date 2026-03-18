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
        int *a8,
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
  PACCESS_TOKEN v22; // rax
  __int64 v23; // r8
  void *v24; // rdi
  NTSTATUS v25; // ebx
  PVOID v26; // rdx
  int v27; // ecx
  char *v28; // rbx
  __int64 Length; // rdi
  __int64 v30; // rbx
  unsigned __int16 v31; // ax
  int *v32; // r8
  __int64 v33; // rax
  unsigned int v34; // ebp
  __int64 v35; // rdx
  int v36; // ecx
  unsigned int v37; // ecx
  __int64 v38; // rdx
  unsigned int v39; // ebp
  unsigned int *result; // rax
  const UNICODE_STRING *v41; // rdx
  char *Buffer; // rax
  __int64 v43; // rcx
  PVOID TokenInformation; // [rsp+60h] [rbp+8h] BYREF
  __int16 v45; // [rsp+68h] [rbp+10h]

  v45 = a2;
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
  v23 = a4 + 32;
  v24 = v22;
  EtwpQueryTokenPackageInfo(v22, a8, v23);
  v25 = SeQueryInformationToken(v24, TokenUser, &TokenInformation);
  ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v24);
  if ( v25 < 0 )
  {
    v27 = 4;
    TokenInformation = &EtwpNull;
    v26 = &EtwpNull;
  }
  else
  {
    v26 = TokenInformation;
    *v15 = TokenInformation;
    v27 = 4 * *(unsigned __int8 *)(*(_QWORD *)v26 + 1LL) + 24;
  }
  *(_QWORD *)(v21 + 16) = v26;
  *(_DWORD *)(v21 + 28) = 0;
  v28 = (char *)&Process[1].ActiveProcessors.Bitmap[11];
  Length = -1LL;
  *(_DWORD *)(v21 + 24) = v27;
  do
    ++Length;
  while ( v28[Length] );
  if ( (_DWORD)Length == 14 )
  {
    v41 = (const UNICODE_STRING *)Process[1].ActiveProcessors.Bitmap[14];
    if ( v41->Length )
    {
      if ( RtlUnicodeStringToAnsiString(v11, v41, 1u) >= 0 )
      {
        Length = v11->Length;
        Buffer = v11->Buffer;
        v28 = &Buffer[Length];
        while ( v28 != Buffer )
        {
          if ( *--v28 == 92 )
          {
            ++v28;
            break;
          }
        }
        LODWORD(Length) = (_DWORD)Buffer - (_DWORD)v28 + Length;
      }
    }
  }
  *(_DWORD *)(v21 + 40) = Length;
  *(_QWORD *)(v21 + 32) = v28;
  *(_DWORD *)(v21 + 44) = 0;
  *(_QWORD *)(v21 + 48) = &EtwpNull;
  *(_QWORD *)(v21 + 56) = 1LL;
  if ( a3 )
    EtwpQueryProcessOtherInfo((__int64)Process, (__int64)a5);
  else
    *a5 = 0LL;
  v30 = (__int64)a10;
  *a10 = 0;
  if ( Process[1].ActiveProcessors.Bitmap[1] )
  {
    if ( a3 )
    {
      EtwpQueryProcessCommandLine((__int64)Process, v30);
      v31 = *(_WORD *)v30;
      if ( *(_WORD *)v30 )
      {
        v18 = 5;
        *(_QWORD *)(v21 + 64) = *(_QWORD *)(v30 + 8);
        *(_QWORD *)(v21 + 72) = v31;
      }
    }
  }
  v32 = a8;
  v33 = v18;
  v34 = v18 + 1;
  v33 *= 2LL;
  v35 = 2LL * v34;
  *(_QWORD *)(v21 + 8 * v33) = &EtwpNull;
  *(_QWORD *)(v21 + 8 * v33 + 8) = 2LL;
  v36 = *v32;
  *(_QWORD *)(v21 + 8 * v35) = v32 + 4;
  *(_DWORD *)(v21 + 8 * v35 + 8) = v36;
  *(_DWORD *)(v21 + 8 * v35 + 12) = 0;
  v37 = v32[2];
  v38 = v34 + 1;
  v39 = v34 + 2;
  v38 *= 2LL;
  *(_QWORD *)(v21 + 8 * v38) = v32 + 68;
  *(_QWORD *)(v21 + 8 * v38 + 8) = v37;
  if ( v45 == 807 )
  {
    v43 = 2LL * v39++;
    *(_QWORD *)(v21 + 8 * v43) = (char *)Process + 1656;
    *(_QWORD *)(v21 + 8 * v43 + 8) = 8LL;
  }
  result = a7;
  *a7 = v39;
  return result;
}
