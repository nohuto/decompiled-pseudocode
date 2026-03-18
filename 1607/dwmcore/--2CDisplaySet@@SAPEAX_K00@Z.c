/*
 * XREFs of ??2CDisplaySet@@SAPEAX_K00@Z @ 0x1800A834C
 * Callers:
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x180038134 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplaySet::operator new(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // r9

  v3 = 0LL;
  v4 = 72 * a2;
  if ( is_mul_ok(a2, 0x48uLL) )
  {
    if ( is_mul_ok(a3, 0x40uLL) )
    {
      if ( v4 + 544 < v4 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x31u);
      }
      else if ( (a3 << 6) + v4 + 544 < a3 << 6 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x32u);
      }
      else
      {
        return (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(WPF::g_pProcessHeap);
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
