/*
 * XREFs of RIMIDECreatePointerDeviceInfo @ 0x1C00D5734
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x1C00D53A8 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     RIMInitializeDeadzone @ 0x1C0005588 (RIMInitializeDeadzone.c)
 *     RIMInitFakeMonitor @ 0x1C0005C08 (RIMInitFakeMonitor.c)
 *     RIMComputeVirtualHimetricSize @ 0x1C0005C6C (RIMComputeVirtualHimetricSize.c)
 *     RIMCmFreePointerDeviceContacts @ 0x1C0006A40 (RIMCmFreePointerDeviceContacts.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C0006D58 (RIMCmAllocPointerDeviceContacts.c)
 *     ApiSetUpdatePointerDeviceSystemMetrics @ 0x1C000759C (ApiSetUpdatePointerDeviceSystemMetrics.c)
 *     RIMGetPropertyCount @ 0x1C0008AB8 (RIMGetPropertyCount.c)
 *     RIMRetrieveLinkCollection @ 0x1C00097F0 (RIMRetrieveLinkCollection.c)
 *     RIMIsParallelDevice @ 0x1C0009A3C (RIMIsParallelDevice.c)
 *     DbgPrintRIM @ 0x1C000BD38 (DbgPrintRIM.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0037AC0 (Win32AllocPoolZInit.c)
 *     RIMPopulatePointerDevice @ 0x1C00D278C (RIMPopulatePointerDevice.c)
 *     RIMGetPhysicalSizeFromMonitor @ 0x1C00D39B0 (RIMGetPhysicalSizeFromMonitor.c)
 *     rimIDECheckConfidenceSupport @ 0x1C00D4EFC (rimIDECheckConfidenceSupport.c)
 *     RIMIDECheckScanTimeSupport @ 0x1C00D51AC (RIMIDECheckScanTimeSupport.c)
 *     RIMIDESetPTPPhysicalSize @ 0x1C00D7068 (RIMIDESetPTPPhysicalSize.c)
 */

