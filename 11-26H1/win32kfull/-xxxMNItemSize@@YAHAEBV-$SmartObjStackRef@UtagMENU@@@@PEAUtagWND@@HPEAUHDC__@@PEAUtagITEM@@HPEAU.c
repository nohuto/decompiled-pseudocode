/*
 * XREFs of ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x14000C0D0
 * Callers:
 *     xxxMNCompute @ 0x14000C5FC (xxxMNCompute.c)
 * Callees:
 *     MNIspItemValid @ 0x14000C5A8 (MNIspItemValid.c)
 *     ?MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x14000CF40 (-MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     ?xxxMNGetBitmapSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x14000D234 (-xxxMNGetBitmapSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@.c)
 *     GreExtGetObjectW @ 0x140014058 (GreExtGetObjectW.c)
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x1400341BC (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     GetOemBitmapInfo @ 0x140124E90 (GetOemBitmapInfo.c)
 *     GreSelectFont @ 0x140126190 (GreSelectFont.c)
 *     GreSetTextCharacterExtra @ 0x1401F92E4 (GreSetTextCharacterExtra.c)
 *     FindCharPosition @ 0x1401FAD58 (FindCharPosition.c)
 *     xxxPSMGetTextExtent @ 0x1401FB45C (xxxPSMGetTextExtent.c)
 *     GreGetTextCharacterExtra @ 0x1402948B0 (GreGetTextCharacterExtra.c)
 *     GetDpiMetricsForDpi @ 0x140302424 (GetDpiMetricsForDpi.c)
 *     GetDpiServerInfoForDpi @ 0x1403025B0 (GetDpiServerInfoForDpi.c)
 */

__int64 __fastcall xxxMNItemSize(
        struct tagMENU ***a1,
        int a2,
        unsigned int a3,
        HDC a4,
        struct tagITEM *a5,
        int a6,
        unsigned int *a7)
{
  int v7; // ebx
  int DpiDependentMetric; // ebp
  unsigned int v9; // r14d
  struct tagMENU *v14; // rcx
  unsigned int v15; // eax
  struct tagMENU *v16; // rcx
  struct tagMENU *v17; // rcx
  unsigned int v18; // r13d
  struct tagMENU *v19; // rcx
  int v20; // edx
  struct tagMENU *v21; // rcx
  struct tagMENU *v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  struct tagMENU *v28; // rcx
  int v29; // eax
  __int64 v30; // rdx
  unsigned int v31; // ecx
  bool v32; // zf
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  __int64 v36; // [rsp+30h] [rbp-58h]
  unsigned int v37; // [rsp+B8h] [rbp+30h]

  v7 = a6;
  DpiDependentMetric = 0;
  v9 = 0;
  if ( !a6 )
    DpiDependentMetric = GetDpiDependentMetric(26LL, a3);
  v36 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)a5 + 4LL) & 0x1000) != 0 )
  {
    v30 = *(_QWORD *)(GetDpiMetricsForDpi(a3) + 48);
    if ( v30 )
    {
      v36 = GreSelectFont(a4, v30);
    }
    else
    {
      GreGetTextCharacterExtra(a4);
      GetDpiServerInfoForDpi(a3);
      GetDpiMetricsForDpi(a3);
      GreSetTextCharacterExtra(a4);
      v7 = a6;
    }
  }
  v14 = (struct tagMENU *)a1[2];
  if ( !v14 )
    v14 = **a1;
  v15 = MNIsOwnerDrawItem(v14, a5);
  v37 = v15;
  if ( *(_QWORD *)(*(_QWORD *)a5 + 96LL) )
  {
    v23 = (struct tagMENU *)a1[2];
    if ( !v23 )
      v23 = **a1;
    if ( !(unsigned int)MNIsUAHMenu(v23) )
    {
LABEL_45:
      v24 = *(_QWORD *)a5;
      if ( *(_QWORD *)(*(_QWORD *)a5 + 96LL) != -1LL )
      {
        if ( *(_DWORD *)(v24 + 104) != -1 )
          goto LABEL_47;
        if ( (*(_DWORD *)(v24 + 4) & 0x20000000) != 0 )
        {
          *(_DWORD *)(*(_QWORD *)a5 + 104LL) = GetDpiDependentMetric(25LL, a3);
          *(_DWORD *)(*(_QWORD *)a5 + 108LL) = GetDpiDependentMetric(26LL, a3);
          if ( *(_QWORD *)(*(_QWORD *)a5 + 96LL) == 1LL )
            *(_DWORD *)(*(_QWORD *)a5 + 104LL) += 2;
LABEL_47:
          v9 = *(_DWORD *)(*(_QWORD *)a5 + 104LL);
          if ( *((_DWORD *)**a1 + 18) > v9 )
            v20 = *((_DWORD *)**a1 + 18);
          else
            v20 = *(_DWORD *)(*(_QWORD *)a5 + 104LL);
          *((_DWORD *)**a1 + 18) = v20;
          if ( v7 )
          {
            DpiDependentMetric = *(_DWORD *)(*(_QWORD *)a5 + 108LL);
          }
          else if ( *(_DWORD *)(*(_QWORD *)a5 + 108LL) > DpiDependentMetric )
          {
            DpiDependentMetric = *(_DWORD *)(*(_QWORD *)a5 + 108LL);
          }
          v18 = v37;
          if ( v37 )
            goto LABEL_26;
          goto LABEL_33;
        }
        v28 = (struct tagMENU *)a1[2];
        if ( !v28 )
          v28 = **a1;
        if ( !(unsigned int)MNIsUAHMenu(v28) )
        {
          if ( (unsigned int)GreExtGetObjectW(*(HPALETTE *)(*(_QWORD *)a5 + 96LL)) )
          {
            *(_DWORD *)(*(_QWORD *)a5 + 104LL) = 0;
            v29 = 0;
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)a5 + 104LL) = GetDpiDependentMetric(25LL, a3);
            v29 = GetDpiDependentMetric(26LL, a3);
          }
          *(_DWORD *)(*(_QWORD *)a5 + 108LL) = v29;
          goto LABEL_47;
        }
      }
      xxxMNGetBitmapSize((_DWORD)a1, (_DWORD)a5, a2, a3, (__int64)a4);
      v19 = (struct tagMENU *)a1[2];
      if ( !v19 )
        v19 = **a1;
      if ( !(unsigned __int8)MNIspItemValid(v19, a5) )
        goto LABEL_20;
      goto LABEL_47;
    }
    v25 = *(_DWORD *)(*(_QWORD *)a5 + 96LL);
    if ( v25 > 7 )
    {
      v34 = v25 - 8;
      if ( !v34 )
        goto LABEL_53;
      v35 = v34 - 1;
      if ( !v35 )
        goto LABEL_53;
      v33 = v35 - 1;
      v32 = v33 == 0;
    }
    else
    {
      if ( v25 == 7 )
        goto LABEL_53;
      v26 = v25 - 1;
      if ( !v26 )
        goto LABEL_53;
      v27 = v26 - 1;
      if ( !v27 )
        goto LABEL_53;
      v31 = v27 - 1;
      if ( !v31 )
        goto LABEL_53;
      v33 = v31 - 2;
      v32 = v33 == 0;
    }
    if ( !v32 && v33 != 1 )
      goto LABEL_45;
