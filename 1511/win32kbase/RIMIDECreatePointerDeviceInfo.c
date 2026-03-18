/*
 * XREFs of RIMIDECreatePointerDeviceInfo @ 0x1C00C60A4
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x1C00C5D50 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     RIMInitFakeMonitor @ 0x1C0006060 (RIMInitFakeMonitor.c)
 *     RIMGetPropertyCount @ 0x1C0007AD8 (RIMGetPropertyCount.c)
 *     RIMRetrieveLinkCollection @ 0x1C00087E4 (RIMRetrieveLinkCollection.c)
 *     RIMIsParallelDevice @ 0x1C0008A30 (RIMIsParallelDevice.c)
 *     ApiSetUpdatePointerDeviceSystemMetrics @ 0x1C0009A58 (ApiSetUpdatePointerDeviceSystemMetrics.c)
 *     RIMInitializePointerDeviceFrameContactIdMgr @ 0x1C0009FBC (RIMInitializePointerDeviceFrameContactIdMgr.c)
 *     DbgPrintRIM @ 0x1C000FB48 (DbgPrintRIM.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C004F690 (Win32AllocPoolZInit.c)
 *     RIMPopulatePointerDevice @ 0x1C00C3E6C (RIMPopulatePointerDevice.c)
 *     RIMIsFrameReportingPointerDevice @ 0x1C00C4F70 (RIMIsFrameReportingPointerDevice.c)
 *     ?RIMIDESetPointerDeviceTypeAndRank@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHIDDESC@@@Z @ 0x1C00C5A34 (-RIMIDESetPointerDeviceTypeAndRank@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHIDDESC@@@Z.c)
 *     RIMIDECheckScanTimeSupport @ 0x1C00C5CB8 (RIMIDECheckScanTimeSupport.c)
 *     RIMIDESetPTPPhysicalSize @ 0x1C00C7944 (RIMIDESetPTPPhysicalSize.c)
 *     RIMComputeVirtualHimetricSize @ 0x1C00CF45C (RIMComputeVirtualHimetricSize.c)
 *     RIMGetPhysicalSizeFromMonitor @ 0x1C00CF58C (RIMGetPhysicalSizeFromMonitor.c)
 */

