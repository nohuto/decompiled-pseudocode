/*
 * XREFs of ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1400895D8
 * Callers:
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1400872B4 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x140088A18 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x14008A1B8 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     PtInRect @ 0x14008C1B0 (PtInRect.c)
 *     IsToplevelWindowDesktopComposed @ 0x14012D424 (IsToplevelWindowDesktopComposed.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x140138DEC (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140138E4C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     DwmSyncHitTestQuery @ 0x14014C4C4 (DwmSyncHitTestQuery.c)
 */

void __fastcall xxxSendNCHitTest(
        float **a1,
        struct tagPOINT a2,
        struct tagPOINT a3,
        struct tagPOINT *a4,
        int *a5,
        struct tagPNTRWINDOWHITTTESTARGS *a6)
{
  int v6; // ebp
  float *v8; // rax
  int v9; // eax
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  BOOL v14; // edi
  struct tagPNTRWINDOWHITTTESTARGS *v15; // r14
  int *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  void *v20; // rdi
  __int64 v21; // [rsp+90h] [rbp+8h] BYREF
  struct tagPOINT v22; // [rsp+98h] [rbp+10h]
  struct tagPOINT v23; // [rsp+A0h] [rbp+18h]
  __int64 v24; // [rsp+A8h] [rbp+20h] BYREF

  v23 = a3;
  v22 = a2;
  v6 = 0;
  if ( a4 )
  {
    v23.x += a4->x;
    v23.y += a4->y;
    v21 = (__int64)*a4;
    if ( (unsigned int)IsWindowDesktopComposed(a1) && (v8 = a1[27]) != 0LL )
    {
      v10 = (int)(float)((float)(int)v21 * *v8);
      v9 = (int)(float)((float)SHIDWORD(v21) * v8[5]);
    }
    else
    {
      v9 = HIDWORD(v21);
      v10 = v21;
    }
    v22.x += v10;
    v22.y += v9;
    a3 = v23;
  }
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(a1[5] + 22, a3) )
  {
    v14 = (*(_BYTE *)(v13 + 31) & 0x20) != 0 || !(unsigned int)PtInRect(v13 + 104, v12);
    if ( a1[2] == (float *)PtiCurrent(v11) )
    {
      v15 = a6;
      v16 = a5;
      if ( *((_DWORD *)a6 + 21)
        && (unsigned int)IsToplevelWindowDesktopComposed(a1)
        && (*((_BYTE *)a1[5] + 26) & 8) != 0
        && v14 )
      {
        v19 = ReferenceDwmApiPort(v18, v17);
        LODWORD(v24) = 1;
        v20 = (void *)v19;
        LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v21, 1);
        DwmSyncHitTestQuery(v20, *((_QWORD *)v15 + 1), *((_QWORD *)v15 + 2), -2, (__int64)v16, (__int64)&v24);
        LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v21);
        v6 = v24;
      }
      if ( !*((_DWORD *)v15 + 21) || !v6 )
        *v16 = xxxSendTransformableMessageTimeout(
                 (struct tagTHREADINFO **)a1,
                 132LL,
                 0LL,
                 LOWORD(v23.x) | (LOWORD(v23.y) << 16),
                 0,
                 0,
                 0LL,
                 1u,
                 0);
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
