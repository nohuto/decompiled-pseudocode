/*
 * XREFs of EngUnmapFontFile @ 0x1C027EC70
 * Callers:
 *     <none>
 * Callees:
 *     vUnmapFile @ 0x1C013C61C (vUnmapFile.c)
 */

void __stdcall EngUnmapFontFile(ULONG_PTR iFile)
{
  int v2; // eax
  int v3; // eax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  bool v8; // zf
  _OWORD v9[5]; // [rsp+20h] [rbp-58h] BYREF

  *((_QWORD *)&v9[0] + 1) = 0LL;
  GreAcquireFastMutex(ghfmMemory);
  v2 = *(_DWORD *)(iFile + 96);
  if ( v2 )
  {
    v3 = v2 - 1;
    *(_DWORD *)(iFile + 96) = v3;
    if ( !v3 )
    {
      if ( *(_QWORD *)(iFile + 80) )
      {
        v4 = *(_OWORD *)(iFile + 16);
        v9[0] = *(_OWORD *)iFile;
        v5 = *(_OWORD *)(iFile + 32);
        v9[1] = v4;
        v6 = *(_OWORD *)(iFile + 48);
        v9[2] = v5;
        v7 = *(_OWORD *)(iFile + 64);
        *(_QWORD *)(iFile + 8) = 0LL;
        v8 = *(_QWORD *)(iFile + 16) == 0LL;
        v9[4] = v7;
        v9[3] = v6;
        if ( v8 )
          *(_QWORD *)(iFile + 32) = 0LL;
      }
    }
  }
  GreReleaseFastMutex(ghfmMemory);
  if ( *((_QWORD *)&v9[0] + 1) )
    vUnmapFile((PVOID *)v9);
}