__int64 __fastcall RIMIDECreatePointerDeviceInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  __int128 v6; // xmm1
  __int128 v9; // xmm0
  int v10; // esi
  __int128 v11; // xmm1
  char *v12; // rax
  __int64 v13; // rbx
  _QWORD *v14; // r14
  unsigned int v15; // edi
  __int64 v16; // rcx
  __int64 v17; // rax
  void *v18; // rax
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // eax
  void *v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // xmm0_8
  void *v26; // rax
  __int64 v27; // r14
  _QWORD *v29; // rcx
  _OWORD v30[3]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v31; // [rsp+60h] [rbp-10h]
  unsigned int v34; // [rsp+C8h] [rbp+58h] BYREF

  v5 = a2;
  v6 = *(_OWORD *)(a4 + 56);
  v30[0] = *(_OWORD *)(a4 + 40);
  v9 = *(_OWORD *)(a4 + 72);
  v10 = 0;
  v30[1] = v6;
  v11 = *(_OWORD *)(a4 + 88);
  v30[2] = v9;
  v31 = v11;
  v12 = (char *)Win32AllocPoolZInit(0x6F8uLL);
  v13 = (__int64)v12;
  if ( !v12 )
    return 0;
  v14 = v12 + 1520;
  v15 = 1;
  *(_DWORD *)(v5 + 308) = 1;
  *((_DWORD *)v12 + 63) |= 0x20u;
  *((_QWORD *)v12 + 191) = v12 + 1520;
  *((_QWORD *)v12 + 190) = v12 + 1520;
  RIMIDESetPointerDeviceTypeAndRank((struct tagHID_POINTER_DEVICE_INFO *)v12, (struct tagHIDDESC *)a4);
  if ( (*(_DWORD *)(a3 + 12) & 2) != 0 )
  {
    *(_DWORD *)(v16 + 252) |= 0x10000u;
    RIMIDECheckScanTimeSupport(v16, *(struct _HIDP_PREPARSED_DATA **)(a4 + 16));
  }
  else
  {
    *(_DWORD *)(v13 + 252) |= 0x200u;
    *(_DWORD *)(v13 + 1488) = -1;
  }
  *(_DWORD *)(v13 + 880) = 500;
  *(_QWORD *)(v13 + 888) = 500 * gliQpcFreq.QuadPart / 1000;
  v17 = *(_QWORD *)(a3 + 80);
  if ( v17 )
  {
    v19 = (*(_DWORD *)(v13 + 252) & 0x10000) == 0;
    *(_QWORD *)(v13 + 280) = v17;
    if ( v19 )
    {
      RIMGetPhysicalSizeFromMonitor(v13);
      *(_OWORD *)(v13 + 140) = *(_OWORD *)(v13 + 156);
    }
    *(_DWORD *)(v13 + 252) |= 0x8000u;
  }
  else
  {
    v18 = Win32AllocPoolZInit(0x248uLL);
    *(_QWORD *)(v13 + 280) = v18;
    if ( !v18 )
      goto LABEL_35;
    RIMInitFakeMonitor(v13);
  }
  *(_DWORD *)(v13 + 720) = *(_DWORD *)(a3 + 88);
  *(_OWORD *)(v13 + 124) = *(_OWORD *)(*(_QWORD *)(v13 + 280) + 28LL);
  *(_QWORD *)(v13 + 1552) = *(_QWORD *)(a3 + 116);
  if ( *(_QWORD *)(v5 + 208) )
  {
    v20 = Win32AllocPool();
    *(_QWORD *)(v13 + 296) = v20;
    if ( v20 )
    {
      *(_WORD *)(v13 + 290) = *(_WORD *)(v5 + 200);
      RtlCopyUnicodeString((PUNICODE_STRING)(v13 + 288), (PCUNICODE_STRING)(v5 + 200));
    }
    else
    {
      v10 = 1;
    }
    v5 = a2;
  }
  if ( !(unsigned int)RIMIsFrameReportingPointerDevice(v13) )
  {
    if ( !(unsigned int)RIMGetPropertyCount(v21, 0, v31, *(_QWORD *)(a4 + 16)) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        2u,
        0xAu,
        (__int64)&WPP_46f9b70f72899a49db72f32dcca4e219_Traceguids);
      v10 = 1;
    }
    if ( v10 )
      goto LABEL_35;
    goto LABEL_31;
  }
  *(_DWORD *)(v13 + 252) &= ~0x10u;
  v22 = *(_DWORD *)(a3 + 128);
  v34 = 0;
  *(_DWORD *)(v13 + 896) = v22;
  v23 = Win32AllocPoolZInit(0x40uLL);
  *(_QWORD *)(v13 + 712) = v23;
  if ( !v23 )
    v10 = 1;
  if ( v10 )
    goto LABEL_35;
  if ( !(unsigned int)RIMIsParallelDevice(v13, *(_QWORD *)(a4 + 16), &v34) )
  {
    DbgPrintRIM("Serial Device found!");
    if ( (*(_DWORD *)(v13 + 252) & 0x10000) == 0 )
    {
LABEL_32:
      v24 = *(_QWORD *)(*(_QWORD *)(v13 + 280) + 28LL);
      v25 = _mm_srli_si128(*(__m128i *)(*(_QWORD *)(v13 + 280) + 28LL), 8).m128i_u64[0];
      *(_DWORD *)(v13 + 180) = v25 - v24;
      *(_DWORD *)(v13 + 184) = HIDWORD(v25) - HIDWORD(v24);
      goto LABEL_33;
    }
LABEL_35:
    v27 = *(_QWORD *)(v13 + 712);
    if ( v27 )
    {
      if ( *(_QWORD *)(v27 + 48) )
        Win32FreePool();
      if ( *(_QWORD *)(v27 + 24) )
        Win32FreePool();
    }
    if ( *(_QWORD *)(v13 + 696) )
      Win32FreePool();
    if ( *(_QWORD *)(v13 + 296) )
      Win32FreePool();
    Win32FreePool();
    return 0;
  }
  if ( !(unsigned int)RIMRetrieveLinkCollection(v13, *(_QWORD *)(a4 + 16), v34) )
    goto LABEL_35;
  if ( !(unsigned int)RIMInitializePointerDeviceFrameContactIdMgr(v13, v30) )
    goto LABEL_35;
  if ( LOWORD(v30[0]) == 5 )
  {
    *(_DWORD *)(v13 + 24) = 8;
    if ( (int)RIMIDESetPTPPhysicalSize(v13, *(_QWORD *)(a4 + 16)) < 0 )
      goto LABEL_35;
  }
LABEL_31:
  if ( (*(_DWORD *)(v13 + 252) & 0x10000) == 0 )
    goto LABEL_32;
LABEL_33:
  v26 = Win32AllocPoolZInit(2400LL * *(unsigned int *)(v13 + 720));
  *(_QWORD *)(v13 + 696) = v26;
  if ( !v26
    || !(unsigned int)RIMPopulatePointerDevice(a1, v13, *(struct _HIDP_PREPARSED_DATA **)(a5 + 32), (__int16 *)v30) )
  {
    goto LABEL_35;
  }
  if ( !*(_QWORD *)(a3 + 80) )
    RIMComputeVirtualHimetricSize(v13, 1LL);
  *(_QWORD *)(v13 + 736) = -1LL;
  ApiSetUpdatePointerDeviceSystemMetrics();
  *(_QWORD *)(v13 + 16) = v5;
  *(_QWORD *)(v5 + 416) = v13;
  v29 = *(_QWORD **)(a1 + 560);
  *v14 = a1 + 552;
  v14[1] = v29;
  if ( *v29 != a1 + 552 )
    __fastfail(3u);
  *v29 = v14;
  *(_QWORD *)(a1 + 560) = v14;
  return v15;
}
