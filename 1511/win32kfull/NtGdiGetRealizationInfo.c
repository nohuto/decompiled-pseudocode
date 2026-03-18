/*
 * XREFs of NtGdiGetRealizationInfo @ 0x1C0022670
 * Callers:
 *     <none>
 * Callees:
 *     GreGetRealizationInfo @ 0x1C0152330 (GreGetRealizationInfo.c)
 */

__int64 __fastcall NtGdiGetRealizationInfo(HDC a1, _DWORD *a2)
{
  _DWORD *v2; // rbx
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v2 = a2;
  v4 = 0uLL;
  v5 = 0LL;
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    a2 = (_DWORD *)W32UserProbeAddress;
  LODWORD(v4) = *a2;
  if ( (((_DWORD)v4 - 16) & 0xFFFFFFF7) != 0 )
    return 0LL;
  result = GreGetRealizationInfo(a1, (struct tagFONT_REALIZATION_INFO *)&v4);
  if ( (_DWORD)result )
  {
    if ( (unsigned __int64)v2 >= W32UserProbeAddress )
      v2 = (_DWORD *)W32UserProbeAddress;
    *(_OWORD *)v2 = v4;
    *((_QWORD *)v2 + 2) = v5;
  }
  return result;
}
