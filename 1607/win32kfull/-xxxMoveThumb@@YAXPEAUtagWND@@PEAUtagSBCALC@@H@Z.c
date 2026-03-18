/*
 * XREFs of ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C022B210
 * Callers:
 *     xxxTrackThumb @ 0x1C022E320 (xxxTrackThumb.c)
 * Callees:
 *     DrawThumb2 @ 0x1C014EF3C (DrawThumb2.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C014F0AC (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C022AF3C (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 */

void __fastcall xxxMoveThumb(struct tagWND *a1, struct tagSBCALC *a2, int a3)
{
  int v3; // esi
  __int64 v6; // rbx
  int v7; // ecx
  int v8; // r9d
  INT v9; // r8d
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // r9d
  struct tagWND *v14; // rdx
  __int64 DCEx; // rax
  int v16; // edx
  HDC v17; // rbx
  HBRUSH ColorObjects; // r15
  __int64 v19; // r12
  _DWORD *v20; // r14

  v3 = a3;
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 632LL);
  if ( v6 && a3 != *(_DWORD *)(v6 + 76) )
  {
    while ( 1 )
    {
      v7 = *((_DWORD *)a2 + 15);
      if ( v3 >= v7 )
      {
        v9 = *((_DWORD *)a2 + 14);
        if ( v3 < v9 + v7 )
        {
          if ( v9 )
          {
            v12 = *((_DWORD *)a2 + 2);
            v13 = v12 ? v12 - 1 : 0;
            v8 = *(_DWORD *)a2 + EngMulDiv(*((_DWORD *)a2 + 1) - *(_DWORD *)a2 - v13, v3 - v7, v9);
          }
          else
          {
            v8 = *(_DWORD *)a2 - 1;
          }
        }
        else
        {
          v10 = *((_DWORD *)a2 + 2);
          v11 = v10 ? v10 - 1 : 0;
          v8 = *((_DWORD *)a2 + 1) - v11;
        }
      }
      else
      {
        v8 = *(_DWORD *)a2;
      }
      *(_DWORD *)(v6 + 84) = v8;
      if ( v8 == *(_DWORD *)(v6 + 80) )
        break;
      v14 = *(struct tagWND **)(v6 + 24);
      if ( v14 )
        xxxDoScroll(*(struct tagWND **)(v6 + 16), v14, 5u, v8, (*(_DWORD *)v6 >> 1) & 1);
      v6 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 632LL);
      if ( !v6 || !*(_QWORD *)(v6 + 48) )
        return;
      *(_DWORD *)(v6 + 80) = *(_DWORD *)(v6 + 84);
      if ( v3 < *((_DWORD *)a2 + 15) + *((_DWORD *)a2 + 14) )
        break;
      v3 = *((_DWORD *)a2 + 15) + *((_DWORD *)a2 + 14);
    }
    DCEx = _GetDCEx(a1, 0LL, 65537LL);
    v16 = *((_DWORD *)a2 + 8);
    *((_DWORD *)a2 + 13) = v3;
    *((_DWORD *)a2 + 12) = v3 + v16;
    v17 = (HDC)DCEx;
    ColorObjects = (HBRUSH)xxxGetColorObjects(a1, DCEx);
    v19 = GreSelectBrush(v17, ColorObjects);
    v20 = *(_DWORD **)(*((_QWORD *)a1 + 2) + 632LL);
    if ( v20 )
    {
      DrawThumb2((__int64)a1, a2, v17, ColorObjects, (*v20 >> 1) & 1, 0);
      GreSelectBrush(v17, v19);
      _ReleaseDC(v17);
      v20[19] = v3;
    }
    else
    {
      _ReleaseDC(v17);
    }
  }
}
