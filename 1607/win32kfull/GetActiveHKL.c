/*
 * XREFs of GetActiveHKL @ 0x1C00A41B4
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C00A24AC (xxxProcessKeyEvent.c)
 *     xxxKeyEvent @ 0x1C00A2818 (xxxKeyEvent.c)
 *     xxxButtonEvent @ 0x1C00DDEA4 (xxxButtonEvent.c)
 *     VKFromVSC @ 0x1C00E8DD4 (VKFromVSC.c)
 *     ?FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z @ 0x1C010B9DC (-FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C01D0B68 (-RemoteSyncToggleKeys@@YAXK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetActiveHKL(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  if ( gpqForeground
    && (v4 = *(_QWORD *)(gpqForeground + 88LL)) != 0
    && (v5 = *(_QWORD *)(v4 + 16)) != 0
    && (v6 = *(_QWORD *)(v5 + 392)) != 0 )
  {
    return *(_QWORD *)(v6 + 40);
  }
  else
  {
    return GetKeyboardLayout(0, a2, a3, a4);
  }
}