__int64 __fastcall RIMIDECreatePointerDeviceInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r15
  __int128 v7; // xmm1
  __int128 v9; // xmm0
  int v11; // esi
  __int128 v12; // xmm1
  char *v13; // rax
  __int64 v14; // rbx
  _QWORD *v15; // r14
  unsigned int v16; // edi
  __int64 v17; // rax
  void *v18; // rax
  bool v19; // zf
  __int64 v20; // rax
  int v21; // ecx
  void *v22; // rax
  struct _HIDP_PREPARSED_DATA *v23; // rdx
  int v24; // edx
  int v25; // eax
  __int64 v26; // rcx
  unsigned __int64 v27; // xmm0_8
  __int64 v28; // rax
  _QWORD *v30; // rdx
  _OWORD v31[3]; // [rsp+30h] [rbp-78h] BYREF
  __int128 v32; // [rsp+60h] [rbp-48h]
  unsigned int v34; // [rsp+C8h] [rbp+20h] BYREF

  v6 = a1;
  v7 = *(_OWORD *)(a4 + 56);
  v31[0] = *(_OWORD *)(a4 + 40);
  v9 = *(_OWORD *)(a4 + 72);
  v11 = 0;
  v31[1] = v7;
  v12 = *(_OWORD *)(a4 + 88);
  v31[2] = v9;
  v32 = v12;
  v13 = (char *)Win32AllocPoolZInit(0x728uLL);
  v14 = (__int64)v13;
  if ( !v13 )
    return 0;
  v15 = v13 + 1480;
  v16 = 1;
  *(_DWORD *)(a2 + 316) = 1;
  *((_DWORD *)v13 + 63) |= 0x20u;
  *((_QWORD *)v13 + 186) = v13 + 1480;
  *((_QWORD *)v13 + 185) = v13 + 1480;
  switch ( *(_WORD *)(a4 + 40) )
  {
    case 1:
      *((_DWORD *)v13 + 6) = 6;
      break;
    case 2:
      *((_DWORD *)v13 + 6) = 5;
      break;
    case 4:
      *((_DWORD *)v13 + 6) = 3;
      break;
    case 5:
      *((_DWORD *)v13 + 6) = 7;
      break;
  }
  rimIDECheckConfidenceSupport((__int64)v13, *(struct _HIDP_PREPARSED_DATA **)(a4 + 16));
  if ( (*(_DWORD *)(a3 + 12) & 2) != 0 )
  {
    *(_DWORD *)(v14 + 252) |= 0x10000u;
    RIMIDECheckScanTimeSupport(v14, *(struct _HIDP_PREPARSED_DATA **)(a4 + 16));
  }
  else
  {
    *(_DWORD *)(v14 + 252) |= 0x200u;
    *(_DWORD *)(v14 + 1456) = -1;
  }
  *(_DWORD *)(v14 + 848) = 500;
  *(_QWORD *)(v14 + 856) = 500 * gliQpcFreq.QuadPart / 1000;
  v17 = *(_QWORD *)(a3 + 80);
  if ( v17 )
  {
    v19 = (*(_DWORD *)(v14 + 252) & 0x10000) == 0;
    *(_QWORD *)(v14 + 280) = v17;
    if ( v19 )
    {
      RIMGetPhysicalSizeFromMonitor(v14);
      *(_OWORD *)(v14 + 140) = *(_OWORD *)(v14 + 156);
    }
    *(_DWORD *)(v14 + 252) |= 0x8000u;
  }
  else
  {
    v18 = Win32AllocPoolZInit(0x248uLL);
    *(_QWORD *)(v14 + 280) = v18;
    if ( !v18 )
      goto LABEL_47;
    RIMInitFakeMonitor(v14);
  }
  *(_DWORD *)(v14 + 688) = *(_DWORD *)(a3 + 88);
  *(_OWORD *)(v14 + 124) = *(_OWORD *)(*(_QWORD *)(v14 + 280) + 28LL);
  *(_QWORD *)(v14 + 1512) = *(_QWORD *)(a3 + 116);
  if ( *(_QWORD *)(a2 + 216) )
  {
    v20 = Win32AllocPool();
    *(_QWORD *)(v14 + 296) = v20;
    if ( v20 )
    {
      *(_WORD *)(v14 + 290) = *(_WORD *)(a2 + 208);
      RtlCopyUnicodeString((PUNICODE_STRING)(v14 + 288), (PCUNICODE_STRING)(a2 + 208));
    }
    else
    {
      v11 = 1;
    }
    v6 = a1;
  }
  v21 = *(_DWORD *)(v14 + 24);
  if ( ((v21 - 3) & 0xFFFFFFFA) != 0 || v21 == 8 )
  {
    if ( !(unsigned int)RIMGetPropertyCount(v14, 0, v32, *(_QWORD *)(a4 + 16)) )
    {
      LOBYTE(v24) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v24,
        2,
        10,
        (__int64)&WPP_7fdc14de89e334702abda85b7a26ab23_Traceguids);
      v11 = 1;
    }
    if ( v11 )
      goto LABEL_47;
    goto LABEL_39;
  }
  *(_DWORD *)(v14 + 864) = *(_DWORD *)(a3 + 128);
  v22 = Win32AllocPoolZInit(0x28uLL);
  *(_QWORD *)(v14 + 680) = v22;
  if ( !v22 )
    v11 = 1;
  if ( v11 )
    goto LABEL_47;
  v23 = *(struct _HIDP_PREPARSED_DATA **)(a4 + 16);
  v34 = 0;
  if ( !(unsigned int)RIMIsParallelDevice(v14, v23, &v34) )
  {
    DbgPrintRIM("Serial Device found!");
    if ( (*(_DWORD *)(v14 + 252) & 0x10000) == 0 )
      goto LABEL_39;
LABEL_47:
    v28 = *(_QWORD *)(v14 + 680);
    if ( v28 && *(_QWORD *)(v28 + 24) )
      Win32FreePool();
    RIMCmFreePointerDeviceContacts(v14);
    if ( *(_QWORD *)(v14 + 296) )
      Win32FreePool();
    Win32FreePool();
    return 0;
  }
  if ( !(unsigned int)RIMRetrieveLinkCollection(v14, *(struct _HIDP_PREPARSED_DATA **)(a4 + 16), v34) )
    goto LABEL_47;
  if ( LOWORD(v31[0]) == 5 )
  {
    ++*(_DWORD *)(v14 + 688);
    *(_DWORD *)(v14 + 24) = 7;
    if ( (int)RIMIDESetPTPPhysicalSize(v14, *(_QWORD *)(a4 + 16)) < 0 )
      goto LABEL_47;
  }
LABEL_39:
  v25 = *(_DWORD *)(v14 + 252);
  if ( (v25 & 8) == 0 )
    *(_DWORD *)(v14 + 252) = v25 & 0xFFFFFDFF;
  if ( (*(_DWORD *)(v14 + 252) & 0x10000) == 0 )
  {
    v26 = *(_QWORD *)(*(_QWORD *)(v14 + 280) + 28LL);
    v27 = _mm_srli_si128(*(__m128i *)(*(_QWORD *)(v14 + 280) + 28LL), 8).m128i_u64[0];
    *(_DWORD *)(v14 + 180) = v27 - v26;
    *(_DWORD *)(v14 + 184) = HIDWORD(v27) - HIDWORD(v26);
  }
  if ( (int)RIMCmAllocPointerDeviceContacts(v14) < 0
    || !(unsigned int)RIMPopulatePointerDevice(v6, v14, *(struct _HIDP_PREPARSED_DATA **)(a5 + 32), (__int16 *)v31)
    || (unsigned int)(*(_DWORD *)(v14 + 24) - 5) <= 1 && (unsigned int)RIMInitializeDeadzone() )
  {
    goto LABEL_47;
  }
  if ( !*(_QWORD *)(a3 + 80) )
    RIMComputeVirtualHimetricSize(v14, 1);
  *(_QWORD *)(v14 + 704) = -1LL;
  ApiSetUpdatePointerDeviceSystemMetrics();
  *(_QWORD *)(v14 + 16) = a2;
  *(_QWORD *)(a2 + 480) = v14;
  v30 = *(_QWORD **)(v6 + 568);
  if ( *v30 != v6 + 560 )
    __fastfail(3u);
  *v15 = v6 + 560;
  v15[1] = v30;
  *v30 = v15;
  *(_QWORD *)(v6 + 568) = v15;
  return v16;
}
