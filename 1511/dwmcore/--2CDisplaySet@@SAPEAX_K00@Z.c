/*
 * XREFs of ??2CDisplaySet@@SAPEAX_K00@Z @ 0x1800A8918
 * Callers:
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x18006EE64 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDisplaySet::operator new(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax

  v3 = 0LL;
  v4 = 72 * a2;
  if ( is_mul_ok(a2, 0x48uLL) )
  {
    v5 = a3 << 6;
    if ( is_mul_ok(a3, 0x40uLL) )
    {
      v6 = v4 + 552;
      if ( v4 + 552 < v4 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x31u);
      }
      else if ( v5 + v6 < v5 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x32u);
      }
      else
      {
        return (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                 WPF::g_pProcessHeap,
                 v5 + v6);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x30u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x2Fu);
  }
  return v3;
}
