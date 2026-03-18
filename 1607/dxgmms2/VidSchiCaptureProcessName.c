/*
 * XREFs of VidSchiCaptureProcessName @ 0x1C0027344
 * Callers:
 *     VidSchCollectDbgInfo @ 0x1C00A1E20 (VidSchCollectDbgInfo.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchiCaptureProcessName(__int64 a1, _BYTE *a2)
{
  __int64 ProcessImageFileName; // rax
  const char *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx

  ProcessImageFileName = *(_QWORD *)(a1 + 32);
  if ( a1 == *(_QWORD *)(ProcessImageFileName + 200) )
  {
    v4 = "System";
LABEL_9:
    v6 = 16LL;
    v7 = v4 - a2;
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
    goto LABEL_15;
  }
  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 && *(_QWORD *)(v5 + 8) )
  {
    ProcessImageFileName = PsGetProcessImageFileName(*(_QWORD *)(v5 + 2648));
    v4 = (const char *)ProcessImageFileName;
  }
  else
  {
    v4 = "Unknown";
  }
  if ( v4 && *v4 )
    goto LABEL_9;
LABEL_15:
  *a2 = 0;
  return ProcessImageFileName;
}
