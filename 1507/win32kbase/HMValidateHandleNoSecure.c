/*
 * XREFs of HMValidateHandleNoSecure @ 0x1C00D31AC
 * Callers:
 *     RecalculateQueueInfo @ 0x1C000D610 (RecalculateQueueInfo.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall HMValidateHandleNoSecure(unsigned __int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  __int64 v5; // rbx

  v2 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v3 = (unsigned __int16)a1;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v4 = a1 >> 16;
    v5 = qword_1C01003E8 + (unsigned int)(v3 * dword_1C01003F0);
    if ( ((_WORD)v4 == *(_WORD *)(v5 + 18) || (_WORD)v4 == 0xFFFF || !(_WORD)v4 && PsGetCurrentProcessWow64Process(v3))
      && (*(_BYTE *)(v5 + 17) & 1) == 0
      && *(_BYTE *)(v5 + 16) == 1 )
    {
      return *(_QWORD *)v5;
    }
  }
  return v2;
}
