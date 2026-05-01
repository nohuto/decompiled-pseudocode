/*
 * XREFs of ?RuntimeClassInitialize@CAppMemoryReport@System@Windows@@UEAAJ_K000@Z @ 0x180003E90
 * Callers:
 *     ??$MakeAndInitialize@VCAppMemoryReport@System@Windows@@UIAppMemoryReport@23@AEA_KAEA_KAEA_KAEA_K@Details@WRL@Microsoft@@YAJPEAPEAUIAppMemoryReport@System@Windows@@AEA_K111@Z @ 0x180003060 (--$MakeAndInitialize@VCAppMemoryReport@System@Windows@@UIAppMemoryReport@23@AEA_KAEA_KAEA_KAEA_K.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CAppMemoryReport::RuntimeClassInitialize(
        Windows::System::CAppMemoryReport *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  __int64 result; // rax

  *((_QWORD *)this + 8) = a5;
  result = 0LL;
  *((_QWORD *)this + 5) = a2;
  *((_QWORD *)this + 6) = a3;
  *((_QWORD *)this + 7) = a4;
  return result;
}