LABEL_53:
    v15 = v37;
  }
  if ( !v15 )
  {
    v18 = v37;
LABEL_33:
    if ( *((_QWORD *)a5 + 3) )
    {
      if ( v7 && DpiDependentMetric <= *(_DWORD *)(GetDpiMetricsForDpi(a3) + 28) )
        DpiDependentMetric = *(_DWORD *)(GetDpiMetricsForDpi(a3) + 28);
      FindCharPosition(*((_QWORD *)a5 + 3), 9LL);
      xxxPSMGetTextExtent(a4);
      if ( v9 )
        v9 += 2;
      else
        v9 = 0;
    }
    if ( v7 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)**a1 + 5) + 40LL) & 0x4000000) != 0 || *(int *)(*((_QWORD *)**a1 + 5) + 40LL) >= 0 )
        v9 += *(__int16 *)(GetOemBitmapInfo(63LL) + 4);
      v9 += 6;
      DpiDependentMetric += 2;
    }
    goto LABEL_26;
  }
  xxxMNGetBitmapSize((_DWORD)a1, (_DWORD)a5, a2, a3, (__int64)a4);
  v16 = (struct tagMENU *)a1[2];
  if ( !v16 )
    v16 = **a1;
  if ( !(unsigned __int8)MNIspItemValid(v16, a5) )
  {
LABEL_20:
    v18 = v37;
    goto LABEL_30;
  }
  v9 = *(_DWORD *)(*(_QWORD *)a5 + 104LL);
  if ( v7 )
  {
    DpiDependentMetric = *(_DWORD *)(*(_QWORD *)a5 + 108LL);
    v9 += 2 * *(_DWORD *)(GetDpiMetricsForDpi(a3) + 8);
  }
  else
  {
    v17 = (struct tagMENU *)a1[2];
    if ( !v17 )
      v17 = **a1;
    if ( (unsigned int)MNIsUAHMenu(v17) )
      DpiDependentMetric = *(_DWORD *)(*(_QWORD *)a5 + 108LL);
  }
  v18 = v37;
LABEL_26:
  v21 = (struct tagMENU *)a1[2];
  if ( !v21 )
    v21 = **a1;
  if ( (unsigned __int8)MNIspItemValid(v21, a5) && (*(_DWORD *)(*(_QWORD *)a5 + 4LL) & 0x1000) != 0 )
  {
    if ( v36 )
      GreSelectFont(a4, v36);
    else
      GreSetTextCharacterExtra(a4);
  }
LABEL_30:
  a7[1] = DpiDependentMetric;
  *a7 = v9;
  return v18;
}
