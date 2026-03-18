/*
 * XREFs of ?PointerInfoCopyOutHelper@@YAHPEAUtagPOINTERINFONODE@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C01F93B8
 * Callers:
 *     ?GetPointerData@@YAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x1C01F82B4 (-GetPointerData@@YAH_KKIPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerDataWithHistory@@YAH_KKKPEAIPEAE@Z @ 0x1C01F84E4 (-GetPointerDataWithHistory@@YAH_KKKPEAIPEAE@Z.c)
 *     ?GetPointerFrameData@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@KIPEAIPEAE@Z @ 0x1C01F86AC (-GetPointerFrameData@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@KIPEAIPEAE@Z.c)
 *     ?GetPointerHistoryFrameData@@YAHPEBUtagPOINTERINPUTFRAME@@KIIPEAE1@Z @ 0x1C01F8974 (-GetPointerHistoryFrameData@@YAHPEBUtagPOINTERINPUTFRAME@@KIIPEAE1@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     GetDPITransformationMonitor @ 0x1C01E54D8 (GetDPITransformationMonitor.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01E5974 (RemapHimetricPointsForMultiMonDigitizers.c)
 *     ?GetAdjustedHimetric@@YAHUtagPOINT@@00PEAU1@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01F8068 (-GetAdjustedHimetric@@YAHUtagPOINT@@00PEAU1@PEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?GetAdjustedPointerPixelLocation@@YAHUtagPOINT@@0PEAU1@@Z @ 0x1C01F8264 (-GetAdjustedPointerPixelLocation@@YAHUtagPOINT@@0PEAU1@@Z.c)
 */

__int64 __fastcall PointerInfoCopyOutHelper(
        struct tagPOINTERINFONODE *a1,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        int a3,
        int a4,
        struct tagPOINTER_INFO *a5)
{
  struct tagPOINT v7; // rbx
  __int64 v8; // r14
  struct tagPOINT v9; // rdi
  struct tagPOINT v10; // rsi
  int v11; // ebx
  struct tagPOINT v12; // rsi
  BOOL AdjustedPointerPixelLocation; // eax
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // ebx
  int v18; // ebx
  struct tagPOINTER_INFO *v19; // rax
  struct tagPOINTER_INFO *v20; // rdx
  struct tagPOINTER_INFO *v21; // rax
  unsigned int v23; // [rsp+30h] [rbp-B8h]
  struct tagPOINT v24; // [rsp+38h] [rbp-B0h] BYREF
  int v25; // [rsp+40h] [rbp-A8h]
  __int64 v26; // [rsp+48h] [rbp-A0h] BYREF
  struct tagPOINT v27; // [rsp+50h] [rbp-98h] BYREF
  struct tagPOINT v28; // [rsp+58h] [rbp-90h] BYREF
  struct tagPOINT v29; // [rsp+68h] [rbp-80h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-70h]
  __int128 v31; // [rsp+80h] [rbp-68h] BYREF
  __m128i v32; // [rsp+98h] [rbp-50h] BYREF
  __m128i v33; // [rsp+A8h] [rbp-40h] BYREF

