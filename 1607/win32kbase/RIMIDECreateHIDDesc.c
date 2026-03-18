/*
 * XREFs of RIMIDECreateHIDDesc @ 0x1C00D53A8
 * Callers:
 *     RIMCreateHidDesc @ 0x1C000B820 (RIMCreateHidDesc.c)
 * Callees:
 *     RIMFreePointerDevice @ 0x1C0006844 (RIMFreePointerDevice.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C0009CB4 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMIDEFreeInjectedInfo @ 0x1C000A4AC (RIMIDEFreeInjectedInfo.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C000A5E0 (WPP_RECORDER_SF_qDD.c)
 *     RIMFreeHidDesc @ 0x1C000A6BC (RIMFreeHidDesc.c)
 *     RIMSearchHidTLCInfo @ 0x1C000B2A0 (RIMSearchHidTLCInfo.c)
 *     WPP_RECORDER_SF_q @ 0x1C0010310 (WPP_RECORDER_SF_q.c)
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     Win32AllocPoolZInit @ 0x1C0037AC0 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C008157C (WPP_RECORDER_SF_DDq.c)
 *     RIMIsInteractiveCtrl @ 0x1C0082548 (RIMIsInteractiveCtrl.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     rimHidP_FreeCollectionDescription @ 0x1C00D2E98 (rimHidP_FreeCollectionDescription.c)
 *     RIMIDEAllocateInjectedInfo @ 0x1C00D4F90 (RIMIDEAllocateInjectedInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00D5734 (RIMIDECreatePointerDeviceInfo.c)
 */

__int64 __fastcall RIMIDECreateHIDDesc(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int128 v4; // xmm2
  __int64 v6; // r15
  __int128 v7; // xmm1
  __int64 v8; // rdi
  __int128 v9; // xmm0
  int v10; // esi
  __m128i v11; // xmm1
  int Caps; // eax
  char *v13; // rax
  __int128 v14; // xmm0
  void *v15; // rax
  unsigned __int16 epi16; // bx
  void *v17; // rax
  __int64 v19; // rcx
  __int64 *v20; // rax
  unsigned __int16 v21; // dx
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned __int16 v24; // r9
  __int64 v25; // r15
  unsigned int v26; // ecx
  USAGE UsagePage; // eax^2
  int v28; // eax
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v33; // rdx
  struct _HIDP_CAPS v35; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v36; // [rsp+A0h] [rbp-60h]
  void *Src; // [rsp+D0h] [rbp-30h]
  struct _HIDP_CAPS v38; // [rsp+E0h] [rbp-20h] BYREF
  struct _HIDP_DEVICE_DESC v39; // [rsp+120h] [rbp+20h] BYREF

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
  v11 = *(__m128i *)(v4 + 16);
  v36 = *(_OWORD *)v4;
  Src = *(void **)(v4 + 32);
  if ( gpfnHidP_GetCaps )
    Caps = gpfnHidP_GetCaps((struct _HIDP_PREPARSED_DATA *)Src, &v38);
  else
    Caps = -1073741637;
  if ( Caps < 0 )
    goto LABEL_7;
  v13 = (char *)Win32AllocPoolZInit(0x78uLL);
  v8 = (__int64)v13;
  if ( !v13 )
    goto LABEL_7;
  v14 = *(_OWORD *)&v38.Usage;
  *(_QWORD *)(a2 + 464) = v13;
  *(_OWORD *)(v13 + 40) = v14;
  *(_OWORD *)(v13 + 56) = *(_OWORD *)&v38.Reserved[3];
  *(_OWORD *)(v13 + 72) = *(_OWORD *)&v38.Reserved[11];
  *(_OWORD *)(v13 + 88) = *(_OWORD *)&v38.NumberInputValueCaps;
  v15 = Win32AllocPoolZInit(*((unsigned __int16 *)v13 + 22));
  *(_QWORD *)(v8 + 24) = v15;
  if ( !v15 )
  {
LABEL_7:
    v10 = 1;
    goto LABEL_11;
  }
  epi16 = _mm_extract_epi16(v11, 5);
  v17 = (void *)Win32AllocPool();
  *(_QWORD *)(v8 + 16) = v17;
  if ( !v17 )
  {
    v10 = 1;
LABEL_10:
    v6 = a1;
    goto LABEL_11;
  }
  memmove(v17, Src, epi16);
  *(_DWORD *)(v8 + 104) = epi16;
  *(_DWORD *)(v8 + 108) = 0;
  *(_DWORD *)(v8 + 112) = 0x10000;
  v20 = RIMSearchHidTLCInfo(v19, v38.UsagePage, v38.Usage);
  v25 = (__int64)v20;
  if ( v20 )
  {
    WPP_RECORDER_SF_DDq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v21,
      v23,
      0xBu,
      (__int64)&WPP_7fdc14de89e334702abda85b7a26ab23_Traceguids,
      v21,
      v24,
      v20);
  }
  else
  {
    v25 = RIMAllocateAndLinkHidTLCInfo(v22, v21, v23);
    if ( !v25 )
    {
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xCu,
        (__int64)&WPP_7fdc14de89e334702abda85b7a26ab23_Traceguids,
        a1);
      v10 = 1;
    }
    WPP_RECORDER_SF_qDD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      4u,
      0xDu,
      (__int64)&WPP_7fdc14de89e334702abda85b7a26ab23_Traceguids,
      v25,
      v38.UsagePage,
      v38.Usage);
    if ( v10 )
      goto LABEL_10;
  }
  ++*(_DWORD *)(v25 + 20);
  v26 = *(_DWORD *)&v38.Usage;
  UsagePage = v38.UsagePage;
  *(_QWORD *)(a2 + 472) = v25;
  if ( UsagePage == 13 && (unsigned __int16)v26 <= 0xDu && (v28 = 8244, _bittest(&v28, v26)) )
  {
    v6 = a1;
    *(_OWORD *)&v35.Usage = v36;
    *(_QWORD *)&v35.Reserved[11] = Src;
    *(__m128i *)&v35.Reserved[3] = v11;
    if ( !(unsigned int)RIMIDECreatePointerDeviceInfo(a1, a2, (_DWORD)a3, v8, (__int64)&v35) )
      goto LABEL_26;
  }
  else
  {
    v35 = v38;
    v6 = a1;
    if ( (unsigned int)RIMIsInteractiveCtrl(&v35) )
      *(_DWORD *)(a2 + 320) = 1;
  }
  v30 = RIMIDEAllocateInjectedInfo(v29, (__int64)a3);
  *(_QWORD *)(a2 + 384) = v30;
  if ( !v30 )
  {
LABEL_26:
    v10 = 1;
    goto LABEL_11;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v31);
  *(_DWORD *)(CurrentProcessWin32Process + 768) |= 0x100000u;
  *(_DWORD *)(*(_QWORD *)(a2 + 384) + 84LL) = *(_DWORD *)(CurrentProcessWin32Process + 56);
LABEL_11:
  rimHidP_FreeCollectionDescription(&v39);
  v39.CollectionDesc = 0LL;
  if ( !v10 )
    return v8;
  if ( v8 )
    RIMFreeHidDesc(v8);
  v33 = *(_QWORD *)(a2 + 480);
  if ( v33 )
  {
    RIMFreePointerDevice(v6, v33);
    *(_QWORD *)(a2 + 480) = 0LL;
  }
  RIMIDEFreeInjectedInfo(a2);
  return 0LL;
}
