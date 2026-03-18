/*
 * XREFs of ?AssertW@@YAXPEBG000K@Z @ 0x140005564
 * Callers:
 *     ?SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z @ 0x140001640 (-SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z.c)
 *     ?SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXI1FPEAJ@Z @ 0x140004FC0 (-SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXI1FPEAJ@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x140005860 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1400057F4 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

void __fastcall AssertW(
        const unsigned __int16 *a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        unsigned int a5)
{
  unsigned int v5; // r15d
  int v10; // eax
  int v11; // ebx
  BOOL v12; // eax
  char v13; // cl
  const char *v14; // rdx
  const wchar_t *v15; // r8
  const char *v16; // r10
  const wchar_t *v17; // rcx
  const wchar_t *v18; // rax
  const wchar_t *v19; // r9
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  __int16 Response; // [rsp+90h] [rbp+8h] BYREF

  v5 = a5;
  while ( 1 )
  {
    v10 = IsKernelDebuggerPresent();
    Response = 63;
    v11 = v10;
    if ( !v10 )
    {
      v12 = IsDebuggerPresent();
      v13 = Response;
      if ( v12 )
        v13 = 103;
      LOBYTE(Response) = v13;
    }
    if ( a3 )
    {
      v14 = ", ";
      v15 = a3;
      v16 = "Function: ";
    }
    else
    {
      v14 = (const char *)&unk_140007818;
      v15 = (const wchar_t *)&unk_14000742C;
      v16 = (const char *)&unk_140007818;
    }
    v17 = (const wchar_t *)&unk_14000742C;
    if ( a2 )
      v17 = a2;
    if ( !a1 || (v18 = L"\n***  ", !a2) )
      v18 = (const wchar_t *)&unk_14000742C;
    v19 = (const wchar_t *)&unk_14000742C;
    if ( a1 )
      v19 = a1;
    DbgPrintEx(
      0x65u,
      0,
      "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
      v19,
      v18,
      v17,
      v16,
      v15,
      v14,
      a4,
      v5);
    if ( !v11 )
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
    switch ( (char)Response )
    {
      case 'B':
      case 'b':
        __debugbreak();
        return;
      case 'G':
      case 'g':
        return;
      case 'I':
      case 'i':
        DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
        continue;
      case 'P':
      case 'p':
        CurrentProcess = GetCurrentProcess();
        TerminateProcess(CurrentProcess, 0xC0000001);
        goto LABEL_23;
      case 'T':
      case 't':
        CurrentThread = GetCurrentThread();
        TerminateThread(CurrentThread, 0xC0000001);
        goto LABEL_23;
      default:
LABEL_23:
        DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
        break;
    }
  }
}
