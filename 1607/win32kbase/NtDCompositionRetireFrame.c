/*
 * XREFs of NtDCompositionRetireFrame @ 0x1C0017390
 * Callers:
 *     <none>
 * Callees:
 *     ?FindCompositionFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCCompositionFrame@2@@Z @ 0x1C001810C (-FindCompositionFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCCompositionFrame@2@@Z.c)
 *     ?RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z @ 0x1C0018460 (-RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z.c)
 *     ?DiscardPreviousFrames@CConnection@DirectComposition@@QEAAX_K@Z @ 0x1C00186D8 (-DiscardPreviousFrames@CConnection@DirectComposition@@QEAAX_K@Z.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00187F4 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?Release@CCompositionFrame@DirectComposition@@QEBAJXZ @ 0x1C00196F8 (-Release@CCompositionFrame@DirectComposition@@QEBAJXZ.c)
 *     ?Retire@CCompositionFrame@DirectComposition@@QEAAXAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C0019724 (-Retire@CCompositionFrame@DirectComposition@@QEAAXAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 *     ?ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z @ 0x1C001B088 (-ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

__int64 __fastcall NtDCompositionRetireFrame(struct HDCOMPOSITIONCONNECTION__ *a1, unsigned __int64 *a2, _OWORD *a3)
{
  unsigned __int64 v4; // rdi
  __int128 v5; // xmm1
  signed int CompositionFrame; // ebx
  DirectComposition::CConnection *v7; // rsi
  DirectComposition::CConnection *v9; // [rsp+20h] [rbp-48h] BYREF
  signed int v10; // [rsp+28h] [rbp-40h]
  unsigned __int64 v11; // [rsp+30h] [rbp-38h]
  _OWORD v12[2]; // [rsp+38h] [rbp-30h] BYREF

  v4 = 0LL;
  v11 = 0LL;
  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v4 = *a2;
    v11 = *a2;
    if ( a3 + 2 < a3 || (unsigned __int64)(a3 + 2) > MmUserProbeAddress )
      a3 = (_OWORD *)MmUserProbeAddress;
    v5 = a3[1];
    v12[0] = *a3;
    v12[1] = v5;
    CompositionFrame = v4 == 0 ? 0xC000000D : 0;
    v10 = CompositionFrame;
  }
  else
  {
    CompositionFrame = -1073741811;
  }
  if ( CompositionFrame >= 0 )
  {
    v9 = 0LL;
    KeEnterCriticalRegion();
    CompositionFrame = DirectComposition::CConnection::ReferenceHandle(a1, &v9);
    if ( CompositionFrame >= 0 )
    {
      v7 = v9;
      DirectComposition::CConnection::DiscardPreviousFrames(v9, v4);
      CompositionFrame = DirectComposition::CConnection::FindCompositionFrame(v7, v4, &v9);
      if ( CompositionFrame >= 0 )
      {
        DirectComposition::CCompositionFrame::Retire(v9, (const struct DXGI_FRAME_STATISTICS *)v12);
        DirectComposition::CCompositionFrame::Release(v9);
      }
      DirectComposition::CConnection::RemoveCompositionFrame(v7, v4);
      DirectComposition::CConnection::Release(v7);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)CompositionFrame;
}
