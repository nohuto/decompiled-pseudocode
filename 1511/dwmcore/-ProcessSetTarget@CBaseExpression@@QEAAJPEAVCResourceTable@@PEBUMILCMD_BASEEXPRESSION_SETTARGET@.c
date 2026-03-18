/*
 * XREFs of ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x1800F863C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x18011E5E4 (-RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z.c)
 *     ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x18011F7F0 (-UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x1801291B0 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x180129618 (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 */

__int64 __fastcall CBaseExpression::ProcessSetTarget(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEEXPRESSION_SETTARGET *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  char v9; // dl
  __int64 v10; // rdx
  unsigned int v12; // [rsp+20h] [rbp-28h]

  if ( !*((_DWORD *)a3 + 2) )
  {
    if ( *((_BYTE *)this + 100) )
    {
      v6 = CBaseExpression::NotifyAnimationStateChanged(this, 8LL);
      v7 = v6;
      if ( v6 < 0 )
      {
        v12 = 71;
LABEL_25:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, v12);
        return v7;
      }
    }
    else
    {
      v6 = CBaseExpression::NotifyAnimationStateChanged(this, 16LL);
      v7 = v6;
      if ( v6 < 0 )
      {
        v12 = 75;
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
    v12 = 87;
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x6Cu);
      return v7;
    }
    v8 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
           WPF::g_pProcessHeap,
           16LL);
    if ( v8 )
    {
      v10 = *(_QWORD *)((char *)a3 + 20);
      *(_BYTE *)v8 = *((_BYTE *)a3 + 28);
      *(_QWORD *)(v8 + 8) = v10;
      *(_DWORD *)(v8 + 4) = 2;
      goto LABEL_21;
    }
LABEL_20:
    v8 = 0LL;
    goto LABEL_21;
  }
  v8 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         12LL);
  if ( !v8 )
    goto LABEL_20;
  v9 = *((_BYTE *)a3 + 20);
  *(_BYTE *)v8 = *((_BYTE *)a3 + 28);
  *(_BYTE *)(v8 + 8) = v9;
  *(_DWORD *)(v8 + 4) = 1;
LABEL_21:
  *((_QWORD *)this + 14) = v8;
LABEL_22:
  if ( *((_BYTE *)this + 100) )
  {
    v6 = CExpressionManager::RegisterExpression(*(CExpressionManager **)(*((_QWORD *)this + 2) + 168LL), this);
    v7 = v6;
    if ( v6 < 0 )
    {
      v12 = 114;
      goto LABEL_25;
    }
  }
  return 0;
}
