/*
 * XREFs of DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C001F0AC
 * Callers:
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C001EEA0 (DrvDisplayConfigGetDeviceInfo.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000B590 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     UserIsCurrentProcessDwm @ 0x1C000EA40 (UserIsCurrentProcessDwm.c)
 *     RtlStringCopyWorkerW @ 0x1C001F560 (RtlStringCopyWorkerW.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C00343E4 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C003561C (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvpDisplayConfigGetDisplayDeviceInfo(__int64 a1)
{
  int v2; // eax
  int v3; // ebx
  __int64 v4; // rsi
  __int64 v5; // rcx
  wchar_t *v6; // rsi
  __int64 v7; // rdx
  int v8; // eax
  BOOL IsCurrentProcessDwm; // eax
  __int64 v10; // r8
  __int16 v11; // r15
  char v12; // r11
  struct PDEV *i; // r14
  int v14; // ecx
  char v15; // al
  int v16; // eax
  size_t *v17; // r8
  struct tagSIZE v19; // rax
  int v20; // r9d
  struct tagSIZE v21; // rax
  int v22; // r10d
  char v23; // cl
  int v24; // ecx
  int v25; // ecx
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  struct PDEV *v30; // [rsp+70h] [rbp+40h] BYREF

  *(_DWORD *)(a1 + 1968) &= 1u;
  v2 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))qword_1C0101360)(
         *(_QWORD *)(a1 + 8),
         *(unsigned int *)(a1 + 16),
         a1);
  v3 = 0;
  v4 = v2;
  if ( v2 < 0 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError();
    v26[3] = *(int *)(a1 + 12);
    v26[4] = *(unsigned int *)(a1 + 8);
    v26[5] = *(unsigned int *)(a1 + 16);
    v26[6] = v4;
    WdLogEvent5_WdError(v26);
    return (unsigned int)v4;
  }
  v5 = *(unsigned int *)(a1 + 16);
  if ( (_DWORD)v5 == -1 )
    return 0LL;
  v6 = gpGraphicsDeviceList;
  if ( !gpGraphicsDeviceList )
    goto LABEL_58;
  v7 = 0x800000LL;
  while ( (*((_DWORD *)v6 + 40) & 0x800000) != 0 )
  {
    if ( *(_DWORD *)(a1 + 8) == *((_DWORD *)v6 + 66) )
    {
      v8 = *((_DWORD *)v6 + 67);
      goto LABEL_8;
    }
LABEL_32:
    v6 = (wchar_t *)*((_QWORD *)v6 + 16);
    if ( !v6 )
      goto LABEL_10;
  }
  if ( *(_DWORD *)(a1 + 8) != *((_DWORD *)v6 + 76) )
    goto LABEL_32;
  v8 = *((_DWORD *)v6 + 77);
LABEL_8:
  if ( *(_DWORD *)(a1 + 12) != v8 || *((_DWORD *)v6 + 68) != (_DWORD)v5 )
    goto LABEL_32;
LABEL_10:
  if ( v6 && (*((_QWORD *)v6 + 18) || *((_QWORD *)v6 + 39)) )
  {
    if ( (*((_DWORD *)v6 + 40) & 0x800000) == 0 && !*((_DWORD *)v6 + 76) && !*((_DWORD *)v6 + 77) )
    {
      v27 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v27);
    }
    if ( (*((_DWORD *)v6 + 41) & 1) != 0 )
    {
      v28 = WdLogNewEntry5_WdEvent(v5, v7);
      *(_QWORD *)(v28 + 24) = -1073741130LL;
      WdLogEvent5_WdEvent(v28);
      return 3221226166LL;
    }
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
    IsCurrentProcessDwm = UserIsCurrentProcessDwm();
    v11 = gProtocolType;
    if ( !IsCurrentProcessDwm || (v12 = 1, gProtocolType) )
      v12 = 0;
    for ( i = gppdevList; i; i = (struct PDEV *)*((_QWORD *)i + 3) )
    {
      v30 = i;
      v14 = *((_DWORD *)i + 14);
      if ( (v14 & 0x401) == 1 )
      {
        if ( v12 )
        {
          if ( (v14 & 0x20000) == 0 )
          {
            if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v30) )
            {
              if ( *(_DWORD *)(a1 + 1644) == *((_DWORD *)i + 652) && *(_DWORD *)(a1 + 1648) == *((_DWORD *)i + 653) )
              {
                v19 = PDEVOBJ::sizl((PDEVOBJ *)&v30);
                if ( *(_DWORD *)(a1 + 1652) == v20 + *(_DWORD *)v19.cx )
                {
                  v21 = PDEVOBJ::sizl((PDEVOBJ *)&v30);
                  if ( *(_DWORD *)(a1 + 1656) == v22 + *(_DWORD *)(*(_QWORD *)&v21 + 4LL) )
                  {
                    *(_DWORD *)(a1 + 1968) &= ~1u;
                    if ( *((_DWORD *)i + 652) || (v23 = 1, *((_DWORD *)i + 653)) )
                      v23 = 0;
                    v24 = *(_DWORD *)(a1 + 1968) ^ ((unsigned __int8)*(_DWORD *)(a1 + 1968) ^ (unsigned __int8)(2 * v23)) & 2;
                    *(_DWORD *)(a1 + 1968) = v24;
                    v16 = v24 ^ ((unsigned __int8)v24 ^ (unsigned __int8)(4 * (*((_QWORD *)i + 325) == (_QWORD)v6))) & 4;
                    goto LABEL_27;
                  }
                }
              }
            }
          }
        }
        else if ( *((wchar_t **)i + 325) == v6 )
        {
          *(_DWORD *)(a1 + 1644) = *((_DWORD *)i + 652);
          *(_DWORD *)(a1 + 1648) = *((_DWORD *)i + 653);
          *(_DWORD *)(a1 + 1652) = *((_DWORD *)i + 652) + *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v30).cx;
          *(_DWORD *)(a1 + 1656) = *((_DWORD *)i + 653) + *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v30) + 4LL);
          if ( v11 )
          {
            *(_DWORD *)(a1 + 1916) = *(_DWORD *)(a1 + 16);
            *(_DWORD *)(a1 + 1920) = 0;
            *(_DWORD *)(a1 + 1924) = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v30).cx;
            *(_DWORD *)(a1 + 1928) = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v30) + 4LL);
            *(_QWORD *)(a1 + 1952) = 0LL;
            *(_DWORD *)(a1 + 1960) = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v30).cx;
            v25 = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v30) + 4LL);
            *(_DWORD *)(a1 + 1968) |= 1u;
            *(_DWORD *)(a1 + 1964) = v25;
            *(_DWORD *)(a1 + 1932) = 4;
            *(_DWORD *)(a1 + 1936) = 60000;
            *(_DWORD *)(a1 + 1940) = 1000;
            *(_QWORD *)(a1 + 1944) = 1LL;
          }
          else
          {
            *(_DWORD *)(a1 + 1968) &= ~1u;
          }
          if ( *((_DWORD *)i + 652) || (v15 = 1, *((_DWORD *)i + 653)) )
            v15 = 0;
          v16 = *(_DWORD *)(a1 + 1968) ^ ((unsigned __int8)*(_DWORD *)(a1 + 1968) ^ (unsigned __int8)(2 * v15)) & 2 | 4;
LABEL_27:
          *(_DWORD *)(a1 + 1968) = v16;
          break;
        }
      }
    }
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v10);
    GreReleaseSemaphoreInternal(ghsemDriverMgmt);
    if ( !i )
    {
      *(_QWORD *)(a1 + 1924) = 0LL;
      *(_QWORD *)(a1 + 1932) = 5LL;
      *(_DWORD *)(a1 + 1940) = 1;
      *(_QWORD *)(a1 + 1944) = 1LL;
      *(_QWORD *)(a1 + 1644) = 0LL;
      *(_QWORD *)(a1 + 1652) = 0LL;
      *(_QWORD *)(a1 + 1952) = 0LL;
      *(_QWORD *)(a1 + 1960) = 0LL;
      LOBYTE(v3) = gProtocolType != 0;
      *(_DWORD *)(a1 + 1968) = (*(_DWORD *)(a1 + 1968) ^ (*(_DWORD *)(a1 + 1968) ^ v3) & 1) & 0xFFFFFFF9;
    }
    RtlStringCopyWorkerW((NTSTRSAFE_PWSTR)(a1 + 1660), 0x80uLL, v17, v6 + 32, 0x20uLL);
    return 0LL;
  }
LABEL_58:
  v29 = WdLogNewEntry5_WdWarning(v5);
  WdLogEvent5_WdWarning(v29);
  return 3221226021LL;
}
