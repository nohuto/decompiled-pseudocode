/*
 * XREFs of NtGdiGetRealizationInfo @ 0x1C010CE00
 * Callers:
 *     <none>
 * Callees:
 *     GreGetRealizationInfo @ 0x1C010CE84 (GreGetRealizationInfo.c)
 */

__int64 __fastcall NtGdiGetRealizationInfo(HDC a1, _DWORD *a2)
{
  _DWORD *v2; // rbx
  _DWORD *v3; // rax
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v2 = a2;
  v5 = 0uLL;
  v6 = 0LL;
  v3 = a2;
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    v3 = (_DWORD *)W32UserProbeAddress;
  LODWORD(v5) = *v3;
  if ( (((_DWORD)v5 - 16) & 0xFFFFFFF7) != 0 )
    return 0LL;
  result = GreGetRealizationInfo(a1, (struct tagFONT_REALIZATION_INFO *)&v5);
  if ( (_DWORD)result )
  {
    if ( (unsigned __int64)v2 >= W32UserProbeAddress )
      v2 = (_DWORD *)W32UserProbeAddress;
    *(_OWORD *)v2 = v5;
    *((_QWORD *)v2 + 2) = v6;
  }
  return result;
}
