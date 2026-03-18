/*
 * XREFs of OffsetChildren @ 0x1C00EA6A4
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C0058F3C (zzzUpdateLayeredWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0092654 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxScrollWindowEx @ 0x1C0112924 (xxxScrollWindowEx.c)
 * Callees:
 *     DwmAsyncChildClipRgnChange @ 0x1C000E910 (DwmAsyncChildClipRgnChange.c)
 *     UpdateSprite @ 0x1C00591C0 (UpdateSprite.c)
 *     IntersectRect @ 0x1C008E444 (IntersectRect.c)
 *     DwmChildRectChange @ 0x1C00916A8 (DwmChildRectChange.c)
 *     FindSpb @ 0x1C01EA224 (FindSpb.c)
 */

void __fastcall OffsetChildren(__int64 a1, unsigned int a2, __int64 a3, int *a4, int a5)
{
  __int64 v5; // rbx
  unsigned int v7; // edi
  unsigned __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  _DWORD *Spb; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  void *v18; // rax
  _DWORD v19[4]; // [rsp+60h] [rbp-28h] BYREF
  struct tagPOINT v20; // [rsp+90h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 96);
  v7 = a3;
  if ( v5 )
  {
LABEL_2:
    while ( 1 )
    {
      if ( a4 && !(unsigned int)IntersectRect(v19, a4, (int *)(v5 + 112)) )
        goto LABEL_26;
      *(_DWORD *)(v5 + 112) += a2;
      *(_DWORD *)(v5 + 120) += a2;
      *(_DWORD *)(v5 + 116) += v7;
      *(_DWORD *)(v5 + 124) += v7;
      *(_DWORD *)(v5 + 128) += a2;
      *(_DWORD *)(v5 + 136) += a2;
      *(_DWORD *)(v5 + 132) += v7;
      *(_DWORD *)(v5 + 140) += v7;
      v10 = *(_QWORD *)(v5 + 160);
      if ( v10 > 1 && (*(_BYTE *)(v5 + 45) & 8) == 0 )
        GreOffsetRgn(v10, a2, v7);
      v11 = *(_QWORD *)(v5 + 200);
      if ( v11 )
        GreOffsetRgn(v11, a2, v7);
      if ( *(char *)(v5 + 40) < 0 )
      {
        Spb = (_DWORD *)FindSpb(v5);
        Spb[6] += a2;
        Spb[8] += a2;
        Spb[9] += v7;
        Spb[7] += v7;
      }
      if ( a5 && (unsigned int)IsWindowDesktopComposed(v5) )
      {
        DwmChildRectChange(v5);
        v18 = (void *)ReferenceDwmApiPort(v15, v14, v16, v17);
        DwmAsyncChildClipRgnChange(v18, *(_QWORD *)v5);
      }
      if ( (*(_BYTE *)(v5 + 50) & 8) != 0 )
      {
        v20 = *(struct tagPOINT *)(v5 + 112);
        UpdateSprite((HDEV)*gpDispInfo, v5, a3, 0LL, &v20, 0LL, 0LL, 0LL, 0, 0LL, 0, 0LL);
      }
      v12 = *(_QWORD *)(v5 + 96);
      if ( !v12 )
      {
LABEL_26:
        v12 = *(_QWORD *)(v5 + 72);
        if ( !v12 )
          break;
      }
      v5 = v12;
    }
    while ( 1 )
    {
      v5 = *(_QWORD *)(v5 + 88);
      if ( v5 == a1 )
        break;
      if ( *(_QWORD *)(v5 + 72) )
      {
        v5 = *(_QWORD *)(v5 + 72);
        goto LABEL_2;
      }
    }
  }
}
