/*
 * XREFs of SmpConfigureFileRenames @ 0x140011DF0
 * Callers:
 *     <none>
 * Callees:
 *     SmpSaveRegistryValue @ 0x140009FA8 (SmpSaveRegistryValue.c)
 */

__int64 __fastcall SmpConfigureFileRenames(__int64 a1, __int64 a2, const WCHAR *a3, __int64 a4, int a5, __int64 a6)
{
  __int64 result; // rax

  if ( qword_1400241B0 )
  {
    result = SmpSaveRegistryValue(a6, (const WCHAR *)qword_1400241B0, a3, 0, 0LL);
    qword_1400241B0 = 0LL;
  }
  else
  {
    qword_1400241B0 = (__int64)a3;
    return 0LL;
  }
  return result;
}
