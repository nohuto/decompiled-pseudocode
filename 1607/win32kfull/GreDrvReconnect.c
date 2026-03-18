/*
 * XREFs of GreDrvReconnect @ 0x1C02BA424
 * Callers:
 *     xxxRemoteReconnect @ 0x1C01537F0 (xxxRemoteReconnect.c)
 * Callees:
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C01549E4 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C0154AD8 (--1SEMOBJEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreDrvReconnect(__int64 a1)
{
  int v2; // r15d
  int v3; // edi
  struct _LDEV *v4; // rbx
  int v5; // r14d
  struct PDEV *i; // rsi
  __int64 v7; // rdx
  struct _SURFOBJ *v8; // rdx
  __int64 v9; // rdx
  void (__fastcall *v10)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // rax
  _BYTE v12[96]; // [rsp+90h] [rbp-80h] BYREF
  _BYTE v13[144]; // [rsp+F0h] [rbp-20h] BYREF
  struct PDEV *v14; // [rsp+1A0h] [rbp+90h] BYREF
  __int64 v15; // [rsp+1A8h] [rbp+98h] BYREF

  v2 = 1;
  v3 = 0;
  SEMOBJEX::SEMOBJEX(
    (SEMOBJEX *)v13,
    ghsemDynamicModeChange,
    1,
    ghsemGreLock,
    2u,
    ghsemDCVisRgn,
    3u,
    0LL,
    0,
    0LL,
    0,
    0LL,
    0);
  v4 = gpldevDrivers;
  do
  {
    if ( !v4 )
      break;
    v5 = 0;
    if ( *((_QWORD *)v4 + 2) && *((_DWORD *)v4 + 6) == 1 && *(_QWORD *)(*((_QWORD *)v4 + 111) + 632LL) )
    {
      GreAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
      for ( i = gppdevList; v3 >= 0 && i && *((struct _LDEV **)i + 227) == v4; i = (struct PDEV *)*((_QWORD *)i + 3) )
      {
        v14 = i;
        if ( (*((_DWORD *)i + 14) & 1) != 0 )
        {
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          GreReleaseSemaphoreInternal(ghsemDriverMgmt);
          SEMOBJEX::SEMOBJEX(
            (SEMOBJEX *)v12,
            *((HSEMAPHORE *)v14 + 9),
            4,
            ghsemSprite,
            5u,
            ghsemHT,
            6u,
            *((HSEMAPHORE *)v14 + 8),
            0xBu,
            0LL,
            0,
            0LL,
            0);
          v7 = *((_QWORD *)v14 + 322);
          if ( v7 )
            v8 = (struct _SURFOBJ *)(v7 + 24);
          else
            v8 = 0LL;
          PDEVOBJ::vSync((PDEVOBJ *)&v14, v8, 0LL, 0);
          if ( !v5 )
          {
            v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)v4 + 111) + 632LL))(
                   *(_QWORD *)(a1 + 24),
                   *(_QWORD *)(a1 + 16));
            v5 = 1;
            if ( v2 )
            {
              *((_DWORD *)v4 + 224) = 2;
            }
            else
            {
              *((_DWORD *)v4 + 224) = 5;
              v3 = -2143354874;
            }
          }
          v9 = *((_QWORD *)v14 + 229);
          v15 = v9;
          if ( v2 == 1 && (*(_DWORD *)(v9 + 24) & 0x800) != 0 )
          {
            v10 = (void (__fastcall *)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))*((_QWORD *)v14 + 361);
            if ( v10 )
              v10(*((_QWORD *)v14 + 228), &v15, 0LL, 0LL, *(_DWORD *)(v9 + 28));
          }
          SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v12);
          GreAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
        }
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      GreReleaseSemaphoreInternal(ghsemDriverMgmt);
      if ( !v5 && v3 >= 0 )
      {
        SEMOBJEX::SEMOBJEX((SEMOBJEX *)v12, ghsemSprite, 5, ghsemHT, 6u, ghsemDriverMgmt, 0xCu, 0LL, 0, 0LL, 0, 0LL, 0);
        v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)v4 + 111) + 632LL))(
               *(_QWORD *)(a1 + 24),
               *(_QWORD *)(a1 + 16));
        if ( v2 )
        {
          *((_DWORD *)v4 + 224) = 2;
        }
        else
        {
          *((_DWORD *)v4 + 224) = 5;
          v3 = -2143354873;
        }
        SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v12);
      }
    }
    v4 = *(struct _LDEV **)v4;
  }
  while ( v3 >= 0 );
  SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v13);
  return (unsigned int)v3;
}
