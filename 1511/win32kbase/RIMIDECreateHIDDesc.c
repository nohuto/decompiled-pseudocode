/*
 * XREFs of RIMIDECreateHIDDesc @ 0x1C00C5D50
 * Callers:
 *     RIMCreateHidDesc @ 0x1C000F564 (RIMCreateHidDesc.c)
 * Callees:
 *     RIMFreePointerDevice @ 0x1C000AC5C (RIMFreePointerDevice.c)
 *     RIMIDEFreeInjectedInfo @ 0x1C000CEA8 (RIMIDEFreeInjectedInfo.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C000EE90 (WPP_RECORDER_SF_qDD.c)
 *     RIMFreeHidDesc @ 0x1C000EF6C (RIMFreeHidDesc.c)
 *     RIMSearchHidTLCInfo @ 0x1C000F164 (RIMSearchHidTLCInfo.c)
 *     WPP_RECORDER_SF_q @ 0x1C000FA94 (WPP_RECORDER_SF_q.c)
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     Win32AllocPoolZInit @ 0x1C004F690 (Win32AllocPoolZInit.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C007B95C (RIMAllocateAndLinkHidTLCInfo.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C007DAB4 (WPP_RECORDER_SF_DDq.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     rimHidP_FreeCollectionDescription @ 0x1C00C446C (rimHidP_FreeCollectionDescription.c)
 *     RIMIDEAllocateInjectedInfo @ 0x1C00C5A98 (RIMIDEAllocateInjectedInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00C60A4 (RIMIDECreatePointerDeviceInfo.c)
 */

