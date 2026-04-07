/*
 * XREFs of ?StopAnimations@CAnimationEngine@@AEAAJXZ @ 0x1800330C0
 * Callers:
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x180030FE8 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 *     ?Cleanup@CAnimationEngine@@QEAAXXZ @ 0x18008AFDC (-Cleanup@CAnimationEngine@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x18003160C (-NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CAnimationEngine::StopAnimations(CAnimationEngine *this)
{
  unsigned int v1; // ebx
  signed int v2; // edi
  __int64 i; // rsi
  unsigned int j; // r14d
  __int64 v7; // rcx
  __int64 v8; // r15
  int v9; // eax
  int v10; // eax

  v1 = 0;
  v2 = *((_DWORD *)this + 16) - 1;
  if ( v2 >= 0 )
  {
    for ( i = 8LL * v2; ; i -= 8LL )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 5) + i) + 33LL) )
      {
        for ( j = 0; ; ++j )
        {
          v7 = *(_QWORD *)(i + *((_QWORD *)this + 5));
          if ( j >= *(_DWORD *)(v7 + 4) )
            break;
          v8 = *(_QWORD *)(v7 + 16);
          if ( v8 )
          {
            v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 120LL))(*(_QWORD *)(v7 + 16));
            v1 = v9;
            if ( v9 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x10Cu);
              return v1;
            }
          }
        }
        v10 = CAnimationEngine::NotifyAnimationCompleteAndCleanupByIndex(this, v2);
        v1 = v10;
        if ( v10 < 0 )
          break;
      }
      if ( --v2 < 0 )
        return v1;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x110u);
  }
  return v1;
}
