/*
 * XREFs of LdrpInitializeApplicationVerifierPackage @ 0x1800CADEC
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800902B4 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x18002F010 (RtlCompareUnicodeStrings.c)
 *     RtlQueryImageFileKeyOption @ 0x18007D1E0 (RtlQueryImageFileKeyOption.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 *     AVrfInitializeVerifier @ 0x1800CDFDC (AVrfInitializeVerifier.c)
 */

__int64 __fastcall LdrpInitializeApplicationVerifierPackage(
        unsigned __int16 *a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v9; // esi
  int v10; // eax
  unsigned __int16 *v11; // rdi
  unsigned __int16 v12; // r14
  __int64 result; // rax
  _DWORD *v14; // rcx
  int v15; // eax
  int *v16; // rdx
  int v17; // edi
  int ImageFileKeyOption; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF

  v9 = (int)a1;
  if ( MEMORY[0x7FFE02EC] )
  {
    *(_DWORD *)(a2 + 188) &= 0xFDFFFEFF;
  }
  else
  {
    if ( !a3 )
      goto LABEL_26;
    v10 = *a1;
    v11 = (unsigned __int16 *)(*((_QWORD *)a1 + 1) + *a1);
    if ( *a1 )
    {
      do
      {
        if ( *(v11 - 1) == 92 )
          break;
        --v11;
        v10 -= 2;
      }
      while ( v10 );
    }
    v12 = *a1 - v10;
    RtlInitUnicodeString(&DestinationString, L"SPPsvc.exe");
    if ( (unsigned int)RtlCompareUnicodeStrings(
                         v11,
                         (unsigned __int64)v12 >> 1,
                         (__int64)DestinationString.Buffer,
                         (unsigned __int64)DestinationString.Length >> 1,
                         1) )
    {
LABEL_26:
      if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 )
      {
        LOBYTE(a1) = a3;
        LdrpShouldCreateStackTraceDb = 1;
        result = AVrfInitializeVerifier((_DWORD)a1, v9, a4, 0, a5, a6);
        if ( (int)result < 0 )
        {
          v14 = RtlpDebugPageHeapTable;
          *(_DWORD *)(a2 + 188) &= 0xFDFFFEFF;
          dword_1801420A8 = 0;
          *v14 = 0;
          return result;
        }
      }
      v15 = *(_DWORD *)(a2 + 188);
      if ( (v15 & 0x2000000) != 0 )
      {
        v16 = (int *)RtlpDebugPageHeapTable;
        *(_DWORD *)(a2 + 188) = v15 & 0xFFFF670F;
        LdrpShouldCreateStackTraceDb = 1;
        v17 = *v16;
        *v16 = -1;
        if ( a4 )
        {
          ImageFileKeyOption = RtlQueryImageFileKeyOption(a4, (__int64)L"PageHeapFlags", 4, v16, 4u, 0LL);
          v16 = (int *)RtlpDebugPageHeapTable;
          if ( ImageFileKeyOption < 0 )
            *(_DWORD *)RtlpDebugPageHeapTable = -1;
        }
        if ( *v16 == -1 )
          *v16 = v17;
        if ( (((*v16 & 0x400) != 0) & _bittest(&AVrfpVerifierFlags, 0xFu)) != 0 )
        {
          if ( (LdrpDebugFlags & 5) != 0 )
          {
            LdrpLogDbgPrint(
              (unsigned int)"minkernel\\ntdll\\ldrinit.c",
              6426,
              "LdrpInitializeApplicationVerifierPackage",
              2,
              "Per-DLL page heap is disabled since fast fill heap is enabled\n");
            v16 = (int *)RtlpDebugPageHeapTable;
          }
          *v16 &= ~0x400u;
        }
        dword_1801420A8 = 1;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 188) &= 0xFDFFFEFF;
    }
  }
  return 0LL;
}
