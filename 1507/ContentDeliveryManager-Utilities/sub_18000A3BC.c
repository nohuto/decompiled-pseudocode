/*
 * XREFs of sub_18000A3BC @ 0x18000A3BC
 * Callers:
 *     sub_180008A00 @ 0x180008A00 (sub_180008A00.c)
 *     sub_180009508 @ 0x180009508 (sub_180009508.c)
 * Callees:
 *     sub_180001408 @ 0x180001408 (sub_180001408.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18000A3BC(_DWORD *a1)
{
  DWORD CurrentProcessId; // eax
  int v3; // ebx
  HANDLE v4; // rdi
  LONG v5; // eax
  DWORD v6; // edi
  signed int LastError; // eax
  HANDLE SemaphoreW; // rsi
  signed int v9; // eax
  int PreviousCount[4]; // [rsp+20h] [rbp-248h] BYREF
  WCHAR Name[264]; // [rsp+30h] [rbp-238h] BYREF

  CurrentProcessId = GetCurrentProcessId();
  v3 = sub_180001408(Name, 260LL, L"ComTaskPool:%d", CurrentProcessId);
  if ( v3 >= 0 )
  {
    while ( 1 )
    {
      if ( dwTlsIndex != -1 )
        goto LABEL_27;
      v4 = OpenSemaphoreW(0x1F0003u, 0, Name);
      if ( v4 )
      {
        PreviousCount[0] = 0;
        while ( !ReleaseSemaphore(v4, 1, PreviousCount) )
        {
          if ( GetLastError() != 298 )
            goto LABEL_9;
        }
        WaitForSingleObject(v4, 0);
        dwTlsIndex = PreviousCount[0];
LABEL_9:
        CloseHandle(v4);
        goto LABEL_26;
      }
      if ( GetLastError() != 2 || (v5 = TlsAlloc(), v6 = v5, v5 == -1) )
      {
        LastError = GetLastError();
        v3 = (unsigned __int16)LastError | 0x80070000;
        if ( LastError <= 0 )
          v3 = LastError;
        if ( v3 >= 0 )
          v3 = -2147467259;
        goto LABEL_26;
      }
      SemaphoreW = CreateSemaphoreW(0LL, v5, v5 + 1, Name);
      if ( !SemaphoreW )
        break;
      if ( GetLastError() == 183 )
      {
        CloseHandle(SemaphoreW);
LABEL_25:
        TlsFree(v6);
        goto LABEL_26;
      }
      dwTlsIndex = v6;
LABEL_26:
      if ( v3 < 0 )
        goto LABEL_27;
    }
    v9 = GetLastError();
    v3 = (unsigned __int16)v9 | 0x80070000;
    if ( v9 <= 0 )
      v3 = v9;
    if ( v3 >= 0 )
      v3 = -2147467259;
    goto LABEL_25;
  }
LABEL_27:
  *a1 = dwTlsIndex;
  return (unsigned int)v3;
}
