/*
 * XREFs of ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C022C5F8
 * Callers:
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C022C21C (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C022C7CC (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C022D268 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C00569D8 (IsToplevelWindowDesktopComposed.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     PtInRect @ 0x1C0066AB8 (PtInRect.c)
 *     DwmSyncHitTestQuery @ 0x1C00C82C8 (DwmSyncHitTestQuery.c)
 *     ?NlsNullProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0114D90 (-NlsNullProc@@YAHPEAUtagKE@@_KK@Z.c)
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
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  void *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // [rsp+90h] [rbp+40h] BYREF
  __int64 v24; // [rsp+98h] [rbp+48h]
  struct tagPOINT v25; // [rsp+A0h] [rbp+50h]
  unsigned __int64 v26; // [rsp+A8h] [rbp+58h]

  v25 = a3;
  v24 = (__int64)a2;
  v6 = 0;
  LODWORD(v23) = 0;
  if ( a4 )
  {
    v25.x += a4->x;
    v25.y += a4->y;
    v26 = (unsigned __int64)*a4;
    if ( (unsigned int)IsWindowDesktopComposed(a1)
      && (v8 = (struct tagKE *)*((_QWORD *)a1 + 34)) != 0LL
      && (unsigned int)NlsNullProc(v8) )
    {
      v10 = (int)(float)((float)(int)v26 * *v9);
      v11 = (int)(float)((float)SHIDWORD(v26) * v9[5]);
      v26 = __PAIR64__(v11, v10);
    }
    else
    {
      v11 = HIDWORD(v26);
      v10 = v26;
    }
    LODWORD(v24) = v10 + v24;
    HIDWORD(v24) += v11;
    a3 = v25;
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
        v20 = (void *)ReferenceDwmApiPort(v17, v16, v18, v19);
        LODWORD(v23) = 1;
        UserSessionSwitchLeaveCrit(v22, v21);
        DwmSyncHitTestQuery(
          v20,
          *(_QWORD *)a1,
          *(_DWORD *)v14,
          v24,
          *((_QWORD *)v14 + 1),
          *((_QWORD *)v14 + 2),
          -2,
          v15,
          &v23);
        EnterCrit(0LL, 1LL);
        v6 = v23;
      }
      if ( !*((_DWORD *)v14 + 21) || !v6 )
      {
        _InterlockedAdd(&glSendMessage, 1u);
        *v15 = xxxSendTransformableMessageTimeout(
                 a1,
                 132LL,
                 0LL,
                 LOWORD(v25.x) | (LOWORD(v25.y) << 16),
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
