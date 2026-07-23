/*
 * XREFs of RtlpResUltimateFallbackInfo @ 0x180056E50
 * Callers:
 *     LdrResFallbackLangList @ 0x18001BC14 (LdrResFallbackLangList.c)
 * Callees:
 *     LdrResGetRCConfig @ 0x180056F50 (LdrResGetRCConfig.c)
 *     LdrpTraceLoadMUIDll @ 0x1800CBC78 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall RtlpResUltimateFallbackInfo(PVOID DllHandle, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp-38h] BYREF
  const wchar_t *v9; // [rsp+38h] [rbp-30h]
  int v10; // [rsp+40h] [rbp-28h] BYREF
  const wchar_t *v11; // [rsp+48h] [rbp-20h]

  v8 = 4456514;
  v9 = L"RtlpResUltimateFallbackInfo Enter";
  v10 = 4325440;
  v11 = L"RtlpResUltimateFallbackInfo Exit";
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll(&v8, MEMORY[0x7FFE0384]);
  if ( !DllHandle || !a3 || !a4 )
    return 3221225485LL;
  *a4 = 0;
  *a3 = 0LL;
  result = LdrResGetRCConfig(DllHandle, 1);
  if ( (int)result >= 0 )
  {
    if ( (MEMORY[0x7FFE0385] & 1) != 0 )
      LdrpTraceLoadMUIDll(&v10, MEMORY[0x7FFE0384]);
    return 3221225473LL;
  }
  return result;
}
