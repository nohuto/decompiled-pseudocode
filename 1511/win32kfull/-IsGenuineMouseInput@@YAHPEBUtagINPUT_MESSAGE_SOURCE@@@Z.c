/*
 * XREFs of ?IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0065430
 * Callers:
 *     ?ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z @ 0x1C0053C94 (-ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     PostInputMessage @ 0x1C0064D5C (PostInputMessage.c)
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
  if ( (xmmword_1C032229C & 1) == 0 )
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
