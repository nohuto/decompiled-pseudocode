/*
 * XREFs of CreateVisRgnTracker @ 0x140018348
 * Callers:
 *     xxxSetLayeredWindow @ 0x14014CE10 (xxxSetLayeredWindow.c)
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z @ 0x1401F69D0 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z.c)
 *     UserSetWindowedSwapChain @ 0x1402024A8 (UserSetWindowedSwapChain.c)
 * Callees:
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x14000FD08 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x1400197C8 (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     DirtyVisRgnTrackers @ 0x14004F51C (DirtyVisRgnTrackers.c)
 *     ??$CreateWindowProp@VCVisRgnTrackerProp@@@CWindowProp@@SAJPEAPEAVCVisRgnTrackerProp@@@Z @ 0x1401FF69C (--$CreateWindowProp@VCVisRgnTrackerProp@@@CWindowProp@@SAJPEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CreateVisRgnTracker(struct tagWND *a1, int a2)
{
  unsigned int v3; // edi
  CWindowProp *v5; // rbx
  __int64 result; // rax
  CWindowProp *v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  v7 = 0LL;
  CWindowProp::GetProp<CVisRgnTrackerProp>(a1, &v7);
  v5 = v7;
  if ( !v7 )
  {
    result = CWindowProp::CreateWindowProp<CVisRgnTrackerProp>(&v7);
    v3 = result;
    if ( (int)result < 0 )
      return result;
    v5 = v7;
    if ( !(unsigned int)CWindowProp::SetProp(v7, (unsigned __int64)a1) )
    {
      (**(void (__fastcall ***)(CWindowProp *))v5)(v5);
      return 3221225506LL;
    }
  }
  *((_DWORD *)v5 + 10) |= a2;
  DirtyVisRgnTrackers(a1);
  return v3;
}
