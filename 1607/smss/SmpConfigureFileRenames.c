/*
 * XREFs of SmpConfigureFileRenames @ 0x140012200
 * Callers:
 *     <none>
 * Callees:
 *     SmpSaveRegistryValue @ 0x140008AA8 (SmpSaveRegistryValue.c)
 */

__int64 __fastcall SmpConfigureFileRenames(__int64 a1, __int64 a2, const WCHAR *a3, __int64 a4, int a5, __int64 a6)
{
  __int64 result; // rax

  if ( qword_140026258 )
  {
    result = SmpSaveRegistryValue(a6, (const WCHAR *)qword_140026258, a3, 0, 0LL);
    qword_140026258 = 0LL;
  }
  else
  {
    qword_140026258 = (__int64)a3;
    return 0LL;
  }
  return result;
}
