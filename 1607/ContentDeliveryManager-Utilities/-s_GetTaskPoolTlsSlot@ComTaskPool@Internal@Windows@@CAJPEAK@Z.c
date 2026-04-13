/*
 * XREFs of ?s_GetTaskPoolTlsSlot@ComTaskPool@Internal@Windows@@CAJPEAK@Z @ 0x180005D00
 * Callers:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x18000401C (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x180004E40 (-_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001648 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot(unsigned int *a1)
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
  v3 = StringCchPrintfW(Name, 260LL, L"ComTaskPool:%d", CurrentProcessId);
  if ( v3 >= 0 )
  {
    while ( 1 )
    {
      if ( `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool != -1 )
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
        `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool = PreviousCount[0];
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
      `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool = v6;
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
  *a1 = `Windows::Internal::ComTaskPool::s_GetTaskPoolTlsSlot'::`2'::s_tlsTaskPool;
  return (unsigned int)v3;
}
