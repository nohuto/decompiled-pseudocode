/*
 * XREFs of ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C01F6C08
 * Callers:
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0117B2C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0117CEC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     CkptRestore @ 0x1C0085C30 (CkptRestore.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall _CopyWindowCheckpoint(struct tagWND *a1, struct tagWND *a2)
{
  unsigned int v3; // ebx
  __int64 Prop; // rax
  __int64 v6; // rcx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  int v9; // eax
  char *v10; // rax
  __int128 v12; // [rsp+20h] [rbp-40h] BYREF
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  __int128 v14; // [rsp+40h] [rbp-20h]
  int v15; // [rsp+50h] [rbp-10h]

  v3 = 0;
  Prop = GetProp((__int64)a1, (unsigned __int16)atomCheckpointProp, 1LL);
  if ( Prop )
  {
    v7 = *(_OWORD *)(Prop + 16);
    v12 = *(_OWORD *)Prop;
    v8 = *(_OWORD *)(Prop + 32);
    v9 = *(_DWORD *)(Prop + 48);
    v13 = v7;
    v15 = v9;
    v14 = v8;
    if ( (unsigned int)IsWindowDesktopComposed(v6) )
    {
      TransformRectBetweenCoordinateSpaces(&v12, &v12, a2, a1);
      TransformPointBetweenCoordinateSpaces(&v13, &v13, a2, a1);
      TransformPointBetweenCoordinateSpaces((char *)&v13 + 8, (char *)&v13 + 8, a2, a1);
    }
    v10 = CkptRestore((__int64)a2, &v12);
    if ( v10 )
    {
      v3 = 1;
      *(_OWORD *)v10 = v12;
      *((_OWORD *)v10 + 1) = v13;
      *((_OWORD *)v10 + 2) = v14;
      *((_DWORD *)v10 + 12) = v15;
    }
  }
  return v3;
}
