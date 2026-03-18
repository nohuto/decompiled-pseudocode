/*
 * XREFs of CaretBlinkProc @ 0x1C00F91D0
 * Callers:
 *     <none>
 * Callees:
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0056F94 (-UT_InvertCaret@@YAXXZ.c)
 */

void __fastcall CaretBlinkProc(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rcx
  bool v3; // zf

  v1 = *(_QWORD *)(gptiCurrent + 392LL);
  if ( a1 == *(_QWORD *)(v1 + 248) )
  {
    if ( (*(_DWORD *)(gpsi + 4000LL) == -1 || (*(_DWORD *)(gpsi + 2220LL) & 4) == 0) && (*(_BYTE *)(v1 + 256) & 3) == 3 )
    {
      RemoveCaretTimer(*(struct tagWND **)(v1 + 248), *(struct tagQ **)(gptiCurrent + 392LL));
    }
    else
    {
      v2 = *(_DWORD *)(v1 + 256) ^ ((unsigned __int8)*(_DWORD *)(v1 + 256) ^ (unsigned __int8)~(unsigned __int8)*(_DWORD *)(v1 + 256)) & 2u;
      v3 = *(_DWORD *)(v1 + 260) == 0;
      *(_DWORD *)(v1 + 256) = v2;
      if ( v3 )
      {
        *(_DWORD *)(v1 + 256) = v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)~(_BYTE)v2) & 1;
        UT_InvertCaret(v2, gpsi);
      }
    }
  }
}
