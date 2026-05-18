/*
 * XREFs of sub_180003EA8 @ 0x180003EA8
 * Callers:
 *     sub_180003A94 @ 0x180003A94 (sub_180003A94.c)
 * Callees:
 *     sub_180003E6C @ 0x180003E6C (sub_180003E6C.c)
 *     sub_180003FE8 @ 0x180003FE8 (sub_180003FE8.c)
 *     sub_180004038 @ 0x180004038 (sub_180004038.c)
 *     sub_1800040A8 @ 0x1800040A8 (sub_1800040A8.c)
 */

char __fastcall sub_180003EA8(__int64 a1, __int64 a2)
{
  char v2; // bl
  int v3; // eax

  v2 = a1;
  LOBYTE(v3) = sub_180003E6C(a1, a2);
  if ( (_BYTE)v3 )
  {
    if ( (v2 & 8) == 0
      || (unsigned int)sub_180004038()
      || (v3 = IsDebuggerPresent()) == 0 && (v3 = sub_180003FE8()) != 0 )
    {
      LOBYTE(v3) = sub_1800040A8(
                     (unsigned int)L"Unexpected HRESULT in MilInstrumentation* caller",
                     0,
                     (unsigned int)L"MilInstrumentationBreak",
                     (unsigned int)L"windows\\dwm\\shared\\util\\utillib\\debugbreak.cpp",
                     221);
    }
  }
  return v3;
}
