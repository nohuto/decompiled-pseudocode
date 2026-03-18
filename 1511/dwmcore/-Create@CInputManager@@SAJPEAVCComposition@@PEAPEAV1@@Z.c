/*
 * XREFs of ?Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800A8E54
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x18009DBC4 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x1800A6F18 (-Initialize@CInputManager@@IEAAJXZ.c)
 */

__int64 __fastcall CInputManager::Create(struct CComposition *a1, struct CInputManager **a2)
{
  __int64 v4; // rax
  CBitmapOfDeviceBitmaps *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi

  v4 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         224LL);
  v5 = (CBitmapOfDeviceBitmaps *)v4;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 8) = 0;
    *(_QWORD *)v4 = &CInputManager::`vftable';
    *(_QWORD *)(v4 + 16) = a1;
    *(_QWORD *)(v4 + 24) = &CHitTestContext::`vftable';
    *(_QWORD *)(v4 + 32) = a1;
    *(_QWORD *)(v4 + 72) = 0LL;
    *(_QWORD *)(v4 + 88) = 0LL;
    *(_DWORD *)(v4 + 80) = 0;
    *(_DWORD *)(v4 + 96) = 0;
    *(_QWORD *)(v4 + 68) = 0LL;
    *(_DWORD *)(v4 + 44) = 0;
    *(_QWORD *)(v4 + 48) = 0LL;
    *(_QWORD *)(v4 + 56) = 0LL;
    *(_QWORD *)(v4 + 144) = 0LL;
    *(_QWORD *)(v4 + 160) = 0LL;
    *(_DWORD *)(v4 + 152) = 0;
    *(_DWORD *)(v4 + 168) = 0;
    *(_QWORD *)(v4 + 176) = 0LL;
    *(_QWORD *)(v4 + 192) = 0LL;
    *(_DWORD *)(v4 + 184) = 0;
    *(_DWORD *)(v4 + 200) = 0;
    CInputManager::s_pInputManager = (struct CInputManager *)v4;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    CBitmapOfDeviceBitmaps::AddRef(v5);
    v6 = CInputManager::Initialize(v5);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x22u);
    }
    else
    {
      *a2 = v5;
      v5 = 0LL;
    }
    if ( v5 )
      CMILCOMBase::InternalRelease(v5);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Fu);
  }
  return v7;
}
