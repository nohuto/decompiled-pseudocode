/*
 * XREFs of ?Discard@CFlipToken@@UEAAXXZ @ 0x1C0047D00
 * Callers:
 *     ??_ECFlipToken@@MEAAPEAXI@Z @ 0x1C0047C90 (--_ECFlipToken@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C0047B34 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     ?SignalGpuFence@CompositionSurfaceObject@@QEAAX_K0@Z @ 0x1C0048480 (-SignalGpuFence@CompositionSurfaceObject@@QEAAX_K0@Z.c)
 *     GreDxgkConfirmToken @ 0x1C00B6030 (GreDxgkConfirmToken.c)
 */

void __fastcall CFlipToken::Discard(CFlipToken *this)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  CompositionSurfaceObject *v4; // rcx
  _QWORD *v5; // rax
  int v6; // r8d
  int v7; // edx
  __int64 v8; // rax
  __int64 v9; // [rsp+28h] [rbp-10h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  *((_DWORD *)this + 6) = 6;
  CFlipToken::TraceStateChanged(this);
  if ( !*((_BYTE *)this + 220) && *((_BYTE *)this + 221) )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v5[3] = *((_QWORD *)this + 14);
    v10 = *(_QWORD *)(*((_QWORD *)this + 4) + 16LL);
    v5[4] = v10;
    v5[5] = *((_QWORD *)this + 5);
    v5[6] = *((unsigned int *)this + 63);
    v5[7] = *((_QWORD *)this + 29);
    WdLogEvent5_WdPresentTokenEvent(v5);
    v6 = *((_DWORD *)this + 63);
    v7 = *((_DWORD *)this + 60);
    v9 = *((_QWORD *)this + 29);
    v8 = *((_QWORD *)this + 5);
    v10 = *(_QWORD *)(*((_QWORD *)this + 4) + 16LL);
    GreDxgkConfirmToken(*((_QWORD *)this + 28), v7, v6, (unsigned int)&v10, v8, v9);
    *((_BYTE *)this + 221) = 0;
  }
  if ( !*((_BYTE *)this + 48) )
  {
    v2 = *((_QWORD *)this + 14);
    if ( v2 > 1 )
      CompositionSurfaceObject::SignalGpuFence(*((CompositionSurfaceObject **)this + 4), *((_QWORD *)this + 5), v2 - 1);
  }
  *((_QWORD *)this + 14) = 0LL;
  if ( !*((_BYTE *)this + 97) )
  {
    v3 = *((_QWORD *)this + 5);
    v4 = (CompositionSurfaceObject *)*((_QWORD *)this + 4);
    *((_BYTE *)this + 97) = 1;
    CompositionSurfaceObject::SignalPresentLimitSemaphore(v4, v3);
  }
}
