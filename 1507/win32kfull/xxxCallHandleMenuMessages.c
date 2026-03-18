/*
 * XREFs of xxxCallHandleMenuMessages @ 0x1C0216730
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     xxxMNDragOver @ 0x1C023B5E8 (xxxMNDragOver.c)
 * Callees:
 *     xxxMNEndMenuState @ 0x1C010B2F0 (xxxMNEndMenuState.c)
 *     xxxHandleMenuMessages @ 0x1C010B80C (xxxHandleMenuMessages.c)
 *     xxxEndMenuLoop @ 0x1C010E5F0 (xxxEndMenuLoop.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     MNCheckButtonDownState @ 0x1C0216648 (MNCheckButtonDownState.c)
 */

__int64 __fastcall xxxCallHandleMenuMessages(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v9; // r9
  __int64 v10; // rax
  unsigned int *v11; // r8
  unsigned int v12; // eax
  unsigned int v13; // edi
  int v14; // ecx
  _QWORD v16[7]; // [rsp+20h] [rbp-38h] BYREF

  memset(v16, 0, 0x30uLL);
  if ( (*(_DWORD *)(a1 + 8) & 0x4008) == 0x4008 )
    MNCheckButtonDownState(a1);
  if ( a2 )
    v16[0] = *(_QWORD *)a2;
  else
    v16[0] = 0LL;
  LODWORD(v16[1]) = a3;
  v16[2] = a4;
  v10 = a5;
  if ( (unsigned int)(a3 - 512) <= 0xE )
    v10 = ((unsigned __int16)(*(_WORD *)(a2 + 132) + WORD1(a5)) << 16) | (unsigned __int16)(a5 + *(_WORD *)(a2 + 128));
  v11 = *(unsigned int **)a1;
  *(_DWORD *)(a1 + 8) |= 0x200u;
  v16[3] = v10;
  v12 = xxxHandleMenuMessages((__int64)v16, a1, (__int64)v11, v9);
  *(_DWORD *)(a1 + 8) &= ~0x200u;
  v13 = v12;
  v14 = *(_DWORD *)(a1 + 8);
  if ( v12 && (v14 & 0x100) != 0 && ((v14 & 4) == 0 || (**(_DWORD **)a1 & 0x8000) != 0) )
  {
    xxxEndMenuLoop(a1, *(unsigned int **)a1);
    xxxMNEndMenuState((_QWORD *)a1);
  }
  return v13;
}
