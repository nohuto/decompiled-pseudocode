/*
 * XREFs of RIMIDECreateHIDDesc @ 0x1C00C4E54
 * Callers:
 *     RIMCreateHidDesc @ 0x1C00775D0 (RIMCreateHidDesc.c)
 * Callees:
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     Win32AllocPoolZInit @ 0x1C004CEA0 (Win32AllocPoolZInit.c)
 *     RIMIDEFreeInjectedInfo @ 0x1C0075704 (RIMIDEFreeInjectedInfo.c)
 *     RIMFreeHidDesc @ 0x1C0075858 (RIMFreeHidDesc.c)
 *     WPP_RECORDER_SF_q @ 0x1C0077B00 (WPP_RECORDER_SF_q.c)
 *     RIMSearchHidTLCInfo @ 0x1C0077E40 (RIMSearchHidTLCInfo.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0077EB8 (WPP_RECORDER_SF_qDD.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C0077F94 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMFreePointerDevice @ 0x1C0078334 (RIMFreePointerDevice.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C0083710 (WPP_RECORDER_SF_DDq.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     rimHidP_FreeCollectionDescription @ 0x1C00C363C (rimHidP_FreeCollectionDescription.c)
 *     RIMIDEAllocateInjectedInfo @ 0x1C00C4B9C (RIMIDEAllocateInjectedInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00C51A8 (RIMIDECreatePointerDeviceInfo.c)
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
  struct tagTHREADINFO *v29; // rcx
  __int64 v30; // rdx
  __m128i v32; // [rsp+48h] [rbp-B8h]
  __int128 v33; // [rsp+58h] [rbp-A8h]
  struct _HIDP_PREPARSED_DATA *Src; // [rsp+88h] [rbp-78h]
  _OWORD v35[2]; // [rsp+90h] [rbp-70h] BYREF
  struct _HIDP_PREPARSED_DATA *v36; // [rsp+B0h] [rbp-50h]
  struct _HIDP_CAPS v37; // [rsp+C0h] [rbp-40h] BYREF
  struct _HIDP_DEVICE_DESC v38; // [rsp+100h] [rbp+0h] BYREF

  v4 = a3[1];
  v6 = a1;
  v7 = a3[3];
  v8 = 0LL;
  *(_OWORD *)&v38.ReportIDs = a3[2];
  v9 = a3[4];
  v10 = 0;
  *(_OWORD *)&v38.CollectionDesc = v4;
  *(_OWORD *)&v38.Dbg.Args[3] = v9;
  *(_OWORD *)&v38.Dbg.ErrorCode = v7;
  v33 = *(_OWORD *)v4;
  Src = *(struct _HIDP_PREPARSED_DATA **)(v4 + 32);
  v32 = *(__m128i *)(v4 + 16);
  if ( gpfnHidP_GetCaps )
    Caps = gpfnHidP_GetCaps(Src, &v37);
  else
    Caps = -1073741637;
  if ( Caps < 0 )
    goto LABEL_7;
  v12 = (char *)Win32AllocPoolZInit(0x78uLL);
  v8 = (__int64)v12;
  if ( !v12 )
    goto LABEL_7;
  v13 = *(_OWORD *)&v37.Usage;
  a2[50] = v12;
  *(_OWORD *)(v12 + 40) = v13;
  *(_OWORD *)(v12 + 56) = *(_OWORD *)&v37.Reserved[3];
  *(_OWORD *)(v12 + 72) = *(_OWORD *)&v37.Reserved[11];
  *(_OWORD *)(v12 + 88) = *(_OWORD *)&v37.NumberInputValueCaps;
  v14 = Win32AllocPoolZInit(*((unsigned __int16 *)v12 + 22));
  *(_QWORD *)(v8 + 24) = v14;
  if ( !v14 )
  {
LABEL_7:
    v10 = 1;
    goto LABEL_11;
  }
  epi16 = _mm_extract_epi16(v32, 5);
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
  v19 = RIMSearchHidTLCInfo(v18, v37.UsagePage, v37.Usage);
  v24 = v19;
  if ( v19 )
  {
    WPP_RECORDER_SF_DDq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v20,
      v22,
      0xBu,
      (__int64)&WPP_d543ac9e81a46d1db8f3f8d27585c6dd_Traceguids,
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
        (__int64)&WPP_d543ac9e81a46d1db8f3f8d27585c6dd_Traceguids,
        a1);
      v10 = 1;
    }
    WPP_RECORDER_SF_qDD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      4u,
      0xDu,
      (__int64)&WPP_d543ac9e81a46d1db8f3f8d27585c6dd_Traceguids,
      v24,
      v37.UsagePage,
      v37.Usage);
    if ( v10 )
      goto LABEL_10;
  }
  ++*((_DWORD *)v24 + 5);
  v25 = *(_QWORD *)&v37.Usage;
  UsagePage = v37.UsagePage;
  a2[51] = v24;
  if ( UsagePage == 13 && (unsigned __int16)v25 <= 0xDu )
  {
    v6 = a1;
    v27 = 8244;
    if ( _bittest(&v27, v25) )
    {
      v35[0] = v33;
      v36 = Src;
      v35[1] = v32;
      if ( !(unsigned int)RIMIDECreatePointerDeviceInfo(a1, a2, a3, v8, v35) )
        goto LABEL_25;
    }
  }
  else
  {
    v6 = a1;
  }
  v28 = RIMIDEAllocateInjectedInfo(v25, (__int64)a3);
  a2[47] = v28;
  if ( !v28 )
  {
LABEL_25:
    v10 = 1;
    goto LABEL_11;
  }
  v29 = gptiCurrent;
  *((_DWORD *)gptiCurrent + 270) |= 0x200000u;
  *(_QWORD *)(a2[47] + 88LL) = v29;
LABEL_11:
  rimHidP_FreeCollectionDescription(&v38);
  v38.CollectionDesc = 0LL;
  if ( !v10 )
    return v8;
  if ( v8 )
    RIMFreeHidDesc(v8);
  v30 = a2[52];
  if ( v30 )
  {
    RIMFreePointerDevice(v6, v30);
    a2[52] = 0LL;
  }
  RIMIDEFreeInjectedInfo((__int64)a2);
  return 0LL;
}
