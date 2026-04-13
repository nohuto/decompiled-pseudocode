/*
 * XREFs of ?SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z @ 0x180006490
 * Callers:
 *     ??$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18000E1F0 (--$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEA.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18002DD88 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVAppServiceResponse@AppService@Applic.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@Foundation@Windows@@U?$IAsyncOperation@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@23@@@YAJPEAU?$IAsyncOperation@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18002DFC4 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@W4AppServiceConnectionStatus@AppService@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SHProcessMessagesUntilEventsEx(
        HWND a1,
        void **a2,
        ULONG a3,
        DWORD a4,
        APTTYPE pAptType,
        APTTYPEQUALIFIER pAptQualifier)
{
  BOOL v8; // edi
  HRESULT v10; // eax
  DWORD v11; // ecx
  HCURSOR CursorW; // rax
  DWORD v13; // eax
  DWORD v14; // eax
  struct tagMSG Msg; // [rsp+30h] [rbp-30h] BYREF
  DWORD dwindex; // [rsp+98h] [rbp+38h] BYREF

  dwindex = a4;
  v8 = CoGetApartmentType(&pAptType, &pAptQualifier) >= 0
    && pAptType == APTTYPE_STA
    && pAptQualifier == APTTYPEQUALIFIER_APPLICATION_STA;
  GetTickCount();
  if ( !a2 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    if ( v8 )
    {
      v10 = CoWaitForMultipleHandles(0x18u, 0xFFFFFFFF, a3, a2, &dwindex);
      if ( v10 == -2147417835 )
      {
        v11 = 258;
LABEL_13:
        dwindex = v11;
        goto LABEL_16;
      }
      if ( v10 < 0 )
      {
        v11 = -1;
        goto LABEL_13;
      }
      v11 = dwindex;
    }
    else
    {
      v11 = MsgWaitForMultipleObjectsEx(a3, a2, 0xFFFFFFFF, 0x1CFFu, 0);
      dwindex = v11;
    }
LABEL_16:
    if ( v11 != a3 )
      goto LABEL_29;
    while ( PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
    {
      if ( Msg.message == 18 )
      {
        PostQuitMessage(Msg.wParam);
        v11 = 258;
        dwindex = 258;
        goto LABEL_28;
      }
      TranslateMessage(&Msg);
      if ( Msg.message != 32 || LOWORD(Msg.lParam) == 0xFFFE )
      {
        DispatchMessageW(&Msg);
      }
      else
      {
        CursorW = LoadCursorW(0LL, (LPCWSTR)0x7F02);
        SetCursor(CursorW);
      }
      if ( a3 )
      {
        v13 = WaitForMultipleObjectsEx(a3, a2, 0, 0, 0);
        v11 = v13;
        if ( v13 != 258 )
        {
          dwindex = v13;
          goto LABEL_28;
        }
      }
    }
    v11 = dwindex;
LABEL_28:
    if ( v11 != a3 )
    {
LABEL_29:
      if ( v11 != 192 )
        break;
    }
  }
  if ( v11 == 258 && a3 )
  {
    v14 = WaitForMultipleObjectsEx(a3, a2, 0, 0, 0);
    v11 = dwindex;
    if ( v14 != 258 )
      return v14;
  }
  return v11;
}
