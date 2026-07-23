/*
 * XREFs of LdrpInitializeApplicationVerifierPackage @ 0x1800BE14C
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800BE35C (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x180035820 (RtlCompareUnicodeStrings.c)
 *     RtlQueryImageFileKeyOption @ 0x180071510 (RtlQueryImageFileKeyOption.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 *     AVrfInitializeVerifier @ 0x1800C4CAC (AVrfInitializeVerifier.c)
 */

__int64 __fastcall LdrpInitializeApplicationVerifierPackage(
        unsigned __int16 *a1,
        __int64 a2,
        char a3,
        void *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int16 *v9; // rsi
  int v10; // eax
  const WCHAR *v11; // rdi
  unsigned __int16 v12; // r14
  __int64 result; // rax
  _DWORD *v14; // rcx
  int v15; // eax
  ULONG *v16; // rdx
  ULONG v17; // edi
  NTSTATUS ImageFileKeyOption; // eax
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF

  v9 = a1;
  if ( MEMORY[0x7FFE02EC] )
  {
    *(_DWORD *)(a2 + 188) &= 0xFDFFFEFF;
  }
  else
  {
    if ( !a3 )
      goto LABEL_26;
    v10 = *a1;
    v11 = (const WCHAR *)(*((_QWORD *)a1 + 1) + *a1);
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
    if ( RtlCompareUnicodeStrings(
           v11,
           (unsigned __int64)v12 >> 1,
           DestinationString.Buffer,
           (unsigned __int64)DestinationString.Length >> 1,
           1u) )
    {
LABEL_26:
      if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 )
      {
        LOBYTE(a1) = a3;
        LdrpShouldCreateStackTraceDb = 1;
        result = AVrfInitializeVerifier(a1, v9, a4, 0LL, a5, a6);
        if ( (int)result < 0 )
        {
          v14 = RtlpDebugPageHeapTable;
          *(_DWORD *)(a2 + 188) &= 0xFDFFFEFF;
          dword_180143C88 = 0;
          *v14 = 0;
          return result;
        }
      }
      v15 = *(_DWORD *)(a2 + 188);
      if ( (v15 & 0x2000000) != 0 )
      {
        v16 = (ULONG *)RtlpDebugPageHeapTable;
        *(_DWORD *)(a2 + 188) = v15 & 0xFFFF670F;
        LdrpShouldCreateStackTraceDb = 1;
        v17 = *v16;
        *v16 = -1;
        if ( a4 )
        {
          ImageFileKeyOption = RtlQueryImageFileKeyOption(a4, L"PageHeapFlags", 4, v16, 4u, 0LL);
          v16 = (ULONG *)RtlpDebugPageHeapTable;
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
              6427,
              "LdrpInitializeApplicationVerifierPackage",
              2,
              "Per-DLL page heap is disabled since fast fill heap is enabled\n");
            v16 = (ULONG *)RtlpDebugPageHeapTable;
          }
          *v16 &= ~0x400u;
        }
        dword_180143C88 = 1;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 188) &= 0xFDFFFEFF;
    }
  }
  return 0LL;
}
