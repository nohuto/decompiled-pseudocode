/*
 * XREFs of ValidateHmonitor @ 0x1C00470E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 */

__int64 __fastcall ValidateHmonitor(unsigned __int64 a1, __int64 a2)
{
  int v2; // r8d
  unsigned __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 result; // rax

  v2 = (unsigned __int16)a1;
  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1)
    || (v3 = a1 >> 16, v4 = qword_1C0102D48 + (unsigned int)(v2 * dword_1C0102D50), (_WORD)v3 != *(_WORD *)(v4 + 18))
    && (_WORD)v3 != 0xFFFF
    && ((_WORD)v3 || !PsGetCurrentProcessWow64Process())
    || (*(_BYTE *)(v4 + 17) & 1) != 0
    || *(_BYTE *)(v4 + 16) != 12
    || (result = *(_QWORD *)v4) == 0 )
  {
    UserSetLastError(1461LL, a2);
    return 0LL;
  }
  return result;
}
