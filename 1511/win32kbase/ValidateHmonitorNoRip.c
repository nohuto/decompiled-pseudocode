/*
 * XREFs of ValidateHmonitorNoRip @ 0x1C00708D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateHmonitorNoRip(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // r8
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx

  v2 = 0LL;
  v3 = (unsigned __int16)a1;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v4 = a1 >> 16;
    v5 = qword_1C0102D48 + (unsigned int)(v3 * dword_1C0102D50);
    if ( ((_WORD)v4 == *(_WORD *)(v5 + 18)
       || (_WORD)v4 == 0xFFFF
       || !(_WORD)v4 && PsGetCurrentProcessWow64Process(v4, a2, v3))
      && (*(_BYTE *)(v5 + 17) & 1) == 0
      && *(_BYTE *)(v5 + 16) == 12 )
    {
      return *(_QWORD *)v5;
    }
  }
  return v2;
}
