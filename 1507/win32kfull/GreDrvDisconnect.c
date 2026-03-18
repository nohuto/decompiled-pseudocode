/*
 * XREFs of GreDrvDisconnect @ 0x1C012F760
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C012C708 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxRemoteDisconnect @ 0x1C012D870 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C012DFA0 (xxxRemoteReconnect.c)
 *     xxxRemotePassthruEnable @ 0x1C0203600 (xxxRemotePassthruEnable.c)
 * Callees:
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C012F844 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C012F938 (--1SEMOBJEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreDrvDisconnect(__int64 a1)
{
  int v2; // edi
  struct _LDEV *v3; // rbx
  int v4; // r15d
  struct PDEV *v6; // rsi
  struct PDEV *i; // r14
  __int64 v8; // rdx
  struct _SURFOBJ *v9; // rdx
  HSEMAPHORE v10; // [rsp+68h] [rbp-A8h]
  HSEMAPHORE v11; // [rsp+68h] [rbp-A8h]
  unsigned int v12; // [rsp+70h] [rbp-A0h]
  unsigned int v13; // [rsp+70h] [rbp-A0h]
  HSEMAPHORE v14; // [rsp+78h] [rbp-98h]
  HSEMAPHORE v15; // [rsp+78h] [rbp-98h]
  unsigned int v16; // [rsp+80h] [rbp-90h]
  unsigned int v17; // [rsp+80h] [rbp-90h]
  _BYTE v18[96]; // [rsp+90h] [rbp-80h] BYREF
  _BYTE v19[144]; // [rsp+F0h] [rbp-20h] BYREF
  struct PDEV *v20; // [rsp+198h] [rbp+88h] BYREF
  struct PDEV *v21; // [rsp+1A0h] [rbp+90h] BYREF
  struct PDEV *v22; // [rsp+1A8h] [rbp+98h] BYREF

  v2 = 0;
  SEMOBJEX::SEMOBJEX(
    (SEMOBJEX *)v19,
    ghsemDynamicModeChange,
    1u,
    ghsemGreLock,
    2u,
    ghsemDCVisRgn,
    3u,
    0LL,
    0,
    0LL,
    0,
    0LL,
    0,
    v10,
    v12,
    v14,
    v16);
  v3 = gpldevDrivers;
  do
  {
    if ( !v3 )
      break;
    v4 = 0;
    if ( *((_QWORD *)v3 + 2) && *((_DWORD *)v3 + 6) == 1 && *(_QWORD *)(*((_QWORD *)v3 + 111) + 624LL) )
    {
      GreAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
      v6 = 0LL;
      for ( i = gppdevList; v2 >= 0 && i && *((struct _LDEV **)i + 227) == v3; i = (struct PDEV *)*((_QWORD *)i + 3) )
      {
        v20 = i;
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v20);
        EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
        GreReleaseSemaphoreInternal(ghsemDriverMgmt);
        if ( v6 )
        {
          v21 = v6;
          PDEVOBJ::vUnreferencePdev(&v21, 0LL);
        }
        if ( v20 && (*((_DWORD *)v20 + 14) & 1) != 0 )
        {
          SEMOBJEX::SEMOBJEX(
            (SEMOBJEX *)v18,
            *((HSEMAPHORE *)v20 + 9),
            4u,
            ghsemSprite,
            5u,
            ghsemHT,
            6u,
            *((HSEMAPHORE *)v20 + 8),
            0xBu,
            0LL,
            0,
            0LL,
            0,
            v11,
            v13,
            v15,
            v17);
          v8 = *((_QWORD *)v20 + 322);
          if ( v8 )
            v9 = (struct _SURFOBJ *)(v8 + 24);
          else
            v9 = 0LL;
          PDEVOBJ::vSync((PDEVOBJ *)&v20, v9, 0LL, 0);
          if ( !v4 )
          {
            v4 = 1;
            if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)v3 + 111) + 624LL))(
                   *(_QWORD *)(a1 + 24),
                   *(_QWORD *)(a1 + 16)) )
            {
              *((_DWORD *)v3 + 224) = 3;
            }
            else
            {
              *((_DWORD *)v3 + 224) = 6;
              v2 = -2143354873;
            }
          }
          SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v18);
        }
        GreAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
        v6 = i;
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      GreReleaseSemaphoreInternal(ghsemDriverMgmt);
      if ( v6 )
      {
        v22 = v6;
        PDEVOBJ::vUnreferencePdev(&v22, 0LL);
      }
      if ( !v4 && v2 >= 0 )
      {
        SEMOBJEX::SEMOBJEX(
          (SEMOBJEX *)v18,
          ghsemSprite,
          5u,
          ghsemHT,
          6u,
          ghsemDriverMgmt,
          0xCu,
          0LL,
          0,
          0LL,
          0,
          0LL,
          0,
          v11,
          v13,
          v15,
          v17);
        if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)v3 + 111) + 624LL))(
               *(_QWORD *)(a1 + 24),
               *(_QWORD *)(a1 + 16)) )
        {
          *((_DWORD *)v3 + 224) = 3;
        }
        else
        {
          *((_DWORD *)v3 + 224) = 6;
          v2 = -2143354873;
        }
        SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v18);
      }
    }
    v3 = *(struct _LDEV **)v3;
  }
  while ( v2 >= 0 );
  SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v19);
  return (unsigned int)v2;
}
