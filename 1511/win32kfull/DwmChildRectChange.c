/*
 * XREFs of DwmChildRectChange @ 0x1C006EE8C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0054A5C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00D29C0 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     OffsetChildren @ 0x1C00EFED0 (OffsetChildren.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0041E08 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     DwmAsyncChildMoveSize @ 0x1C006F0AC (DwmAsyncChildMoveSize.c)
 *     AdjustWindowRectExInternal @ 0x1C006F17C (AdjustWindowRectExInternal.c)
 */

__int64 __fastcall DwmChildRectChange(__int64 a1)
{
  LONG *v1; // r14
  int v3; // r15d
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  int v9; // edx
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // rcx
  LONG v13; // r10d
  int v14; // eax
  LONG v15; // eax
  int v16; // eax
  LONG v17; // eax
  LONG v18; // ebx
  int v19; // esi
  int v20; // eax
  int v21; // r11d
  int v22; // eax
  int v23; // eax
  void *v24; // rax
  struct tagRECT v26; // [rsp+40h] [rbp-20h] BYREF
  __int128 v27; // [rsp+50h] [rbp-10h] BYREF

  v1 = (LONG *)(a1 + 112);
  v3 = 0;
  v26 = *(struct tagRECT *)(a1 + 112);
  if ( !IsRectEmptyInl(&v26) )
  {
    v8 = *(_QWORD *)(a1 + 16);
    if ( *(_DWORD *)(v8 + 552) > 0x9900u )
      v9 = 0;
    else
      v9 = *(_DWORD *)(v8 + 568);
    v10 = *(_DWORD *)(a1 + 288);
    if ( (v10 & 0x80u) == 0 )
      v9 |= 0x2000000u;
    v27 = 0LL;
    if ( (v10 & 0x10000000) != 0 )
    {
      v11 = *(unsigned __int16 *)(a1 + 360);
    }
    else if ( *(_DWORD *)(a1 + 344) )
    {
      v11 = *(unsigned __int16 *)(gpsi + 7286LL);
    }
    else
    {
      v11 = 96;
    }
    AdjustWindowRectExInternal(
      (unsigned int)&v27,
      *(_DWORD *)(a1 + 52),
      v8,
      *(_DWORD *)(a1 + 48),
      *(_DWORD *)(v8 + 552),
      v9,
      v11);
    v3 = DWORD2(v27);
    v26.left -= v27;
    v26.top -= DWORD1(v27);
    if ( !IsRectEmptyInl((const struct tagRECT *)(a1 + 128)) )
    {
      v14 = *(_DWORD *)(a1 + 132);
      if ( (int)v4 >= *v12 )
        v4 = (unsigned int)*v12;
      v26.left = v4;
      if ( (int)v6 >= v14 )
        v6 = (unsigned int)v14;
      v15 = *(_DWORD *)(a1 + 136);
      v26.top = v6;
      if ( v13 <= v15 )
        v13 = v15;
      v16 = *(_DWORD *)(a1 + 140);
      if ( (int)v7 <= v16 )
        v7 = (unsigned int)v16;
    }
    v5 = (unsigned int)*v1;
    v17 = v5;
    v18 = *(_DWORD *)(a1 + 120);
    if ( (int)v4 > (int)v5 )
      v17 = v4;
    if ( v17 >= v18 )
    {
      v4 = (unsigned int)v18;
      v26.left = *(_DWORD *)(a1 + 120);
    }
    else if ( (int)v4 <= (int)v5 )
    {
      v4 = (unsigned int)v5;
      v26.left = *v1;
    }
    v19 = *(_DWORD *)(a1 + 116);
    v20 = v19;
    v21 = *(_DWORD *)(a1 + 124);
    if ( (int)v6 > v19 )
      v20 = v6;
    if ( v20 >= v21 )
    {
      v6 = (unsigned int)v21;
      v26.top = *(_DWORD *)(a1 + 124);
    }
    else if ( (int)v6 <= v19 )
    {
      v6 = (unsigned int)v19;
      v26.top = *(_DWORD *)(a1 + 116);
    }
    v22 = v18;
    if ( v13 < v18 )
      v22 = v13;
    if ( v22 <= (int)v5 )
    {
      v13 = v5;
    }
    else if ( v13 >= v18 )
    {
      v13 = v18;
    }
    v23 = v21;
    if ( (int)v7 < v21 )
      v23 = v7;
    if ( v23 <= v19 )
    {
      v7 = (unsigned int)v19;
    }
    else if ( (int)v7 >= v21 )
    {
      v7 = (unsigned int)v21;
    }
    if ( (int)v4 > v13 )
      v13 = v4;
    v26.right = v13;
    if ( (int)v6 > (int)v7 )
      v7 = (unsigned int)v6;
    v26.bottom = v7;
  }
  v24 = (void *)ReferenceDwmApiPort(v5, v4, v6, v7);
  return DwmAsyncChildMoveSize(v24, (__int64)&v26, v3);
}
