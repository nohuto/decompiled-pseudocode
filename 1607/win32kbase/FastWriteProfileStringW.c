/*
 * XREFs of FastWriteProfileStringW @ 0x1C00540B0
 * Callers:
 *     FastUpdateWinIni @ 0x1C00B40B0 (FastUpdateWinIni.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0055BA0 (OpenCacheKeyEx.c)
 */

__int64 __fastcall FastWriteProfileStringW(const UNICODE_STRING *a1, __int64 a2, const WCHAR *a3, _WORD *a4)
{
  __int64 result; // rax
  unsigned int v7; // edi
  void *v8; // rbp
  __int64 v9; // rax
  NTSTATUS v10; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  result = OpenCacheKeyEx(a1);
  v7 = 0;
  v8 = (void *)result;
  if ( result )
  {
    RtlInitUnicodeString(&DestinationString, a3);
    v9 = -1LL;
    do
      ++v9;
    while ( a4[v9] );
    v10 = ZwSetValueKey(v8, &DestinationString, 0, 1u, a4, 2 * v9 + 2);
    ZwClose(v8);
    LOBYTE(v7) = v10 >= 0;
    return v7;
  }
  return result;
}
