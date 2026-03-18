/*
 * XREFs of ?ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C021F6F8
 * Callers:
 *     AddInertiaInfo @ 0x1C0229F34 (AddInertiaInfo.c)
 * Callees:
 *     _GetPointerDeviceRects @ 0x1C00E3B58 (_GetPointerDeviceRects.c)
 *     _GetPointerDeviceType @ 0x1C01C89BC (_GetPointerDeviceType.c)
 *     ?_InertiaRegionIntersectsTopEdge@Edgy@@YAHPEBUINERTIA_INFO_INTERNAL@@PEBUtagRECT@@@Z @ 0x1C02200A0 (-_InertiaRegionIntersectsTopEdge@Edgy@@YAHPEBUINERTIA_INFO_INTERNAL@@PEBUtagRECT@@@Z.c)
 *     ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C0220444 (-_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
 */

void __fastcall Edgy::ProcessEdgyInertia(
        Edgy *this,
        const struct INERTIA_INFO_INTERNAL *a2,
        const struct tagRECT *a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rdi
  unsigned int v7; // esi
  __int64 v8; // rbx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v5 = grpdeskRitInput;
  v6 = *(_QWORD *)(grpdeskRitInput + 232LL);
  if ( v6 )
  {
    if ( (*((_DWORD *)this + 34) & 8) != 0
      && *((float *)this + 5) > 0.0
      && (unsigned int)(*((_DWORD *)this + 6) - 1) <= 1 )
    {
      v7 = 0;
      if ( *(_DWORD *)v6 )
      {
        while ( 1 )
        {
          v8 = *(_QWORD *)(v6 + 8) + 32LL * v7;
          if ( *(_DWORD *)(v8 + 16) == 1
            && (((unsigned int)GetPointerDeviceType(*(_QWORD *)v8, v5, (__int64)a3, a4) - 1) & 0xFFFFFFFD) == 0
            && (unsigned int)GetPointerDeviceRects(*(_QWORD *)v8, 0LL, &v9)
            && (unsigned int)Edgy::_InertiaRegionIntersectsTopEdge(this, (const struct INERTIA_INFO_INTERNAL *)&v9, a3) )
          {
            break;
          }
          if ( ++v7 >= *(_DWORD *)v6 )
            return;
        }
        Edgy::_PostEdgyInertia(*(_QWORD *)(v8 + 8), 1LL, *(unsigned int *)(v6 + 272));
      }
    }
  }
}
