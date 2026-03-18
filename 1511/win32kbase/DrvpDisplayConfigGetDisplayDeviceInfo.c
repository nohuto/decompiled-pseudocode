/*
 * XREFs of DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C004CA04
 * Callers:
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C004C750 (DrvDisplayConfigGetDeviceInfo.c)
 * Callees:
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0037DF4 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0038FB8 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     sub_1C004CED0 @ 0x1C004CED0 (sub_1C004CED0.c)
 *     UserIsCurrentProcessDwm @ 0x1C004D740 (UserIsCurrentProcessDwm.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvpDisplayConfigGetDisplayDeviceInfo(unsigned int a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // rcx
  wchar_t *v9; // rsi
  __int64 v10; // rdx
  int v11; // eax
  int IsCurrentProcessDwm; // eax
  __int16 v13; // r15
  char v14; // r11
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C i; // r14
  int v16; // ecx
  char v17; // al
  int v18; // eax
  int v19; // r8d
  struct tagSIZE v21; // rax
  int v22; // r9d
  struct tagSIZE v23; // rax
  int v24; // r10d
  char v25; // cl
  int v26; // ecx
  int v27; // ecx
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v32; // [rsp+78h] [rbp+48h] BYREF
  __int64 v33; // [rsp+80h] [rbp+50h] BYREF
  __int64 v34; // [rsp+88h] [rbp+58h] BYREF

  *(_DWORD *)(a2 + 1968) &= 0x31u;
  v3 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C0104180)(
         *(_QWORD *)(a2 + 8),
         *(unsigned int *)(a2 + 16),
         a1);
  v6 = 0;
  v7 = v3;
  if ( v3 < 0 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError();
    v28[3] = *(int *)(a2 + 12);
    v28[4] = *(unsigned int *)(a2 + 8);
    v28[5] = *(unsigned int *)(a2 + 16);
    v28[6] = v7;
    WdLogEvent5_WdError(v28);
    return (unsigned int)v7;
  }
  v8 = *(unsigned int *)(a2 + 16);
  if ( (_DWORD)v8 == -1 )
    return 0LL;
  v9 = gpGraphicsDeviceList;
  if ( !gpGraphicsDeviceList )
    goto LABEL_61;
  v10 = 0x800000LL;
  while ( (*((_DWORD *)v9 + 40) & 0x800000) != 0 )
  {
    if ( *(_DWORD *)(a2 + 8) == *((_DWORD *)v9 + 66) )
    {
      v11 = *((_DWORD *)v9 + 67);
      goto LABEL_8;
    }
LABEL_31:
    v9 = (wchar_t *)*((_QWORD *)v9 + 16);
    if ( !v9 )
      goto LABEL_10;
  }
  if ( *(_DWORD *)(a2 + 8) != *((_DWORD *)v9 + 76) )
    goto LABEL_31;
  v11 = *((_DWORD *)v9 + 77);
LABEL_8:
  if ( *(_DWORD *)(a2 + 12) != v11 || *((_DWORD *)v9 + 68) != (_DWORD)v8 )
    goto LABEL_31;
LABEL_10:
  if ( v9 && (*((_QWORD *)v9 + 18) || *((_QWORD *)v9 + 39)) )
  {
    if ( (*((_DWORD *)v9 + 40) & 0x800000) == 0 && !*((_DWORD *)v9 + 76) && !*((_DWORD *)v9 + 77) )
    {
      v29 = WdLogNewEntry5_WdAssertion(v8, 0x800000LL, v4, v5);
      WdLogEvent5_WdAssertion(v29);
    }
    if ( (*((_DWORD *)v9 + 41) & 1) != 0 )
    {
      v30 = WdLogNewEntry5_WdEvent(v8, v10);
      *(_QWORD *)(v30 + 24) = -1073741130LL;
      WdLogEvent5_WdEvent(v30);
      return 3221226166LL;
    }
    EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
    IsCurrentProcessDwm = UserIsCurrentProcessDwm();
    v13 = gProtocolType;
    if ( !IsCurrentProcessDwm || (v14 = 1, gProtocolType) )
      v14 = 0;
    for ( i = WPP_MAIN_CB.DeviceQueue.1;
          i;
          i = *(struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *)(*(_QWORD *)&i + 24LL) )
    {
      v32 = i;
      v16 = *(_DWORD *)(*(_QWORD *)&i + 56LL);
      if ( (v16 & 0x401) == 1 )
      {
        if ( v14 )
        {
          if ( (v16 & 0x20000) == 0 )
          {
            if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v32) )
            {
              if ( *(_DWORD *)(a2 + 1644) == *(_DWORD *)(*(_QWORD *)&i + 2608LL)
                && *(_DWORD *)(a2 + 1648) == *(_DWORD *)(*(_QWORD *)&i + 2612LL) )
              {
                v21 = PDEVOBJ::sizl((PDEVOBJ *)&v32, &v33);
                if ( *(_DWORD *)(a2 + 1652) == v22 + *(_DWORD *)v21.cx )
                {
                  v23 = PDEVOBJ::sizl((PDEVOBJ *)&v32, &v34);
                  if ( *(_DWORD *)(a2 + 1656) == v24 + *(_DWORD *)(*(_QWORD *)&v23 + 4LL) )
                  {
                    *(_DWORD *)(a2 + 1968) &= ~1u;
                    if ( *(_DWORD *)(*(_QWORD *)&i + 2608LL) || (v25 = 1, *(_DWORD *)(*(_QWORD *)&i + 2612LL)) )
                      v25 = 0;
                    v26 = *(_DWORD *)(a2 + 1968) ^ ((unsigned __int8)*(_DWORD *)(a2 + 1968) ^ (unsigned __int8)(2 * v25)) & 2;
                    *(_DWORD *)(a2 + 1968) = v26;
                    v18 = v26 ^ ((unsigned __int8)v26 ^ (unsigned __int8)(4
                                                                        * (*(_QWORD *)(*(_QWORD *)&i + 2600LL) == (_QWORD)v9))) & 4;
                    goto LABEL_27;
                  }
                }
              }
            }
          }
        }
        else if ( *(wchar_t **)(*(_QWORD *)&i + 2600LL) == v9 )
        {
          *(_DWORD *)(a2 + 1644) = *(_DWORD *)(*(_QWORD *)&i + 2608LL);
          *(_DWORD *)(a2 + 1648) = *(_DWORD *)(*(_QWORD *)&i + 2612LL);
          *(_DWORD *)(a2 + 1652) = *(_DWORD *)(*(_QWORD *)&i + 2608LL)
                                 + *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v32, &v33).cx;
          *(_DWORD *)(a2 + 1656) = *(_DWORD *)(*(_QWORD *)&i + 2612LL)
                                 + *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v32, &v33) + 4LL);
          if ( v13 )
          {
            *(_DWORD *)(a2 + 1916) = *(_DWORD *)(a2 + 16);
            *(_DWORD *)(a2 + 1920) = 0;
            *(_DWORD *)(a2 + 1924) = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v32, &v33).cx;
            *(_DWORD *)(a2 + 1928) = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v32, &v33) + 4LL);
            *(_QWORD *)(a2 + 1952) = 0LL;
            *(_DWORD *)(a2 + 1960) = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v32, &v33).cx;
            v27 = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v32, &v33) + 4LL);
            *(_DWORD *)(a2 + 1968) |= 1u;
            *(_DWORD *)(a2 + 1964) = v27;
            *(_DWORD *)(a2 + 1932) = 4;
            *(_DWORD *)(a2 + 1936) = 60000;
            *(_DWORD *)(a2 + 1940) = 1000;
            *(_QWORD *)(a2 + 1944) = 1LL;
          }
          else
          {
            *(_DWORD *)(a2 + 1968) &= ~1u;
          }
          if ( *(_DWORD *)(*(_QWORD *)&i + 2608LL) || (v17 = 1, *(_DWORD *)(*(_QWORD *)&i + 2612LL)) )
            v17 = 0;
          v18 = *(_DWORD *)(a2 + 1968) ^ ((unsigned __int8)*(_DWORD *)(a2 + 1968) ^ (unsigned __int8)(2 * v17)) & 2 | 4;
LABEL_27:
          *(_DWORD *)(a2 + 1968) = v18;
          break;
        }
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
    GreReleaseSemaphoreInternal(ghsemDriverMgmt);
    if ( !*(_QWORD *)&i && ((*(_DWORD *)(a2 + 1968) & 8) == 0 || gProtocolType) )
    {
      *(_QWORD *)(a2 + 1924) = 0LL;
      *(_QWORD *)(a2 + 1932) = 5LL;
      *(_DWORD *)(a2 + 1940) = 1;
      *(_QWORD *)(a2 + 1944) = 1LL;
      *(_QWORD *)(a2 + 1644) = 0LL;
      *(_QWORD *)(a2 + 1652) = 0LL;
      *(_QWORD *)(a2 + 1952) = 0LL;
      *(_QWORD *)(a2 + 1960) = 0LL;
      LOBYTE(v6) = gProtocolType != 0;
      *(_DWORD *)(a2 + 1968) = (*(_DWORD *)(a2 + 1968) ^ (*(_DWORD *)(a2 + 1968) ^ v6) & 1) & 0xFFFFFFF9;
    }
    sub_1C004CED0(a2 + 1660, 128, v19, (_DWORD)v9 + 64, 32LL);
    return 0LL;
  }
LABEL_61:
  v31 = WdLogNewEntry5_WdWarning();
  WdLogEvent5_WdWarning(v31);
  return 3221226021LL;
}
