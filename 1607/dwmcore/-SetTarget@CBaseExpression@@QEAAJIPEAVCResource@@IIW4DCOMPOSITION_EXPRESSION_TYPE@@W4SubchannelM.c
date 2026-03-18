/*
 * XREFs of ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IIW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x180088BC0
 * Callers:
 *     ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x180088F14 (-ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x18015E0D8 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 * Callees:
 *     ?ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z @ 0x18003B004 (-ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z.c)
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x18003B058 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetOutputType@CKeyframeAnimation@@MEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180087290 (-SetOutputType@CKeyframeAnimation@@MEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x180087B00 (-UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x180087CA8 (-RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z.c)
 *     ?SetOutputType@CBaseExpression@@MEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180088B80 (-SetOutputType@CBaseExpression@@MEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x180088B90 (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x180089CA4 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseExpression::SetTarget(
        __int64 a1,
        int a2,
        struct CResource *a3,
        int a4,
        int a5,
        unsigned int a6,
        int a7,
        unsigned __int8 a8,
        __int64 a9)
{
  struct CResource **v9; // rsi
  int WeakReferenceBase; // eax
  unsigned int v15; // edi
  struct CResource **v16; // rdx
  int v17; // eax
  __int64 (__fastcall *v18)(__int64, int); // rax
  int v19; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  int v26; // eax
  int v27; // r9d
  unsigned int v28; // [rsp+20h] [rbp-38h]
  struct CWeakReferenceBase *v29; // [rsp+30h] [rbp-28h] BYREF

  v9 = 0LL;
  v29 = 0LL;
  if ( !a4 )
  {
    if ( *(_BYTE *)(a1 + 228) )
    {
      v21 = CBaseExpression::NotifyAnimationStateChanged(a1, 8LL);
      v15 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x85u);
        return v15;
      }
    }
    else
    {
      v22 = CBaseExpression::NotifyAnimationStateChanged(a1, 16LL);
      v15 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x89u);
        return v15;
      }
    }
  }
  if ( *(_BYTE *)(a1 + 228) )
    CExpressionManager::UnregisterExpression(
      *(CExpressionManager **)(*(_QWORD *)(a1 + 16) + 168LL),
      (struct CBaseExpression *)a1);
  if ( a3 )
  {
    WeakReferenceBase = CComposition::GetWeakReferenceBase(*(CComposition **)(a1 + 16), a3, &v29);
    v15 = WeakReferenceBase;
    if ( WeakReferenceBase < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, WeakReferenceBase, 0x94u);
      v9 = (struct CResource **)v29;
      goto LABEL_22;
    }
    v9 = (struct CResource **)v29;
  }
  v16 = *(struct CResource ***)(a1 + 232);
  if ( v16 )
  {
    CComposition::ReleaseWeakReference(*(CComposition **)(a1 + 16), v16);
    *(_QWORD *)(a1 + 232) = 0LL;
  }
  if ( v9 && *v9 )
  {
    *(_QWORD *)(a1 + 232) = v9;
    v9 = 0LL;
  }
  *(_DWORD *)(a1 + 240) = a4;
  *(_BYTE *)(a1 + 228) = *(_QWORD *)(a1 + 232) != 0LL;
  *(_DWORD *)(a1 + 244) = a5;
  v17 = CBaseExpression::SetChannelHandle((CBaseExpression *)a1, a2);
  v15 = v17;
  if ( v17 < 0 )
  {
    v28 = 167;
LABEL_52:
    v27 = v17;
    goto LABEL_53;
  }
  v18 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 176LL);
  if ( v18 == CBaseExpression::SetOutputType )
  {
    v19 = CBaseExpression::SetOutputType(a1, a6);
  }
  else if ( v18 == CKeyframeAnimation::SetOutputType )
  {
    v19 = CKeyframeAnimation::SetOutputType(a1, a6);
  }
  else
  {
    v19 = v18(a1, a6);
  }
  v15 = v19;
  if ( v19 < 0 )
  {
    v28 = 168;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 248) )
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
      *(_QWORD *)(a1 + 248) = 0LL;
    }
    LOBYTE(v15) = a8;
    if ( !a8 )
      goto LABEL_19;
    if ( a7 == 1 )
    {
      v23 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
              WPF::g_pProcessHeap,
              12LL);
      if ( v23 )
      {
        *(_BYTE *)(v23 + 4) = 0;
        *(_DWORD *)v23 = 1;
        *(_BYTE *)(v23 + 4) = a8 < 5u ? a8 : 0;
        *(_BYTE *)(v23 + 8) = a9;
      }
      *(_QWORD *)(a1 + 248) = v23;
LABEL_19:
      if ( !*(_BYTE *)(a1 + 228)
        || (v17 = CExpressionManager::RegisterExpression(
                    *(CExpressionManager **)(*(_QWORD *)(a1 + 16) + 168LL),
                    (struct CBaseExpression *)a1),
            v15 = v17,
            v17 >= 0) )
      {
        v15 = 0;
        goto LABEL_22;
      }
      v28 = 195;
      goto LABEL_52;
    }
    if ( a7 == 2 )
    {
      v24 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
              WPF::g_pProcessHeap,
              16LL);
      v25 = v24;
      if ( v24 )
      {
        *(_BYTE *)(v24 + 4) = 0;
        *(_DWORD *)v24 = 2;
        if ( a8 <= 0x10u && (v26 = 65631, _bittest(&v26, v15)) )
          *(_BYTE *)(v25 + 4) = a8;
        else
          *(_BYTE *)(v25 + 4) = 0;
        *(_QWORD *)(v25 + 8) = a9;
      }
      else
      {
        v25 = 0LL;
      }
      *(_QWORD *)(a1 + 248) = v25;
      goto LABEL_19;
    }
    v15 = -2147467259;
    v28 = 189;
  }
  v27 = v15;
LABEL_53:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, v28);
LABEL_22:
  if ( v9 )
    CComposition::ReleaseWeakReference(*(CComposition **)(a1 + 16), v9);
  return v15;
}
