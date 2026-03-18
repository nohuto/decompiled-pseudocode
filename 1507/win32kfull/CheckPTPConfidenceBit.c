/*
 * XREFs of CheckPTPConfidenceBit @ 0x1C01CED4C
 * Callers:
 *     GetPTPContactState @ 0x1C01CF2F0 (GetPTPContactState.c)
 * Callees:
 *     <none>
 */

void __fastcall CheckPTPConfidenceBit(__int64 a1, unsigned int a2, int *a3)
{
  int v3; // r9d
  __int64 v4; // r11
  __int64 v5; // r10
  int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rdx

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
        v7 = *(_QWORD *)(a1 + 680);
        v8 = 1LL;
      }
      else
      {
        if ( (v3 & 2) == 0 )
          return;
        *(_DWORD *)(v4 + v5 + 2392) = v6 | 0x800;
        v7 = *(_QWORD *)(a1 + 680);
        v8 = 0LL;
      }
      EtwTraceTouchPadConfidenceCleared(*(unsigned int *)(v7 + v5), v8);
    }
  }
}
