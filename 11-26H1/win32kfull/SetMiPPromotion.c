/*
 * XREFs of SetMiPPromotion @ 0x140054DB4
 * Callers:
 *     xxxDefPointerProc @ 0x140053A6C (xxxDefPointerProc.c)
 *     NtUserAutoPromoteMouseInPointer @ 0x140054AD0 (NtUserAutoPromoteMouseInPointer.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserConvertPrimaryPointerToMouseDrag @ 0x1402B03B0 (NtUserConvertPrimaryPointerToMouseDrag.c)
 * Callees:
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x140054E50 (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 */

unsigned __int64 __fastcall SetMiPPromotion(struct tagTHREADINFO *a1, int a2)
{
  unsigned __int64 result; // rax
  unsigned int *v5; // rdx
  unsigned int v6; // ecx
  unsigned int v7; // ecx

  result = *((_QWORD *)a1 + 189);
  if ( result )
  {
    if ( (*(_DWORD *)result & 4) == 0 )
      SetMiPWakeBit(a1);
    if ( ((a2 - 578) & 0xFFFFFFFB) != 0 )
    {
      result = (unsigned int)(a2 - 577);
      if ( (unsigned int)result <= 3 || (result = (unsigned int)(a2 - 581), (unsigned int)result <= 0x12) )
      {
        v5 = (unsigned int *)*((_QWORD *)a1 + 189);
        v6 = *v5;
        if ( (v5[9] & 0x1F0) != 0 )
          v7 = v6 & 0xFFFFFFFD;
        else
          v7 = v6 | 2;
        *v5 = v7;
      }
    }
    else
    {
      **((_DWORD **)a1 + 189) |= 4u;
      **((_DWORD **)a1 + 189) &= ~0x10u;
      result = *((_QWORD *)a1 + 189);
      *(_DWORD *)result &= ~2u;
    }
  }
  return result;
}
