/*
 * XREFs of RtlpResUltimateFallbackInfo @ 0x18000E4BC
 * Callers:
 *     LdrResFallbackLangList @ 0x18000FD84 (LdrResFallbackLangList.c)
 * Callees:
 *     LdrResGetRCConfig @ 0x18003A810 (LdrResGetRCConfig.c)
 *     LdrpTraceLoadMUIDll @ 0x1800DC934 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall RtlpResUltimateFallbackInfo(PVOID BaseOfImage, __int64 a2, _QWORD *a3, _DWORD *a4)
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
  if ( !BaseOfImage || !a3 || !a4 )
    return 3221225485LL;
  *a4 = 0;
  *a3 = 0LL;
  result = LdrResGetRCConfig(BaseOfImage, 1);
  if ( (int)result >= 0 )
  {
    if ( (MEMORY[0x7FFE0385] & 1) != 0 )
      LdrpTraceLoadMUIDll(&v10, MEMORY[0x7FFE0384]);
    return 3221225473LL;
  }
  return result;
}
