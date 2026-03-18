/*
 * XREFs of ValidateHmonitor @ 0x1C000E000
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 */

__int64 __fastcall ValidateHmonitor(unsigned __int64 a1)
{
  int v1; // r8d
  unsigned __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 result; // rax

  v1 = (unsigned __int16)a1;
  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1)
    || (v2 = a1 >> 16, v3 = qword_1C01003E8 + (unsigned int)(v1 * dword_1C01003F0), (_WORD)v2 != *(_WORD *)(v3 + 18))
    && (_WORD)v2 != 0xFFFF
    && ((_WORD)v2 || !PsGetCurrentProcessWow64Process())
    || (*(_BYTE *)(v3 + 17) & 1) != 0
    || *(_BYTE *)(v3 + 16) != 12
    || (result = *(_QWORD *)v3) == 0 )
  {
    UserSetLastError(1461LL);
    return 0LL;
  }
  return result;
}
