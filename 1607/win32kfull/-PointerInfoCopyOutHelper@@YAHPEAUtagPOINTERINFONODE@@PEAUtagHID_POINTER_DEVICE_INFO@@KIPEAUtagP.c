/*
 * XREFs of ?PointerInfoCopyOutHelper@@YAHPEAUtagPOINTERINFONODE@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C01F05C0
 * Callers:
 *     ?GetPointerData@@YAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x1C01EF4A0 (-GetPointerData@@YAH_KKIPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerDataWithHistory@@YAH_KKKPEAIPEAE@Z @ 0x1C01EF6D0 (-GetPointerDataWithHistory@@YAH_KKKPEAIPEAE@Z.c)
 *     ?GetPointerFrameData@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@KIPEAIPEAE@Z @ 0x1C01EF898 (-GetPointerFrameData@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@KIPEAIPEAE@Z.c)
 *     ?GetPointerHistoryFrameData@@YAHPEBUtagPOINTERINPUTFRAME@@KIIPEAE1@Z @ 0x1C01EFB60 (-GetPointerHistoryFrameData@@YAHPEBUtagPOINTERINPUTFRAME@@KIIPEAE1@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     GetDPITransformationMonitor @ 0x1C01DBDF0 (GetDPITransformationMonitor.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01DC320 (RemapHimetricPointsForMultiMonDigitizers.c)
 *     ?GetAdjustedHimetric@@YAHUtagPOINT@@00PEAU1@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01EF254 (-GetAdjustedHimetric@@YAHUtagPOINT@@00PEAU1@PEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?GetAdjustedPointerPixelLocation@@YAHUtagPOINT@@0PEAU1@@Z @ 0x1C01EF450 (-GetAdjustedPointerPixelLocation@@YAHUtagPOINT@@0PEAU1@@Z.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ebx
  struct tagPOINT v15; // rsi
  BOOL AdjustedPointerPixelLocation; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  struct tagPOINTER_INFO *v23; // rdx
  int v24; // ebx
  int v25; // ebx
  struct tagPOINTER_INFO *v26; // rax
  struct tagPOINTER_INFO *v27; // rax
  unsigned int v29; // [rsp+30h] [rbp-C8h]
  struct tagPOINT v30; // [rsp+38h] [rbp-C0h] BYREF
  int v31; // [rsp+40h] [rbp-B8h]
  __int64 v32; // [rsp+48h] [rbp-B0h] BYREF
  struct tagPOINT v33; // [rsp+50h] [rbp-A8h] BYREF
  struct tagPOINT v34; // [rsp+60h] [rbp-98h] BYREF
  struct tagPOINT v35; // [rsp+68h] [rbp-90h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-80h]
  __int128 v37; // [rsp+90h] [rbp-68h] BYREF
  __m128i v38; // [rsp+A0h] [rbp-58h] BYREF
  __m128i v39; // [rsp+B0h] [rbp-48h] BYREF

  v31 = a4;
  v30 = (struct tagPOINT)a2;
  v29 = 0;
  v38 = 0LL;
  v39 = 0LL;
  v7 = *(struct tagPOINT *)((char *)a1 + 36);
  v8 = *((_QWORD *)a1 + 14);
  v9 = (struct tagPOINT)*((_QWORD *)a1 + 13);
  v10 = (struct tagPOINT)*((_QWORD *)a1 + 11);
  if ( (unsigned int)GetAdjustedHimetric(v10, *((_QWORD *)a1 + 12), v7, &v34, a2) )
  {
    AdjustedPointerPixelLocation = GetAdjustedPointerPixelLocation(v10, v7, &v33);
    v15 = v30;
    v14 = AdjustedPointerPixelLocation
       && (unsigned int)GetAdjustedHimetric(v9, v8, v7, &v35, *(struct tagHID_POINTER_DEVICE_INFO **)&v30)
       && GetAdjustedPointerPixelLocation(v9, v7, &v30);
  }
  else
  {
    v14 = 0;
    v15 = v30;
  }
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13) + 1096) & 0x2000) != 0 )
    v14 = 0;
  if ( a3 == 2 || a3 == 5 )
  {
    v38 = *((__m128i *)a1 + 10);
    v39 = *((__m128i *)a1 + 11);
  }
  LOBYTE(v17) = 1;
  v20 = HMValidateHandleNoSecure(*((_QWORD *)a1 + 10), v17, v18, v19);
  v23 = (struct tagPOINTER_INFO *)v20;
  if ( v20 && (*(_DWORD *)(v20 + 352) & 0xF) != 2 )
  {
    if ( !v14 )
    {
      v33 = (struct tagPOINT)*((_QWORD *)a1 + 11);
      v34 = (struct tagPOINT)*((_QWORD *)a1 + 12);
      v30 = (struct tagPOINT)*((_QWORD *)a1 + 13);
      v35 = (struct tagPOINT)*((_QWORD *)a1 + 14);
    }
    v32 = 0LL;
    GetDPITransformationMonitor(*(_QWORD *)&v33, v20, &v32);
    v24 = PhysicalToLogicalDPIPoint(&v33, &v33, 0LL) | v14;
    v14 = PhysicalToLogicalDPIPoint(&v30, &v30, 0LL) | v24;
    if ( a3 == 2 || a3 == 5 )
    {
      v25 = PhysicalToLogicalDPIRect(&v38, &v38, 0LL, &v32) | v14;
      v14 = PhysicalToLogicalDPIRect(&v39, &v39, 0LL, &v32) | v25;
    }
    if ( *(_DWORD *)(gpDispInfo + 80LL) > 1u
      && *(_QWORD *)&v15
      && ((*(_DWORD *)(*(_QWORD *)&v15 + 252LL) & 0x20) != 0 || *(_DWORD *)(*(_QWORD *)&v15 + 24LL) == 6) )
    {
      v37 = *(_OWORD *)(*(_QWORD *)&v15 + 140LL);
      RemapHimetricPointsForMultiMonDigitizers((__int64)&v37, v32, &v34, &v35);
      v14 = 1;
    }
  }
  switch ( a3 )
  {
    case 1:
      if ( v31 != 96 )
        goto LABEL_42;
      v27 = a5;
      if ( (unsigned __int64)a5 >= W32UserProbeAddress )
        v27 = (struct tagPOINTER_INFO *)W32UserProbeAddress;
      *(_OWORD *)v27 = *(_OWORD *)((char *)a1 + 56);
      *((_OWORD *)v27 + 1) = *(_OWORD *)((char *)a1 + 72);
      *((_OWORD *)v27 + 2) = *(_OWORD *)((char *)a1 + 88);
      *((_OWORD *)v27 + 3) = *(_OWORD *)((char *)a1 + 104);
      *((_OWORD *)v27 + 4) = *(_OWORD *)((char *)a1 + 120);
      *((_OWORD *)v27 + 5) = *(_OWORD *)((char *)a1 + 136);
      break;
    case 2:
LABEL_33:
      if ( v31 != 144 )
        goto LABEL_42;
      v23 = a5;
      if ( (unsigned __int64)a5 >= W32UserProbeAddress )
        v23 = (struct tagPOINTER_INFO *)W32UserProbeAddress;
      *(_OWORD *)v23 = *(_OWORD *)((char *)a1 + 56);
      *((_OWORD *)v23 + 1) = *(_OWORD *)((char *)a1 + 72);
      *((_OWORD *)v23 + 2) = *(_OWORD *)((char *)a1 + 88);
      *((_OWORD *)v23 + 3) = *(_OWORD *)((char *)a1 + 104);
      *((_OWORD *)v23 + 4) = *(_OWORD *)((char *)a1 + 120);
      *((_OWORD *)v23 + 5) = *(_OWORD *)((char *)a1 + 136);
      *((_OWORD *)v23 + 6) = *(_OWORD *)((char *)a1 + 152);
      *((_OWORD *)v23 + 7) = *(_OWORD *)((char *)a1 + 168);
      *((_OWORD *)v23 + 8) = *(_OWORD *)((char *)a1 + 184);
      break;
    case 3:
      if ( v31 != 120 )
        goto LABEL_42;
      v26 = a5;
      if ( (unsigned __int64)a5 >= W32UserProbeAddress )
        v26 = (struct tagPOINTER_INFO *)W32UserProbeAddress;
      *(_OWORD *)v26 = *(_OWORD *)((char *)a1 + 56);
      *((_OWORD *)v26 + 1) = *(_OWORD *)((char *)a1 + 72);
      *((_OWORD *)v26 + 2) = *(_OWORD *)((char *)a1 + 88);
      *((_OWORD *)v26 + 3) = *(_OWORD *)((char *)a1 + 104);
      *((_OWORD *)v26 + 4) = *(_OWORD *)((char *)a1 + 120);
      *((_OWORD *)v26 + 5) = *(_OWORD *)((char *)a1 + 136);
      *((_OWORD *)v26 + 6) = *(_OWORD *)((char *)a1 + 152);
      *((_QWORD *)v26 + 14) = *((_QWORD *)a1 + 21);
      break;
    case 5:
      goto LABEL_33;
    default:
      v29 = 0;
      goto LABEL_42;
  }
  v29 = 1;
LABEL_42:
  if ( v29 )
  {
    if ( *((_DWORD *)a1 + 14) == 5 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (*(_BYTE *)(W32GetThreadWin32Thread((__int64)CurrentThread, (__int64)v23, v21, v22) + 1098) & 1) == 0 )
        *((_QWORD *)a5 + 2) = -2LL;
    }
    if ( v14 )
    {
      *((struct tagPOINT *)a5 + 4) = v33;
      *((struct tagPOINT *)a5 + 5) = v34;
      *((struct tagPOINT *)a5 + 6) = v30;
      *((struct tagPOINT *)a5 + 7) = v35;
      if ( a3 == 2 || a3 == 5 )
      {
        *(__m128i *)((char *)a5 + 104) = _mm_loadu_si128(&v38);
        *(__m128i *)((char *)a5 + 120) = _mm_loadu_si128(&v39);
      }
    }
  }
  return v29;
}
