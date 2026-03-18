/*
 * XREFs of DpiValidateDeviceName @ 0x1C00B9008
 * Callers:
 *     DxgkValidateDeviceName @ 0x1C00B9000 (DxgkValidateDeviceName.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B77C (-AcquireMiniportListMutex@@YAXXZ.c)
 */

__int64 __fastcall DpiValidateDeviceName(PCUNICODE_STRING String1)
{
  int v2; // ebp
  __int64 v3; // rbx
  __int64 *v4; // rdi

  v2 = -1073741811;
  AcquireMiniportListMutex();
  v3 = qword_1C0046CF8;
  if ( *(_QWORD *)v3 != v3 )
  {
    do
    {
      if ( v2 >= 0 )
        break;
      KeWaitForSingleObject((PVOID)(v3 + 72), Executive, 0, 0, 0LL);
      v4 = *(__int64 **)(v3 + 56);
      if ( (__int64 *)*v4 != v4 )
      {
        do
        {
          if ( v2 >= 0 )
            break;
          if ( *((_DWORD *)v4 + 4) == 1953656900 && *((_DWORD *)v4 + 5) == 2 )
            v2 = RtlCompareUnicodeString(String1, (PCUNICODE_STRING)(v4 + 191), 1u) != 0 ? v2 : 0;
          v4 = (__int64 *)*v4;
        }
        while ( *v4 != *(_QWORD *)(v3 + 56) );
      }
      KeReleaseMutex((PRKMUTEX)(v3 + 72), 0);
      v3 = *(_QWORD *)v3;
    }
    while ( *(_QWORD *)v3 != qword_1C0046CF8 );
  }
  _InterlockedExchange64(&qword_1C0046D08, 0LL);
  KeReleaseMutex(Mutex, 0);
  return (unsigned int)v2;
}
