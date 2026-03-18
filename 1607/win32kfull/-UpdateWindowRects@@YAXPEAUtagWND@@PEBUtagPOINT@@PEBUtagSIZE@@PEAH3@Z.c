/*
 * XREFs of ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C00539B8
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C0053734 (zzzUpdateLayeredWindow.c)
 * Callees:
 *     CalcWindowFullScreen @ 0x1C00723E0 (CalcWindowFullScreen.c)
 *     PostShellHookMessagesEx @ 0x1C00992D4 (PostShellHookMessagesEx.c)
 */

void __fastcall UpdateWindowRects(
        struct tagWND *a1,
        const struct tagPOINT *a2,
        const struct tagSIZE *a3,
        int *a4,
        int *a5)
{
  int v5; // ebp
  int v6; // r15d
  unsigned int v10; // esi
  unsigned int v11; // edi
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rdx

  v5 = 0;
  *a4 = 0;
  v6 = 0;
  *a5 = 0;
  if ( a2 )
  {
    v10 = a2->x - *((_DWORD *)a1 + 28);
    v11 = a2->y - *((_DWORD *)a1 + 29);
    if ( a2->x != *((_DWORD *)a1 + 28) || v11 )
    {
      v14 = *((_DWORD *)a1 + 72);
      v6 = 1;
      if ( (v14 & 0x8000) != 0 )
      {
        v18 = *(_QWORD *)a1;
        *((_DWORD *)a1 + 72) = v14 & 0xFFFF7FFF;
        PostShellHookMessagesEx(0x36uLL, v18, 0LL);
      }
    }
  }
  else
  {
    v10 = 0;
    v11 = 0;
  }
  if ( a3 )
  {
    v12 = a3->cx + *((_DWORD *)a1 + 28) - *((_DWORD *)a1 + 30);
    v13 = a3->cy + *((_DWORD *)a1 + 29) - *((_DWORD *)a1 + 31);
    if ( v12 || v13 )
      v5 = 1;
  }
  else
  {
    v12 = 0;
    v13 = 0;
  }
  if ( v6 || v5 )
  {
    *((_DWORD *)a1 + 28) += v10;
    *((_DWORD *)a1 + 30) += v12 + v10;
    *((_DWORD *)a1 + 31) += v13 + v11;
    *((_DWORD *)a1 + 29) += v11;
    *((_DWORD *)a1 + 34) += v12 + v10;
    *((_DWORD *)a1 + 35) += v13 + v11;
    *((_DWORD *)a1 + 32) += v10;
    *((_DWORD *)a1 + 33) += v11;
    if ( v12 < 0 )
    {
      v17 = *((_DWORD *)a1 + 28);
      if ( *((_DWORD *)a1 + 32) < v17 )
      {
        *((_DWORD *)a1 + 32) = v17;
        *((_DWORD *)a1 + 34) = v17;
      }
    }
    if ( v13 < 0 )
    {
      v16 = *((_DWORD *)a1 + 29);
      if ( *((_DWORD *)a1 + 33) < v16 )
      {
        *((_DWORD *)a1 + 33) = v16;
        *((_DWORD *)a1 + 35) = v16;
      }
    }
    v15 = *((_QWORD *)a1 + 25);
    if ( v15 )
      GreOffsetRgn(v15, v10, v11);
    CalcWindowFullScreen(a1);
  }
  *a4 = v5;
  *a5 = v6;
}
