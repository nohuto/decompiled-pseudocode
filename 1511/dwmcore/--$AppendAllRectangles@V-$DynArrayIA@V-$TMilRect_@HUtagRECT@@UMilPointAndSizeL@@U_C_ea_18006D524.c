/*
 * XREFs of ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@@Z @ 0x18006D524
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004BB70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180063FA0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18006E840 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x1800770DC (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 */

__int64 __fastcall CRegion::AppendAllRectangles<DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,4,0>>(
        _DWORD **a1,
        __int64 a2)
{
  _DWORD *v2; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int v7; // esi
  int v8; // r10d
  _DWORD *v9; // rdx
  int v10; // eax
  __int64 v11; // r8
  _DWORD *v12; // rdx
  char *v13; // r8
  __int64 v14; // rcx
  FastRegion::Internal::CRgnData *v15; // rcx
  __int128 v17; // [rsp+20h] [rbp-40h]
  _DWORD *v18; // [rsp+30h] [rbp-30h] BYREF
  __int128 v19; // [rsp+38h] [rbp-28h]
  char *v20; // [rsp+48h] [rbp-18h]
  int v21; // [rsp+50h] [rbp-10h]
  int v22; // [rsp+54h] [rbp-Ch]

  v2 = *a1;
  if ( **a1 )
  {
    v5 = (__int64)&v2[2 * *v2 + 1];
    v6 = (v5 + *(int *)(v5 + 4) - (__int64)(int)v2[4] - (__int64)(v2 + 3)) >> 3;
  }
  else
  {
    v6 = 0LL;
  }
  v7 = *(_DWORD *)(a2 + 24);
  v8 = DynArrayImpl<0>::AddMultiple(a2, 16LL, v6);
  if ( v8 >= 0 )
  {
    v9 = *a1;
    v18 = v9;
    v10 = *v9;
    if ( !*v9 )
    {
      v19 = 0LL;
      goto LABEL_8;
    }
    v11 = (int)v9[4];
    v21 = 0;
    v12 = v9 + 3;
    v13 = (char *)v12 + v11;
    *((_QWORD *)&v19 + 1) = v12;
    v20 = v13;
    *(_QWORD *)&v19 = &v12[2 * v10 - 2];
    v14 = ((__int64)v12 + (int)v12[3] - (_QWORD)v13 + 8) >> 3;
    v22 = v14;
    if ( (int)v14 <= 0 )
    {
      FastRegion::Internal::CRgnData::StepIterator(
        (FastRegion::Internal::CRgnData *)v14,
        (struct FastRegion::CRegion::Iterator *)&v18);
      goto LABEL_8;
    }
    while ( (unsigned __int64)v12 < (unsigned __int64)v19 )
    {
      DWORD1(v17) = *v12;
      HIDWORD(v17) = v12[2];
      LODWORD(v17) = *(_DWORD *)&v13[8 * v21];
      DWORD2(v17) = *(_DWORD *)&v13[8 * v21 + 4];
      v15 = (FastRegion::Internal::CRgnData *)(2LL * v7);
      *(_OWORD *)(*(_QWORD *)a2 + 8LL * (_QWORD)v15) = v17;
      FastRegion::Internal::CRgnData::StepIterator(v15, (struct FastRegion::CRegion::Iterator *)&v18);
      ++v7;
LABEL_8:
      v13 = v20;
      v12 = (_DWORD *)*((_QWORD *)&v19 + 1);
    }
  }
  return (unsigned int)v8;
}
