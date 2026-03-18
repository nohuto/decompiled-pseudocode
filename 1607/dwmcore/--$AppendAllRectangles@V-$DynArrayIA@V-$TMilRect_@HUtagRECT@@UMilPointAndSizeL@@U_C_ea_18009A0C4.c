/*
 * XREFs of ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@@Z @ 0x18009A0C4
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180029DD0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800538C0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18009A710 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18009B6C0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 */

__int64 __fastcall CRegion::AppendAllRectangles<DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,4,0>>(
        _DWORD **a1,
        __int64 a2)
{
  _DWORD *v2; // r8
  __int64 v5; // rdx
  __int64 v6; // rbx
  unsigned int v7; // r15d
  int v8; // eax
  int v9; // edi
  _DWORD *v10; // rdx
  int v11; // eax
  __int64 v12; // r8
  _DWORD *v13; // rdx
  char *v14; // r8
  __int64 v15; // rcx
  FastRegion::Internal::CRgnData *v16; // rcx
  __int128 v18; // [rsp+30h] [rbp-40h]
  _DWORD *v19; // [rsp+40h] [rbp-30h] BYREF
  __int128 v20; // [rsp+48h] [rbp-28h]
  char *v21; // [rsp+58h] [rbp-18h]
  int v22; // [rsp+60h] [rbp-10h]
  int v23; // [rsp+64h] [rbp-Ch]

  v2 = *a1;
  if ( **a1 )
  {
    v5 = (__int64)&v2[2 * *v2 + 1];
    v6 = (v5 + *(int *)(v5 + 4) - (__int64)(int)v2[4] - (__int64)(v2 + 3)) >> 3;
  }
  else
  {
    LODWORD(v6) = 0;
  }
  v7 = *(_DWORD *)(a2 + 24);
  v8 = DynArrayImpl<0>::Grow(a2, 16, v6, 0, 0LL);
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1A7u);
  else
    *(_DWORD *)(a2 + 24) += v6;
  if ( v9 >= 0 )
  {
    v10 = *a1;
    v19 = v10;
    v11 = *v10;
    if ( !*v10 )
    {
      v20 = 0LL;
      goto LABEL_10;
    }
    v12 = (int)v10[4];
    v22 = 0;
    v13 = v10 + 3;
    v14 = (char *)v13 + v12;
    *((_QWORD *)&v20 + 1) = v13;
    v21 = v14;
    *(_QWORD *)&v20 = &v13[2 * v11 - 2];
    v15 = ((__int64)v13 + (int)v13[3] - (_QWORD)v14 + 8) >> 3;
    v23 = v15;
    if ( (int)v15 <= 0 )
    {
      FastRegion::Internal::CRgnData::StepIterator(
        (FastRegion::Internal::CRgnData *)v15,
        (struct FastRegion::CRegion::Iterator *)&v19);
      goto LABEL_10;
    }
    while ( (unsigned __int64)v13 < (unsigned __int64)v20 )
    {
      DWORD1(v18) = *v13;
      HIDWORD(v18) = v13[2];
      LODWORD(v18) = *(_DWORD *)&v14[8 * v22];
      DWORD2(v18) = *(_DWORD *)&v14[8 * v22 + 4];
      v16 = (FastRegion::Internal::CRgnData *)(2LL * v7);
      *(_OWORD *)(*(_QWORD *)a2 + 8LL * (_QWORD)v16) = v18;
      FastRegion::Internal::CRgnData::StepIterator(v16, (struct FastRegion::CRegion::Iterator *)&v19);
      ++v7;
LABEL_10:
      v14 = v21;
      v13 = (_DWORD *)*((_QWORD *)&v20 + 1);
    }
  }
  return (unsigned int)v9;
}
