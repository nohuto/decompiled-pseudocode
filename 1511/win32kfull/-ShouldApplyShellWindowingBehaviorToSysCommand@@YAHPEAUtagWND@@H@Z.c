/*
 * XREFs of ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C020268C
 * Callers:
 *     xxxSysCommand @ 0x1C0109460 (xxxSysCommand.c)
 * Callees:
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C006E7C4 (IsWindowSubjectToShellWindowBehavior.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C006F5AC (IsShellWndManagementBehaviorEnabled.c)
 *     IsThreadHung @ 0x1C008C3A4 (IsThreadHung.c)
 */

__int64 __fastcall ShouldApplyShellWindowingBehaviorToSysCommand(struct tagWND *a1, int a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // edx

  v3 = 0;
  if ( ((a2 - 61440) & 0xFFFFFFEF) == 0 )
  {
    if ( (unsigned int)IsWindowSubjectToShellWindowBehavior((__int64)a1, 12LL, a3) )
    {
      v6 = *((_QWORD *)a1 + 3);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 320);
        if ( v7 )
        {
          if ( !(unsigned int)IsThreadHung(*(_QWORD **)(v7 + 16), 0) )
          {
            v8 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL);
            if ( v8 == gpqForeground && *(_QWORD *)(v8 + 80) == *(_QWORD *)(gpqForeground + 80LL) )
            {
              v9 = 8;
              if ( a2 == 61456 )
                v9 = 4;
              return (unsigned int)IsShellWndManagementBehaviorEnabled(v6, v9);
            }
          }
        }
      }
    }
  }
  return v3;
}
