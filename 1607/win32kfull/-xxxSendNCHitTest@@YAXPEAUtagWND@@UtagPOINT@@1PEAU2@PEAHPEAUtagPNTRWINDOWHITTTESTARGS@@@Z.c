/*
 * XREFs of ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C02222E0
 * Callers:
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C0221EF0 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C02224F8 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C0222F9C (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00723B0 (IsToplevelWindowDesktopComposed.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     DwmSyncHitTestQuery @ 0x1C00B75BC (DwmSyncHitTestQuery.c)
 *     ?NlsNullProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0135D10 (-NlsNullProc@@YAHPEAUtagKE@@_KK@Z.c)
 */

void __fastcall xxxSendNCHitTest(
        struct tagWND *a1,
        struct tagPOINT a2,
        struct tagPOINT a3,
        struct tagPOINT *a4,
        int *a5,
        struct tagPNTRWINDOWHITTTESTARGS *a6)
{
  int v6; // r14d
  struct tagKE *v8; // rcx
  float *v9; // rcx
  int v10; // eax
  int v11; // ecx
  unsigned __int64 v12; // r8
  BOOL v13; // ebx
  struct tagPNTRWINDOWHITTTESTARGS *v14; // rsi
  int *v15; // r15
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  void *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // [rsp+90h] [rbp+40h] BYREF
  __int64 v23; // [rsp+98h] [rbp+48h]
  struct tagPOINT v24; // [rsp+A0h] [rbp+50h]
  unsigned __int64 v25; // [rsp+A8h] [rbp+58h]

  v24 = a3;
  v23 = (__int64)a2;
  v6 = 0;
  LODWORD(v22) = 0;
  if ( a4 )
  {
    v24.x += a4->x;
    v24.y += a4->y;
    v25 = (unsigned __int64)*a4;
    if ( (unsigned int)IsWindowDesktopComposed(a1)
      && (v8 = (struct tagKE *)*((_QWORD *)a1 + 34)) != 0LL
      && (unsigned int)NlsNullProc(v8) )
    {
      v10 = (int)(float)((float)(int)v25 * *v9);
      v11 = (int)(float)((float)SHIDWORD(v25) * v9[5]);
      v25 = __PAIR64__(v11, v10);
    }
    else
    {
      v11 = HIDWORD(v25);
      v10 = v25;
    }
    LODWORD(v23) = v10 + v23;
    HIDWORD(v23) += v11;
    a3 = v24;
  }
  if ( PtInRect((_DWORD *)a1 + 28, *(_QWORD *)&a3) )
  {
    v13 = (*((_BYTE *)a1 + 55) & 0x20) != 0 || !PtInRect((_DWORD *)a1 + 32, v12);
    if ( *((_QWORD *)a1 + 2) == gptiCurrent )
    {
      v14 = a6;
      v15 = a5;
      if ( *((_DWORD *)a6 + 21)
        && (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1)
        && (*((_BYTE *)a1 + 50) & 8) != 0
        && v13 )
      {
        if ( gdwInAtomicOperation )
        {
          v16 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        v19 = (void *)ReferenceDwmApiPort(v16, gdwInAtomicOperation, v17, v18);
        LODWORD(v22) = 1;
        UserSessionSwitchLeaveCrit(v21, v20);
        DwmSyncHitTestQuery(
          v19,
          *(_QWORD *)a1,
          *(_DWORD *)v14,
          v23,
          *((_QWORD *)v14 + 1),
          *((_QWORD *)v14 + 2),
          -2,
          v15,
          &v22);
        EnterCrit(0LL, 1LL);
        v6 = v22;
      }
      if ( !*((_DWORD *)v14 + 21) || !v6 )
      {
        _InterlockedAdd(&glSendMessage, 1u);
        *v15 = xxxSendTransformableMessageTimeout(
                 a1,
                 132LL,
                 0LL,
                 LOWORD(v24.x) | (LOWORD(v24.y) << 16),
                 0,
                 0,
                 0LL,
                 1,
                 0);
      }
    }
    else
    {
      *a5 = 1;
    }
  }
  else
  {
    *a5 = 0;
  }
}
