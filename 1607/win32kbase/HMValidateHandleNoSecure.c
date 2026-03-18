/*
 * XREFs of HMValidateHandleNoSecure @ 0x1C0074540
 * Callers:
 *     ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C0074414 (-UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     RecalculateQueueInfo @ 0x1C0074DE0 (RecalculateQueueInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMValidateHandleNoSecure(unsigned __int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  __int64 v5; // rbx

  v2 = 0LL;
  PsGetThreadWin32Thread(KeGetCurrentThread());
  v3 = (unsigned __int16)a1;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v4 = a1 >> 16;
    v5 = qword_1C011A128 + (unsigned int)(v3 * dword_1C011A130);
    if ( ((_WORD)v4 == *(_WORD *)(v5 + 18) || (_WORD)v4 == 0xFFFF || !(_WORD)v4 && PsGetCurrentProcessWow64Process(v3))
      && (*(_BYTE *)(v5 + 17) & 1) == 0
      && *(_BYTE *)(v5 + 16) == 1 )
    {
      return *(_QWORD *)v5;
    }
  }
  return v2;
}
