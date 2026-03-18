/*
 * XREFs of ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C02022EC
 * Callers:
 *     xxxSysCommand @ 0x1C00FD5E4 (xxxSysCommand.c)
 * Callees:
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C0081EAC (IsWindowSubjectToShellWindowBehavior.c)
 *     IsThreadHung @ 0x1C008CD94 (IsThreadHung.c)
 */

__int64 __fastcall ShouldApplyShellWindowingBehaviorToSysCommand(struct tagWND *a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // eax

  v2 = 0;
  if ( ((a2 - 61440) & 0xFFFFFFEF) == 0 )
  {
    if ( (unsigned int)IsWindowSubjectToShellWindowBehavior((__int64)a1, 12) )
    {
      v5 = *((_QWORD *)a1 + 3);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 312);
        if ( v6 )
        {
          if ( !(unsigned int)IsThreadHung(*(_QWORD **)(v6 + 16), 0) )
          {
            v7 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 392LL);
            if ( v7 == gpqForeground && *(_QWORD *)(v7 + 80) == *(_QWORD *)(gpqForeground + 80LL) )
            {
              if ( a2 == 61456 )
                v8 = *(_DWORD *)(v5 + 320) & 4;
              else
                v8 = *(_DWORD *)(v5 + 320) & 8;
              LOBYTE(v2) = v8 != 0;
            }
          }
        }
      }
    }
  }
  return v2;
}
