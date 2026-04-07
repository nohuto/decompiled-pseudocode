/*
 * XREFs of ?ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z @ 0x18001FBB0
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x18001F6C0 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateRectRgnCoerceInvalid@@YAPEAUHRGN__@@PEBUtagRECT@@@Z @ 0x1800082B4 (-CreateRectRgnCoerceInvalid@@YAPEAUHRGN__@@PEBUtagRECT@@@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x18009CAFC (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow::ApplyMaximizedClip(CTopLevelWindow *this, HRGN a2)
{
  signed int v2; // ebx
  LONG v5; // r9d
  int left; // eax
  LONG v7; // eax
  HRGN v8; // rsi
  signed int v9; // eax
  int v10; // edx
  unsigned int v11; // ecx
  int v12; // r8d
  signed int LastError; // eax
  struct tagRECT v14; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0;
  if ( (*((_BYTE *)this + 264) & 4) != 0 )
  {
    v5 = *((_DWORD *)this + 167);
    left = *((_DWORD *)this + 28) - *((_DWORD *)this + 166);
    v14.left = *((_DWORD *)this + 165);
    v14.top = v5;
    if ( v14.left > left )
      left = v14.left;
    v14.right = left;
    v7 = *((_DWORD *)this + 29) - *((_DWORD *)this + 168);
    if ( v5 > v7 )
      v7 = v5;
    v14.bottom = v7;
    SetLastError(0);
    v8 = CreateRectRgnCoerceInvalid(&v14);
    if ( v8 )
    {
      SetLastError(0);
      if ( !CombineRgn(a2, a2, v8, 1) )
      {
        LastError = GetLastError();
        v2 = LastError;
        if ( LastError > 0 )
          v2 = (unsigned __int16)LastError | 0x80070000;
        if ( v2 >= 0 )
          v2 = -2003304445;
        MilInstrumentationCheckHR(0x14u, &dword_1800A32F8, 11LL, v2, 0x12F7u);
      }
      DeleteObject(v8);
    }
    else
    {
      v9 = GetLastError();
      v2 = v9;
      if ( v9 > 0 )
        v2 = (unsigned __int16)v9 | 0x80070000;
      if ( v2 >= 0 )
        v2 = CheckGUIHandleQuota(v11, v10, v12);
      MilInstrumentationCheckHR(0x14u, &dword_1800A32F8, 11LL, v2, 0x12F5u);
    }
  }
  return (unsigned int)v2;
}
