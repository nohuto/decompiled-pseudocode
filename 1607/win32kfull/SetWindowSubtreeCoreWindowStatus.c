/*
 * XREFs of SetWindowSubtreeCoreWindowStatus @ 0x1C006F768
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     NtUserSetCoreWindow @ 0x1C00963F0 (NtUserSetCoreWindow.c)
 *     xxxSetParentWorker @ 0x1C00DD234 (xxxSetParentWorker.c)
 * Callees:
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 */

__int64 __fastcall SetWindowSubtreeCoreWindowStatus(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ecx
  __int64 result; // rax
  __int64 v6; // rbx
  int v7; // esi

  v3 = *(_DWORD *)(a1 + 288);
  result = a2 != 0;
  if ( ((v3 >> 26) & 1) != (_DWORD)result && ((v3 & 0x2000000) == 0 || a2) )
  {
    result = SetOrClrWF(a2, a1, 64260LL, 1LL);
    v6 = *(_QWORD *)(a1 + 96);
LABEL_5:
    while ( v6 && v6 != a1 )
    {
      if ( (*(_DWORD *)(v6 + 288) & 0x2000000) == 0 || a2 )
      {
        v7 = 0;
        SetOrClrWF(a2, v6, 64260LL, 1LL);
      }
      else
      {
        v7 = 1;
      }
      result = *(_QWORD *)(v6 + 96);
      if ( !result || v7 )
      {
        result = *(_QWORD *)(v6 + 72);
        if ( !result )
        {
          while ( 1 )
          {
            v6 = *(_QWORD *)(v6 + 88);
            if ( !v6 )
              return result;
            if ( *(_QWORD *)(v6 + 72) )
            {
              v6 = *(_QWORD *)(v6 + 72);
              goto LABEL_5;
            }
            if ( v6 == a1 )
              goto LABEL_5;
          }
        }
      }
      v6 = result;
    }
  }
  return result;
}