  v25 = a4;
  v24 = (struct tagPOINT)a2;
  v23 = 0;
  v32 = 0LL;
  v33 = 0LL;
  v7 = *(struct tagPOINT *)((char *)a1 + 36);
  v8 = *((_QWORD *)a1 + 14);
  v9 = (struct tagPOINT)*((_QWORD *)a1 + 13);
  v10 = (struct tagPOINT)*((_QWORD *)a1 + 11);
  if ( (unsigned int)GetAdjustedHimetric(v10, *((_QWORD *)a1 + 12), v7, &v28, a2) )
  {
    AdjustedPointerPixelLocation = GetAdjustedPointerPixelLocation(v10, v7, &v27);
    v12 = v24;
    v11 = AdjustedPointerPixelLocation
       && (unsigned int)GetAdjustedHimetric(v9, v8, v7, &v29, *(struct tagHID_POINTER_DEVICE_INFO **)&v24)
       && GetAdjustedPointerPixelLocation(v9, v7, &v24);
  }
  else
  {
    v11 = 0;
    v12 = v24;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v15 = *(_DWORD *)(ThreadWin32Thread + 1072) & 0x2000;
  if ( (*(_DWORD *)(ThreadWin32Thread + 1072) & 0x2000) != 0 )
    v11 = 0;
  if ( a3 == 2 || a3 == 5 )
  {
    v32 = *((__m128i *)a1 + 10);
    v33 = *((__m128i *)a1 + 11);
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x4000) == 0 )
  {
    if ( !v11 )
    {
      v27 = (struct tagPOINT)*((_QWORD *)a1 + 11);
      v28 = (struct tagPOINT)*((_QWORD *)a1 + 12);
      v24 = (struct tagPOINT)*((_QWORD *)a1 + 13);
      v29 = (struct tagPOINT)*((_QWORD *)a1 + 14);
    }
    v16 = HMValidateHandleNoSecure(*((_QWORD *)a1 + 10), 1);
    v26 = 0LL;
    if ( v16 )
      GetDPITransformationMonitor(*(_QWORD *)&v27, v16, &v26);
    v17 = PhysicalToLogicalDPIPoint(&v27, &v27, 0LL, &v26) | v11;
    v11 = PhysicalToLogicalDPIPoint(&v24, &v24, 0LL, &v26) | v17;
    if ( a3 == 2 || a3 == 5 )
    {
      v18 = PhysicalToLogicalDPIRect(&v32, &v32, 0LL, &v26) | v11;
      v11 = PhysicalToLogicalDPIRect(&v33, &v33, 0LL, &v26) | v18;
    }
    if ( *(_DWORD *)(gpDispInfo + 80LL) > 1u
      && *(_QWORD *)&v12
      && ((*(_DWORD *)(*(_QWORD *)&v12 + 252LL) & 0x20) != 0 || *(_DWORD *)(*(_QWORD *)&v12 + 24LL) == 7) )
    {
      v31 = *(_OWORD *)(*(_QWORD *)&v12 + 140LL);
      RemapHimetricPointsForMultiMonDigitizers((__int64)&v31, v26, &v28, &v29);
      v11 = 1;
    }
  }
  switch ( a3 )
  {
    case 1:
      if ( v25 != 96 )
        goto LABEL_43;
      v21 = a5;
      if ( (unsigned __int64)a5 >= W32UserProbeAddress )
        v21 = (struct tagPOINTER_INFO *)W32UserProbeAddress;
      *(_OWORD *)v21 = *(_OWORD *)((char *)a1 + 56);
      *((_OWORD *)v21 + 1) = *(_OWORD *)((char *)a1 + 72);
      *((_OWORD *)v21 + 2) = *(_OWORD *)((char *)a1 + 88);
      *((_OWORD *)v21 + 3) = *(_OWORD *)((char *)a1 + 104);
      *((_OWORD *)v21 + 4) = *(_OWORD *)((char *)a1 + 120);
      *((_OWORD *)v21 + 5) = *(_OWORD *)((char *)a1 + 136);
      break;
    case 2:
LABEL_34:
      if ( v25 != 144 )
        goto LABEL_43;
      v20 = a5;
      if ( (unsigned __int64)a5 >= W32UserProbeAddress )
        v20 = (struct tagPOINTER_INFO *)W32UserProbeAddress;
      *(_OWORD *)v20 = *(_OWORD *)((char *)a1 + 56);
      *((_OWORD *)v20 + 1) = *(_OWORD *)((char *)a1 + 72);
      *((_OWORD *)v20 + 2) = *(_OWORD *)((char *)a1 + 88);
      *((_OWORD *)v20 + 3) = *(_OWORD *)((char *)a1 + 104);
      *((_OWORD *)v20 + 4) = *(_OWORD *)((char *)a1 + 120);
      *((_OWORD *)v20 + 5) = *(_OWORD *)((char *)a1 + 136);
      *((_OWORD *)v20 + 6) = *(_OWORD *)((char *)a1 + 152);
      *((_OWORD *)v20 + 7) = *(_OWORD *)((char *)a1 + 168);
      *((_OWORD *)v20 + 8) = *(_OWORD *)((char *)a1 + 184);
      break;
    case 3:
      if ( v25 != 120 )
        goto LABEL_43;
      v19 = a5;
      if ( (unsigned __int64)a5 >= W32UserProbeAddress )
        v19 = (struct tagPOINTER_INFO *)W32UserProbeAddress;
      *(_OWORD *)v19 = *(_OWORD *)((char *)a1 + 56);
      *((_OWORD *)v19 + 1) = *(_OWORD *)((char *)a1 + 72);
      *((_OWORD *)v19 + 2) = *(_OWORD *)((char *)a1 + 88);
      *((_OWORD *)v19 + 3) = *(_OWORD *)((char *)a1 + 104);
      *((_OWORD *)v19 + 4) = *(_OWORD *)((char *)a1 + 120);
      *((_OWORD *)v19 + 5) = *(_OWORD *)((char *)a1 + 136);
      *((_OWORD *)v19 + 6) = *(_OWORD *)((char *)a1 + 152);
      *((_QWORD *)v19 + 14) = *((_QWORD *)a1 + 21);
      break;
    case 5:
      goto LABEL_34;
    default:
      v23 = 0;
      goto LABEL_43;
  }
  v23 = 1;
LABEL_43:
  if ( v23 )
  {
    if ( *((_DWORD *)a1 + 14) == 5 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (*(_BYTE *)(W32GetThreadWin32Thread((__int64)CurrentThread) + 1074) & 1) == 0 )
        *((_QWORD *)a5 + 2) = -2LL;
    }
    if ( v11 )
    {
      *((struct tagPOINT *)a5 + 4) = v27;
      *((struct tagPOINT *)a5 + 5) = v28;
      *((struct tagPOINT *)a5 + 6) = v24;
      *((struct tagPOINT *)a5 + 7) = v29;
      if ( a3 == 2 || a3 == 5 )
      {
        *(__m128i *)((char *)a5 + 104) = _mm_loadu_si128(&v32);
        *(__m128i *)((char *)a5 + 120) = _mm_loadu_si128(&v33);
      }
    }
  }
  return v23;
}
