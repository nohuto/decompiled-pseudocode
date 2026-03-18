/*
 * XREFs of ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E4420
 * Callers:
 *     <none>
 * Callees:
 *     xxxRedrawWindow @ 0x1C0059F20 (xxxRedrawWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     xxxFlashWindow @ 0x1C0096FE8 (xxxFlashWindow.c)
 *     FindTimer @ 0x1C00ECDEC (FindTimer.c)
 */

void __fastcall SoundSentryTimer(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  struct tagRECT *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+38h] [rbp-20h]

  LOBYTE(a2) = 1;
  v4 = HMValidateHandleNoSecure((unsigned __int64)ghwndSoundSentry, a2, a3, a4);
  if ( v4 )
  {
    v5 = gdwCurrentEffect;
  }
  else
  {
    v5 = 3;
    gdwCurrentEffect = 3;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v11 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v11;
    v12 = v4;
    if ( v4 )
      ++*(_DWORD *)(v4 + 8);
    xxxFlashWindow((struct tagWND *)v4, 0, 0);
    goto LABEL_17;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( (unsigned int)IsWindowDesktopComposed(v4) )
    {
      v8 = &grcScreenFlash;
      goto LABEL_8;
    }
    v11 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v11;
    v12 = v4;
    if ( v4 )
      ++*(_DWORD *)(v4 + 8);
    xxxRedrawWindow((struct tagWND *)v4, 0LL, 0LL, 645);
LABEL_17:
    ThreadUnlock1(v10, v9);
    goto LABEL_18;
  }
  if ( v7 == 1 )
  {
    v8 = 0LL;
LABEL_8:
    xxxRedrawWindow(0LL, v8, 0LL, 66181);
  }
LABEL_18:
  gdwCurrentEffect = 0;
  ghwndSoundSentry = 0LL;
  FindTimer(0LL, gtmridSoundSentry, 4u, 1, 0LL);
  gtmridSoundSentry = 0LL;
}
