/*
 * XREFs of ExpSystemErrorHandler2 @ 0x1403B3344
 * Callers:
 *     ExpSystemErrorHandler @ 0x14015CEC0 (ExpSystemErrorHandler.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSilo @ 0x1400436F0 (PsGetCurrentServerSilo.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x140092408 (RtlInitAnsiString.c)
 *     RtlStringCbPrintfA @ 0x140136BD4 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     strcat_s @ 0x140149810 (strcat_s.c)
 *     strcpy_s @ 0x1401498A4 (strcpy_s.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlUnicodeStringToAnsiString @ 0x1403B8140 (RtlUnicodeStringToAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403E1384 (RtlAnsiStringToUnicodeString.c)
 *     PsQuerySystemDllInfo @ 0x14044704C (PsQuerySystemDllInfo.c)
 *     RtlUnicodeStringToOemString @ 0x14049DCF8 (RtlUnicodeStringToOemString.c)
 *     RtlFindMessage @ 0x1404A12D4 (RtlFindMessage.c)
 *     MmLockPagableSectionByHandle @ 0x1404B6838 (MmLockPagableSectionByHandle.c)
 *     PoShutdownBugCheck @ 0x14063650C (PoShutdownBugCheck.c)
 *     PsTerminateServerSilo @ 0x14063FD38 (PsTerminateServerSilo.c)
 *     RtlxUnicodeStringToOemSize @ 0x140644BE0 (RtlxUnicodeStringToOemSize.c)
 */

LONG_PTR __fastcall ExpSystemErrorHandler2(
        ULONG_PTR BugCheckParameter1,
        unsigned int a2,
        int a3,
        _MESSAGE_RESOURCE_ENTRY *a4,
        char a5)
{
  unsigned int v7; // edi
  ULONG v8; // r15d
  __int64 i; // rbx
  char *v10; // r14
  char *v11; // rsi
  char *v12; // rbx
  __int64 SystemDllInfo; // rax
  void *v14; // r10
  unsigned __int64 v15; // rax
  int v16; // edi
  char *PoolWithTag; // rax
  __int64 v18; // rdi
  char *v19; // rax
  BYTE *Text; // r14
  __int64 v21; // rax
  unsigned int v22; // r13d
  char *v23; // rax
  char *v24; // rax
  int j; // edi
  char *v26; // rbx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  _QWORD *CurrentServerSilo; // rax
  __int64 v30; // rcx
  void *v31; // rdi
  int v33; // [rsp+40h] [rbp-208h]
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+68h] [rbp-1E0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-1D8h] BYREF
  const char *v36; // [rsp+80h] [rbp-1C8h]
  _STRING v37; // [rsp+88h] [rbp-1C0h] BYREF
  _STRING SourceString; // [rsp+98h] [rbp-1B0h] BYREF
  _STRING DestinationString; // [rsp+A8h] [rbp-1A0h] BYREF
  ULONG_PTR BugCheckParameter2[5]; // [rsp+B8h] [rbp-190h] BYREF
  char pszFormat[32]; // [rsp+E0h] [rbp-168h] BYREF
  char pszDest[256]; // [rsp+100h] [rbp-148h] BYREF

  v7 = a2;
  v8 = BugCheckParameter1;
  MessageResourceEntry = a4;
  if ( a2 > 5 )
    v7 = 5;
  LODWORD(v36) = v7;
  pszFormat[0] = 0;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  memmove(BugCheckParameter2, a4, 8LL * v7);
  DestinationString.Buffer = 0LL;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v33 = i;
    if ( (unsigned int)i >= v7 )
      break;
    if ( _bittest(&a3, i) )
    {
      strcat_s(pszFormat, 0x20uLL, " %s");
      if ( RtlUnicodeStringToAnsiString(&DestinationString, *((PCUNICODE_STRING *)&a4->Length + i), 1u) < 0 )
        BugCheckParameter2[(unsigned int)i] = (ULONG_PTR)L"???";
      else
        BugCheckParameter2[(unsigned int)i] = (ULONG_PTR)DestinationString.Buffer;
    }
    else
    {
      strcat_s(pszFormat, 0x20uLL, " %x");
    }
  }
  strcat_s(pszFormat, 0x20uLL, "\n");
  v10 = pszFormat;
  v11 = "Unknown Hard Error";
  v12 = "Unknown Hard Error";
  SystemDllInfo = PsQuerySystemDllInfo(0LL);
  if ( SystemDllInfo )
  {
    v14 = *(void **)(SystemDllInfo + 24);
    if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
      v14 = *(void **)(SystemDllInfo + 32);
    if ( RtlFindMessage(v14, 0xBu, (_BYTE)NlsMbCodePageTag != 0 ? 0x409 : 0, v8, &MessageResourceEntry) < 0 )
    {
      v12 = "Unknown Hard Error";
      v10 = "Unknown Hard Error";
      goto LABEL_45;
    }
    if ( (MessageResourceEntry->Flags & 1) != 0 )
    {
      RtlInitUnicodeString(&UnicodeString, (PCWSTR)MessageResourceEntry->Text);
      if ( (_BYTE)NlsMbCodePageTag )
        LOWORD(v15) = RtlxUnicodeStringToOemSize(&UnicodeString);
      else
        v15 = ((unsigned __int64)UnicodeString.Length + 2) >> 1;
      SourceString.Length = v15;
      v16 = (unsigned __int16)v15 + 16;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x20727245u);
      v12 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_24;
      SourceString.MaximumLength = v16;
      SourceString.Buffer = PoolWithTag;
      if ( RtlUnicodeStringToAnsiString(&SourceString, &UnicodeString, 0) < 0 )
      {
        ExFreePoolWithTag(v12, 0);
LABEL_24:
        v12 = "Unknown Hard Error";
        v19 = "Unknown Hard Error";
        v18 = -1LL;
        goto LABEL_31;
      }
      v18 = -1LL;
    }
    else
    {
      Text = MessageResourceEntry->Text;
      v18 = -1LL;
      v21 = -1LL;
      do
        ++v21;
      while ( Text[v21] );
      v22 = v21 + 16;
      v23 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(v21 + 16), 0x20727245u);
      v12 = v23;
      if ( !v23 )
      {
        v19 = "Unknown Hard Error";
        v12 = "Unknown Hard Error";
LABEL_31:
        if ( v12 == "Unknown Hard Error" )
        {
          j = v33;
        }
        else
        {
          v24 = v12;
          do
            ++v18;
          while ( v12[v18] );
          while ( (_DWORD)v18 && *v24 >= 32 )
          {
            ++v24;
            LODWORD(v18) = v18 - 1;
          }
          *v24 = 0;
          v19 = v24 + 1;
          for ( j = v18 - 1; j && *v19 && *v19 <= 32; --j )
            ++v19;
        }
        v10 = (char *)qword_1403AAAD0;
        if ( j )
          v10 = v19;
        goto LABEL_45;
      }
      strcpy_s(v23, v22, (const char *)Text);
    }
    v19 = pszFormat;
    goto LABEL_31;
  }
