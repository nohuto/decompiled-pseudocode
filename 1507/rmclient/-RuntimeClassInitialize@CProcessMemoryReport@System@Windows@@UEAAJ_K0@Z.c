/*
 * XREFs of ?RuntimeClassInitialize@CProcessMemoryReport@System@Windows@@UEAAJ_K0@Z @ 0x180003C30
 * Callers:
 *     ??$MakeAndInitialize@VCProcessMemoryReport@System@Windows@@UIProcessMemoryReport@23@AEA_KAEA_K@Details@WRL@Microsoft@@YAJPEAPEAUIProcessMemoryReport@System@Windows@@AEA_K1@Z @ 0x180002EF0 (--$MakeAndInitialize@VCProcessMemoryReport@System@Windows@@UIProcessMemoryReport@23@AEA_KAEA_K@D.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CProcessMemoryReport::RuntimeClassInitialize(
        Windows::System::CProcessMemoryReport *this,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  *((_QWORD *)this + 5) = a2;
  result = 0LL;
  *((_QWORD *)this + 6) = a3;
  return result;
}
