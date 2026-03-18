/*
 * XREFs of HoldRimCompleteFrame @ 0x1C0230E2C
 * Callers:
 *     ProcessTouchInputViaRim @ 0x1C01F6A24 (ProcessTouchInputViaRim.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     ?InitTouchpadState@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01F1A54 (-InitTouchpadState@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?IsTouchpadDevice@@YAHPEAX@Z @ 0x1C01F1E44 (-IsTouchpadDevice@@YAHPEAX@Z.c)
 *     ?FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z @ 0x1C022F638 (-FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z.c)
 *     ?UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C0230CD4 (-UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 */

struct tagPOINTERHOLDINGFRAME *__fastcall HoldRimCompleteFrame(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rsi
  struct tagPOINTERHOLDINGFRAME *HoldingFrameForDevice; // rbx
  __int64 v6; // r15
  struct tagTPSTATE *v7; // rax
  struct tagHID_POINTER_DEVICE_INFO *v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  _DWORD *v12; // r8
  unsigned int v13; // r11d
  _OWORD *v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rdx
  _OWORD *v17; // rcx
  __int128 v18; // xmm1
  __int64 v19; // r14
  __int64 v20; // rsi
  __int64 v21; // rdi
  void *v22; // rax
  struct tagPOINTERHOLDINGFRAME *v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  _DWORD *v29; // r8
  unsigned int v30; // r11d
  _OWORD *v31; // rbp
  __int64 v32; // rax
  __int64 v33; // rdx
  _OWORD *v34; // rcx
  __int128 v35; // xmm1
  __int64 v36; // rsi
  __int64 v37; // rcx
  __int64 v38; // rbp
  __int64 v39; // r14
  __int64 v40; // rdi
  __int64 v41; // rsi
  void *v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rcx
  __int64 v45; // rsi
  __int64 v46; // [rsp+40h] [rbp+8h] BYREF

  v46 = 0LL;
  LOBYTE(a3) = *(_DWORD *)(a1 + 48) == 0;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(*(_QWORD *)(a1 + 32), 3LL, a3, &v46) < 0 )
    return 0LL;
  v4 = (_QWORD *)(v46 + 64);
  if ( v46 != -64 )
    v4 = (_QWORD *)*v4;
  RawInputManagerDeviceObjectDereference(v46);
  HoldingFrameForDevice = FindHoldingFrameForDevice(v4);
  if ( HoldingFrameForDevice )
  {
    if ( *((_DWORD *)HoldingFrameForDevice + 8) != *(_DWORD *)(a1 + 24) )
    {
      v27 = *((_QWORD *)HoldingFrameForDevice + 8);
      if ( v27 )
      {
        Win32FreePool(v27);
        *((_QWORD *)HoldingFrameForDevice + 8) = 0LL;
      }
      v28 = 216LL * *(unsigned int *)(a1 + 24);
      if ( v28 <= 0xFFFFFFFF )
        *((_QWORD *)HoldingFrameForDevice + 8) = Win32AllocPoolZInit((unsigned int)v28, 1701868373LL);
      if ( !*((_QWORD *)HoldingFrameForDevice + 8) )
        goto LABEL_44;
      *((_DWORD *)HoldingFrameForDevice + 8) = *(_DWORD *)(a1 + 24);
    }
    v29 = *(_DWORD **)(a1 + 88);
    v30 = 0;
    if ( *(_DWORD *)(a1 + 24) )
    {
      v31 = v29 + 2;
      do
      {
        v32 = v30++;
        v33 = 216 * v32;
        LODWORD(v32) = *v29;
        v29 += 42;
        *(_DWORD *)(v33 + *((_QWORD *)HoldingFrameForDevice + 8) + 44) = v32;
        v34 = (_OWORD *)(v33 + *((_QWORD *)HoldingFrameForDevice + 8));
        v34[3] = *v31;
        v34[4] = v31[1];
        v34[5] = v31[2];
        v34[6] = v31[3];
        v34[7] = v31[4];
        v34[8] = v31[5];
        v34[9] = v31[6];
        v34[10] = v31[7];
        v34[11] = v31[8];
        v35 = v31[9];
        v31 = (_OWORD *)((char *)v31 + 168);
        v34[12] = v35;
        *(_QWORD *)(v33 + *((_QWORD *)HoldingFrameForDevice + 8) + 72) = v4;
      }
      while ( v30 < *(_DWORD *)(a1 + 24) );
    }
    v36 = *((_QWORD *)HoldingFrameForDevice + 6);
    while ( v36 )
    {
      v37 = *(_QWORD *)(v36 + 16);
      v38 = v36;
      if ( v37 )
        Win32FreePool(v37);
      v36 = *(_QWORD *)(v36 + 24);
      Win32FreePool(v38);
    }
    *((_QWORD *)HoldingFrameForDevice + 6) = 0LL;
    v39 = 0LL;
    *((_QWORD *)HoldingFrameForDevice + 7) = 0LL;
    *((_DWORD *)HoldingFrameForDevice + 10) = *(_DWORD *)(a1 + 28);
    v40 = *(_QWORD *)(a1 + 80);
    if ( !v40 )
      return HoldingFrameForDevice;
    while ( 1 )
    {
      v41 = Win32AllocPoolZInit(32LL, 1685222229LL);
      if ( !v41 )
        break;
      v42 = (void *)Win32AllocPool(*(unsigned int *)(v40 + 4));
      *(_QWORD *)(v41 + 16) = v42;
      if ( !v42 )
        break;
      *(_DWORD *)(v41 + 4) = *(_DWORD *)v40;
      *(_DWORD *)(v41 + 8) = *(_DWORD *)(v40 + 4);
      memmove(v42, *(const void **)(v40 + 8), *(unsigned int *)(v40 + 4));
      if ( v39 )
        *(_QWORD *)(v39 + 24) = v41;
      else
        *((_QWORD *)HoldingFrameForDevice + 6) = v41;
      v40 = *(_QWORD *)(v40 + 16);
      v39 = v41;
      if ( !v40 )
      {
        *((_QWORD *)HoldingFrameForDevice + 7) = v41;
        return HoldingFrameForDevice;
      }
    }
    v43 = *((_QWORD *)HoldingFrameForDevice + 6);
    while ( v43 )
    {
      v44 = *(_QWORD *)(v43 + 16);
      v45 = v43;
      if ( v44 )
        Win32FreePool(v44);
      v43 = *(_QWORD *)(v43 + 24);
      Win32FreePool(v45);
    }
    *((_QWORD *)HoldingFrameForDevice + 6) = 0LL;
    *((_QWORD *)HoldingFrameForDevice + 7) = 0LL;
LABEL_44:
    UnlinkAndFreeHoldingFrame(HoldingFrameForDevice);
    return 0LL;
  }
  v6 = HMValidateHandleNoSecure((unsigned __int64)v4, 19);
  HoldingFrameForDevice = (struct tagPOINTERHOLDINGFRAME *)Win32AllocPoolZInit(96LL, 1718645589LL);
  if ( !HoldingFrameForDevice )
    return 0LL;
  if ( IsTouchpadDevice((unsigned __int64)v4) )
  {
    v7 = (struct tagTPSTATE *)Win32AllocPoolZInit(1600LL, 1886679893LL);
    if ( !v7 )
    {
LABEL_15:
      Win32FreePool(HoldingFrameForDevice);
      return 0LL;
    }
    *((_QWORD *)HoldingFrameForDevice + 11) = v7;
    v8 = *(struct tagHID_POINTER_DEVICE_INFO **)(v6 + 416);
    if ( v8 )
      InitTouchpadState(v7, v8);
  }
  v9 = 216LL * *(unsigned int *)(a1 + 24);
  if ( v9 <= 0xFFFFFFFF )
    *((_QWORD *)HoldingFrameForDevice + 8) = Win32AllocPoolZInit((unsigned int)v9, 1701868373LL);
  if ( !*((_QWORD *)HoldingFrameForDevice + 8) )
  {
LABEL_13:
    v10 = *((_QWORD *)HoldingFrameForDevice + 11);
    if ( v10 )
      Win32FreePool(v10);
    goto LABEL_15;
  }
  v12 = *(_DWORD **)(a1 + 88);
  v13 = 0;
  if ( *(_DWORD *)(a1 + 24) )
  {
    v14 = v12 + 2;
    do
    {
      v15 = v13++;
      v16 = 216 * v15;
      LODWORD(v15) = *v12;
      v12 += 42;
      *(_DWORD *)(v16 + *((_QWORD *)HoldingFrameForDevice + 8) + 44) = v15;
      v17 = (_OWORD *)(v16 + *((_QWORD *)HoldingFrameForDevice + 8));
      v17[3] = *v14;
      v17[4] = v14[1];
      v17[5] = v14[2];
      v17[6] = v14[3];
      v17[7] = v14[4];
      v17[8] = v14[5];
      v17[9] = v14[6];
      v17[10] = v14[7];
      v17[11] = v14[8];
      v18 = v14[9];
      v14 = (_OWORD *)((char *)v14 + 168);
      v17[12] = v18;
      *(_QWORD *)(v16 + *((_QWORD *)HoldingFrameForDevice + 8) + 72) = v4;
    }
    while ( v13 < *(_DWORD *)(a1 + 24) );
  }
  v19 = 0LL;
  *((_DWORD *)HoldingFrameForDevice + 8) = *(_DWORD *)(a1 + 24);
  *((_QWORD *)HoldingFrameForDevice + 2) = v4;
  *((_QWORD *)HoldingFrameForDevice + 3) = *(_QWORD *)(a1 + 40);
  *((_DWORD *)HoldingFrameForDevice + 10) = *(_DWORD *)(a1 + 28);
  v20 = *(_QWORD *)(a1 + 80);
  if ( v20 )
  {
    while ( 1 )
    {
      v21 = Win32AllocPoolZInit(32LL, 1685222229LL);
      if ( !v21 )
        break;
      v22 = (void *)Win32AllocPool(*(unsigned int *)(v20 + 4));
      *(_QWORD *)(v21 + 16) = v22;
      if ( !v22 )
        break;
      *(_DWORD *)(v21 + 4) = *(_DWORD *)v20;
      *(_DWORD *)(v21 + 8) = *(_DWORD *)(v20 + 4);
      memmove(v22, *(const void **)(v20 + 8), *(unsigned int *)(v20 + 4));
      if ( v19 )
        *(_QWORD *)(v19 + 24) = v21;
      else
        *((_QWORD *)HoldingFrameForDevice + 6) = v21;
      v20 = *(_QWORD *)(v20 + 16);
      v19 = v21;
      if ( !v20 )
      {
        *((_QWORD *)HoldingFrameForDevice + 7) = v21;
        goto LABEL_28;
      }
    }
    v24 = *((_QWORD *)HoldingFrameForDevice + 6);
    while ( v24 )
    {
      v25 = *(_QWORD *)(v24 + 16);
      v26 = v24;
      if ( v25 )
        Win32FreePool(v25);
      v24 = *(_QWORD *)(v24 + 24);
      Win32FreePool(v26);
    }
    Win32FreePool(*((_QWORD *)HoldingFrameForDevice + 8));
    goto LABEL_13;
  }
LABEL_28:
  HMAssignmentLock((char *)HoldingFrameForDevice + 80, *(_QWORD *)(v6 + 416));
  v23 = qword_1C0327800;
  *(_QWORD *)HoldingFrameForDevice = qword_1C0327800;
  *((_QWORD *)HoldingFrameForDevice + 1) = &qword_1C0327800;
  if ( *((struct tagPOINTERHOLDINGFRAME ***)v23 + 1) != &qword_1C0327800 )
    __fastfail(3u);
  *((_QWORD *)v23 + 1) = HoldingFrameForDevice;
  qword_1C0327800 = HoldingFrameForDevice;
  return HoldingFrameForDevice;
}
