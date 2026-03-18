/*
 * XREFs of VidSchiCaptureProcessName @ 0x1C0002004
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1C0001A80 (VidSchiSendToExecutionQueue.c)
 *     VidSchCollectDbgInfo @ 0x1C007A480 (VidSchCollectDbgInfo.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchiCaptureProcessName(__int64 a1, _BYTE *a2)
{
  __int64 ProcessImageFileName; // rax
  __int64 v4; // rcx
  const char *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx

  ProcessImageFileName = *(_QWORD *)(a1 + 32);
  if ( a1 == *(_QWORD *)(ProcessImageFileName + 176) )
  {
    v5 = "System";
LABEL_7:
    v6 = 16LL;
    v7 = v5 - a2;
    do
    {
      LOBYTE(ProcessImageFileName) = v6 - 18;
      if ( v6 == -2147483630 )
        break;
      LOBYTE(ProcessImageFileName) = a2[v7];
      if ( !(_BYTE)ProcessImageFileName )
        break;
      *a2++ = ProcessImageFileName;
      --v6;
    }
    while ( v6 );
    if ( !v6 )
      --a2;
    goto LABEL_13;
  }
  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 && *(_QWORD *)(v4 + 8) )
  {
    ProcessImageFileName = PsGetProcessImageFileName(*(_QWORD *)(v4 + 2648));
    v5 = (const char *)ProcessImageFileName;
  }
  else
  {
    v5 = "Unknown";
  }
  if ( v5 && *v5 )
    goto LABEL_7;
LABEL_13:
  *a2 = 0;
  return ProcessImageFileName;
}
