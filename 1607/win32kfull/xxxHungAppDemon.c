/*
 * XREFs of xxxHungAppDemon @ 0x1C0059550
 * Callers:
 *     <none>
 * Callees:
 *     ClearHungFlag @ 0x1C00554FC (ClearHungFlag.c)
 *     IsHungWindow @ 0x1C0059680 (IsHungWindow.c)
 *     IdleTimerProc @ 0x1C00597E4 (IdleTimerProc.c)
 *     zzzCalcStartCursorHide @ 0x1C005C530 (zzzCalcStartCursorHide.c)
 *     xxxRedrawHungWindow @ 0x1C00D52D8 (xxxRedrawHungWindow.c)
 *     xxxRedrawHungWindowFrame @ 0x1C0152ED0 (xxxRedrawHungWindowFrame.c)
 */

struct VWPL **xxxHungAppDemon()
{
  struct VWPL **result; // rax
  unsigned int v1; // edi
  struct VWPL *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  IdleTimerProc();
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) >= gtimeStartCursorHide )
    zzzCalcStartCursorHide(0LL, 0LL);
  result = (struct VWPL **)grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    result = *(struct VWPL ***)(grpdeskRitInput + 8LL);
    if ( result[2] )
    {
      v1 = 0;
      v2 = 0LL;
      while ( 1 )
      {
        result = gpvwplHungRedraw;
        if ( !gpvwplHungRedraw || *((_DWORD *)gpvwplHungRedraw + 3) )
          break;
        if ( v1 >= *(_DWORD *)gpvwplHungRedraw )
          goto LABEL_21;
        result = (struct VWPL **)(2LL * v1);
        if ( gpvwplHungRedraw[2 * v1 + 3] == v2 )
          ++v1;
        if ( v1 >= *(_DWORD *)gpvwplHungRedraw )
        {
LABEL_21:
          v1 = 0;
          v2 = 0LL;
        }
        else
        {
          _mm_lfence();
          result = (struct VWPL **)(2LL * v1);
          v2 = gpvwplHungRedraw[2 * v1 + 3];
        }
        if ( !v2 )
          break;
        if ( (unsigned int)IsHungWindow(v2) )
        {
          v4 = gptiCurrent;
          v5[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v5;
          v5[1] = v2;
          ++*((_DWORD *)v2 + 2);
          if ( (*((_BYTE *)v2 + 43) & 0x10) != 0 )
            xxxRedrawHungWindowFrame(v2);
          if ( (*((_BYTE *)v2 + 43) & 8) != 0 )
          {
            ClearHungFlag(v2, 0x308u);
            xxxRedrawHungWindow(v2);
          }
          ThreadUnlock1(v4, v3);
        }
      }
    }
  }
  return result;
}
