/*
 * XREFs of ResCRequestInitMutex @ 0x1800F90C8
 * Callers:
 *     ResCRuntimeGetSegmentDataEx @ 0x1800F7750 (ResCRuntimeGetSegmentDataEx.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800F8A8C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _ResCloseHandle @ 0x1800F9834 (_ResCloseHandle.c)
 *     _ResCreateMutex @ 0x1800F9C0C (_ResCreateMutex.c)
 *     _ResWaitForSingleObject @ 0x1800FAB88 (_ResWaitForSingleObject.c)
 */

__int64 __fastcall ResCRequestInitMutex(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 Mutex; // rax
  __int64 v4; // rbx
  wchar_t Buffer[264]; // [rsp+30h] [rbp-228h] BYREF

  if ( !a1 )
    return 0LL;
  if ( (int)StringCchPrintfW(Buffer, 0x104uLL, L"%s%s", a1, L".init") < 0 )
    return 0LL;
  Mutex = ResCreateMutex(v2, v1, Buffer);
  v4 = Mutex;
  if ( !Mutex )
    return 0LL;
  if ( NtCurrentTeb()->LastErrorValue == 183 && (ResWaitForSingleObject(Mutex) & 0xFFFFFF7F) != 0 )
  {
    ResCloseHandle(v4);
    return 0LL;
  }
  return v4;
}
