/*
 * XREFs of xxxCallHandleMenuMessages @ 0x1C0216594
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     xxxMNDragOver @ 0x1C023B7B8 (xxxMNDragOver.c)
 * Callees:
 *     xxxMNEndMenuState @ 0x1C01377F0 (xxxMNEndMenuState.c)
 *     xxxHandleMenuMessages @ 0x1C0137D0C (xxxHandleMenuMessages.c)
 *     xxxEndMenuLoop @ 0x1C013A060 (xxxEndMenuLoop.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     MNCheckButtonDownState @ 0x1C02164AC (MNCheckButtonDownState.c)
 */

__int64 __fastcall xxxCallHandleMenuMessages(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rax
  unsigned int *v10; // r8
  unsigned int v11; // eax
  unsigned int v12; // edi
  int v13; // ecx
  _QWORD v15[7]; // [rsp+20h] [rbp-38h] BYREF

  memset(v15, 0, 0x30uLL);
  if ( (*(_DWORD *)(a1 + 8) & 0x4008) == 0x4008 )
    MNCheckButtonDownState(a1);
  if ( a2 )
    v15[0] = *(_QWORD *)a2;
  else
    v15[0] = 0LL;
  LODWORD(v15[1]) = a3;
  v15[2] = a4;
  v9 = a5;
  if ( (unsigned int)(a3 - 512) <= 0xE )
    v9 = ((unsigned __int16)(*(_WORD *)(a2 + 132) + WORD1(a5)) << 16) | (unsigned __int16)(a5 + *(_WORD *)(a2 + 128));
  v10 = *(unsigned int **)a1;
  *(_DWORD *)(a1 + 8) |= 0x200u;
  v15[3] = v9;
  v11 = xxxHandleMenuMessages((__int64)v15, a1, v10);
  *(_DWORD *)(a1 + 8) &= ~0x200u;
  v12 = v11;
  v13 = *(_DWORD *)(a1 + 8);
  if ( v11 && (v13 & 0x100) != 0 && ((v13 & 4) == 0 || (**(_DWORD **)a1 & 0x8000) != 0) )
  {
    xxxEndMenuLoop(a1, *(unsigned int **)a1);
    xxxMNEndMenuState((_QWORD *)a1);
  }
  return v12;
}
