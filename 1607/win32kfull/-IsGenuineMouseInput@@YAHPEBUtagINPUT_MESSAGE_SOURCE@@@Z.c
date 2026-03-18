/*
 * XREFs of ?IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C005DA08
 * Callers:
 *     PostInputMessage @ 0x1C005816C (PostInputMessage.c)
 *     WakeSomeone @ 0x1C005B3C4 (WakeSomeone.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z @ 0x1C010546C (-ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsGenuineMouseInput(const struct tagINPUT_MESSAGE_SOURCE *a1)
{
  unsigned int v1; // r8d
  int v2; // eax

  if ( (unsigned __int64)a1 <= 0x79 )
    return 0LL;
  v1 = 0;
  if ( (xmmword_1C0326F04 & 1) == 0 )
    goto LABEL_3;
  v2 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 != 2 )
  {
LABEL_4:
    if ( ((v2 - 18) & 0xFFFFFFEF) != 0 )
      return v1;
LABEL_6:
    if ( (unsigned int)(*((_DWORD *)a1 + 1) - 1) <= 1 )
      return 1;
    return v1;
  }
  if ( *((_DWORD *)a1 + 1) )
  {
LABEL_3:
    v2 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 == 2 )
      goto LABEL_6;
    goto LABEL_4;
  }
  return 1LL;
}
