/*
 * XREFs of ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C0076CCC
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0056A14 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006C148 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     HWInsertAfter @ 0x1C0075224 (HWInsertAfter.c)
 *     PWInsertAfter @ 0x1C0076E20 (PWInsertAfter.c)
 *     ?GetLastNonBottomMostWindow@@YAPEAUtagWND@@PEAU1@H@Z @ 0x1C00C6100 (-GetLastNonBottomMostWindow@@YAPEAUtagWND@@PEAU1@H@Z.c)
 *     GetLastTopMostWindow @ 0x1C00C7B04 (GetLastTopMostWindow.c)
 */

__int64 __fastcall ValidateZorder(struct tagCVR *a1)
{
  struct tagWND *v2; // rsi
  char *v3; // rax
  unsigned int v4; // ebx
  char *v5; // rcx
  struct tagWND *v6; // rdi
  char v7; // dl
  struct tagWND *v8; // rax
  bool v9; // zf
  struct tagWND *LastTopMostWindow; // rax
  __int64 v12; // rax
  struct tagWND *LastNonBottomMostWindow; // rax

  v2 = *(struct tagWND **)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)a1
                         + *((_QWORD *)&gSharedInfo + 1));
  if ( *((char *)v2 + 43) < 0 )
    return 1LL;
  v3 = (char *)PWInsertAfter(*((_QWORD *)a1 + 1));
  v4 = 0;
  v5 = v3;
  if ( *((_QWORD *)a1 + 1) )
  {
    if ( !v3 )
      return 1LL;
  }
  if ( v3 == (char *)1 )
  {
    if ( (*((_BYTE *)v2 + 44) & 0x20) != 0 )
      v9 = *((_QWORD *)v2 + 9) == 0LL;
    else
      v9 = v2 == GetLastNonBottomMostWindow(v2, 0);
LABEL_17:
    LOBYTE(v4) = v9;
    return v4;
  }
  v6 = *(struct tagWND **)(*((_QWORD *)v2 + 11) + 96LL);
  if ( !v3 )
  {
    if ( *((_DWORD *)v2 + 76) == 1 )
    {
      while ( v6 && *((_DWORD *)v6 + 76) != 1 )
        v6 = (struct tagWND *)*((_QWORD *)v6 + 9);
    }
    v9 = v6 == v2;
    goto LABEL_17;
  }
  if ( v3[43] >= 0 )
  {
    if ( (v3[44] & 0x20) != 0 )
    {
      LastNonBottomMostWindow = GetLastNonBottomMostWindow(v2, 1);
      *((_QWORD *)a1 + 1) = HWInsertAfter((unsigned __int64)LastNonBottomMostWindow);
      return 0LL;
    }
    v7 = *((_BYTE *)v2 + 48) & 8;
    if ( (*((_BYTE *)v2 + 43) & 4) != 0 )
      v7 ^= 8u;
    if ( v7 == (v3[48] & 8) )
    {
LABEL_11:
      if ( v6 != v2 )
      {
        if ( v6 )
        {
          while ( 1 )
          {
            v8 = (struct tagWND *)*((_QWORD *)v6 + 9);
            if ( v8 == v2 )
              break;
            v6 = (struct tagWND *)*((_QWORD *)v6 + 9);
            if ( !v8 )
              return 1LL;
          }
          v9 = v5 == (char *)v6;
          goto LABEL_17;
        }
        return 1LL;
      }
      return 0LL;
    }
    LastTopMostWindow = (struct tagWND *)GetLastTopMostWindow(v2);
    v5 = (char *)LastTopMostWindow;
    if ( LastTopMostWindow != v2 )
    {
      if ( LastTopMostWindow )
        v12 = *(_QWORD *)LastTopMostWindow;
      else
        v12 = 0LL;
      *((_QWORD *)a1 + 1) = v12;
      goto LABEL_11;
    }
  }
  return 1LL;
}
