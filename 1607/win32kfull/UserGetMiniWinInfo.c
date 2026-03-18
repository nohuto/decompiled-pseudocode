/*
 * XREFs of UserGetMiniWinInfo @ 0x1C01DE4D0
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C01324D8 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserGetMiniWinInfo(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rax

  v4 = a2;
  v5 = 0;
  LOBYTE(a2) = 1;
  v6 = HMValidateHandleNoSecure(a1, a2, a3, a4);
  if ( v6 )
  {
    v5 = 1;
    *(_OWORD *)v4 = *(_OWORD *)(v6 + 112);
    *(_OWORD *)(v4 + 16) = *(_OWORD *)(v6 + 128);
    *(_DWORD *)(v4 + 32) = *(_DWORD *)(v6 + 52);
    *(_DWORD *)(v4 + 36) = *(_DWORD *)(v6 + 48);
    *(_DWORD *)(v4 + 40) = (*(unsigned __int8 *)(v6 + 40) >> 6) & 1;
    *(_QWORD *)(v4 + 48) = *(_QWORD *)(*(_QWORD *)(v6 + 24) + 40LL);
  }
  return v5;
}
