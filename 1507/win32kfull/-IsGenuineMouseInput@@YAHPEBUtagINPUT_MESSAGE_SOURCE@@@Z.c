/*
 * XREFs of ?IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C008BD5C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     PostInputMessage @ 0x1C008C718 (PostInputMessage.c)
 *     WakeSomeone @ 0x1C0090208 (WakeSomeone.c)
 *     ?ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z @ 0x1C00E1CD0 (-ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsGenuineMouseInput(const struct tagINPUT_MESSAGE_SOURCE *a1)
{
  unsigned int v2; // edx
  int v3; // ecx

  if ( (unsigned __int64)a1 <= 0x71 )
    return 0LL;
  v2 = 0;
  if ( (xmmword_1C0323904 & 1) == 0 )
    goto LABEL_3;
  v3 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 != 2 )
  {
LABEL_4:
    if ( v3 != 18 )
      return v2;
LABEL_6:
    if ( (unsigned int)(*((_DWORD *)a1 + 1) - 1) <= 1 )
      return 1;
    return v2;
  }
  if ( *((_DWORD *)a1 + 1) )
  {
LABEL_3:
    v3 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 == 2 )
      goto LABEL_6;
    goto LABEL_4;
  }
  return 1LL;
}
