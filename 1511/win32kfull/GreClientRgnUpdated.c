/*
 * XREFs of GreClientRgnUpdated @ 0x1C004F8F8
 * Callers:
 *     NtGdiBitBltInternal @ 0x1C0048C50 (NtGdiBitBltInternal.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C004EC70 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzUpdateLayeredWindow @ 0x1C006BA10 (zzzUpdateLayeredWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006C148 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C02701D0 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C027B8A4 (-vForceClientRgnUpdate@@YAXXZ.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CC4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@H@Z @ 0x1C0151088 (--0RGNMEMOBJTMP@@QEAA@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z @ 0x1C027BC50 (-vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z.c)
 *     ?vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x1C027BE58 (-vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall GreClientRgnUpdated(char a1)
{
  int v2; // edx
  TRACKOBJ *i; // rdi
  int v4; // eax
  int v5; // eax
  __int64 j; // rbx
  int v7; // eax
  struct _RECTL *v8; // rsi
  int v9; // edx
  struct _RECTL *v10; // r14
  __int64 k; // rbx
  LONG *p_right; // rbx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v19[2]; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v20[3]; // [rsp+38h] [rbp-38h] BYREF
  struct _RECTL v21; // [rsp+50h] [rbp-20h] BYREF
  struct _RECTL v22; // [rsp+60h] [rbp-10h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v24; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+48h] BYREF

  GreAcquireSemaphore(ghsemVisRgnUniqueness);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness, 10LL);
  ++giVisRgnUniqueness;
  EtwTraceGreLockReleaseSemaphore(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
  GreReleaseSemaphoreInternal(ghsemVisRgnUniqueness);
  if ( (a1 & 1) != 0 )
  {
    v18 = ghsemWndobj;
    GreAcquireSemaphore(ghsemWndobj);
    for ( i = gpto; i; i = (TRACKOBJ *)*((_QWORD *)i + 1) )
    {
      v4 = *((_DWORD *)i + 12);
      if ( v4 < 0 )
      {
        v5 = v4 & 0x7FFFFFFF;
        *((_DWORD *)i + 12) = v5;
        if ( (v5 & 0x12) == 0x12 )
        {
          for ( j = *((_QWORD *)i + 3); j; j = *(_QWORD *)(j + 160) )
          {
            v7 = *(_DWORD *)(j + 184);
            if ( v7 >= 0 )
            {
              v23 = *(_QWORD *)(j + 200);
              GreAcquireSemaphore(v23);
              (*((void (__fastcall **)(__int64, __int64))i + 5))(j, 2LL);
              SEMOBJ::vUnlock((SEMOBJ *)&v23);
            }
            else
            {
              *(_DWORD *)(j + 184) = v7 & 0x7FFFFFFF;
            }
          }
        }
        if ( (*((_DWORD *)i + 12) & 0xC) != 0 )
        {
          v8 = (struct _RECTL *)*((_QWORD *)i + 2);
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v20, v2);
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v19, v9);
          if ( v20[0] && v19[0] )
          {
            v10 = v8 + 2;
            RGNOBJ::vSet((RGNOBJ *)v19, v8 + 2);
            for ( k = *((_QWORD *)i + 3); k; k = *(_QWORD *)(k + 160) )
            {
              v24 = *(_QWORD *)(k + 56);
              if ( RGNOBJ::iCombine((RGNOBJ *)v20, (struct RGNOBJ *)v19, (struct RGNOBJ *)&v24, 4) )
                RGNOBJ::bSwap((RGNOBJ *)v19, (struct RGNOBJ *)v20);
            }
            if ( (*((_DWORD *)i + 12) & 4) != 0 )
            {
              p_right = &v8[3].right;
              v25 = *(_QWORD *)&v8[3].right;
              if ( RGNOBJ::iCombine((RGNOBJ *)v20, (struct RGNOBJ *)v19, (struct RGNOBJ *)&v25, 4) )
              {
                RGNOBJ::bSwap((RGNOBJ *)&v8[3].right, (struct RGNOBJ *)v20);
                v13 = *(_QWORD *)p_right;
                *(_DWORD *)(v13 + 28) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
                v14 = *(_QWORD *)p_right;
                v21 = *v10;
                EWNDOBJ::vSetClip(v8, v14, &v21);
                TRACKOBJ::vUpdateDrvDelta(i, (struct EWNDOBJ *)v8, 4u);
              }
            }
            RGNOBJ::bSwap((RGNOBJ *)&v8[3].right, (struct RGNOBJ *)v19);
            v15 = *(_QWORD *)&v8[3].right;
            *(_DWORD *)(v15 + 28) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
            v16 = *(_QWORD *)&v8[3].right;
            v22 = *v10;
            EWNDOBJ::vSetClip(v8, v16, &v22);
            if ( (*((_DWORD *)i + 12) & 8) != 0 )
              (*((void (__fastcall **)(struct _RECTL *, __int64))i + 5))(v8, 8LL);
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v19);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v20);
        }
        (*((void (__fastcall **)(_QWORD, __int64))i + 5))(0LL, 16LL);
        v17 = *((_DWORD *)i + 12);
        if ( (v17 & 0x40) != 0 )
        {
          if ( (a1 & 2) != 0 )
          {
            *((_DWORD *)i + 12) = v17 | 0x4000000;
          }
          else
          {
            (*((void (__fastcall **)(_QWORD, __int64))i + 5))(0LL, 64LL);
            *((_DWORD *)i + 12) &= ~0x4000000u;
          }
        }
      }
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v18);
  }
}
