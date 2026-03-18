/*
 * XREFs of DpiValidateDeviceName @ 0x1C00BB978
 * Callers:
 *     DxgkValidateDeviceName @ 0x1C00BB970 (DxgkValidateDeviceName.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0005A48 (-AcquireMiniportListMutex@@YAXXZ.c)
 */

__int64 __fastcall DpiValidateDeviceName(PCUNICODE_STRING String1)
{
  int v2; // ebp
  __int64 v3; // rbx
  const UNICODE_STRING *v4; // rdi

  v2 = -1073741811;
  AcquireMiniportListMutex();
  v3 = qword_1C0046C78;
  if ( *(_QWORD *)v3 != v3 )
  {
    do
    {
      if ( v2 >= 0 )
        break;
      KeWaitForSingleObject((PVOID)(v3 + 72), Executive, 0, 0, 0LL);
      v4 = *(const UNICODE_STRING **)(v3 + 56);
      if ( *(const UNICODE_STRING **)&v4->Length != v4 )
      {
        do
        {
          if ( v2 >= 0 )
            break;
          if ( *(_DWORD *)&v4[1].Length == 1953656900 && *(_DWORD *)(&v4[1].MaximumLength + 1) == 2 )
            v2 = RtlCompareUnicodeString(String1, v4 + 93, 1u) != 0 ? v2 : 0;
          v4 = *(const UNICODE_STRING **)&v4->Length;
        }
        while ( *(_QWORD *)&v4->Length != *(_QWORD *)(v3 + 56) );
      }
      KeReleaseMutex((PRKMUTEX)(v3 + 72), 0);
      v3 = *(_QWORD *)v3;
    }
    while ( *(_QWORD *)v3 != qword_1C0046C78 );
  }
  _InterlockedExchange64(&qword_1C0046C88, 0LL);
  KeReleaseMutex((PRKMUTEX)Mutex, 0);
  return (unsigned int)v2;
}
