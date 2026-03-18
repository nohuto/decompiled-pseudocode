/*
 * XREFs of HMValidateHandleNoSecure @ 0x1C00D506C
 * Callers:
 *     RecalculateQueueInfo @ 0x1C0070750 (RecalculateQueueInfo.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall HMValidateHandleNoSecure(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  __int64 v9; // rbx

  v4 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  v7 = (unsigned __int16)a1;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v8 = a1 >> 16;
    v9 = qword_1C0102D48 + (unsigned int)(v7 * dword_1C0102D50);
    if ( ((_WORD)v8 == *(_WORD *)(v9 + 18)
       || (_WORD)v8 == 0xFFFF
       || !(_WORD)v8 && PsGetCurrentProcessWow64Process(v7, v5, v6))
      && (*(_BYTE *)(v9 + 17) & 1) == 0
      && *(_BYTE *)(v9 + 16) == 1 )
    {
      return *(_QWORD *)v9;
    }
  }
  return v4;
}
