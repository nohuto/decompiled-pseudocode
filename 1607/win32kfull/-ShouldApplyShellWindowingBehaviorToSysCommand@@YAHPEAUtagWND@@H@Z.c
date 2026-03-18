/*
 * XREFs of ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C01F99A8
 * Callers:
 *     xxxSysCommand @ 0x1C012ABE4 (xxxSysCommand.c)
 * Callees:
 *     IsThreadHung @ 0x1C00596C4 (IsThreadHung.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C009E938 (IsWindowSubjectToShellWindowBehavior.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C009E988 (IsShellWndManagementBehaviorEnabled.c)
 */

__int64 __fastcall ShouldApplyShellWindowingBehaviorToSysCommand(struct tagWND *a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // edx

  v2 = 0;
  if ( ((a2 - 61440) & 0xFFFFFFEF) == 0 )
  {
    if ( (unsigned int)IsWindowSubjectToShellWindowBehavior((__int64)a1, 12LL) )
    {
      v5 = *((_QWORD *)a1 + 3);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 320);
        if ( v6 )
        {
          if ( !(unsigned int)IsThreadHung(*(_QWORD **)(v6 + 16), 0) )
          {
            v7 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL);
            if ( v7 == gpqForeground && *(_QWORD *)(v7 + 88) == *(_QWORD *)(gpqForeground + 88LL) )
            {
              v8 = 8;
              if ( a2 == 61456 )
                v8 = 4;
              return (unsigned int)IsShellWndManagementBehaviorEnabled(v5, v8);
            }
          }
        }
      }
    }
  }
  return v2;
}
