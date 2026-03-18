/*
 * XREFs of RIMCheckPTPConfidenceBit @ 0x1C00D0264
 * Callers:
 *     RIMGetPTPContactState @ 0x1C00D0624 (RIMGetPTPContactState.c)
 * Callees:
 *     EtwTraceTouchPadConfidenceCleared @ 0x1C00A7FE0 (EtwTraceTouchPadConfidenceCleared.c)
 */

void __fastcall RIMCheckPTPConfidenceBit(__int64 a1, unsigned int a2, int *a3)
{
  int v3; // r9d
  __int64 v4; // r11
  __int64 v5; // r10
  int v6; // edx
  BOOL v7; // r8d
  __int64 v8; // rax
  int v9; // edx

  v3 = *a3;
  if ( (*a3 & 0x4000) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 680);
    v5 = 2400LL * a2;
    v6 = *(_DWORD *)(v4 + v5 + 2392);
    if ( (v6 & 0x800) == 0 && (*(_DWORD *)(a1 + 236) & 4) != 0 )
    {
      if ( (v3 & 0x40000) != 0 )
      {
        *a3 = v3 | 0x8000;
        v7 = 0;
        v8 = *(_QWORD *)(a1 + 680);
        v9 = 1;
      }
      else
      {
        if ( (v3 & 2) == 0 )
          return;
        *(_DWORD *)(v4 + v5 + 2392) = v6 | 0x800;
        v8 = *(_QWORD *)(a1 + 680);
        v7 = *(_DWORD *)(v8 + v5 + 2340) != 0;
        v9 = 0;
      }
      EtwTraceTouchPadConfidenceCleared(*(_DWORD *)(v8 + v5), v9, v7);
    }
  }
}
