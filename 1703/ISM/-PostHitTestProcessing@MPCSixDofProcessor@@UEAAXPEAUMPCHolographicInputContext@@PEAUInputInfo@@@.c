/*
 * XREFs of ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180046020
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043938 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004AC9C (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KKMM@Z @ 0x18004C694 (-InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KKMM@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18004EBF0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z @ 0x18004F62C (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z.c)
 */

void __fastcall MPCSixDofProcessor::PostHitTestProcessing(
        MPCGestureHandler **this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  bool v5; // al
  struct MPCHolographicInputManager *Instance; // rax
  int v7; // eax
  struct MPCHolographicInputManager *v8; // rax
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  bool v12; // zf
  __int128 v13; // xmm0
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this) || !*((_BYTE *)a3 + 785) )
    return;
  if ( *((_BYTE *)this + 259) )
  {
    if ( (*((_DWORD *)a3 + 330) & 2) == 0 )
    {
      v12 = *((_BYTE *)this + 261) == 0;
      *((_BYTE *)this + 259) = 0;
      v5 = v12;
      goto LABEL_7;
    }
  }
  else if ( (*((_DWORD *)a3 + 330) & 2) != 0 )
  {
    *((_BYTE *)this + 261) = 0;
    *((_BYTE *)this + 259) = 1;
  }
  v5 = 0;
LABEL_7:
  if ( v5 )
  {
    Instance = MPCHolographicInputManager::GetInstance();
    v7 = MPCHolographicInputManager::InjectRightClick(
           Instance,
           1LL,
           *((unsigned int *)a3 + 1),
           *((unsigned int *)a3 + 204),
           *((_DWORD *)a3 + 197),
           *((_DWORD *)a3 + 198));
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1F0,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
        (const char *)(unsigned int)v7);
    v8 = MPCHolographicInputManager::GetInstance();
    v9 = MPCHolographicInputManager::InjectRightClick(
           v8,
           0LL,
           *((unsigned int *)a3 + 1),
           *((unsigned int *)a3 + 204),
           *((_DWORD *)a3 + 197),
           *((_DWORD *)a3 + 198));
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1F9,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
        (const char *)(unsigned int)v9);
  }
  v10 = *((_DWORD *)a3 + 177);
  v11 = 0;
  if ( v10 == 2 )
  {
    v11 = 1;
  }
  else if ( v10 == 3 )
  {
    v11 = 7;
    if ( *((_DWORD *)a3 + 203) != 2 )
      v11 = 0;
  }
  else if ( v10 > 3 )
  {
    if ( v10 <= 5 )
    {
      v11 = 2;
    }
    else if ( v10 == 6 )
    {
      v11 = 4;
    }
  }
  v12 = *((_BYTE *)a3 + 1073) == 0;
  v13 = *(_OWORD *)((char *)a3 + 796);
  *((_DWORD *)a3 + 312) = v11;
  *((_DWORD *)a3 + 316) = *((_DWORD *)a3 + 197);
  *((_DWORD *)a3 + 317) = *((_DWORD *)a3 + 198);
  *((_DWORD *)a3 + 322) = *((_DWORD *)a3 + 204);
  *((_BYTE *)a3 + 1292) = !v12;
  *(_OWORD *)((char *)a3 + 1272) = v13;
  MPCGestureHandler::DownLevelTo2D(this[33], a3);
}
