/*
 * XREFs of ?SubtractValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEAPEAUHRGN__@@@Z @ 0x180113238
 * Callers:
 *     ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180094200 (-AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUnique.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::DeviceBitmapInfo::SubtractValidRect(__int64 a1, const RECT *a2, HRGN *a3)
{
  RECT *v3; // rsi
  unsigned int v6; // r8d
  unsigned int v8; // ebx
  unsigned int v9; // eax
  unsigned int left; // ecx
  unsigned int bottom; // edx
  HRGN RectRgnIndirect; // rax
  signed int LastError; // eax
  HRGN v14; // rbp
  signed int v15; // eax
  int v16; // eax
  int v17; // r14d
  signed int v18; // eax
  signed int v19; // eax
  __int64 v20; // rax
  unsigned int top; // eax
  unsigned int right; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v28; // [rsp+20h] [rbp-68h]
  unsigned int v29; // [rsp+20h] [rbp-68h]
  struct tagRECT rc; // [rsp+30h] [rbp-58h] BYREF

  v3 = (RECT *)(a1 + 24);
  v6 = *(_DWORD *)(a1 + 24);
  v8 = 0;
  if ( *(_DWORD *)(a1 + 32) <= v6 )
    return v8;
  v9 = *(_DWORD *)(a1 + 36);
  if ( v9 <= *(_DWORD *)(a1 + 28) )
    return v8;
  left = a2->left;
  if ( a2->right <= (unsigned int)a2->left )
    return v8;
  bottom = a2->bottom;
  if ( bottom <= a2->top || v3->right <= left || a2->right <= v6 || v9 <= a2->top || bottom <= v3->top )
    return v8;
  if ( !*a3 )
  {
    SetLastError(0);
    RectRgnIndirect = CreateRectRgnIndirect(a2);
    *a3 = RectRgnIndirect;
    if ( !RectRgnIndirect )
    {
      LastError = GetLastError();
      v8 = LastError;
      if ( LastError > 0 )
        v8 = (unsigned __int16)LastError | 0x80070000;
      v28 = 2008;
LABEL_14:
      if ( (v8 & 0x80000000) == 0 )
        v8 = -2003304445;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v28);
      return v8;
    }
  }
  v14 = *(HRGN *)(a1 + 40);
  if ( !v14 )
  {
    SetLastError(0);
    v14 = CreateRectRgnIndirect(v3);
    if ( !v14 )
    {
      v15 = GetLastError();
      v8 = v15;
      if ( v15 > 0 )
        v8 = (unsigned __int16)v15 | 0x80070000;
      v28 = 2017;
      goto LABEL_14;
    }
  }
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *(_QWORD *)(a1 + 48));
  *(_QWORD *)(a1 + 48) = 0LL;
  SetLastError(0);
  v16 = CombineRgn(v14, v14, *a3, 4);
  v17 = v16;
  if ( v16 )
  {
    if ( v16 == 1 )
    {
      *(_QWORD *)&v3->right = 0LL;
      *(_QWORD *)&v3->left = 0LL;
    }
    else
    {
      SetLastError(0);
      if ( !GetRgnBox(v14, &rc) )
      {
        v19 = GetLastError();
        v8 = v19;
        if ( v19 > 0 )
          v8 = (unsigned __int16)v19 | 0x80070000;
        v29 = 2052;
        goto LABEL_26;
      }
      *v3 = rc;
      if ( v17 != 2 )
      {
        *(_QWORD *)(a1 + 40) = v14;
        v14 = 0LL;
        goto LABEL_38;
      }
    }
    *(_QWORD *)(a1 + 40) = 0LL;
LABEL_38:
    v20 = *(_QWORD *)(a1 + 16);
    *(RECT *)(v20 + 172) = *v3;
    *(RECT *)(v20 + 188) = *v3;
    if ( v3->left > *(_DWORD *)(a1 + 56) )
      *(_DWORD *)(a1 + 56) = v3->left;
    top = v3->top;
    if ( top > *(_DWORD *)(a1 + 60) )
      *(_DWORD *)(a1 + 60) = top;
    right = v3->right;
    if ( right < *(_DWORD *)(a1 + 64) )
      *(_DWORD *)(a1 + 64) = right;
    v23 = v3->bottom;
    if ( v23 < *(_DWORD *)(a1 + 68) )
      *(_DWORD *)(a1 + 68) = v23;
    if ( *(_DWORD *)(a1 + 64) <= *(_DWORD *)(a1 + 56) || *(_DWORD *)(a1 + 68) <= *(_DWORD *)(a1 + 60) )
    {
      *(_QWORD *)(a1 + 64) = 0LL;
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    if ( v3->left > *(_DWORD *)(a1 + 72) )
      *(_DWORD *)(a1 + 72) = v3->left;
    v24 = v3->top;
    if ( v24 > *(_DWORD *)(a1 + 76) )
      *(_DWORD *)(a1 + 76) = v24;
    v25 = v3->right;
    if ( v25 < *(_DWORD *)(a1 + 80) )
      *(_DWORD *)(a1 + 80) = v25;
    v26 = v3->bottom;
    if ( v26 < *(_DWORD *)(a1 + 84) )
      *(_DWORD *)(a1 + 84) = v26;
    if ( *(_DWORD *)(a1 + 80) <= *(_DWORD *)(a1 + 72) || *(_DWORD *)(a1 + 84) <= *(_DWORD *)(a1 + 76) )
    {
      *(_QWORD *)(a1 + 80) = 0LL;
      *(_QWORD *)(a1 + 72) = 0LL;
    }
    goto LABEL_60;
  }
  v18 = GetLastError();
  v8 = v18;
  if ( v18 > 0 )
    v8 = (unsigned __int16)v18 | 0x80070000;
  v29 = 2027;
LABEL_26:
  if ( (v8 & 0x80000000) == 0 )
    v8 = -2003304445;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v29);
LABEL_60:
  if ( v14 )
    DeleteObject(v14);
  return v8;
}
