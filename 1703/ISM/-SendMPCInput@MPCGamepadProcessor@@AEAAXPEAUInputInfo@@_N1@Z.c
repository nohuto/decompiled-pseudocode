/*
 * XREFs of ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@_N1@Z @ 0x18002E8C8
 * Callers:
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18002D8E0 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004AC9C (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIInputTarget@@@Z @ 0x18004C36C (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z @ 0x18004F62C (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z.c)
 */

void __fastcall MPCGamepadProcessor::SendMPCInput(
        MPCGamepadProcessor *this,
        struct InputInfo *a2,
        unsigned __int8 a3,
        char a4)
{
  char *v4; // r15
  __int64 v9; // rbx
  unsigned int *v10; // rdi
  unsigned int v11; // esi
  struct MPCHolographicInputManager *Instance; // rax

  v4 = (char *)a2 + 784;
  *((_DWORD *)a2 + 316) = *((_DWORD *)a2 + 197);
  *((_DWORD *)a2 + 317) = *((_DWORD *)a2 + 198);
  *(_OWORD *)((char *)a2 + 1272) = *(_OWORD *)((char *)a2 + 796);
  *((_DWORD *)a2 + 322) = *((_DWORD *)a2 + 204);
  if ( a3 != a4 )
  {
    v9 = *((_QWORD *)this + 24);
    v10 = (unsigned int *)*((_QWORD *)this + 5);
    v11 = a3;
    Instance = MPCHolographicInputManager::GetInstance();
    MPCHolographicInputManager::InjectInteractionState(Instance, v11, *v10, v4, v9);
  }
  if ( v4[1] && *((_BYTE *)a2 + 787) && !*((_DWORD *)this + 632) && a3 != a4 )
  {
    *((_DWORD *)a2 + 312) = 2 - (a3 != 0);
    MPCGestureHandler::DownLevelTo2D(*((MPCGestureHandler **)this + 25), a2);
  }
}
