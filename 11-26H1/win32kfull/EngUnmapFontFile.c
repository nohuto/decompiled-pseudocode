/*
 * XREFs of EngUnmapFontFile @ 0x14031D6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnmapFile@@YAXPEAUFILEVIEW@@H@Z @ 0x140265250 (-vUnmapFile@@YAXPEAUFILEVIEW@@H@Z.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __stdcall EngUnmapFontFile(ULONG_PTR iFile)
{
  Gre::Base *v2; // rcx
  struct _FAST_MUTEX **v3; // rdi
  int v4; // ecx
  int v5; // ecx
  bool v6; // zf
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  _OWORD v11[5]; // [rsp+20h] [rbp-58h] BYREF

  memset_0(v11, 0, sizeof(v11));
  v3 = (struct _FAST_MUTEX **)Gre::Base::Globals(v2);
  KeAcquireGuardedMutex(*v3 + 26);
  v4 = *(_DWORD *)(iFile + 96);
  if ( v4 )
  {
    v5 = v4 - 1;
    *(_DWORD *)(iFile + 96) = v5;
    if ( !v5 )
    {
      if ( *(_QWORD *)(iFile + 80) )
      {
        v6 = *(_QWORD *)(iFile + 16) == 0LL;
        v7 = *(_OWORD *)(iFile + 16);
        v11[0] = *(_OWORD *)iFile;
        v8 = *(_OWORD *)(iFile + 32);
        v11[1] = v7;
        v9 = *(_OWORD *)(iFile + 48);
        v11[2] = v8;
        v10 = *(_OWORD *)(iFile + 64);
        *(_QWORD *)(iFile + 8) = 0LL;
        v11[3] = v9;
        v11[4] = v10;
        if ( v6 )
          *(_QWORD *)(iFile + 32) = 0LL;
      }
    }
  }
  KeReleaseGuardedMutex(*v3 + 26);
  if ( *((_QWORD *)&v11[0] + 1) )
    vUnmapFile((struct FILEVIEW *)v11);
}
