/*
 * XREFs of SetWindowSubtreeCoreWindowStatus @ 0x1C005CA7C
 * Callers:
 *     xxxSetParentWorker @ 0x1C0042BCC (xxxSetParentWorker.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     NtUserSetCoreWindow @ 0x1C00FF600 (NtUserSetCoreWindow.c)
 * Callees:
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 */

__int16 __fastcall SetWindowSubtreeCoreWindowStatus(__int64 a1, int a2)
{
  unsigned int v3; // ecx
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // esi

  v3 = *(_DWORD *)(a1 + 288);
  LODWORD(v5) = a2 != 0;
  if ( ((v3 >> 26) & 1) != (_DWORD)v5 && ((v3 & 0x2000000) == 0 || a2) )
  {
    LOWORD(v5) = SetOrClrWF(a2, (_DWORD *)a1, 0xFB04u, 1);
    v6 = *(_QWORD *)(a1 + 96);
LABEL_5:
    while ( v6 && v6 != a1 )
    {
      if ( (*(_DWORD *)(v6 + 288) & 0x2000000) == 0 || a2 )
      {
        v7 = 0;
        SetOrClrWF(a2, (_DWORD *)v6, 0xFB04u, 1);
      }
      else
      {
        v7 = 1;
      }
      v5 = *(_QWORD *)(v6 + 96);
      if ( !v5 || v7 )
      {
        v5 = *(_QWORD *)(v6 + 72);
        if ( !v5 )
        {
          while ( 1 )
          {
            v6 = *(_QWORD *)(v6 + 88);
            if ( !v6 )
              return v5;
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
      v6 = v5;
    }
  }
  return v5;
}
