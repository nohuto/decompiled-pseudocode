/*
 * XREFs of ?UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@IPEAUHWND__@@PEAGPEAI@Z @ 0x1C01FCBA8
 * Callers:
 *     ?UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@PEAPEAUtagWND@@PEAKPEAGPEAI@Z @ 0x1C01FCA70 (-UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@PEAPEAUtagWND@@PEAKPEAG.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     IsPointerInputRedirected @ 0x1C01FB9AC (IsPointerInputRedirected.c)
 *     ?GetInputThreadContext@@YAPEAUtagTHREADINFO@@PEAX@Z @ 0x1C01FC3E8 (-GetInputThreadContext@@YAPEAUtagTHREADINFO@@PEAX@Z.c)
 *     PointerSpeedHitTest @ 0x1C022D338 (PointerSpeedHitTest.c)
 *     ?FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z @ 0x1C022F1E8 (-FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z.c)
 */

struct tagWND *__fastcall UpdateInputCaptureAndGetTarget(
        void **a1,
        struct tagINPUTPOINTERNODE *a2,
        unsigned int a3,
        HWND a4,
        unsigned __int16 *a5,
        unsigned int *a6)
{
  __int16 v6; // bx
  void **v8; // rdx
  int v9; // r13d
  struct tagWND **v10; // r15
  __int64 v11; // rcx
  int v12; // r12d
  struct tagWND *v13; // rsi
  int v14; // r14d
  int v15; // ebp
  int v16; // r14d
  struct tagTHREADINFO *InputThreadContext; // rax
  int v18; // eax
  struct tagPOINTERHOLDINGFRAME *HoldingFrameForDevice; // rax
  struct tagPOINTEREVENTINT *v20; // r10
  __int64 v21; // rax
  unsigned int *v22; // rdx
  bool v23; // cf
  unsigned __int16 *v24; // rdx
  struct tagWND *result; // rax
  struct tagWND *v27; // [rsp+78h] [rbp+10h] BYREF
  int v28; // [rsp+80h] [rbp+18h]
  HWND v29; // [rsp+88h] [rbp+20h]

  v29 = a4;
  v6 = 0;
  v28 = 0;
  v8 = a1;
  v9 = HIWORD(a3) & 1;
  v10 = (struct tagWND **)((char *)a2 + 48);
  *a6 = 0;
  v11 = *((_QWORD *)a2 + 6);
  v12 = (a3 >> 18) & 1;
  if ( v11 && (*(char *)(v11 + 44) < 0 || *(char *)(v11 + 43) < 0) )
  {
    HMAssignmentUnlock((char *)a2 + 48);
    v8 = a1;
  }
  v13 = *v10;
  v27 = v13;
  if ( v13 )
  {
    v14 = *((_DWORD *)a2 + 38);
    v28 = 1;
    v15 = -__CFSHR__(v14, 5);
    v16 = -__CFSHR__(v14, 6);
  }
  else
  {
    InputThreadContext = GetInputThreadContext((unsigned __int64)v8[3]);
    v18 = IsPointerInputRedirected(
            (__int64)InputThreadContext,
            *(_QWORD *)(grpdeskRitInput + 8LL),
            *((_DWORD *)a2 + 10),
            &v27);
    v13 = v27;
    v16 = v18;
    v15 = v18;
    if ( !v27 )
    {
      v13 = (struct tagWND *)HMValidateHandleNoSecure((unsigned __int64)v29, 1);
      HoldingFrameForDevice = FindHoldingFrameForDevice(a1[3]);
      if ( HoldingFrameForDevice && (v21 = *((_QWORD *)HoldingFrameForDevice + 11)) != 0 )
      {
        v22 = a6;
        if ( (*(_DWORD *)(v21 + 1264) & 0x8000000) != 0 )
        {
          v15 = 1;
          *a6 = *(_DWORD *)(v21 + 1268);
          *((_DWORD *)a2 + 38) |= 0x40u;
        }
      }
      else
      {
        v22 = a6;
      }
      if ( !v13 )
      {
        LODWORD(a6) = 0;
        v13 = (struct tagWND *)PointerSpeedHitTest(
                                 *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL),
                                 v20,
                                 (int *)&a6,
                                 v22);
        if ( (_DWORD)a6 )
        {
          *((_DWORD *)a2 + 38) |= 0x40u;
          v15 = 1;
        }
      }
    }
  }
  if ( v9 && v13 )
  {
    HMAssignmentLock((char *)a2 + 48, v13);
    *((_DWORD *)a2 + 38) = *((_DWORD *)a2 + 38) & 0xFFFFFFCF | (16 * (v15 & 1 | (2 * (v16 & 1))));
  }
  else if ( v12 && *v10 )
  {
    HMAssignmentUnlock((char *)a2 + 48);
    *((_DWORD *)a2 + 38) &= 0xFFFFFFCF;
  }
  v23 = v28 != 0;
  v28 = -v28;
  v24 = a5;
  *a5 |= v23 ? 0x10 : 0;
  if ( v15 || (*((_DWORD *)a2 + 38) & 0x40) != 0 )
    v6 = 32;
  result = v13;
  *v24 |= (2 * (*((_BYTE *)a2 + 152) & 0x40)) | (v16 != 0 ? 0x40 : 0) | v6;
  return result;
}
