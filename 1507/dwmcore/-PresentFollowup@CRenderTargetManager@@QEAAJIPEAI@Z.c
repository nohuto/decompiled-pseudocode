/*
 * XREFs of ?PresentFollowup@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x1800E8BE0
 * Callers:
 *     ?PresentFollowUp@CComposition@@QEAAJAEBUFRAME_TIME_INFO@@@Z @ 0x1800E3718 (-PresentFollowUp@CComposition@@QEAAJAEBUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z @ 0x1800DE73C (-HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z.c)
 */

__int64 __fastcall CRenderTargetManager::PresentFollowup(CRenderTargetManager *this, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // r12d
  unsigned int v4; // edi
  char v5; // si
  __int64 v6; // rbp
  unsigned int v7; // r14d
  __int64 v9; // r15
  unsigned int v10; // eax
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  unsigned int v15; // [rsp+80h] [rbp+8h]
  _QWORD *v18; // [rsp+98h] [rbp+20h]

  v3 = *((_DWORD *)this + 12);
  v4 = 0;
  v5 = 0;
  v6 = 0LL;
  v7 = 0;
  if ( v3 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      v15 = 0;
      v18 = *(_QWORD **)(v9 + *((_QWORD *)this + 3));
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v18 + 48LL))(v18, 36LL) && (unsigned int)v6 < a2 )
      {
        v10 = a3[v6];
        v6 = (unsigned int)(v6 + 1);
        v15 = v10;
      }
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v18 + 144LL))(v18) )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v18[5] + 72LL))(v18 + 5, 0LL, v15);
        v12 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x19Au);
        if ( v12 == 142213130 )
          v5 = 1;
        v13 = CRenderTargetManager::HandlePresentErrors(this, v12);
        v4 = v13;
        if ( v13 < 0 )
          break;
      }
      ++v7;
      v9 += 8LL;
      if ( v7 >= v3 )
        goto LABEL_15;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1A1u);
LABEL_15:
    if ( v5 )
      return 142213130;
  }
  return v4;
}
