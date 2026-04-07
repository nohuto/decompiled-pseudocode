/*
 * XREFs of ?StopAnimations@CAnimationEngine@@AEAAJXZ @ 0x180012FF0
 * Callers:
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x180011000 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 *     ?Cleanup@CAnimationEngine@@QEAAXXZ @ 0x18008D96C (-Cleanup@CAnimationEngine@@QEAAXXZ.c)
 * Callees:
 *     ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x180011710 (-NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationEngine::StopAnimations(CAnimationEngine *this)
{
  unsigned int v1; // edi
  signed int v2; // ebx
  __int64 i; // rsi
  unsigned int j; // r14d
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax

  v1 = 0;
  v2 = *((_DWORD *)this + 16) - 1;
  if ( v2 >= 0 )
  {
    for ( i = 8LL * v2; !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 5) + i) + 33LL); i -= 8LL )
    {
LABEL_4:
      if ( --v2 < 0 )
        return v1;
    }
    for ( j = 0; ; ++j )
    {
      v7 = *(_QWORD *)(i + *((_QWORD *)this + 5));
      if ( j >= *(_DWORD *)(v7 + 4) )
        break;
      v8 = *(_QWORD *)(v7 + 16);
      if ( v8 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 120LL))(v8);
        v1 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x10Cu);
          return v1;
        }
      }
    }
    v10 = CAnimationEngine::NotifyAnimationCompleteAndCleanupByIndex(this, v2);
    v1 = v10;
    if ( v10 >= 0 )
      goto LABEL_4;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x110u);
  }
  return v1;
}
