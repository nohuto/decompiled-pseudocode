/*
 * XREFs of RIMIDECreatePointerDeviceInfo @ 0x1C00C51A8
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x1C00C4E54 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     RIMInitFakeMonitor @ 0x1C001936C (RIMInitFakeMonitor.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     Win32AllocPoolZInit @ 0x1C004CEA0 (Win32AllocPoolZInit.c)
 *     RIMInitializePointerDeviceFrameContactIdMgr @ 0x1C0073030 (RIMInitializePointerDeviceFrameContactIdMgr.c)
 *     ApiSetUpdatePointerDeviceSystemMetrics @ 0x1C007375C (ApiSetUpdatePointerDeviceSystemMetrics.c)
 *     RIMGetPropertyCount @ 0x1C0073DEC (RIMGetPropertyCount.c)
 *     RIMRetrieveLinkCollection @ 0x1C0074AFC (RIMRetrieveLinkCollection.c)
 *     RIMIsParallelDevice @ 0x1C0074D48 (RIMIsParallelDevice.c)
 *     DbgPrintRIM @ 0x1C0077BB4 (DbgPrintRIM.c)
 *     RIMPopulatePointerDevice @ 0x1C00C304C (RIMPopulatePointerDevice.c)
 *     RIMIsFrameReportingPointerDevice @ 0x1C00C40DC (RIMIsFrameReportingPointerDevice.c)
 *     ?RIMIDESetPointerDeviceTypeAndRank@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHIDDESC@@@Z @ 0x1C00C4B38 (-RIMIDESetPointerDeviceTypeAndRank@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHIDDESC@@@Z.c)
 *     RIMIDECheckScanTimeSupport @ 0x1C00C4DBC (RIMIDECheckScanTimeSupport.c)
 *     RIMIDESetPTPPhysicalSize @ 0x1C00C6A70 (RIMIDESetPTPPhysicalSize.c)
 *     RIMComputeVirtualHimetricSize @ 0x1C00CE0EC (RIMComputeVirtualHimetricSize.c)
 *     RIMGetPhysicalSizeFromMonitor @ 0x1C00CE218 (RIMGetPhysicalSizeFromMonitor.c)
 */

