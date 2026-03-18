/*
 * XREFs of ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C020E370
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C005A510 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 * Callees:
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     GetThreadDesktopWindow @ 0x1C01066F8 (GetThreadDesktopWindow.c)
 */

void __fastcall PixieHack(struct tagWND *a1, struct tagRECT *a2, __int64 a3, __int64 a4)
{
  __int64 i; // rbx
  _DWORD v7[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 != (struct tagWND *)GetThreadDesktopWindow(0LL, (__int64)a2, a3, a4) && (*((_BYTE *)a1 + 55) & 0x22) == 2 )
  {
    for ( i = *((_QWORD *)a1 + 12); i; i = *(_QWORD *)(i + 72) )
    {
      if ( (*(_BYTE *)(i + 41) & 8) == 0 && (*(_BYTE *)(i + 54) & 0xC0) == 0xC0 )
      {
        if ( (unsigned int)IntersectRect(v7, &a2->left, (int *)(i + 112)) )
        {
          SetOrClrWF(1, (_DWORD *)i, 0x108u, 1);
          SetOrClrWF(1, (_DWORD *)i, 0x680u, 1);
        }
      }
    }
  }
}
