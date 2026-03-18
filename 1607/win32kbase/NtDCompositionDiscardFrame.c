/*
 * XREFs of NtDCompositionDiscardFrame @ 0x1C0017640
 * Callers:
 *     <none>
 * Callees:
 *     ?FindCompositionFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCCompositionFrame@2@@Z @ 0x1C001810C (-FindCompositionFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCCompositionFrame@2@@Z.c)
 *     ?RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z @ 0x1C0018460 (-RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0018814 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C001978C (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ?ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z @ 0x1C001B088 (-ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

__int64 __fastcall NtDCompositionDiscardFrame(struct HDCOMPOSITIONCONNECTION__ *a1, unsigned __int64 *a2)
{
  struct DirectComposition::CCompositionFrame *v3; // rbx
  DirectComposition::CConnection *v4; // rbx
  unsigned int v5; // edx
  struct DirectComposition::CCompositionFrame *v7; // rbx
  signed int CompositionFrame; // [rsp+20h] [rbp-18h]
  unsigned __int64 v9; // [rsp+28h] [rbp-10h]
  DirectComposition::CConnection *v10; // [rsp+50h] [rbp+18h] BYREF
  struct DirectComposition::CCompositionFrame *v11; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v9 = *a2;
    CompositionFrame = *a2 == 0 ? 0xC000000D : 0;
  }
  else
  {
    CompositionFrame = -1073741811;
  }
  if ( CompositionFrame >= 0 )
  {
    KeEnterCriticalRegion();
    CompositionFrame = DirectComposition::CConnection::ReferenceHandle(a1, &v10);
    if ( CompositionFrame >= 0 )
    {
      CompositionFrame = DirectComposition::CConnection::FindCompositionFrame(v10, v9, &v11);
      if ( CompositionFrame >= 0 )
      {
        v3 = v11;
        DirectComposition::CCompositionFrame::Discard(v11);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v3, 0xFFFFFFFF) == 1 )
        {
          v7 = v11;
          if ( v11 )
          {
            if ( *((_DWORD *)v11 + 18) != 3 )
              DirectComposition::CCompositionFrame::Discard(v11);
            Win32FreePool(v7);
          }
        }
      }
      v4 = v10;
      DirectComposition::CConnection::RemoveCompositionFrame(v10, v9);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF) == 1 && v10 )
        DirectComposition::CConnection::`scalar deleting destructor'(v10, v5);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)CompositionFrame;
}
