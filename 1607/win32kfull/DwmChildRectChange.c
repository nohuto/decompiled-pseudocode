/*
 * XREFs of DwmChildRectChange @ 0x1C006C824
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0079418 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00937D8 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     OffsetChildren @ 0x1C010F838 (OffsetChildren.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0035534 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     DwmAsyncChildMoveSize @ 0x1C006CA30 (DwmAsyncChildMoveSize.c)
 *     _AdjustWindowRectExForDpi @ 0x1C006D7AC (_AdjustWindowRectExForDpi.c)
 */

__int64 __fastcall DwmChildRectChange(__int64 a1)
{
  LONG *v1; // r14
  int v3; // r15d
  int v4; // r8d
  bool v5; // zf
  int v6; // eax
  LONG v7; // edx
  LONG *v8; // rcx
  LONG v9; // r8d
  LONG v10; // r9d
  LONG v11; // r10d
  LONG v12; // eax
  LONG v13; // eax
  LONG v14; // ecx
  LONG v15; // eax
  LONG v16; // ebx
  LONG v17; // esi
  LONG v18; // eax
  LONG v19; // r11d
  LONG v20; // eax
  LONG v21; // eax
  void *v22; // rax
  __int64 v24; // rax
  struct tagRECT v25; // [rsp+30h] [rbp-20h] BYREF
  __int128 v26; // [rsp+40h] [rbp-10h] BYREF

  v1 = (LONG *)(a1 + 112);
  v3 = 0;
  v25 = *(struct tagRECT *)(a1 + 112);
  if ( !IsRectEmptyInl(&v25) )
  {
    v5 = (*(_DWORD *)(a1 + 288) & 0x10000000) == 0;
    v26 = 0LL;
    if ( v5 )
    {
      if ( (*(_DWORD *)(a1 + 352) & 0xF) == 0
        && (v24 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
        && (*(_DWORD *)(*(_QWORD *)(v24 + 8) + 244LL) & 1) != 0 )
      {
        v6 = 96;
      }
      else
      {
        v6 = *(unsigned __int16 *)(gpsi + 8678LL);
      }
    }
    else
    {
      v6 = *(unsigned __int16 *)(a1 + 356);
    }
    AdjustWindowRectExForDpi((unsigned int)&v26, *(_DWORD *)(a1 + 52), v4, *(_DWORD *)(a1 + 48), v6);
    v3 = DWORD2(v26);
    v25.left -= v26;
    v25.top -= DWORD1(v26);
    if ( !IsRectEmptyInl((const struct tagRECT *)(a1 + 128)) )
    {
      v12 = *(_DWORD *)(a1 + 132);
      if ( v7 >= *v8 )
        v7 = *v8;
      v25.left = v7;
      if ( v9 >= v12 )
        v9 = v12;
      v13 = *(_DWORD *)(a1 + 136);
      v25.top = v9;
      if ( v11 <= v13 )
        v11 = v13;
      if ( v10 <= *(_DWORD *)(a1 + 140) )
        v10 = *(_DWORD *)(a1 + 140);
    }
    v14 = *v1;
    v15 = *v1;
    v16 = *(_DWORD *)(a1 + 120);
    if ( v7 > *v1 )
      v15 = v7;
    if ( v15 >= v16 )
    {
      v7 = *(_DWORD *)(a1 + 120);
      v25.left = v7;
    }
    else if ( v7 <= v14 )
    {
      v7 = *v1;
      v25.left = *v1;
    }
    v17 = *(_DWORD *)(a1 + 116);
    v18 = v17;
    v19 = *(_DWORD *)(a1 + 124);
    if ( v9 > v17 )
      v18 = v9;
    if ( v18 >= v19 )
    {
      v9 = *(_DWORD *)(a1 + 124);
      v25.top = v9;
    }
    else if ( v9 <= v17 )
    {
      v9 = *(_DWORD *)(a1 + 116);
      v25.top = v9;
    }
    v20 = v16;
    if ( v11 < v16 )
      v20 = v11;
    if ( v20 <= v14 )
    {
      v11 = v14;
    }
    else if ( v11 >= v16 )
    {
      v11 = v16;
    }
    v21 = v19;
    if ( v10 < v19 )
      v21 = v10;
    if ( v21 <= v17 )
    {
      v10 = v17;
    }
    else if ( v10 >= v19 )
    {
      v10 = v19;
    }
    if ( v7 > v11 )
      v11 = v7;
    v25.right = v11;
    if ( v9 > v10 )
      v10 = v9;
    v25.bottom = v10;
  }
  v22 = (void *)ReferenceDwmApiPort();
  return DwmAsyncChildMoveSize(v22, (__int64)&v25, v3);
}
