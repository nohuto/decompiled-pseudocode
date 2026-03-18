/*
 * XREFs of ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x18010E2D8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x180101FA8 (-RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z.c)
 *     ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x180102CB8 (-UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18010DF68 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x18010E4C4 (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 */

__int64 __fastcall CBaseExpression::ProcessSetTarget(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEEXPRESSION_SETTARGET *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // rax
  char v10; // dl
  __int64 v11; // rdx
  unsigned int v13; // [rsp+20h] [rbp-28h]

  if ( !*((_DWORD *)a3 + 2) )
  {
    if ( *((_BYTE *)this + 100) )
    {
      v6 = CBaseExpression::NotifyAnimationStateChanged((__int64)this, 8);
      v7 = v6;
      if ( v6 < 0 )
      {
        v13 = 66;
LABEL_25:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, v13);
        return v7;
      }
    }
    else
    {
      v6 = CBaseExpression::NotifyAnimationStateChanged((__int64)this, 16);
      v7 = v6;
      if ( v6 < 0 )
      {
        v13 = 70;
        goto LABEL_25;
      }
    }
  }
  if ( *((_BYTE *)this + 100) )
    CExpressionManager::UnregisterExpression(*(CExpressionManager **)(*((_QWORD *)this + 2) + 168LL), this);
  *((_BYTE *)this + 100) = *((_DWORD *)a3 + 2) != 0;
  *((_DWORD *)this + 26) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 27) = *((_DWORD *)a3 + 4);
  v6 = CBaseExpression::SetChannelHandle(this, *((_DWORD *)a2 + 12));
  v7 = v6;
  if ( v6 < 0 )
  {
    v13 = 82;
    goto LABEL_25;
  }
  if ( *((_QWORD *)this + 14) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 14));
    *((_QWORD *)this + 14) = 0LL;
  }
  if ( !*((_WORD *)a3 + 14) )
    goto LABEL_22;
  if ( *((_WORD *)a3 + 15) != 1 )
  {
    if ( *((_WORD *)a3 + 15) != 2 )
    {
      v7 = -2147467259;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x67u);
      return v7;
    }
    v9 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
           WPF::g_pProcessHeap,
           16LL);
    if ( v9 )
    {
      v11 = *(_QWORD *)((char *)a3 + 20);
      *(_BYTE *)v9 = *((_BYTE *)a3 + 28);
      *(_QWORD *)(v9 + 8) = v11;
      *(_DWORD *)(v9 + 4) = 2;
      goto LABEL_21;
    }
LABEL_20:
    v9 = 0LL;
    goto LABEL_21;
  }
  v9 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         12LL);
  if ( !v9 )
    goto LABEL_20;
  v10 = *((_BYTE *)a3 + 20);
  *(_BYTE *)v9 = *((_BYTE *)a3 + 28);
  *(_BYTE *)(v9 + 8) = v10;
  *(_DWORD *)(v9 + 4) = 1;
LABEL_21:
  *((_QWORD *)this + 14) = v9;
LABEL_22:
  if ( *((_BYTE *)this + 100) )
  {
    v6 = CExpressionManager::RegisterExpression(*(CExpressionManager **)(*((_QWORD *)this + 2) + 168LL), this, v8);
    v7 = v6;
    if ( v6 < 0 )
    {
      v13 = 109;
      goto LABEL_25;
    }
  }
  return 0;
}
