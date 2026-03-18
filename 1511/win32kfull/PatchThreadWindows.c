/*
 * XREFs of PatchThreadWindows @ 0x1C00D9140
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     DisassociateShellFrameAppThreads @ 0x1C00D9238 (DisassociateShellFrameAppThreads.c)
 */

__int16 __fastcall PatchThreadWindows(struct tagTHREADINFO *a1)
{
  __int64 *v2; // rbx
  __int16 result; // ax
  unsigned __int64 i; // rdi
  __int64 v5; // rbp
  __int16 v6; // cx

  DisassociateShellFrameAppThreads(a1);
  v2 = (__int64 *)gSharedInfo[1];
  result = 3 * giheLast;
  for ( i = (unsigned __int64)&v2[3 * giheLast]; (unsigned __int64)v2 <= i; v2 += 3 )
  {
    if ( *((_BYTE *)v2 + 16) == 1 && (struct tagTHREADINFO *)v2[1] == a1 )
    {
      v5 = *v2;
      if ( (*((_BYTE *)v2 + 17) & 1) == 0 || *(_QWORD *)(v5 + 144) || (*(_BYTE *)(v5 + 42) & 4) == 0 )
      {
        v6 = *(_WORD *)(v5 + 66);
        if ( (unsigned __int16)(v6 - 666) <= 6u )
        {
          *(_QWORD *)(v5 + 144) = *(_QWORD *)(gpsi + 8LL * ((v6 & 0x3FFFu) - 666) + 272);
        }
        else if ( v6 == 694 )
        {
          *(_QWORD *)(v5 + 144) = 5LL;
        }
        else
        {
          *(_QWORD *)(v5 + 144) = 0LL;
        }
        SetOrClrWF(1, (_DWORD *)v5, 0x204u, 1);
        result = SetOrClrWF(0, (_DWORD *)v5, 0x208u, 1);
      }
    }
  }
  return result;
}
