/*
 * XREFs of xxxArrangeWindow @ 0x1C020BBA4
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 *     xxxHandleNCMouseGuys @ 0x1C0202890 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     IsShellWndManagementBehaviorEnabled @ 0x1C006F5AC (IsShellWndManagementBehaviorEnabled.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     WindowArrangementAllowed @ 0x1C0202874 (WindowArrangementAllowed.c)
 *     ?ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x1C0204E08 (-ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C0206D70 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C0207DE4 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     EvaluateArrangeState @ 0x1C020B46C (EvaluateArrangeState.c)
 */

__int64 __fastcall xxxArrangeWindow(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  struct _MOVESIZEDATA *v5; // rbp
  int v6; // esi
  __int64 v7; // r8
  int v8; // edi
  int v9[4]; // [rsp+30h] [rbp-178h] BYREF
  _BYTE v10[320]; // [rsp+40h] [rbp-168h] BYREF

  v2 = a2;
  result = WindowArrangementAllowed((struct tagWND *)a1);
  v5 = 0LL;
  if ( (_DWORD)result )
  {
    result = (unsigned int)(v2 - 14);
    if ( (unsigned int)result <= 7 )
    {
      if ( *(_DWORD *)(gpDispInfo + 80LL) > 1u || (result = (unsigned int)(v2 - 20), (unsigned int)result > 1) )
      {
        if ( (_DWORD)v2 != 16
          || (result = IsShellWndManagementBehaviorEnabled(*(_QWORD *)(a1 + 24), 2), !(_DWORD)result) )
        {
          result = EvaluateArrangeState(a1);
          v6 = result;
          if ( (_DWORD)result != 6 )
          {
            v7 = (int)result + 6 * (v2 - 14);
            result = (__int64)dword_1C02EAB10;
            v8 = dword_1C02EAB10[v7];
            if ( v8 != 8 )
            {
              result = ArrangeActionCompatibleWithStyle(a1, v8);
              if ( (_DWORD)result )
              {
                memset(v10, 0, sizeof(v10));
                if ( (unsigned int)(v8 - 3) <= 4 )
                {
                  v5 = (struct _MOVESIZEDATA *)v10;
                  xxxInitializeMoveSizeDataProgrammaticArrangement(a1, v8, v6, 0, (__int64)v10, v9);
                }
                return xxxApplyArrangeAction(a1, v6, v8, v9[0], v5);
              }
            }
          }
        }
      }
    }
  }
  return result;
}
