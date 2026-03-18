/*
 * XREFs of UserGetMiniWinInfo @ 0x1C01E7810
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C014A1F0 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserGetMiniWinInfo(unsigned __int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = 0;
  v4 = HMValidateHandleNoSecure(a1, 1);
  if ( v4 )
  {
    v3 = 1;
    *(_OWORD *)a2 = *(_OWORD *)(v4 + 112);
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(v4 + 128);
    *(_DWORD *)(a2 + 32) = *(_DWORD *)(v4 + 52);
    *(_DWORD *)(a2 + 36) = *(_DWORD *)(v4 + 48);
    *(_DWORD *)(a2 + 40) = (*(unsigned __int8 *)(v4 + 40) >> 6) & 1;
    *(_QWORD *)(a2 + 48) = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 40LL);
  }
  return v3;
}
