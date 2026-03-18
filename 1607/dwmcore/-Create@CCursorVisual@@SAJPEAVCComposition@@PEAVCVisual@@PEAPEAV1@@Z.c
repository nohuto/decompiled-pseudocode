/*
 * XREFs of ?Create@CCursorVisual@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x1800B70E8
 * Callers:
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x18003AF04 (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x18003B058 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_GCCursorVisual@@QEAAPEAXI@Z @ 0x1800B71EC (--_GCCursorVisual@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCursorVisual::Create(struct CComposition *a1, struct CVisual *a2, CComposition ***a3)
{
  __int64 v6; // rax
  CComposition **v7; // rbx
  int WeakReferenceBase; // eax
  unsigned int v9; // edi
  unsigned int v11; // edx

  *a3 = 0LL;
  v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         32LL);
  v7 = (CComposition **)v6;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 8) = 0LL;
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_DWORD *)(v6 + 28) = 0;
    *(_QWORD *)v6 = a1;
    *(_BYTE *)(v6 + 24) = 0;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    WeakReferenceBase = CComposition::GetWeakReferenceBase(*v7, a2, v7 + 1);
    v9 = WeakReferenceBase;
    if ( WeakReferenceBase < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, WeakReferenceBase, 0x1Au);
      CCursorVisual::`scalar deleting destructor'((CCursorVisual *)v7, v11);
    }
    else
    {
      *a3 = v7;
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x18u);
  }
  return v9;
}
