/*
 * XREFs of ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EDB40
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     xxxFlashWindow @ 0x1C00776EC (xxxFlashWindow.c)
 *     FindTimer @ 0x1C0079B7C (FindTimer.c)
 *     xxxRedrawWindow @ 0x1C008E8E0 (xxxRedrawWindow.c)
 */

void __fastcall SoundSentryTimer(struct tagWND *a1)
{
  __int64 v1; // r10
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+38h] [rbp-20h]

  v1 = HMValidateHandleNoSecure((unsigned __int64)ghwndSoundSentry, 1);
  if ( v1 )
  {
    v2 = gdwCurrentEffect;
  }
  else
  {
    v2 = 3;
    gdwCurrentEffect = 3;
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
    v7 = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = &v7;
    v8 = v1;
    if ( v1 )
      ++*(_DWORD *)(v1 + 8);
    xxxFlashWindow(v1, 0, 0);
    goto LABEL_14;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v7 = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = &v7;
    v8 = v1;
    if ( v1 )
      ++*(_DWORD *)(v1 + 8);
    xxxRedrawWindow((struct tagWND *)v1, 0LL, 0LL, 645);
LABEL_14:
    ThreadUnlock1(v6, v5);
    goto LABEL_15;
  }
  if ( v4 == 1 )
    xxxRedrawWindow(0LL, 0LL, 0LL, 66181);
LABEL_15:
  gdwCurrentEffect = 0;
  ghwndSoundSentry = 0LL;
  FindTimer(0LL, gtmridSoundSentry, 4u, 1, 0LL);
  gtmridSoundSentry = 0LL;
}
