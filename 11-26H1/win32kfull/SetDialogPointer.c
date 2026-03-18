/*
 * XREFs of SetDialogPointer @ 0x140222198
 * Callers:
 *     NtUserSetDialogPointer @ 0x140222100 (NtUserSetDialogPointer.c)
 * Callees:
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     unsafe_cast_fnid_zero_to_PDIALOG @ 0x1402222B8 (unsafe_cast_fnid_zero_to_PDIALOG.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall SetDialogPointer(struct tagWND *a1, __int64 a2)
{
  _QWORD *v4; // rsi
  __int64 v5; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rax
  int v8; // ecx
  __int64 v10; // [rsp+70h] [rbp+18h]

  v4 = (_QWORD *)((char *)a1 + 40);
  v5 = *((_QWORD *)a1 + 5);
  if ( *(int *)(v5 + 200) >= 30 && (*(_BYTE *)(v5 + 18) & 4) == 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    if ( CurrentProcessWin32Process == *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) )
    {
      if ( !*(_DWORD *)(*v4 + 248LL) || *(_WORD *)(*v4 + 42LL) )
      {
        v10 = unsafe_cast_fnid_zero_to_PDIALOG(a1);
        if ( v10 )
        {
          *(_QWORD *)(v10 + 8) = a2;
          v7 = *v4;
          if ( a2 )
          {
            if ( !*(_WORD *)(v7 + 42) )
              *(_WORD *)(v7 + 42) = 676;
            v8 = 1;
          }
          else
          {
            *(_WORD *)(v7 + 42) |= 0x4000u;
            v8 = 0;
          }
          SetOrClrWF(v8, a1, 0x201u, 1);
        }
      }
      else
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 68LL);
      }
    }
  }
  return 1LL;
}
