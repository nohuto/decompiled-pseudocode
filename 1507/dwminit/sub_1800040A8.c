/*
 * XREFs of sub_1800040A8 @ 0x1800040A8
 * Callers:
 *     sub_180003EA8 @ 0x180003EA8 (sub_180003EA8.c)
 *     sub_180005050 @ 0x180005050 (sub_180005050.c)
 *     sub_1800051B0 @ 0x1800051B0 (sub_1800051B0.c)
 * Callees:
 *     sub_180004038 @ 0x180004038 (sub_180004038.c)
 */

__int64 __fastcall sub_1800040A8(const wchar_t *a1, const wchar_t *a2, const wchar_t *a3, const wchar_t *a4, int a5)
{
  const char *v5; // rbp
  const char *v7; // r14
  const wchar_t *v8; // r15
  const wchar_t *v9; // r12
  const wchar_t *v10; // r13
  int v12; // eax
  int v13; // ebx
  BOOL v14; // eax
  char v15; // cl
  const wchar_t *v16; // rax
  __int64 result; // rax
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  __int16 Response; // [rsp+A0h] [rbp+8h] BYREF
  const wchar_t *v21; // [rsp+B8h] [rbp+20h]

  v21 = a4;
  v5 = (const char *)&unk_1800092D8;
  v7 = (const char *)&unk_1800092D8;
  if ( a3 )
    v7 = ", ";
  v8 = (const wchar_t *)&unk_1800089CC;
  if ( a3 )
  {
    v8 = a3;
    v5 = "Function: ";
  }
  v9 = (const wchar_t *)&unk_1800089CC;
  v10 = (const wchar_t *)&unk_1800089CC;
  if ( a2 )
    v9 = a2;
  if ( a1 )
    v10 = a1;
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = sub_180004038();
      Response = 63;
      v13 = v12;
      if ( !v12 )
      {
        v14 = IsDebuggerPresent();
        v15 = Response;
        if ( v14 )
          v15 = 103;
        LOBYTE(Response) = v15;
      }
      if ( !a1 || (v16 = L"\n***  ", !a2) )
        v16 = (const wchar_t *)&unk_1800089CC;
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        v10,
        v16,
        v9,
        v5,
        v8,
        v7,
        v21,
        a5);
      if ( !v13 )
      {
        DbgPrintEx(
          0x65u,
          0,
          "(No kernel debugger is present.) Respond with:\n"
          "  g                    -- Go (continue)\n"
          "  eb 0x%p 'p';g  -- terminate Process\n"
          "  eb 0x%p 't';g  -- terminate Thread\n"
          " or regular debugging.\n",
          &Response,
          &Response);
        __debugbreak();
      }
      DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
      if ( (char)Response <= 98 )
        break;
      result = 103LL;
      if ( (char)Response == 103 )
        return result;
      if ( (char)Response != 105 )
      {
        if ( (char)Response != 112 )
        {
          if ( (char)Response != 116 )
            goto LABEL_32;
LABEL_30:
          CurrentThread = GetCurrentThread();
          TerminateThread(CurrentThread, 0xC0000001);
          goto LABEL_32;
        }
LABEL_31:
        CurrentProcess = GetCurrentProcess();
        TerminateProcess(CurrentProcess, 0xC0000001);
        goto LABEL_32;
      }
LABEL_33:
      DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
    }
    result = (unsigned int)((char)Response - 66);
    if ( (result & 0xFFFFFFDF) == 0 )
      break;
    switch ( (char)Response )
    {
      case 'G':
        return result;
      case 'I':
        goto LABEL_33;
      case 'P':
        goto LABEL_31;
      case 'T':
        goto LABEL_30;
    }
LABEL_32:
    DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
  }
  __debugbreak();
  return result;
}
