/*
 * XREFs of RtlpGetDirPath @ 0x18000C588
 * Callers:
 *     RtlpComputePath @ 0x18000CD74 (RtlpComputePath.c)
 * Callees:
 *     wcschr @ 0x18009C580 (wcschr.c)
 *     wcsrchr @ 0x18009C7C0 (wcsrchr.c)
 */

const wchar_t *__fastcall RtlpGetDirPath(wchar_t *Str, _QWORD *a2)
{
  const wchar_t *v3; // rbx
  _QWORD *SubSystemTib; // rcx
  wchar_t *v5; // rax
  wchar_t *v6; // rsi
  __int64 v8; // rbx

  v3 = Str;
  if ( !Str )
  {
    SubSystemTib = NtCurrentTeb()->NtTib.SubSystemTib;
    if ( SubSystemTib && (v8 = SubSystemTib[1]) != 0 )
      v3 = *(const wchar_t **)(v8 + 8);
    else
      v3 = *(const wchar_t **)(LdrpImageEntry + 80);
  }
  v5 = wcschr(v3, 0x5Cu);
  v6 = v5;
  if ( v5 )
  {
    v5 = wcsrchr(v5, 0x5Cu);
    if ( v5 == v6 )
      ++v5;
  }
  if ( v5 )
  {
    *a2 = (char *)v5 - (char *)v3;
    return v3;
  }
  else
  {
    *a2 = 0LL;
    return 0LL;
  }
}