__int64 __fastcall RIMIDECreatePointerDeviceInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r15
  __int128 v7; // xmm1
  __int128 v9; // xmm0
  int v11; // edi
  __int128 v12; // xmm1
  struct tagHID_POINTER_DEVICE_INFO *v13; // rax
  __int64 v14; // rbx
  unsigned int v15; // esi
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rax
  void *v19; // rax
  bool v20; // zf
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  void *v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // xmm0_8
  void *v27; // rax
  __int64 v28; // r14
  _QWORD *v30; // rbx
  _QWORD *v31; // rcx
  _OWORD v32[3]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v33; // [rsp+60h] [rbp-10h]
  unsigned int v35; // [rsp+C8h] [rbp+58h] BYREF

  v6 = a1;
  v7 = *(_OWORD *)(a4 + 56);
  v32[0] = *(_OWORD *)(a4 + 40);
  v9 = *(_OWORD *)(a4 + 72);
  v11 = 0;
  v32[1] = v7;
  v12 = *(_OWORD *)(a4 + 88);
  v32[2] = v9;
  v33 = v12;
  v13 = (struct tagHID_POINTER_DEVICE_INFO *)Win32AllocPoolZInit(0x6E8uLL);
  v14 = (__int64)v13;
  if ( !v13 )
    return 0;
  v15 = 1;
  *(_DWORD *)(a2 + 316) = 1;
  RIMIDESetPointerDeviceTypeAndRank(v13, (struct tagHIDDESC *)a4);
  v17 = *(_DWORD *)(v16 + 236) | 8;
  *(_DWORD *)(v16 + 236) = v17;
  if ( (*(_DWORD *)(a3 + 12) & 2) != 0 )
  {
    *(_DWORD *)(v14 + 236) = v17 | 0x4000;
    RIMIDECheckScanTimeSupport(v14, *(struct _HIDP_PREPARSED_DATA **)(a4 + 16));
  }
  else
  {
    *(_DWORD *)(v14 + 1472) = -1;
    *(_DWORD *)(v14 + 236) = v17 | 0x80;
  }
  *(_DWORD *)(v14 + 864) = 500;
  *(_QWORD *)(v14 + 872) = 500 * gliQpcFreq.QuadPart / 1000;
  v18 = *(_QWORD *)(a3 + 80);
  if ( v18 )
  {
    v20 = (*(_DWORD *)(v14 + 236) & 0x4000) == 0;
    *(_QWORD *)(v14 + 264) = v18;
    if ( v20 )
    {
      RIMGetPhysicalSizeFromMonitor(v14);
      *(_OWORD *)(v14 + 140) = *(_OWORD *)(v14 + 156);
    }
    *(_DWORD *)(v14 + 236) |= 0x2000u;
  }
  else
  {
    v19 = Win32AllocPoolZInit(0x248uLL);
    *(_QWORD *)(v14 + 264) = v19;
    if ( !v19 )
      goto LABEL_35;
    RIMInitFakeMonitor(v14);
  }
  *(_DWORD *)(v14 + 704) = *(_DWORD *)(a3 + 88);
  *(_OWORD *)(v14 + 124) = *(_OWORD *)(*(_QWORD *)(v14 + 264) + 28LL);
  *(_QWORD *)(v14 + 1536) = *(_QWORD *)(a3 + 116);
  if ( *(_QWORD *)(a2 + 216) )
  {
    v21 = Win32AllocPool();
    *(_QWORD *)(v14 + 280) = v21;
    if ( v21 )
    {
      *(_WORD *)(v14 + 274) = *(_WORD *)(a2 + 208);
      RtlCopyUnicodeString((PUNICODE_STRING)(v14 + 272), (PCUNICODE_STRING)(a2 + 208));
    }
    else
    {
      v11 = 1;
    }
    v6 = a1;
  }
  if ( !(unsigned int)RIMIsFrameReportingPointerDevice(v14) )
  {
    if ( !(unsigned int)RIMGetPropertyCount(v22, 0, v33, *(_QWORD *)(a4 + 16)) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        2u,
        0xAu,
        (__int64)&WPP_d543ac9e81a46d1db8f3f8d27585c6dd_Traceguids);
      v11 = 1;
    }
    if ( v11 )
      goto LABEL_35;
    goto LABEL_31;
  }
  *(_DWORD *)(v14 + 236) &= ~4u;
  v23 = *(_DWORD *)(a3 + 128);
  v35 = 0;
  *(_DWORD *)(v14 + 880) = v23;
  v24 = Win32AllocPoolZInit(0x40uLL);
  *(_QWORD *)(v14 + 696) = v24;
  if ( !v24 )
    v11 = 1;
  if ( v11 )
    goto LABEL_35;
  if ( !(unsigned int)RIMIsParallelDevice(v14, *(struct _HIDP_PREPARSED_DATA **)(a4 + 16), &v35) )
  {
    DbgPrintRIM("Serial Device found!");
    if ( (*(_DWORD *)(v14 + 236) & 0x4000) == 0 )
    {
LABEL_32:
      v25 = *(_QWORD *)(*(_QWORD *)(v14 + 264) + 28LL);
      v26 = _mm_srli_si128(*(__m128i *)(*(_QWORD *)(v14 + 264) + 28LL), 8).m128i_u64[0];
      *(_DWORD *)(v14 + 180) = v26 - v25;
      *(_DWORD *)(v14 + 184) = HIDWORD(v26) - HIDWORD(v25);
      goto LABEL_33;
    }
LABEL_35:
    v28 = *(_QWORD *)(v14 + 696);
    if ( v28 )
    {
      if ( *(_QWORD *)(v28 + 48) )
        Win32FreePool();
      if ( *(_QWORD *)(v28 + 24) )
        Win32FreePool();
    }
    if ( *(_QWORD *)(v14 + 680) )
      Win32FreePool();
    if ( *(_QWORD *)(v14 + 280) )
      Win32FreePool();
    Win32FreePool();
    return 0;
  }
  if ( !(unsigned int)RIMRetrieveLinkCollection(v14, *(struct _HIDP_PREPARSED_DATA **)(a4 + 16), v35) )
    goto LABEL_35;
  if ( !(unsigned int)RIMInitializePointerDeviceFrameContactIdMgr(v14, v32) )
    goto LABEL_35;
  if ( LOWORD(v32[0]) == 5 )
  {
    *(_DWORD *)(v14 + 24) = 8;
    if ( (int)RIMIDESetPTPPhysicalSize(v14, *(_QWORD *)(a4 + 16)) < 0 )
      goto LABEL_35;
  }
LABEL_31:
  if ( (*(_DWORD *)(v14 + 236) & 0x4000) == 0 )
    goto LABEL_32;
LABEL_33:
  v27 = Win32AllocPoolZInit(2400LL * *(unsigned int *)(v14 + 704));
  *(_QWORD *)(v14 + 680) = v27;
  if ( !v27
    || !(unsigned int)RIMPopulatePointerDevice(v6, v14, *(struct _HIDP_PREPARSED_DATA **)(a5 + 32), (__int16 *)v32) )
  {
    goto LABEL_35;
  }
  if ( !*(_QWORD *)(a3 + 80) )
    RIMComputeVirtualHimetricSize(v14);
  *(_QWORD *)(v14 + 720) = -1LL;
  ApiSetUpdatePointerDeviceSystemMetrics();
  *(_QWORD *)(v14 + 16) = a2;
  *(_QWORD *)(a2 + 416) = v14;
  v30 = (_QWORD *)(v14 + 1504);
  v31 = *(_QWORD **)(v6 + 528);
  *v30 = v6 + 520;
  v30[1] = v31;
  if ( *v31 != v6 + 520 )
    __fastfail(3u);
  *v31 = v30;
  *(_QWORD *)(v6 + 528) = v30;
  return v15;
}
