/*
 * XREFs of ?Create@CGaussianBlurEffect@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180005520
 * Callers:
 *     ?EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z @ 0x180007CD4 (-EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CResource@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z @ 0x18001A094 (-Initialize@CResource@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800505A6 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGaussianBlurEffect::Create(struct IDwmChannel *a1, struct CGaussianBlurEffect **a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi

  if ( a2 )
  {
    v4 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                     WPF::g_pProcessHeap,
                     32LL);
    v5 = v4;
    if ( v4 )
    {
      memset_0(v4, 0, 0x20uLL);
      v5[2] = 0LL;
      *v5 = &CGaussianBlurEffect::`vftable';
      *((_DWORD *)v5 + 2) = 1;
    }
    else
    {
      v5 = 0LL;
    }
    if ( v5 )
    {
      v6 = CResource::Initialize(v5, 12LL, a1);
      v7 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x23u);
      }
      else
      {
        *a2 = (struct CGaussianBlurEffect *)v5;
        v5 = 0LL;
      }
      if ( v5 )
        CBaseObject::Release((CBaseObject *)v5);
    }
    else
    {
      v7 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x21u);
    }
  }
  else
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1Eu);
  }
  return v7;
}