LABEL_45:
  if ( RtlStringCbPrintfA(pszDest, 0x100uLL, "\nSTOP: %lx %s\n", v8, v12) < 0 )
    RtlStringCbPrintfA(pszDest, 0x100uLL, "\nHardError %lx\n", v8);
  MmLockPagableSectionByHandle(ExPageLockHandle);
  v36 = "Unknown Hard Error";
  v26 = "Unknown Hard Error";
  MessageResourceEntry = (PMESSAGE_RESOURCE_ENTRY)"Unknown Hard Error";
  RtlInitAnsiString(&SourceString, pszDest);
  if ( RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u) >= 0 )
  {
    if ( (_BYTE)NlsMbOemCodePageTag )
      LOWORD(v27) = RtlxUnicodeStringToOemSize(&UnicodeString);
    else
      v27 = ((unsigned __int64)UnicodeString.Length + 2) >> 1;
    v37.Length = v27;
    v37.MaximumLength = v27;
    v11 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)v27, 0x20727245u);
    v37.Buffer = v11;
    v36 = v11;
    if ( v11 )
      RtlUnicodeStringToOemString(&v37, &UnicodeString, 0);
  }
  if ( RtlStringCbPrintfA(
         pszDest,
         0x100uLL,
         v10,
         BugCheckParameter2[0],
         BugCheckParameter2[1],
         BugCheckParameter2[2],
         BugCheckParameter2[3]) < 0 )
    RtlStringCbPrintfA(
      pszDest,
      0x100uLL,
      "Exception Processing Message %lx Parameters %Ix %Ix %Ix %Ix",
      v8,
      LODWORD(BugCheckParameter2[0]),
      LODWORD(BugCheckParameter2[1]),
      LODWORD(BugCheckParameter2[2]),
      LODWORD(BugCheckParameter2[3]));
  RtlInitAnsiString(&SourceString, pszDest);
  if ( RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u) >= 0 )
  {
    if ( (_BYTE)NlsMbOemCodePageTag )
      LOWORD(v28) = RtlxUnicodeStringToOemSize(&UnicodeString);
    else
      v28 = ((unsigned __int64)UnicodeString.Length + 2) >> 1;
    v37.Length = v28;
    v37.MaximumLength = v28;
    v26 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)v28, 0x20727245u);
    v37.Buffer = v26;
    if ( v26 )
      RtlUnicodeStringToOemString(&v37, &UnicodeString, 0);
  }
  CurrentServerSilo = PsGetCurrentServerSilo();
  v31 = CurrentServerSilo;
  if ( !CurrentServerSilo )
  {
    if ( a5 )
    {
      LOBYTE(v30) = 1;
      PoShutdownBugCheck(v30, 76LL, v8, BugCheckParameter2, v11, v26);
    }
    KeBugCheckEx(0x4Cu, v8, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v11, (ULONG_PTR)v26);
  }
  PsTerminateServerSilo(CurrentServerSilo, v8);
  return ObfDereferenceObject(v31);
}