__int64 __fastcall RIMIDECreateHIDDesc(__int64 a1, _QWORD *a2, _OWORD *a3)
{
  __int128 v4; // xmm2
  __int64 v6; // r15
  __int128 v7; // xmm1
  __int64 v8; // rdi
  __int128 v9; // xmm0
  int v10; // esi
  int Caps; // eax
  char *v12; // rax
  __int128 v13; // xmm0
  void *v14; // rax
  unsigned __int16 epi16; // bx
  void *v16; // rax
  __int64 v18; // rcx
  __int64 *v19; // rax
  unsigned __int16 v20; // dx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned __int16 v23; // r9
  _WORD *v24; // r15
  __int64 v25; // rcx
  USAGE UsagePage; // eax^2
  int v27; // eax
  _QWORD *v28; // rax
  __int64 v29; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v31; // rdx
  __m128i v33; // [rsp+48h] [rbp-B8h]
  __int128 v34; // [rsp+58h] [rbp-A8h]
  struct _HIDP_PREPARSED_DATA *Src; // [rsp+88h] [rbp-78h]
  _OWORD v36[2]; // [rsp+90h] [rbp-70h] BYREF
  struct _HIDP_PREPARSED_DATA *v37; // [rsp+B0h] [rbp-50h]
  struct _HIDP_CAPS v38; // [rsp+C0h] [rbp-40h] BYREF
  struct _HIDP_DEVICE_DESC v39; // [rsp+100h] [rbp+0h] BYREF

  v4 = a3[1];
  v6 = a1;
  v7 = a3[3];
  v8 = 0LL;
  *(_OWORD *)&v39.ReportIDs = a3[2];
  v9 = a3[4];
  v10 = 0;
  *(_OWORD *)&v39.CollectionDesc = v4;
  *(_OWORD *)&v39.Dbg.Args[3] = v9;
  *(_OWORD *)&v39.Dbg.ErrorCode = v7;
  v34 = *(_OWORD *)v4;
  Src = *(struct _HIDP_PREPARSED_DATA **)(v4 + 32);
  v33 = *(__m128i *)(v4 + 16);
  if ( gpfnHidP_GetCaps )
    Caps = gpfnHidP_GetCaps(Src, &v38);
  else
    Caps = -1073741637;
  if ( Caps < 0 )
    goto LABEL_7;
  v12 = (char *)Win32AllocPoolZInit(0x78uLL);
  v8 = (__int64)v12;
  if ( !v12 )
    goto LABEL_7;
  v13 = *(_OWORD *)&v38.Usage;
  a2[50] = v12;
  *(_OWORD *)(v12 + 40) = v13;
  *(_OWORD *)(v12 + 56) = *(_OWORD *)&v38.Reserved[3];
  *(_OWORD *)(v12 + 72) = *(_OWORD *)&v38.Reserved[11];
  *(_OWORD *)(v12 + 88) = *(_OWORD *)&v38.NumberInputValueCaps;
  v14 = Win32AllocPoolZInit(*((unsigned __int16 *)v12 + 22));
  *(_QWORD *)(v8 + 24) = v14;
  if ( !v14 )
  {
LABEL_7:
    v10 = 1;
    goto LABEL_11;
  }
  epi16 = _mm_extract_epi16(v33, 5);
  v16 = (void *)Win32AllocPool();
  *(_QWORD *)(v8 + 16) = v16;
  if ( !v16 )
  {
    v10 = 1;
LABEL_10:
    v6 = a1;
    goto LABEL_11;
  }
  memmove(v16, Src, epi16);
  *(_DWORD *)(v8 + 104) = epi16;
  *(_DWORD *)(v8 + 108) = 0;
  *(_DWORD *)(v8 + 112) = 0x10000;
  v19 = RIMSearchHidTLCInfo(v18, v38.UsagePage, v38.Usage);
  v24 = v19;
  if ( v19 )
  {
    WPP_RECORDER_SF_DDq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v20,
      v22,
      0xBu,
      (__int64)&WPP_46f9b70f72899a49db72f32dcca4e219_Traceguids,
      v20,
      v23,
      v19);
  }
  else
  {
    v24 = RIMAllocateAndLinkHidTLCInfo(v21, v20, v22);
    if ( !v24 )
    {
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xCu,
        (__int64)&WPP_46f9b70f72899a49db72f32dcca4e219_Traceguids,
        a1);
      v10 = 1;
    }
    WPP_RECORDER_SF_qDD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      4u,
      0xDu,
      (__int64)&WPP_46f9b70f72899a49db72f32dcca4e219_Traceguids,
      v24,
      v38.UsagePage,
      v38.Usage);
    if ( v10 )
      goto LABEL_10;
  }
  ++*((_DWORD *)v24 + 5);
  v25 = *(_QWORD *)&v38.Usage;
  UsagePage = v38.UsagePage;
  a2[51] = v24;
  if ( UsagePage == 13 && (unsigned __int16)v25 <= 0xDu )
  {
    v6 = a1;
    v27 = 8244;
    if ( _bittest(&v27, v25) )
    {
      v36[0] = v34;
      v37 = Src;
      v36[1] = v33;
      if ( !(unsigned int)RIMIDECreatePointerDeviceInfo(a1, a2, a3, v8, v36) )
        goto LABEL_25;
    }
  }
  else
  {
    v6 = a1;
  }
  v28 = RIMIDEAllocateInjectedInfo(v25, (__int64)a3);
  a2[46] = v28;
  if ( !v28 )
  {
LABEL_25:
    v10 = 1;
    goto LABEL_11;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v29);
  *(_DWORD *)(CurrentProcessWin32Process + 776) |= 0x400000u;
  *(_QWORD *)(a2[46] + 88LL) = CurrentProcessWin32Process;
LABEL_11:
  rimHidP_FreeCollectionDescription(&v39);
  v39.CollectionDesc = 0LL;
  if ( !v10 )
    return v8;
  if ( v8 )
    RIMFreeHidDesc(v8);
  v31 = a2[52];
  if ( v31 )
  {
    RIMFreePointerDevice(v6, v31);
    a2[52] = 0LL;
  }
  RIMIDEFreeInjectedInfo((__int64)a2);
  return 0LL;
}
