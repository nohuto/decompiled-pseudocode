/*
 * XREFs of sub_1800099E4 @ 0x1800099E4
 * Callers:
 *     sub_180008A00 @ 0x180008A00 (sub_180008A00.c)
 *     sub_18000A240 @ 0x18000A240 (sub_18000A240.c)
 * Callees:
 *     sub_180008C58 @ 0x180008C58 (sub_180008C58.c)
 *     sub_180009C28 @ 0x180009C28 (sub_180009C28.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800099E4(int a1, int a2, int a3, __int64 a4)
{
  __int64 v8; // rbx
  HANDLE Event; // rax
  signed int LastError; // eax
  signed int v11; // esi
  signed int v12; // eax
  HANDLE hHandle; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v15[2]; // [rsp+48h] [rbp-28h] BYREF
  __int128 v16; // [rsp+58h] [rbp-18h] BYREF
  DWORD dwindex; // [rsp+A8h] [rbp+38h] BYREF

  v15[1] = -2LL;
  hHandle = 0LL;
  v8 = 0LL;
  v15[0] = 0LL;
  v16 = 0LL;
  AcquireSRWLockExclusive(&SRWLock);
  if ( (a2 & 0x60) == 0 )
  {
    LODWORD(Event) = (_DWORD)hHandle;
    goto LABEL_11;
  }
  LODWORD(Event) = (_DWORD)hObject;
  if ( hObject )
  {
    hHandle = hObject;
    hObject = 0LL;
LABEL_11:
    v11 = sub_180009C28((_DWORD)Event, a1, a2, a3, a4, (__int64)&v16, (__int64)v15);
    v8 = v15[0];
    goto LABEL_12;
  }
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  hHandle = Event;
  if ( Event )
    goto LABEL_11;
  LastError = GetLastError();
  v11 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v11 = LastError;
  if ( v11 >= 0 )
    v11 = -2147467259;
LABEL_12:
  ReleaseSRWLockExclusive(&SRWLock);
  sub_180008C58((__int64)&v16);
  if ( v11 >= 0 && v8 )
  {
    v11 = 0;
    if ( WaitForSingleObject(*(HANDLE *)(v8 + 56), 0xFFFFFFFF) == -1 )
    {
      v12 = GetLastError();
      v11 = (unsigned __int16)v12 | 0x80070000;
      if ( v12 <= 0 )
        v11 = v12;
      if ( v11 >= 0 )
        v11 = -2147467259;
    }
    if ( (*(_BYTE *)(v8 + 132) & 2) == 0 )
    {
      CloseHandle(*(HANDLE *)(v8 + 56));
      *(_QWORD *)(v8 + 56) = 0LL;
    }
    if ( v11 >= 0 )
      v11 = *(_DWORD *)(v8 + 48);
  }
  if ( hHandle )
  {
    if ( v11 >= 0 )
    {
      if ( (a2 & 0x40) != 0 )
      {
        while ( CoWaitForMultipleHandles(8u, 0xFFFFFFFF, 1u, &hHandle, &dwindex) < 0 && WaitForSingleObject(hHandle, 0) )
          Sleep(1u);
      }
      else if ( (a2 & 0x20) != 0 )
      {
        WaitForSingleObject(hHandle, 0xFFFFFFFF);
      }
    }
    AcquireSRWLockExclusive(&SRWLock);
    if ( !hObject )
    {
      hObject = hHandle;
      hHandle = 0LL;
    }
    ReleaseSRWLockExclusive(&SRWLock);
    if ( hHandle )
      CloseHandle(hHandle);
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v11;
}
