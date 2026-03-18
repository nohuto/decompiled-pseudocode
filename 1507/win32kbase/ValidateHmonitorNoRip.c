/*
 * XREFs of ValidateHmonitorNoRip @ 0x1C000D3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateHmonitorNoRip(unsigned __int64 a1)
{
  __int64 v1; // rdi
  int v2; // r8d
  unsigned __int64 v3; // rcx
  __int64 v4; // rbx

  v1 = 0LL;
  v2 = (unsigned __int16)a1;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v3 = a1 >> 16;
    v4 = qword_1C01003E8 + (unsigned int)(v2 * dword_1C01003F0);
    if ( ((_WORD)v3 == *(_WORD *)(v4 + 18) || (_WORD)v3 == 0xFFFF || !(_WORD)v3 && PsGetCurrentProcessWow64Process())
      && (*(_BYTE *)(v4 + 17) & 1) == 0
      && *(_BYTE *)(v4 + 16) == 12 )
    {
      return *(_QWORD *)v4;
    }
  }
  return v1;
}
