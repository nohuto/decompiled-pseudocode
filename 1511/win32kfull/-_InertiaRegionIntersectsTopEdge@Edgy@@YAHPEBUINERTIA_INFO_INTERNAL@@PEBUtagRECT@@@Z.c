/*
 * XREFs of ?_InertiaRegionIntersectsTopEdge@Edgy@@YAHPEBUINERTIA_INFO_INTERNAL@@PEBUtagRECT@@@Z @ 0x1C0229E48
 * Callers:
 *     ?ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C02295DC (-ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     GetInertiaRegionInVirtualizedScreen @ 0x1C02399AC (GetInertiaRegionInVirtualizedScreen.c)
 */

__int64 __fastcall Edgy::_InertiaRegionIntersectsTopEdge(
        Edgy *this,
        const struct INERTIA_INFO_INTERNAL *a2,
        const struct tagRECT *a3)
{
  unsigned int v4; // r11d
  int v5; // esi
  _DWORD *v6; // rcx
  int v7; // ebp
  int v8; // ebx
  unsigned int v9; // edi
  unsigned int v10; // r10d
  unsigned int v11; // r8d
  unsigned int v12; // r9d
  unsigned int v13; // edx
  _BYTE v15[32]; // [rsp+20h] [rbp-48h] BYREF

  if ( (unsigned int)GetInertiaRegionInVirtualizedScreen(this, v15, a3) )
  {
    v5 = *((_DWORD *)a2 + 1);
    v6 = v15;
    v7 = *(_DWORD *)a2;
    v8 = *((_DWORD *)a2 + 2);
    v9 = v4;
    v10 = v4;
    v11 = v4;
    v12 = v4;
    v13 = v4;
    while ( 1 )
    {
      if ( v6[1] > v5 )
        v10 = v4 + 1;
      else
        v9 = v4 + 1;
      if ( *v6 > v7 )
        v11 = v4 + 1;
      if ( *v6 < v8 )
        v12 = v4 + 1;
      if ( v9 && v10 && v11 && v12 )
        break;
      v13 += v4 + 1;
      v6 += 2;
      if ( v13 >= 4 )
        return v4;
    }
    ++v4;
  }
  return v4;
}
