/*
 * XREFs of ?UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE_TYPE@@PEAKPEAH@Z @ 0x1C0072C5C
 * Callers:
 *     xxxUserProcessCallout @ 0x1C0021AA0 (xxxUserProcessCallout.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall UserProcessImmersiveType(
        struct _WIN32_PROCESS_CALLOUT_PARAMETERS *a1,
        void *a2,
        enum _PROCESS_IMMERSIVE_TYPE *a3,
        PVOID *a4,
        int *a5)
{
  NTSTATUS result; // eax
  void *ProcessSectionBaseAddress; // rax
  PIMAGE_NT_HEADERS v11; // rax
  WORD NumberOfSections; // cx
  WORD v13; // ax
  void *v14; // rdi
  __int64 v15; // rdi
  char v16[4]; // [rsp+20h] [rbp-38h] BYREF
  WORD v17; // [rsp+24h] [rbp-34h]
  WORD v18; // [rsp+28h] [rbp-30h]
  PVOID TokenInformation[5]; // [rsp+2Ch] [rbp-2Ch] BYREF

  result = SeQueryInformationToken(a2, TokenAppContainerNumber, a4);
  if ( result >= 0 )
  {
    result = SeQueryInformationToken(a2, TokenIntegrityLevel, TokenInformation);
    if ( result >= 0 )
    {
      PsQueryProcessAttributesByToken(a2, v16, 0LL);
      *a5 = (unsigned __int8)v16[0];
      if ( (*((_DWORD *)a1 + 2) & 2) != 0 )
      {
        ProcessSectionBaseAddress = (void *)PsGetProcessSectionBaseAddress(*(_QWORD *)a1);
        v11 = RtlImageNtHeader(ProcessSectionBaseAddress);
        if ( !v11 )
          return -1073741823;
        *(PVOID *)((char *)TokenInformation + 4) = (char *)&v11->OptionalHeader + v11->FileHeader.SizeOfOptionalHeader;
        NumberOfSections = v11->FileHeader.NumberOfSections;
        v18 = NumberOfSections;
        v13 = 0;
        LOBYTE(v14) = BYTE4(TokenInformation[0]);
        while ( 1 )
        {
          v17 = v13;
          if ( v13 >= NumberOfSections )
            break;
          if ( ((unsigned __int8)v14 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v15 = *(__int64 *)((char *)TokenInformation + 4);
          if ( RtlCompareMemory(*(const void **)((char *)TokenInformation + 4), ".imrsiv", 8uLL) == 8 )
          {
            if ( *(_DWORD *)a4 )
            {
              *a5 = 1;
              *(_DWORD *)a3 = 1;
              return 0;
            }
            else if ( LODWORD(TokenInformation[0]) < 0x2000 )
            {
              return -1073741823;
            }
            else
            {
              *(_DWORD *)a3 = 2;
              return 0;
            }
          }
          v14 = (void *)(v15 + 40);
          *(PVOID *)((char *)TokenInformation + 4) = v14;
          v13 = v17 + 1;
          NumberOfSections = v18;
        }
      }
      if ( *a5 )
      {
        if ( *(_DWORD *)a4 )
          *(_DWORD *)a3 = 1;
        else
          *a5 = 0;
      }
      return 0;
    }
  }
  return result;
}
