/*
 * XREFs of DesktopFromDesktopWindow @ 0x140224DB8
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x14014D538 (CreateOrGetRedirectionBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DesktopFromDesktopWindow(__int64 a1)
{
  __int64 v1; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 i; // rax
  __int64 v7; // rcx

  v1 = 0LL;
  if ( (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF) == 0x29D )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    v4 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v4 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    v5 = *(_QWORD *)(v4 + 656);
    if ( v5 )
    {
      for ( i = *(_QWORD *)(v5 + 16); i; i = *(_QWORD *)(i + 32) )
      {
        v7 = *(_QWORD *)(i + 8);
        if ( v7 && *(_QWORD *)(v7 + 24) == a1 )
          return i;
      }
    }
  }
  return v1;
}
