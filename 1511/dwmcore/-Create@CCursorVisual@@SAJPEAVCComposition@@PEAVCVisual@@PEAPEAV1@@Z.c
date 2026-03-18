/*
 * XREFs of ?Create@CCursorVisual@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18010ACF4
 * Callers:
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180100AB8 (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x1800948C4 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ??_GCCursorVisual@@QEAAPEAXI@Z @ 0x1801009F4 (--_GCCursorVisual@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CCursorVisual::Create(struct CComposition *a1, struct CVisual *a2, CComposition ***a3)
{
  __int64 v6; // rax
  CComposition **v7; // rbx
  unsigned int v8; // edi
  int WeakReferenceBase; // eax

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
    v8 = WeakReferenceBase;
    if ( WeakReferenceBase >= 0 )
    {
      *a3 = v7;
      v7 = 0LL;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, WeakReferenceBase, 0x1Au);
    }
    if ( v7 )
      CCursorVisual::`scalar deleting destructor'((struct CResource ***)v7);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x18u);
  }
  return v8;
}
