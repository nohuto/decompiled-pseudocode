/*
 * XREFs of GetActiveHKL @ 0x1C0084850
 * Callers:
 *     ?FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z @ 0x1C0082110 (-FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z.c)
 *     xxxProcessKeyEvent @ 0x1C00830F4 (xxxProcessKeyEvent.c)
 *     xxxKeyEvent @ 0x1C008345C (xxxKeyEvent.c)
 *     xxxButtonEvent @ 0x1C0085B2C (xxxButtonEvent.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C01D9504 (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     VKFromVSC @ 0x1C022A6E0 (VKFromVSC.c)
 * Callees:
 *     <none>
 */

__int64 GetActiveHKL()
{
  __int64 v0; // rax
  __int64 v1; // rax
  __int64 v2; // rax

  if ( gpqForeground
    && (v0 = *(_QWORD *)(gpqForeground + 80LL)) != 0
    && (v1 = *(_QWORD *)(v0 + 16)) != 0
    && (v2 = *(_QWORD *)(v1 + 392)) != 0 )
  {
    return *(_QWORD *)(v2 + 40);
  }
  else
  {
    return GetKeyboardLayout(0);
  }
}
