/*
 * XREFs of DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C004A498
 * Callers:
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C004A240 (DrvDisplayConfigGetDeviceInfo.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0031A08 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0032CBC (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     UserIsCurrentProcessDwm @ 0x1C004B5A0 (UserIsCurrentProcessDwm.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvpDisplayConfigGetDisplayDeviceInfo(__int64 a1)
{
  __int64 v1; // rdx
  int v3; // eax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdi
  __int64 v7; // rcx
  wchar_t *v8; // rdi
  __int64 v9; // rdx
  int v10; // eax
  int IsCurrentProcessDwm; // eax
  __int16 v12; // r14
  char v13; // r11
  struct _LIST_ENTRY *i; // rsi
  int Blink; // ecx
  char v16; // al
  int v17; // eax
  char *v18; // rbx
  __int64 v19; // rcx
  signed __int64 v20; // rdi
  __int16 v21; // ax
  struct tagSIZE v23; // rax
  int v24; // r9d
  struct tagSIZE v25; // rax
  int v26; // r10d
  char v27; // cl
  int v28; // ecx
  int v29; // ecx
  _QWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  struct _LIST_ENTRY *v34; // [rsp+60h] [rbp+40h] BYREF
  __int64 v35; // [rsp+68h] [rbp+48h] BYREF
  __int64 v36; // [rsp+70h] [rbp+50h] BYREF

  v1 = *(unsigned int *)(a1 + 16);
  *(_DWORD *)(a1 + 1972) = 0;
  v3 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64))qword_1C011B4C0)(*(_QWORD *)(a1 + 8), v1, a1);
  v6 = v3;
  if ( v3 < 0 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdError();
    v30[3] = *(int *)(a1 + 12);
    v30[4] = *(unsigned int *)(a1 + 8);
    v30[5] = *(unsigned int *)(a1 + 16);
    v30[6] = v6;
    WdLogEvent5_WdError(v30);
    return (unsigned int)v6;
  }
  v7 = *(unsigned int *)(a1 + 16);
  if ( (_DWORD)v7 == -1 )
    return 0LL;
  v8 = gpGraphicsDeviceList;
  if ( !gpGraphicsDeviceList )
    goto LABEL_67;
  v9 = 0x800000LL;
  while ( (*((_DWORD *)v8 + 40) & 0x800000) != 0 )
  {
    if ( *(_DWORD *)(a1 + 8) == *((_DWORD *)v8 + 66) )
    {
      v10 = *((_DWORD *)v8 + 67);
      goto LABEL_8;
    }
LABEL_37:
    v8 = (wchar_t *)*((_QWORD *)v8 + 16);
    if ( !v8 )
      goto LABEL_10;
  }
  if ( *(_DWORD *)(a1 + 8) != *((_DWORD *)v8 + 76) )
    goto LABEL_37;
  v10 = *((_DWORD *)v8 + 77);
LABEL_8:
  if ( *(_DWORD *)(a1 + 12) != v10 || *((_DWORD *)v8 + 68) != (_DWORD)v7 )
    goto LABEL_37;
LABEL_10:
  if ( v8 && (*((_QWORD *)v8 + 18) || *((_QWORD *)v8 + 39)) )
  {
    if ( (*((_DWORD *)v8 + 40) & 0x800000) == 0 && !*((_DWORD *)v8 + 76) && !*((_DWORD *)v8 + 77) )
    {
      v31 = WdLogNewEntry5_WdAssertion(v7, 0x800000LL, v4, v5);
      WdLogEvent5_WdAssertion(v31);
    }
    if ( (*((_DWORD *)v8 + 41) & 1) != 0 )
    {
      v32 = WdLogNewEntry5_WdEvent(v7, v9);
      *(_QWORD *)(v32 + 24) = -1073741130LL;
      WdLogEvent5_WdEvent(v32);
      return 3221226166LL;
    }
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
    IsCurrentProcessDwm = UserIsCurrentProcessDwm();
    v12 = gProtocolType;
    if ( !IsCurrentProcessDwm || (v13 = 1, gProtocolType) )
      v13 = 0;
    for ( i = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink; i; i = i[1].Blink )
    {
      v34 = i;
      Blink = (int)i[3].Blink;
      if ( (Blink & 0x401) == 1 )
      {
        if ( v13 )
        {
          if ( (Blink & 0x20000) == 0 )
          {
            if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v34) )
            {
              if ( *(_DWORD *)(a1 + 1644) == LODWORD(i[163].Flink) && *(_DWORD *)(a1 + 1648) == HIDWORD(i[163].Flink) )
              {
                v23 = PDEVOBJ::sizl((PDEVOBJ *)&v34, &v35);
                if ( *(_DWORD *)(a1 + 1652) == v24 + *(_DWORD *)v23.cx )
                {
                  v25 = PDEVOBJ::sizl((PDEVOBJ *)&v34, &v36);
                  if ( *(_DWORD *)(a1 + 1656) == v26 + *(_DWORD *)(*(_QWORD *)&v25 + 4LL) )
                  {
                    *(_DWORD *)(a1 + 1972) &= ~1u;
                    if ( LODWORD(i[163].Flink) || (v27 = 1, HIDWORD(i[163].Flink)) )
                      v27 = 0;
                    v28 = *(_DWORD *)(a1 + 1972) ^ ((unsigned __int8)*(_DWORD *)(a1 + 1972) ^ (unsigned __int8)(2 * v27)) & 2;
                    *(_DWORD *)(a1 + 1972) = v28;
                    v17 = v28 ^ ((unsigned __int8)v28 ^ (unsigned __int8)(4 * (i[162].Blink == (struct _LIST_ENTRY *)v8))) & 4;
                    goto LABEL_27;
                  }
                }
              }
            }
          }
        }
        else if ( (wchar_t *)i[162].Blink == v8 )
        {
          *(_DWORD *)(a1 + 1644) = i[163].Flink;
          *(_DWORD *)(a1 + 1648) = HIDWORD(i[163].Flink);
          *(_DWORD *)(a1 + 1652) = LODWORD(i[163].Flink) + *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v34, &v35).cx;
          *(_DWORD *)(a1 + 1656) = HIDWORD(i[163].Flink)
                                 + *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v34, &v35) + 4LL);
          if ( v12 )
          {
            *(_DWORD *)(a1 + 1916) = *(_DWORD *)(a1 + 16);
            *(_DWORD *)(a1 + 1920) = 0;
            *(_DWORD *)(a1 + 1924) = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v34, &v35).cx;
            *(_DWORD *)(a1 + 1928) = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v34, &v35) + 4LL);
            *(_QWORD *)(a1 + 1952) = 0LL;
            *(_DWORD *)(a1 + 1960) = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v34, &v35).cx;
            v29 = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v34, &v35) + 4LL);
            *(_DWORD *)(a1 + 1972) |= 1u;
            *(_DWORD *)(a1 + 1964) = v29;
            *(_DWORD *)(a1 + 1932) = 4;
            *(_DWORD *)(a1 + 1936) = 60000;
            *(_DWORD *)(a1 + 1940) = 1000;
            *(_QWORD *)(a1 + 1944) = 1LL;
          }
          else
          {
            *(_DWORD *)(a1 + 1972) &= ~1u;
          }
          if ( LODWORD(i[163].Flink) || (v16 = 1, HIDWORD(i[163].Flink)) )
            v16 = 0;
          v17 = *(_DWORD *)(a1 + 1972) ^ ((unsigned __int8)*(_DWORD *)(a1 + 1972) ^ (unsigned __int8)(2 * v16)) & 2 | 4;
LABEL_27:
          *(_DWORD *)(a1 + 1972) = v17;
          break;
        }
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
    GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
    if ( !i && ((*(_DWORD *)(a1 + 1972) & 8) == 0 || gProtocolType) )
    {
      *(_QWORD *)(a1 + 1924) = 0LL;
      *(_QWORD *)(a1 + 1932) = 5LL;
      *(_DWORD *)(a1 + 1940) = 1;
      *(_QWORD *)(a1 + 1944) = 1LL;
      *(_QWORD *)(a1 + 1644) = 0LL;
      *(_QWORD *)(a1 + 1652) = 0LL;
      *(_QWORD *)(a1 + 1952) = 0LL;
      *(_QWORD *)(a1 + 1960) = 0LL;
      *(_DWORD *)(a1 + 1972) = (*(_DWORD *)(a1 + 1972) ^ (*(_DWORD *)(a1 + 1972) ^ (gProtocolType != 0)) & 1) & 0xFFFFFFF9;
    }
    v18 = (char *)(a1 + 1660);
    v19 = 128LL;
    v20 = (char *)v8 - v18;
    do
    {
      if ( v19 == 96 )
        break;
      v21 = *(_WORD *)&v18[v20 + 64];
      if ( !v21 )
        break;
      *(_WORD *)v18 = v21;
      v18 += 2;
      --v19;
    }
    while ( v19 );
    if ( !v19 )
      v18 -= 2;
    *(_WORD *)v18 = 0;
    return 0LL;
  }
LABEL_67:
  v33 = WdLogNewEntry5_WdWarning();
  WdLogEvent5_WdWarning(v33);
  return 3221226021LL;
}
