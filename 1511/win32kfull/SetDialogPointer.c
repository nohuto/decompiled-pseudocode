/*
 * XREFs of SetDialogPointer @ 0x1C0107440
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 */

__int64 __fastcall SetDialogPointer(__int64 a1, __int64 a2)
{
  int v4; // ecx

  if ( *(int *)(a1 + 232) >= 30
    && (*(_BYTE *)(a1 + 42) & 4) == 0
    && PsGetCurrentProcessWin32Process(a1) == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL) )
  {
    v4 = 0;
    if ( (*(_WORD *)(a1 + 66) & 0x3FFF) == 0x2A4 || (*(_WORD *)(a1 + 66) & 0x3FFF) == 0 )
    {
      *(_QWORD *)(a1 + 384) = a2;
      if ( a2 )
      {
        if ( !*(_WORD *)(a1 + 66) )
          *(_WORD *)(a1 + 66) = 676;
        v4 = 1;
      }
      else
      {
        *(_WORD *)(a1 + 66) |= 0x4000u;
      }
      SetOrClrWF(v4, (_DWORD *)a1, 0x201u, 1);
    }
  }
  return 1LL;
}
