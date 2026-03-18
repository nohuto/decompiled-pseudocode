/*
 * XREFs of SetSharedPropForFilteredProcesses @ 0x140293814
 * Callers:
 *     InternalSetProp @ 0x14000FF58 (InternalSetProp.c)
 * Callees:
 *     GETCLIENTWNDINFO @ 0x140263574 (GETCLIENTWNDINFO.c)
 */

__int64 __fastcall SetSharedPropForFilteredProcesses(const struct tagWND *a1, __int16 a2, __int64 a3)
{
  __int64 v5; // rdx
  unsigned __int16 *v6; // rcx
  int v7; // ebx
  __int64 CurrentProcessWow64Process; // rax
  unsigned __int16 *Address; // [rsp+40h] [rbp+8h]

  if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
  {
    for ( Address = *(unsigned __int16 **)(GETCLIENTWNDINFO(a1) + 24); Address; Address = v6 )
    {
      v7 = 0;
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v6, v5);
      ProbeForWrite(Address, 0x618uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
      while ( v7 < 64 )
      {
        v5 = Address[12 * v7 + 8];
        if ( !(_WORD)v5 )
          return 0LL;
        if ( (_WORD)v5 == a2 )
        {
          *(_QWORD *)&Address[12 * v7 + 4] = a3;
          return 1LL;
        }
        ++v7;
      }
      v6 = *(unsigned __int16 **)&Address[12 * v7];
    }
  }
  return 0LL;
}
