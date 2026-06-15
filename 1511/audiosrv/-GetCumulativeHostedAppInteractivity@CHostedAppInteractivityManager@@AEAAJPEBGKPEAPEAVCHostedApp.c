/*
 * XREFs of ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z @ 0x180037190
 * Callers:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x18001D080 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z @ 0x180066F64 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z.c)
 * Callees:
 *     ??_GCHostedAppInteractivity@@QEAAPEAXI@Z @ 0x1800349F8 (--_GCHostedAppInteractivity@@QEAAPEAXI@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     memset_0 @ 0x180047978 (memset_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CHostedAppInteractivityManager::GetCumulativeHostedAppInteractivity(
        CHostedAppInteractivityManager *this,
        const unsigned __int16 *a2,
        int a3,
        void ***a4)
{
  int v6; // r15d
  void **v7; // r12
  _QWORD *v8; // rbx
  HANDLE ProcessHeap; // rax
  void **v10; // rax
  void **v11; // r14
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rsi
  _WORD *v14; // rax
  _WORD *v15; // r9
  unsigned __int64 v16; // rax
  _WORD *v17; // rdx
  int v18; // r10d
  __int64 v19; // r8
  unsigned __int64 v20; // rbx
  char *v21; // rdi
  __int16 v22; // cx
  unsigned __int64 v23; // rsi
  TraceLoggingHProvider v24; // rcx
  __int64 v25; // rbx
  __int64 *v26; // rcx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  __int64 *v29; // rax
  int i; // r8d
  __int64 v31; // rax
  ATL::CAtlException *v33; // rbx
  void **v34; // [rsp+20h] [rbp-48h]
  ATL::CAtlException *v35; // [rsp+30h] [rbp-38h] BYREF

  v6 = 0;
  v7 = 0LL;
  v34 = 0LL;
  v8 = (_QWORD *)qword_1800E6458;
  if ( qword_1800E6458 )
  {
    do
    {
      v7 = (void **)v8[2];
      v8 = (_QWORD *)*v8;
      v34 = v7;
      if ( *((_DWORD *)v7 + 2) == a3 && !_wcsicmp((const wchar_t *)*v7, a2) )
        goto LABEL_79;
    }
    while ( v8 );
  }
  ProcessHeap = GetProcessHeap();
  v10 = (void **)HeapAlloc(ProcessHeap, 0, 0x10uLL);
  v11 = v10;
  if ( v10 )
  {
    *v10 = 0LL;
    *((_DWORD *)v10 + 2) = -1;
    *((_DWORD *)v10 + 3) = 0;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 )
    goto LABEL_48;
  *((_DWORD *)v11 + 2) = a3;
  v12 = -1LL;
  do
    ++v12;
  while ( a2[v12] );
  *v11 = 0LL;
  v13 = v12 + 1;
  if ( v12 + 1 < v12 )
  {
    v6 = -2147024362;
    goto LABEL_57;
  }
  *v11 = 0LL;
  if ( !is_mul_ok(v13, 2uLL) )
  {
    v6 = -2147024362;
    goto LABEL_22;
  }
  v14 = CoTaskMemAlloc(2 * v13);
  v15 = v14;
  *v11 = v14;
  if ( !v14 )
  {
LABEL_48:
    v6 = -2147024882;
    goto LABEL_57;
  }
  if ( v13 > 0x7FFFFFFF )
  {
    if ( v12 == -1LL )
      goto LABEL_22;
    goto LABEL_55;
  }
  if ( v12 >= 0x7FFFFFFF )
  {
    if ( v12 == -1LL )
      goto LABEL_22;
LABEL_55:
    *v14 = 0;
    goto LABEL_22;
  }
  if ( !a2 )
  {
    a2 = (const unsigned __int16 *)&word_1800AFAB8;
    v12 = 0LL;
  }
  if ( v13 )
  {
    v16 = v13;
    v17 = v15;
    v18 = 0;
    v19 = 0LL;
    v20 = v12 - v13;
    v21 = (char *)((char *)a2 - (char *)v15);
    while ( v16 + v20 )
    {
      v22 = *(_WORD *)&v21[(_QWORD)v17];
      if ( !v22 )
        break;
      *v17++ = v22;
      ++v19;
      if ( !--v16 )
      {
        --v17;
        --v19;
        v18 = -2147024774;
        break;
      }
    }
    *v17 = 0;
    v23 = v13 - v19;
    if ( v18 >= 0 && v23 > 1 && 2 * v23 > 2 )
      memset_0(&v15[v19 + 1], 0, 2 * v23 - 2);
  }
LABEL_22:
  if ( v6 >= 0 )
  {
    v7 = v11;
    v34 = v11;
    goto LABEL_24;
  }
LABEL_57:
  if ( v11 )
    CHostedAppInteractivity::`scalar deleting destructor'(v11);
LABEL_24:
  if ( v6 >= 0 )
  {
LABEL_25:
    v24 = WPP_GLOBAL_Control;
    goto LABEL_26;
  }
  v24 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      15LL,
      &WPP_ec06d0f298c71c199f72f747d2c93494_Traceguids,
      (unsigned int)v6);
    goto LABEL_25;
  }
LABEL_26:
  if ( v6 >= 0 )
  {
    v6 = 0;
    try
    {
      v25 = qword_1800E6458;
      v26 = (__int64 *)*((_QWORD *)&xmmword_1800E6470 + 1);
      if ( *((_QWORD *)&xmmword_1800E6470 + 1) )
      {
LABEL_36:
        v31 = *v26;
        v26[2] = (__int64)v7;
        *((_QWORD *)&xmmword_1800E6470 + 1) = v31;
        v26[1] = 0LL;
        *v26 = v25;
        ++qword_1800E6468;
        if ( qword_1800E6458 )
          *(_QWORD *)(qword_1800E6458 + 8) = v26;
        else
          qword_1800E6460 = (__int64)v26;
        qword_1800E6458 = (__int64)v26;
        goto LABEL_79;
      }
      if ( dword_1800E6480 )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)dword_1800E6480 < 0x18 )
          goto LABEL_64;
        v27 = 24LL * (unsigned int)dword_1800E6480;
      }
      else
      {
        v27 = 0LL;
      }
      if ( (unsigned __int64)(-1 - v27) >= 8 )
      {
        v28 = malloc(v27 + 8);
        if ( v28 )
        {
          *v28 = xmmword_1800E6470;
          *(_QWORD *)&xmmword_1800E6470 = v28;
          v29 = &v28[3 * (unsigned int)(dword_1800E6480 - 1) + 1];
          v26 = (__int64 *)*((_QWORD *)&xmmword_1800E6470 + 1);
          for ( i = dword_1800E6480 - 1; i >= 0; --i )
          {
            *v29 = (__int64)v26;
            v26 = v29;
            *((_QWORD *)&xmmword_1800E6470 + 1) = v29;
            v29 -= 3;
          }
          goto LABEL_36;
        }
      }
LABEL_64:
      ATL::AtlThrowImpl(-2147024882);
    }
    catch ( ATL::CAtlException *v35 )
    {
      v33 = v35;
      if ( *(_DWORD *)v35 == -1073741571 )
        _resetstkoflw();
      v6 = *(_DWORD *)v33;
      v7 = v34;
      if ( *(int *)v33 < 0 )
      {
        v24 = WPP_GLOBAL_Control;
        goto LABEL_68;
      }
    }
LABEL_79:
    *a4 = v7;
    goto LABEL_40;
  }
LABEL_68:
  if ( !v7 )
    goto LABEL_41;
  CHostedAppInteractivity::`scalar deleting destructor'(v7);
LABEL_40:
  v24 = WPP_GLOBAL_Control;
LABEL_41:
  if ( v6 < 0
    && v24 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)v24 + 7) & 0x40000000) != 0
    && *((_BYTE *)v24 + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)v24 + 2), 17LL, &WPP_ec06d0f298c71c199f72f747d2c93494_Traceguids, (unsigned int)v6);
  }
  return (unsigned int)v6;
}
