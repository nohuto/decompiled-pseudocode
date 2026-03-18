/*
 * XREFs of xxxArrangeWindow @ 0x1C0202CF4
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 *     xxxHandleNCMouseGuys @ 0x1C01F9BA4 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     IsShellWndManagementBehaviorEnabled @ 0x1C009E988 (IsShellWndManagementBehaviorEnabled.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     WindowArrangementAllowed @ 0x1C01F9B88 (WindowArrangementAllowed.c)
 *     ?ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x1C01FC0E8 (-ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE0F0 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01FF19C (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     EvaluateArrangeState @ 0x1C020257C (EvaluateArrangeState.c)
 */

__int64 __fastcall xxxArrangeWindow(__int64 a1, int a2)
{
  __int64 result; // rax
  struct _MOVESIZEDATA *v5; // rbp
  __int64 v6; // rsi
  int v7; // edi
  int v8[4]; // [rsp+30h] [rbp-178h] BYREF
  _BYTE v9[320]; // [rsp+40h] [rbp-168h] BYREF

  result = WindowArrangementAllowed((struct tagWND *)a1);
  v5 = 0LL;
  if ( (_DWORD)result )
  {
    result = (unsigned int)(a2 - 14);
    if ( (unsigned int)result <= 7 )
    {
      if ( *(_DWORD *)(gpDispInfo + 80LL) > 1u || (result = (unsigned int)(a2 - 20), (unsigned int)result > 1) )
      {
        if ( a2 != 16 || (result = IsShellWndManagementBehaviorEnabled(*(_QWORD *)(a1 + 24), 2), !(_DWORD)result) )
        {
          result = EvaluateArrangeState(a1);
          v6 = (int)result;
          if ( (_DWORD)result != 6 )
          {
            result = (__int64)dword_1C02F01D0;
            v7 = dword_1C02F01D0[6 * a2 - 84 + v6];
            if ( v7 != 8 )
            {
              result = ArrangeActionCompatibleWithStyle(a1, v7);
              if ( (_DWORD)result )
              {
                memset(v9, 0, sizeof(v9));
                if ( (unsigned int)(v7 - 3) <= 4 )
                {
                  v5 = (struct _MOVESIZEDATA *)v9;
                  xxxInitializeMoveSizeDataProgrammaticArrangement(a1, v7, v6, 0, (__int64)v9, v8);
                }
                return xxxApplyArrangeAction(a1, v6, v7, v8[0], v5);
              }
            }
          }
        }
      }
    }
  }
  return result;
}
