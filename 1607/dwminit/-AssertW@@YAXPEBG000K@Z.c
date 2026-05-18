/*
 * XREFs of ?AssertW@@YAXPEBG000K@Z @ 0x18000449C
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x18000429C (-MilInstrumentationBreak@@YAXK_N@Z.c)
 *     ?SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z @ 0x1800057C0 (-SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z.c)
 *     ?SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXI1FPEAJ@Z @ 0x180005970 (-SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXI1FPEAJ@Z.c)
 * Callees:
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18000442C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

void __fastcall AssertW(
        const unsigned __int16 *a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        unsigned int a5)
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
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  __int16 Response; // [rsp+A0h] [rbp+8h] BYREF
  const wchar_t *v20; // [rsp+B8h] [rbp+20h]

  v20 = a4;
  v5 = (const char *)&unk_18000A568;
  v7 = (const char *)&unk_18000A568;
  if ( a3 )
    v7 = ", ";
  v8 = (const wchar_t *)&unk_180009D08;
  if ( a3 )
  {
    v8 = a3;
    v5 = "Function: ";
  }
  v9 = (const wchar_t *)&unk_180009D08;
  v10 = (const wchar_t *)&unk_180009D08;
  if ( a2 )
    v9 = a2;
  if ( a1 )
    v10 = a1;
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = IsKernelDebuggerPresent();
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
        v16 = (const wchar_t *)&unk_180009D08;
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
        v20,
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
      if ( (char)Response == 103 )
        return;
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
    if ( (((char)Response - 66) & 0xFFFFFFDF) == 0 )
      break;
    switch ( (char)Response )
    {
      case 'G':
        return;
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
}
