/*
 * XREFs of sub_18000909C @ 0x18000909C
 * Callers:
 *     sub_180009C28 @ 0x180009C28 (sub_180009C28.c)
 * Callees:
 *     sub_180008E88 @ 0x180008E88 (sub_180008E88.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_18000909C(__int64 lpParameter)
{
  int v2; // edi
  HANDLE Event; // rax
  signed int v4; // eax
  HANDLE v5; // rbx
  signed int LastError; // eax
  DWORD ThreadId; // [rsp+48h] [rbp+10h] BYREF

  v2 = sub_180008E88(lpParameter);
  if ( v2 >= 0 )
  {
    Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
    *(_QWORD *)(lpParameter + 56) = Event;
    if ( Event )
    {
      _InterlockedIncrement(&dword_18003AC38);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)lpParameter + 8LL))(lpParameter);
      v5 = CreateThread(0LL, 0LL, StartAddress, (LPVOID)lpParameter, 0, &ThreadId);
      if ( v5 )
      {
        v2 = 0;
        CloseHandle(v5);
      }
      else
      {
        LastError = GetLastError();
        v2 = (unsigned __int16)LastError | 0x80070000;
        if ( LastError <= 0 )
          v2 = LastError;
        if ( v2 >= 0 )
          v2 = -2147467259;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)lpParameter + 16LL))(lpParameter);
        FreeLibrary(*(HMODULE *)(lpParameter + 72));
        *(_QWORD *)(lpParameter + 72) = 0LL;
        _InterlockedDecrement(&dword_18003AC38);
      }
    }
    else
    {
      v4 = GetLastError();
      v2 = (unsigned __int16)v4 | 0x80070000;
      if ( v4 <= 0 )
        v2 = v4;
      if ( v2 >= 0 )
        return (unsigned int)-2147467259;
    }
  }
  return (unsigned int)v2;
}
