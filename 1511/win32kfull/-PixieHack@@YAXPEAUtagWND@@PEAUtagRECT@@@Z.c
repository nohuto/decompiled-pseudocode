/*
 * XREFs of ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0215660
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C00526DC (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 * Callees:
 *     IntersectRect @ 0x1C006B798 (IntersectRect.c)
 *     GetThreadDesktopWindow @ 0x1C006E690 (GetThreadDesktopWindow.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 */

void __fastcall PixieHack(struct tagWND *a1, struct tagRECT *a2)
{
  __int64 i; // rbx
  _DWORD v5[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 != (struct tagWND *)GetThreadDesktopWindow(0LL) && (*((_BYTE *)a1 + 55) & 0x22) == 2 )
  {
    for ( i = *((_QWORD *)a1 + 12); i; i = *(_QWORD *)(i + 72) )
    {
      if ( (*(_BYTE *)(i + 41) & 8) == 0 && (*(_BYTE *)(i + 54) & 0xC0) == 0xC0 )
      {
        if ( (unsigned int)IntersectRect(v5, &a2->left, (int *)(i + 112)) )
        {
          SetOrClrWF(1, (_DWORD *)i, 0x108u, 1);
          SetOrClrWF(1, (_DWORD *)i, 0x680u, 1);
        }
      }
    }
  }
}
