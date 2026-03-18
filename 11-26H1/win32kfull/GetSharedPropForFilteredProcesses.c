/*
 * XREFs of GetSharedPropForFilteredProcesses @ 0x140294E98
 * Callers:
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 * Callees:
 *     GETCLIENTWNDINFO @ 0x140263574 (GETCLIENTWNDINFO.c)
 */

__int64 __fastcall GetSharedPropForFilteredProcesses(const struct tagWND *a1, __int16 a2)
{
  __int64 v3; // rdx
  unsigned __int16 *v4; // rcx
  int v5; // ebx
  __int64 CurrentProcessWow64Process; // rax
  __int64 result; // rax
  unsigned __int16 *Address; // [rsp+40h] [rbp+8h]

  if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
  {
    for ( Address = *(unsigned __int16 **)(GETCLIENTWNDINFO(a1) + 24); Address; Address = v4 )
    {
      v5 = 0;
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v4, v3);
      ProbeForRead(Address, 0x618uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
      while ( v5 < 64 )
      {
        v3 = Address[12 * v5 + 8];
        result = *(_QWORD *)&Address[12 * v5 + 4];
        if ( !(_WORD)v3 )
          return 0LL;
        if ( (_WORD)v3 == a2 )
          return result;
        ++v5;
      }
      v4 = *(unsigned __int16 **)&Address[12 * v5];
    }
  }
  return 0LL;
}
