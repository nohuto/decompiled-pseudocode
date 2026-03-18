/*
 * XREFs of xxxCallHandleMenuMessages @ 0x1C020F130
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     xxxMNDragOver @ 0x1C0233278 (xxxMNDragOver.c)
 * Callees:
 *     xxxHandleMenuMessages @ 0x1C0141790 (xxxHandleMenuMessages.c)
 *     xxxEndMenuLoop @ 0x1C0142C30 (xxxEndMenuLoop.c)
 *     xxxMNEndMenuState @ 0x1C0142C80 (xxxMNEndMenuState.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     MNCheckButtonDownState @ 0x1C020F048 (MNCheckButtonDownState.c)
 */

__int64 __fastcall xxxCallHandleMenuMessages(HDC a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned int *v13; // r8
  unsigned int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // edi
  int v18; // ecx
  _QWORD v20[7]; // [rsp+20h] [rbp-38h] BYREF

  memset(v20, 0, 0x30uLL);
  if ( ((_DWORD)a1[2] & 0x4008) == 0x4008 )
    MNCheckButtonDownState((__int64)a1, v9, v10, v11);
  if ( a2 )
    v20[0] = *(_QWORD *)a2;
  else
    v20[0] = 0LL;
  LODWORD(v20[1]) = a3;
  v20[2] = a4;
  v12 = a5;
  if ( (unsigned int)(a3 - 512) <= 0xE )
    v12 = ((unsigned __int16)(*(_WORD *)(a2 + 132) + WORD1(a5)) << 16) | (unsigned __int16)(a5 + *(_WORD *)(a2 + 128));
  v13 = *(unsigned int **)a1;
  *((_DWORD *)a1 + 2) |= 0x200u;
  v20[3] = v12;
  v14 = xxxHandleMenuMessages((__int64)v20, (__int64)a1, (__int64)v13, v11);
  *((_DWORD *)a1 + 2) &= ~0x200u;
  v17 = v14;
  v18 = *((_DWORD *)a1 + 2);
  if ( v14 && (v18 & 0x100) != 0 && ((v18 & 4) == 0 || (**(_DWORD **)a1 & 0x8000) != 0) )
  {
    xxxEndMenuLoop((__int64)a1, *(unsigned int **)a1, v15, v16);
    xxxMNEndMenuState(a1);
  }
  return v17;
}
