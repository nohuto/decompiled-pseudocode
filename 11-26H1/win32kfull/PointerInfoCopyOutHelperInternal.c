/*
 * XREFs of PointerInfoCopyOutHelperInternal @ 0x1402539A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     GetDPITransformationMonitor @ 0x14008BDAC (GetDPITransformationMonitor.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1401D198C (RemapHimetricPointsForMultiMonDigitizers.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14034FD00 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 */

__int64 __fastcall PointerInfoCopyOutHelperInternal(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, char *a6)
{
  int v9; // r14d
  unsigned int v10; // edi
  int AdjustedPointerLocations; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // ebx
  size_t v18; // r8
  __int64 Src[2]; // [rsp+58h] [rbp-C0h] BYREF
  __int64 DPITransformationMonitor; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+78h] [rbp-A0h] BYREF
  _QWORD v24[4]; // [rsp+80h] [rbp-98h] BYREF
  __int128 v25; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v26; // [rsp+B0h] [rbp-68h] BYREF
  __int128 v27; // [rsp+C0h] [rbp-58h] BYREF

  v9 = 0;
  v10 = 0;
  Src[0] = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24[0] = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  AdjustedPointerLocations = GetAdjustedPointerLocations(
                               *(_QWORD *)(a1 + 40),
                               *(_QWORD *)(a1 + 48),
                               *(_QWORD *)(a1 + 56),
                               *(_QWORD *)(a1 + 64),
                               a2,
                               Src,
                               &v23,
                               &v22,
                               v24,
                               a3);
  if ( (*((_DWORD *)PtiCurrent(v12) + 340) & 0x2000LL) == 0 )
    v9 = AdjustedPointerLocations;
  if ( a4 == 2 || a4 == 5 )
  {
    v26 = *(_OWORD *)(a1 + 112);
    v27 = *(_OWORD *)(a1 + 128);
  }
  v13 = HMValidateHandleNoSecure(*(_QWORD *)(a1 + 32), 1);
  if ( v13 && (*(_DWORD *)(*(_QWORD *)(v13 + 40) + 288LL) & 0xF) != 2 )
  {
    if ( !v9 )
    {
      Src[0] = *(_QWORD *)(a1 + 40);
      v23 = *(_QWORD *)(a1 + 48);
      v22 = *(_QWORD *)(a1 + 56);
      v24[0] = *(_QWORD *)(a1 + 64);
    }
    DPITransformationMonitor = GetDPITransformationMonitor(Src[0], v13);
    v14 = v9 | PhysicalToLogicalDPIPoint(Src, Src, 0LL, &DPITransformationMonitor);
    v9 = v14 | PhysicalToLogicalDPIPoint(&v22, &v22, 0LL, &DPITransformationMonitor);
    if ( a4 == 2 || a4 == 5 )
    {
      v17 = v9 | PhysicalToLogicalDPIRect(&v26, &v26, 0LL, &DPITransformationMonitor);
      v9 = v17 | PhysicalToLogicalDPIRect(&v27, &v27, 0LL, &DPITransformationMonitor);
    }
    if ( ***(_DWORD ***)(W32GetUserSessionState(v16, v15) + 56968) > 1u
      && a3
      && !*(_DWORD *)(*(_QWORD *)(a3 + 16) + 1328LL)
      && *(_DWORD *)(a3 + 24) != 7 )
    {
      v25 = *(_OWORD *)(a3 + 176);
      RemapHimetricPointsForMultiMonDigitizers((__int64)&v25, DPITransformationMonitor, &v23, v24);
      v9 = 1;
    }
  }
  if ( a4 == 1 )
  {
    v18 = 96LL;
  }
  else
  {
    if ( a4 != 2 )
    {
      if ( a4 == 3 )
      {
        v18 = 120LL;
        goto LABEL_26;
      }
      if ( a4 != 5 )
      {
        v10 = 0;
        goto LABEL_28;
      }
    }
    v18 = 144LL;
  }
LABEL_26:
  if ( a5 == (_DWORD)v18 )
  {
    RtlCopyToUser(a6, (void *)(a1 + 8), v18);
    v10 = 1;
  }
LABEL_28:
  if ( v10 )
  {
    if ( v9 )
    {
      RtlCopyVolatileMemory(a6 + 32, Src, 8uLL);
      RtlCopyVolatileMemory(a6 + 40, &v23, 8uLL);
      RtlCopyVolatileMemory(a6 + 48, &v22, 8uLL);
      RtlCopyVolatileMemory(a6 + 56, v24, 8uLL);
      if ( a4 == 2 || a4 == 5 )
      {
        *(_OWORD *)(a6 + 104) = v26;
        *(_OWORD *)(a6 + 120) = v27;
      }
    }
  }
  return v10;
}
