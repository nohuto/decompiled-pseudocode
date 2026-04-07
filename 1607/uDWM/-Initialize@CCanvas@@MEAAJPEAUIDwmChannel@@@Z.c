/*
 * XREFs of ?Initialize@CCanvas@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001C6D0
 * Callers:
 *     ?Create@CCanvas@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180017790 (-Create@CCanvas@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?CloneVisualTree@CCanvas@@UEAAJPEAPEAVCVisual@@@Z @ 0x18001CA30 (-CloneVisualTree@CCanvas@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?Initialize@CAtlasedRectsVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001DC00 (-Initialize@CAtlasedRectsVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CAccent@@MEAAJPEAUIDwmChannel@@@Z @ 0x180035B20 (-Initialize@CAccent@@MEAAJPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002ADF0 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCanvas::Initialize(CCanvas *this, struct IDwmChannel *a2)
{
  void *(*v4)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  CBaseObject *v5; // rax
  CBaseObject *v6; // rbx
  int v7; // eax
  int v8; // edi
  unsigned int v9; // esi

  *((_QWORD *)this + 2) = 0LL;
  v4 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v4 == WPF::ProcessHeapImpl::AllocClear )
    v5 = (CBaseObject *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x20uLL);
  else
    v5 = (CBaseObject *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v4)(WPF::g_pProcessHeap, 32LL);
  v6 = v5;
  if ( !v5 )
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x27u);
    goto LABEL_15;
  }
  *((_DWORD *)v5 + 2) = 1;
  *((_QWORD *)v5 + 2) = a2;
  *(_QWORD *)v5 = &CResource::`vftable';
  v7 = (*(__int64 (__fastcall **)(struct IDwmChannel *, __int64, _DWORD *))(*(_QWORD *)a2 + 88LL))(
         a2,
         35LL,
         (_DWORD *)v5 + 6);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x44u);
  }
  else if ( !*((_DWORD *)v6 + 6) )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x45u);
    v9 = -2147024882;
    goto LABEL_13;
  }
  v9 = v8;
  if ( v8 >= 0 )
  {
    *((_QWORD *)this + 2) = v6;
    goto LABEL_8;
  }
LABEL_13:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x29u);
  CBaseObject::Release(v6);
LABEL_8:
  if ( v8 < 0 )
  {
LABEL_15:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x69u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x27u);
  }
  return v9;
}
