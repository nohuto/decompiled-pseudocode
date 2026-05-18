/*
 * XREFs of sub_1800018D0 @ 0x1800018D0
 * Callers:
 *     StartAddress @ 0x1800028C0 (StartAddress.c)
 * Callees:
 *     sub_180003A80 @ 0x180003A80 (sub_180003A80.c)
 */

__int64 sub_1800018D0()
{
  unsigned int v0; // edi
  HANDLE EventW; // rbx
  signed int LastError; // eax
  __int64 v3; // rcx

  v0 = 0;
  EventW = CreateEventW(0LL, 1, 0, L"Global\\LSA_SUBSYSTEM_INITIALIZED");
  if ( EventW )
    goto LABEL_9;
  if ( GetLastError() != 183 )
    return v0;
  SetLastError(0);
  EventW = OpenEventW(0x100000u, 0, L"Global\\LSA_SUBSYSTEM_INITIALIZED");
  if ( EventW )
  {
LABEL_9:
    WaitForSingleObject(EventW, 0xFFFFFFFF);
    CloseHandle(EventW);
  }
  else
  {
    LastError = GetLastError();
    v3 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v3 = (unsigned int)LastError;
    if ( (int)v3 >= 0 )
      v3 = 2291662851LL;
    v0 = v3;
    sub_180003A80(v3, 389LL);
  }
  return v0;
}
