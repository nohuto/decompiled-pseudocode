/*
 * XREFs of ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1401FAB28
 * Callers:
 *     xxxMNCompute @ 0x14000C5FC (xxxMNCompute.c)
 * Callees:
 *     ?MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x14000CF40 (-MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     MNGetpItemFromIndex @ 0x14000D208 (MNGetpItemFromIndex.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxClientGetTextExtentPointW @ 0x140122668 (xxxClientGetTextExtentPointW.c)
 *     ?CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z @ 0x140123D9C (-CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z.c)
 *     GetOemBitmapInfo @ 0x140124E90 (GetOemBitmapInfo.c)
 *     FindCharPosition @ 0x1401FAD58 (FindCharPosition.c)
 *     GreGetTextExtentW @ 0x1401FB67C (GreGetTextExtentW.c)
 *     GetDpiMetricsForCurrentThread @ 0x1403023CC (GetDpiMetricsForCurrentThread.c)
 */

__int64 __fastcall xxxMNRecalcTabStrings(Gre::Base *a1, __int64 a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  unsigned int v6; // edi
  int v7; // r15d
  unsigned int v8; // ebp
  __int64 v12; // rcx
  int v13; // r13d
  __int64 v14; // rbx
  struct tagMENU *v15; // rcx
  int v16; // ecx
  int v17; // r11d
  __int64 v18; // r12
  unsigned int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // r8d
  unsigned int v22; // r8d
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // r8d
  int CharPosition; // eax
  __int64 v27; // rcx
  __int64 v28; // r15
  int v29; // r10d
  struct tagTHREADINFO *v30; // rax
  int v31; // eax
  WCHAR *v32; // rdx
  int v33; // r8d
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 DpiMetricsForCurrentThread; // rax
  int v38; // ebx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  unsigned int v42; // [rsp+30h] [rbp-48h]
  struct tagSIZE v43; // [rsp+38h] [rbp-40h] BYREF
  int v47; // [rsp+A0h] [rbp+28h]

  v6 = a3;
  v7 = a5;
  v8 = 0;
  v47 = a6 + a5;
  if ( a3 < *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 44LL) && a3 <= a4 )
  {
    v12 = *(_QWORD *)(a2 + 16);
    v13 = 0;
    v42 = a3;
    if ( !v12 )
      v12 = **(_QWORD **)a2;
    v14 = MNGetpItemFromIndex(v12, a3);
    if ( v6 < a4 )
    {
      while ( 1 )
      {
        if ( !v14 )
        {
LABEL_18:
          v6 = a3;
          goto LABEL_19;
        }
        v15 = *(struct tagMENU **)(a2 + 16);
        if ( !v15 )
          v15 = **(struct tagMENU ***)a2;
        v16 = MNIsOwnerDrawItem(v15, (struct tagITEM *)v14);
        v17 = 0;
        *(_DWORD *)(*(_QWORD *)v14 + 80LL) = v7;
        v18 = *(_QWORD *)(v14 + 24);
        if ( v18 )
        {
          if ( *(_DWORD *)(*(_QWORD *)v14 + 48LL) )
            break;
        }
        if ( v16 )
          goto LABEL_12;
LABEL_13:
        v19 = v17 + v47;
        v20 = *(_QWORD *)(a2 + 16);
        if ( v17 + v47 <= (int)v8 )
          v19 = v8;
        v21 = ++v42;
        v8 = v19;
        if ( !v20 )
          v20 = **(_QWORD **)a2;
        v14 = MNGetpItemFromIndex(v20, v21);
        if ( v22 >= a4 )
          goto LABEL_18;
      }
      if ( !v16 )
      {
        v43 = 0LL;
        CharPosition = FindCharPosition(v18, 9LL);
        v28 = CharPosition;
        if ( CharPosition < v29 )
        {
          v30 = PtiCurrent(v27);
          v31 = CALL_LPK(v30);
          v32 = (WCHAR *)(v18 + 2 * (v28 + 1));
          v33 = *(_DWORD *)(*(_QWORD *)v14 + 48LL) - v28 - 1;
          if ( v31 )
            xxxClientGetTextExtentPointW(a1, v32, v33, &v43);
          else
            GreGetTextExtentW((HDC)a1, v32, v33, &v43);
          DpiMetricsForCurrentThread = GetDpiMetricsForCurrentThread(v35, v34, v36);
          v17 = *(_DWORD *)(DpiMetricsForCurrentThread + 8) + v43.cx;
        }
        v7 = a5;
        goto LABEL_13;
      }
LABEL_12:
      ++v13;
      goto LABEL_13;
    }
LABEL_19:
    if ( v13 != a4 - v6 )
    {
      v38 = *((__int16 *)GetOemBitmapInfo(0x3Fu) + 2);
      v8 += v38 + *(_DWORD *)(GetDpiMetricsForCurrentThread(v40, v39, v41) + 8);
    }
    v23 = *(_QWORD *)(a2 + 16);
    if ( !v23 )
      v23 = **(_QWORD **)a2;
    while ( 1 )
    {
      v24 = MNGetpItemFromIndex(v23, v6);
      if ( v6 >= a4 || !v24 )
        break;
      ++v6;
      *(_DWORD *)(*(_QWORD *)v24 + 72LL) = v25;
      v23 = *(_QWORD *)(a2 + 16);
      if ( !v23 )
        v23 = **(_QWORD **)a2;
    }
  }
  return v8;
}
