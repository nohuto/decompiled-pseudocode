/*
 * XREFs of ?AssertW@@YAXPEBG000K@Z @ 0x1800BF324
 * Callers:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?AddRef@CHwDisplayRenderTarget@@UEAAKXZ @ 0x18002D950 (-AddRef@CHwDisplayRenderTarget@@UEAAKXZ.c)
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x180045FB0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 *     ?ResolveSourceReference@CExpression@@UEAAJIPEAIPEAPEAVCResource@@@Z @ 0x18008B6D0 (-ResolveSourceReference@CExpression@@UEAAJIPEAIPEAPEAVCResource@@@Z.c)
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x18008BE10 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 *     ?AddRef@CResource@@UEAAKXZ @ 0x18008DE90 (-AddRef@CResource@@UEAAKXZ.c)
 *     ?GetD2DContext@CSwRenderTargetGetBounds@@UEAAJPEAPEAVID2DContext@@@Z @ 0x18008FDC0 (-GetD2DContext@CSwRenderTargetGetBounds@@UEAAJPEAPEAVID2DContext@@@Z.c)
 *     ?UpdateData@?$CMrowWriter@USharedBufferDataFlipChain@@@@QEAAJPEAUSharedBufferDataFlipChain@@@Z @ 0x1800A9470 (-UpdateData@-$CMrowWriter@USharedBufferDataFlipChain@@@@QEAAJPEAUSharedBufferDataFlipChain@@@Z.c)
 *     ?GetPrimaryVBlankRateAndPeriod@@YAJPEAU_UNSIGNED_RATIO@@PEA_K@Z @ 0x1800B5A8C (-GetPrimaryVBlankRateAndPeriod@@YAJPEAU_UNSIGNED_RATIO@@PEA_K@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1801695EC (-MilInstrumentationBreak@@YAXK_N@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x18016967C (-MilUnexpectedError@@YAXJPEBG@Z.c)
 * Callees:
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18016957C (-IsKernelDebuggerPresent@@YAHXZ.c)
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
  const wchar_t *v14; // r9
  const wchar_t *v15; // rdx
  const char *v16; // rcx
  const char *v17; // r8
  const wchar_t *v18; // r10
  const wchar_t *v19; // rax
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  __int16 Response; // [rsp+80h] [rbp+8h] BYREF

  v5 = a5;
  while ( 1 )
  {
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
      v14 = (const wchar_t *)&unk_1801ADA80;
      v15 = (const wchar_t *)&unk_1801ADA80;
      if ( a3 )
        v15 = a3;
      v16 = ", ";
      if ( !a3 )
        v16 = (const char *)&unk_1801B8EE5;
      v17 = "Function: ";
      if ( !a3 )
        v17 = (const char *)&unk_1801B8EE5;
      v18 = (const wchar_t *)&unk_1801ADA80;
      if ( a2 )
        v18 = a2;
      if ( !a1 || (v19 = L"\n***  ", !a2) )
        v19 = (const wchar_t *)&unk_1801ADA80;
      if ( a1 )
        v14 = a1;
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        v14,
        v19,
        v18,
        v17,
        v15,
        v16,
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
      if ( (char)Response <= 98 )
        break;
      if ( (char)Response == 103 )
        return;
      if ( (char)Response != 105 )
      {
        if ( (char)Response != 112 )
        {
          if ( (char)Response != 116 )
            goto LABEL_36;
LABEL_34:
          CurrentThread = GetCurrentThread();
          TerminateThread(CurrentThread, 0xC0000001);
          goto LABEL_36;
        }
LABEL_35:
        CurrentProcess = GetCurrentProcess();
        TerminateProcess(CurrentProcess, 0xC0000001);
        goto LABEL_36;
      }
LABEL_37:
      DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
    }
    if ( (char)Response == 98 || (char)Response == 66 )
      break;
    switch ( (char)Response )
    {
      case 'G':
        return;
      case 'I':
        goto LABEL_37;
      case 'P':
        goto LABEL_35;
      case 'T':
        goto LABEL_34;
    }
LABEL_36:
    DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
  }
  __debugbreak();
}
