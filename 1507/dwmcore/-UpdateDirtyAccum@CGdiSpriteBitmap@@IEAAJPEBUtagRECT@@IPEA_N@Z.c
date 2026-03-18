/*
 * XREFs of ?UpdateDirtyAccum@CGdiSpriteBitmap@@IEAAJPEBUtagRECT@@IPEA_N@Z @ 0x18007F070
 * Callers:
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18007E1E0 (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?RectContainsRect@COverlayContext@@CA_NPEAUtagRECT@@0@Z @ 0x18005E234 (-RectContainsRect@COverlayContext@@CA_NPEAUtagRECT@@0@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180128B0C (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::UpdateDirtyAccum(
        CGdiSpriteBitmap *this,
        const struct tagRECT *a2,
        unsigned int a3,
        bool *a4)
{
  bool v4; // r13
  signed int v5; // ebx
  HRGN v6; // r12
  HRGN RectRgn; // r15
  unsigned int v8; // ebp
  unsigned int v12; // r14d
  RECT *v13; // r13
  struct tagRECT *v14; // r9
  unsigned int v15; // r14d
  RECT *v16; // r8
  HRGN RectRgnIndirect; // rax
  int *p_right; // rsi
  signed int v19; // eax
  int v20; // edx
  unsigned int v21; // ecx
  int v22; // r8d
  signed int LastError; // eax
  int v24; // edx
  unsigned int v25; // ecx
  int v26; // r8d
  signed int v27; // eax
  int v28; // edx
  unsigned int v29; // ecx
  int v30; // r8d
  signed int v31; // eax
  signed int v32; // eax
  signed int v33; // eax
  unsigned int bottom; // [rsp+20h] [rbp-48h]
  char v35; // [rsp+70h] [rbp+8h]

  v4 = 0;
  v5 = 0;
  v6 = 0LL;
  v35 = 0;
  RectRgn = 0LL;
  v8 = a3;
  if ( *((_DWORD *)this + 132) == 2 )
    goto LABEL_2;
  if ( *((_QWORD *)this + 67) || (v12 = 0, !a3) )
  {
LABEL_14:
    if ( *((_QWORD *)this + 67) && v8 )
    {
      SetLastError(0);
      RectRgn = CreateRectRgn(a2->left, a2->top, a2->right, a2->bottom);
      if ( !RectRgn )
      {
        LastError = GetLastError();
        v5 = LastError;
        if ( LastError > 0 )
          v5 = (unsigned __int16)LastError | 0x80070000;
        if ( v5 >= 0 )
          v5 = CheckGUIHandleQuota(v25, v24, v26);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x58Fu);
        return (unsigned int)v5;
      }
      SetLastError(0);
      v6 = CreateRectRgn(0, 0, 0, 0);
      if ( !v6 )
      {
        v27 = GetLastError();
        v5 = v27;
        if ( v27 > 0 )
          v5 = (unsigned __int16)v27 | 0x80070000;
        if ( v5 >= 0 )
          v5 = CheckGUIHandleQuota(v29, v28, v30);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x591u);
        goto LABEL_5;
      }
      v15 = 1;
      if ( v8 > 1 )
      {
        p_right = &a2[1].right;
        while ( 1 )
        {
          SetLastError(0);
          if ( !SetRectRgn(v6, *(p_right - 2), *(p_right - 1), *p_right, p_right[1]) )
            break;
          SetLastError(0);
          if ( !CombineRgn(RectRgn, RectRgn, v6, 2) )
          {
            v31 = GetLastError();
            v5 = v31;
            if ( v31 > 0 )
              v5 = (unsigned __int16)v31 | 0x80070000;
            bottom = 1438;
            goto LABEL_56;
          }
          ++v15;
          p_right += 4;
          if ( v15 >= v8 )
            goto LABEL_19;
        }
        v32 = GetLastError();
        v5 = v32;
        if ( v32 > 0 )
          v5 = (unsigned __int16)v32 | 0x80070000;
        bottom = 1436;
        goto LABEL_56;
      }
LABEL_19:
      if ( CombineRgn(v6, RectRgn, *((HRGN *)this + 67), 4) != 1 )
      {
        v4 = 1;
        SetLastError(0);
        if ( CombineRgn(*((HRGN *)this + 67), *((HRGN *)this + 67), RectRgn, 2) )
        {
          if ( GetRgnBox(*((HRGN *)this + 67), (LPRECT)this + 34) == 2 )
          {
            DeleteObject(*((HGDIOBJ *)this + 67));
            *((_QWORD *)this + 67) = 0LL;
          }
          goto LABEL_2;
        }
        v33 = GetLastError();
        v5 = v33;
        if ( v33 > 0 )
          v5 = (unsigned __int16)v33 | 0x80070000;
        bottom = 1452;
LABEL_56:
        if ( v5 >= 0 )
          v5 = -2003304445;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, bottom);
        goto LABEL_3;
      }
    }
LABEL_2:
    *a4 = v4;
LABEL_3:
    if ( v6 )
      DeleteObject(v6);
LABEL_5:
    if ( RectRgn )
      DeleteObject(RectRgn);
    return (unsigned int)v5;
  }
  v13 = (RECT *)((char *)this + 544);
  while ( COverlayContext::RectContainsRect(v13, (struct tagRECT *)&a2[v12]) )
  {
LABEL_12:
    if ( ++v12 >= v8 )
      goto LABEL_13;
  }
  v35 = 1;
  if ( COverlayContext::RectContainsRect(v14, v13) )
  {
    *v13 = *v16;
    goto LABEL_12;
  }
  SetLastError(0);
  RectRgnIndirect = CreateRectRgnIndirect(v13);
  *((_QWORD *)this + 67) = RectRgnIndirect;
  if ( RectRgnIndirect )
  {
    a2 += v12;
    v8 -= v12;
LABEL_13:
    v4 = v35;
    goto LABEL_14;
  }
  v19 = GetLastError();
  v5 = v19;
  if ( v19 > 0 )
    v5 = (unsigned __int16)v19 | 0x80070000;
  if ( v5 >= 0 )
    v5 = CheckGUIHandleQuota(v21, v20, v22);
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x57Cu);
  return (unsigned int)v5;
}
