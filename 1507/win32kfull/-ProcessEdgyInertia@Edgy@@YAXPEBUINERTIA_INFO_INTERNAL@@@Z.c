/*
 * XREFs of ?ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C02292DC
 * Callers:
 *     AddInertiaInfo @ 0x1C0239638 (AddInertiaInfo.c)
 * Callees:
 *     _GetPointerDeviceRects @ 0x1C00EF164 (_GetPointerDeviceRects.c)
 *     _GetPointerDeviceType @ 0x1C01CD408 (_GetPointerDeviceType.c)
 *     ?_InertiaRegionIntersectsTopEdge@Edgy@@YAHPEBUINERTIA_INFO_INTERNAL@@PEBUtagRECT@@@Z @ 0x1C0229B48 (-_InertiaRegionIntersectsTopEdge@Edgy@@YAHPEBUINERTIA_INFO_INTERNAL@@PEBUtagRECT@@@Z.c)
 *     ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C0229EE8 (-_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
 */

void __fastcall Edgy::ProcessEdgyInertia(Edgy *this, const struct INERTIA_INFO_INTERNAL *a2)
{
  __int64 v3; // rdi
  unsigned int v4; // esi
  __int64 v5; // rbx
  const struct tagRECT *v6; // r8
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(grpdeskRitInput + 232LL);
  if ( v3 )
  {
    if ( (*((_DWORD *)this + 34) & 8) != 0
      && *((float *)this + 5) > 0.0
      && (unsigned int)(*((_DWORD *)this + 6) - 1) <= 1 )
    {
      v4 = 0;
      if ( *(_DWORD *)v3 )
      {
        while ( 1 )
        {
          v5 = *(_QWORD *)(v3 + 8) + 32LL * v4;
          if ( *(_DWORD *)(v5 + 16) == 1
            && (((unsigned int)GetPointerDeviceType(*(_QWORD *)v5) - 1) & 0xFFFFFFFD) == 0
            && (unsigned int)GetPointerDeviceRects(*(_QWORD *)v5, 0LL, &v7)
            && (unsigned int)Edgy::_InertiaRegionIntersectsTopEdge(this, (const struct INERTIA_INFO_INTERNAL *)&v7, v6) )
          {
            break;
          }
          if ( ++v4 >= *(_DWORD *)v3 )
            return;
        }
        Edgy::_PostEdgyInertia(*(_QWORD *)(v5 + 8), 1LL, *(unsigned int *)(v3 + 272));
      }
    }
  }
}
