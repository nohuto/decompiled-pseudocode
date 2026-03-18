/*
 * XREFs of ?UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@IPEAUHWND__@@PEAGPEAI@Z @ 0x1C01F42C8
 * Callers:
 *     ?UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@PEAPEAUtagWND@@PEAKPEAGPEAI@Z @ 0x1C01F4190 (-UpdateActivePointer@PointerList@@YAGPEBUtagPOINTEREVENTINT@@PEAUHWND__@@PEAPEAUtagWND@@PEAKPEAG.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     ?FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z @ 0x1C01C0A88 (-FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z.c)
 *     IsPointerInputRedirected @ 0x1C01F31A4 (IsPointerInputRedirected.c)
 *     ?GetInputProcessContext@@YAKPEAX@Z @ 0x1C01F3B1C (-GetInputProcessContext@@YAKPEAX@Z.c)
 *     PointerSpeedHitTest @ 0x1C02233A0 (PointerSpeedHitTest.c)
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
  const struct tagPOINTEREVENTINT *v8; // rdx
  int v9; // r13d
  struct tagWND **v10; // r15
  __int64 v11; // rcx
  int v12; // r12d
  struct tagWND *v13; // rsi
  int v14; // r14d
  int v15; // ebp
  int v16; // r14d
  int InputProcessContext; // eax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  struct tagPOINTERHOLDINGFRAME *HoldingFrameForDevice; // rax
  struct tagPOINTEREVENTINT *v23; // r10
  __int64 v24; // rax
  unsigned int *v25; // rdx
  bool v26; // cf
  unsigned __int16 *v27; // rdx
  struct tagWND *result; // rax
  struct tagWND *v30; // [rsp+78h] [rbp+10h] BYREF
  int v31; // [rsp+80h] [rbp+18h]
  HWND v32; // [rsp+88h] [rbp+20h]

  v32 = a4;
  v6 = 0;
  v31 = 0;
  v8 = (const struct tagPOINTEREVENTINT *)a1;
  v9 = HIWORD(a3) & 1;
  v10 = (struct tagWND **)((char *)a2 + 48);
  *a6 = 0;
  v11 = *((_QWORD *)a2 + 6);
  v12 = (a3 >> 18) & 1;
  if ( v11 && (*(char *)(v11 + 44) < 0 || *(char *)(v11 + 43) < 0) )
  {
    HMAssignmentUnlock((char *)a2 + 48);
    v8 = (const struct tagPOINTEREVENTINT *)a1;
  }
  v13 = *v10;
  v30 = v13;
  if ( v13 )
  {
    v14 = *((_DWORD *)a2 + 38);
    v31 = 1;
    v15 = -__CFSHR__(v14, 5);
    v16 = -__CFSHR__(v14, 6);
  }
  else
  {
    InputProcessContext = GetInputProcessContext(*((_QWORD *)v8 + 3), (__int64)v8);
    v18 = IsPointerInputRedirected(InputProcessContext, *(_QWORD *)(grpdeskRitInput + 8LL), *((_DWORD *)a2 + 10), &v30);
    v13 = v30;
    v16 = v18;
    v15 = v18;
    if ( !v30 )
    {
      LOBYTE(v19) = 1;
      v13 = (struct tagWND *)HMValidateHandleNoSecure((unsigned __int64)v32, v19, v20, v21);
      HoldingFrameForDevice = FindHoldingFrameForDevice(a1[3]);
      if ( HoldingFrameForDevice && (v24 = *((_QWORD *)HoldingFrameForDevice + 11)) != 0 )
      {
        v25 = a6;
        if ( (*(_DWORD *)(v24 + 1920) & 0x1000000) != 0 )
        {
          v15 = 1;
          *a6 = *(_DWORD *)(v24 + 1924);
          *((_DWORD *)a2 + 38) |= 0x40u;
        }
      }
      else
      {
        v25 = a6;
      }
      if ( !v13 )
      {
        LODWORD(a6) = 0;
        v13 = (struct tagWND *)PointerSpeedHitTest(
                                 *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL),
                                 v23,
                                 (int *)&a6,
                                 v25);
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
  v26 = v31 != 0;
  v31 = -v31;
  v27 = a5;
  *a5 |= v26 ? 0x10 : 0;
  if ( v15 || (*((_DWORD *)a2 + 38) & 0x40) != 0 )
    v6 = 32;
  result = v13;
  *v27 |= (2 * (*((_BYTE *)a2 + 152) & 0x40)) | (v16 != 0 ? 0x40 : 0) | v6;
  return result;
}
