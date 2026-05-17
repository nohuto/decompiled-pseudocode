/*
 * XREFs of RtlpResUltimateFallbackInfo @ 0x180056E50
 * Callers:
 *     LdrResFallbackLangList @ 0x18001BC14 (LdrResFallbackLangList.c)
 * Callees:
 *     LdrResGetRCConfig @ 0x180056F50 (LdrResGetRCConfig.c)
 *     LdrpTraceLoadMUIDll @ 0x1800CBC78 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall RtlpResUltimateFallbackInfo(__int64 a1, int a2, _QWORD *a3, _DWORD *a4, int a5)
{
  unsigned int v5; // ebx
  int v10; // r9d
  __int64 result; // rax
  _DWORD *v12; // rcx
  int v13; // eax
  int v14; // [rsp+30h] [rbp-38h] BYREF
  const wchar_t *v15; // [rsp+38h] [rbp-30h]
  int v16; // [rsp+40h] [rbp-28h] BYREF
  const wchar_t *v17; // [rsp+48h] [rbp-20h]
  _DWORD *v18; // [rsp+70h] [rbp+8h] BYREF

  v14 = 4456514;
  v5 = 0;
  v15 = L"RtlpResUltimateFallbackInfo Enter";
  v18 = 0LL;
  v16 = 4325440;
  v17 = L"RtlpResUltimateFallbackInfo Exit";
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll(&v14, MEMORY[0x7FFE0384]);
  if ( !a1 || !a3 || !a4 )
    return 3221225485LL;
  v10 = a5;
  *a4 = 0;
  *a3 = 0LL;
  result = LdrResGetRCConfig(a1, a2, (unsigned int)&v18, v10, 1);
  if ( (int)result >= 0 )
  {
    v12 = v18;
    if ( (unsigned __int64)v18 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && v18[31] && v18[32] && (v13 = v18[6]) != 0 )
    {
      *a4 = v13;
      *a3 = (char *)v12 + (unsigned int)v12[31];
    }
    else
    {
      v5 = -1073741823;
    }
    if ( (MEMORY[0x7FFE0385] & 1) != 0 )
      LdrpTraceLoadMUIDll(&v16, MEMORY[0x7FFE0384]);
    return v5;
  }
  return result;
}
