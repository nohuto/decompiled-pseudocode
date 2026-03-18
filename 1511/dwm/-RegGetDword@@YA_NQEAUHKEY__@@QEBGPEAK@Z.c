/*
 * XREFs of ?RegGetDword@@YA_NQEAUHKEY__@@QEBGPEAK@Z @ 0x1400054D4
 * Callers:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x14000553C (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall RegGetDword(HKEY a1, const unsigned __int16 *const a2, unsigned int *a3)
{
  bool result; // al
  DWORD Type; // [rsp+40h] [rbp+8h] BYREF
  DWORD cbData; // [rsp+48h] [rbp+10h] BYREF
  int v7; // [rsp+4Ch] [rbp+14h]
  unsigned int Data; // [rsp+58h] [rbp+20h] BYREF

  v7 = HIDWORD(a2);
  cbData = 4;
  if ( !a1 || RegQueryValueExW(a1, L"DisableInstrumentationBreaking", 0LL, &Type, (LPBYTE)&Data, &cbData) )
    return 0;
  result = Type == 4;
  *a3 = Data;
  return result;
}
