/*
 * XREFs of HoldRimCompleteFrame @ 0x1C01C1F74
 * Callers:
 *     ProcessTouchInputViaRim @ 0x1C01EDC08 (ProcessTouchInputViaRim.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ?FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z @ 0x1C01C0A88 (-FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z.c)
 *     ?UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C01C1E24 (-UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 *     ?InitTouchpadState@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01E7F18 (-InitTouchpadState@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?IsTouchpadDevice@@YAHPEAX@Z @ 0x1C01E80CC (-IsTouchpadDevice@@YAHPEAX@Z.c)
 */

struct tagPOINTERHOLDINGFRAME *__fastcall HoldRimCompleteFrame(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rsi
  __int64 v5; // rdx
  struct tagPOINTERHOLDINGFRAME *HoldingFrameForDevice; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r15
  struct tagHID_POINTER_DEVICE_INFO *v10; // rdx
  __int64 v11; // r8
  struct tagTPSTATE *v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  _DWORD *v16; // r8
  unsigned int v17; // r11d
  _OWORD *v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rdx
  _OWORD *v21; // rcx
  __int128 v22; // xmm1
  __int64 v23; // r14
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // r8
  void *v28; // rax
  struct tagPOINTERHOLDINGFRAME *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  unsigned int v35; // r11d
  _DWORD *v36; // r8
  _OWORD *v37; // rbp
  __int64 v38; // rax
  _OWORD *v39; // rcx
  __int128 v40; // xmm1
  __int64 v41; // rsi
  __int64 v42; // rcx
  __int64 v43; // rbp
  __int64 v44; // r14
  __int64 v45; // rdi
  __int64 v46; // rsi
  void *v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rcx
  __int64 v50; // rsi
  __int64 v51; // [rsp+40h] [rbp+8h] BYREF

  v51 = 0LL;
  LOBYTE(a3) = *(_DWORD *)(a1 + 48) == 0;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(*(_QWORD *)(a1 + 32), 3LL, a3, &v51) < 0 )
    return 0LL;
  v4 = (_QWORD *)(v51 + 64);
  if ( v51 != -64 )
    v4 = (_QWORD *)*v4;
  RawInputManagerDeviceObjectDereference(v51);
  HoldingFrameForDevice = FindHoldingFrameForDevice(v4);
  if ( HoldingFrameForDevice )
  {
    if ( *((_DWORD *)HoldingFrameForDevice + 8) != *(_DWORD *)(a1 + 24) )
    {
      v33 = *((_QWORD *)HoldingFrameForDevice + 8);
      if ( v33 )
      {
        Win32FreePool(v33, v5, v7);
        *((_QWORD *)HoldingFrameForDevice + 8) = 0LL;
      }
      v34 = 216LL * *(unsigned int *)(a1 + 24);
      if ( v34 <= 0xFFFFFFFF )
        *((_QWORD *)HoldingFrameForDevice + 8) = Win32AllocPoolZInit((unsigned int)v34, 1701868373LL);
      if ( !*((_QWORD *)HoldingFrameForDevice + 8) )
        goto LABEL_44;
      *((_DWORD *)HoldingFrameForDevice + 8) = *(_DWORD *)(a1 + 24);
    }
    v35 = 0;
    *((_QWORD *)HoldingFrameForDevice + 3) = *(_QWORD *)(a1 + 40);
    v36 = *(_DWORD **)(a1 + 88);
    if ( *(_DWORD *)(a1 + 24) )
    {
      v37 = v36 + 2;
      do
      {
        v38 = v35++;
        v5 = 216 * v38;
        LODWORD(v38) = *v36;
        v36 += 42;
        *(_DWORD *)(v5 + *((_QWORD *)HoldingFrameForDevice + 8) + 44) = v38;
        v39 = (_OWORD *)(v5 + *((_QWORD *)HoldingFrameForDevice + 8));
        v39[3] = *v37;
        v39[4] = v37[1];
        v39[5] = v37[2];
        v39[6] = v37[3];
        v39[7] = v37[4];
        v39[8] = v37[5];
        v39[9] = v37[6];
        v39[10] = v37[7];
        v39[11] = v37[8];
        v40 = v37[9];
        v37 = (_OWORD *)((char *)v37 + 168);
        v39[12] = v40;
        *(_QWORD *)(v5 + *((_QWORD *)HoldingFrameForDevice + 8) + 72) = v4;
      }
      while ( v35 < *(_DWORD *)(a1 + 24) );
    }
    v41 = *((_QWORD *)HoldingFrameForDevice + 6);
    while ( v41 )
    {
      v42 = *(_QWORD *)(v41 + 16);
      v43 = v41;
      if ( v42 )
        Win32FreePool(v42, v5, v36);
      v41 = *(_QWORD *)(v41 + 24);
      Win32FreePool(v43, v5, v36);
    }
    *((_QWORD *)HoldingFrameForDevice + 6) = 0LL;
    v44 = 0LL;
    *((_QWORD *)HoldingFrameForDevice + 7) = 0LL;
    *((_DWORD *)HoldingFrameForDevice + 10) = *(_DWORD *)(a1 + 28);
    v45 = *(_QWORD *)(a1 + 80);
    if ( !v45 )
      return HoldingFrameForDevice;
    while ( 1 )
    {
      v46 = Win32AllocPoolZInit(32LL, 1685222229LL);
      if ( !v46 )
        break;
      v47 = (void *)Win32AllocPool(*(unsigned int *)(v45 + 4), 1685222229LL);
      *(_QWORD *)(v46 + 16) = v47;
      if ( !v47 )
        break;
      *(_DWORD *)(v46 + 4) = *(_DWORD *)v45;
      *(_DWORD *)(v46 + 8) = *(_DWORD *)(v45 + 4);
      memmove(v47, *(const void **)(v45 + 8), *(unsigned int *)(v45 + 4));
      if ( v44 )
        *(_QWORD *)(v44 + 24) = v46;
      else
        *((_QWORD *)HoldingFrameForDevice + 6) = v46;
      v45 = *(_QWORD *)(v45 + 16);
      v44 = v46;
      if ( !v45 )
      {
        *((_QWORD *)HoldingFrameForDevice + 7) = v46;
        return HoldingFrameForDevice;
      }
    }
    v48 = *((_QWORD *)HoldingFrameForDevice + 6);
    while ( v48 )
    {
      v49 = *(_QWORD *)(v48 + 16);
      v50 = v48;
      if ( v49 )
        Win32FreePool(v49, v5, v7);
      v48 = *(_QWORD *)(v48 + 24);
      Win32FreePool(v50, v5, v7);
    }
    *((_QWORD *)HoldingFrameForDevice + 6) = 0LL;
    *((_QWORD *)HoldingFrameForDevice + 7) = 0LL;
LABEL_44:
    UnlinkAndFreeHoldingFrame(HoldingFrameForDevice, v5, v7);
    return 0LL;
  }
  LOBYTE(v5) = 19;
  v9 = HMValidateHandleNoSecure((unsigned __int64)v4, v5, v7, v8);
  HoldingFrameForDevice = (struct tagPOINTERHOLDINGFRAME *)Win32AllocPoolZInit(96LL, 1718645589LL);
  if ( !HoldingFrameForDevice )
    return 0LL;
  if ( (unsigned int)IsTouchpadDevice(v4) )
  {
    v12 = (struct tagTPSTATE *)Win32AllocPoolZInit(2104LL, 1886679893LL);
    if ( !v12 )
    {
LABEL_15:
      Win32FreePool(HoldingFrameForDevice, v10, v11);
      return 0LL;
    }
    *((_QWORD *)HoldingFrameForDevice + 11) = v12;
    v10 = *(struct tagHID_POINTER_DEVICE_INFO **)(v9 + 480);
    if ( v10 )
      InitTouchpadState(v12, v10);
  }
  v13 = 216LL * *(unsigned int *)(a1 + 24);
  if ( v13 <= 0xFFFFFFFF )
    *((_QWORD *)HoldingFrameForDevice + 8) = Win32AllocPoolZInit((unsigned int)v13, 1701868373LL);
  if ( !*((_QWORD *)HoldingFrameForDevice + 8) )
  {
LABEL_13:
    v14 = *((_QWORD *)HoldingFrameForDevice + 11);
    if ( v14 )
      Win32FreePool(v14, v10, v11);
    goto LABEL_15;
  }
  v16 = *(_DWORD **)(a1 + 88);
  v17 = 0;
  if ( *(_DWORD *)(a1 + 24) )
  {
    v18 = v16 + 2;
    do
    {
      v19 = v17++;
      v20 = 216 * v19;
      LODWORD(v19) = *v16;
      v16 += 42;
      *(_DWORD *)(v20 + *((_QWORD *)HoldingFrameForDevice + 8) + 44) = v19;
      v21 = (_OWORD *)(v20 + *((_QWORD *)HoldingFrameForDevice + 8));
      v21[3] = *v18;
      v21[4] = v18[1];
      v21[5] = v18[2];
      v21[6] = v18[3];
      v21[7] = v18[4];
      v21[8] = v18[5];
      v21[9] = v18[6];
      v21[10] = v18[7];
      v21[11] = v18[8];
      v22 = v18[9];
      v18 = (_OWORD *)((char *)v18 + 168);
      v21[12] = v22;
      *(_QWORD *)(v20 + *((_QWORD *)HoldingFrameForDevice + 8) + 72) = v4;
    }
    while ( v17 < *(_DWORD *)(a1 + 24) );
  }
  v23 = 0LL;
  *((_DWORD *)HoldingFrameForDevice + 8) = *(_DWORD *)(a1 + 24);
  *((_QWORD *)HoldingFrameForDevice + 2) = v4;
  *((_QWORD *)HoldingFrameForDevice + 3) = *(_QWORD *)(a1 + 40);
  *((_DWORD *)HoldingFrameForDevice + 10) = *(_DWORD *)(a1 + 28);
  v24 = *(_QWORD *)(a1 + 80);
  if ( v24 )
  {
    while ( 1 )
    {
      v26 = Win32AllocPoolZInit(32LL, 1685222229LL);
      if ( !v26 )
        break;
      v28 = (void *)Win32AllocPool(*(unsigned int *)(v24 + 4), 1685222229LL);
      *(_QWORD *)(v26 + 16) = v28;
      if ( !v28 )
        break;
      *(_DWORD *)(v26 + 4) = *(_DWORD *)v24;
      *(_DWORD *)(v26 + 8) = *(_DWORD *)(v24 + 4);
      memmove(v28, *(const void **)(v24 + 8), *(unsigned int *)(v24 + 4));
      if ( v23 )
        *(_QWORD *)(v23 + 24) = v26;
      else
        *((_QWORD *)HoldingFrameForDevice + 6) = v26;
      v24 = *(_QWORD *)(v24 + 16);
      v23 = v26;
      if ( !v24 )
      {
        *((_QWORD *)HoldingFrameForDevice + 7) = v26;
        goto LABEL_28;
      }
    }
    v30 = *((_QWORD *)HoldingFrameForDevice + 6);
    while ( v30 )
    {
      v31 = *(_QWORD *)(v30 + 16);
      v32 = v30;
      if ( v31 )
        Win32FreePool(v31, v25, v27);
      v30 = *(_QWORD *)(v30 + 24);
      Win32FreePool(v32, v25, v27);
    }
    Win32FreePool(*((_QWORD *)HoldingFrameForDevice + 8), v25, v27);
    goto LABEL_13;
  }
LABEL_28:
  HMAssignmentLock((char *)HoldingFrameForDevice + 80, *(_QWORD *)(v9 + 480));
  v29 = qword_1C032DAA0;
  if ( *((struct tagPOINTERHOLDINGFRAME ***)qword_1C032DAA0 + 1) != &qword_1C032DAA0 )
    __fastfail(3u);
  *(_QWORD *)HoldingFrameForDevice = qword_1C032DAA0;
  *((_QWORD *)HoldingFrameForDevice + 1) = &qword_1C032DAA0;
  *((_QWORD *)v29 + 1) = HoldingFrameForDevice;
  qword_1C032DAA0 = HoldingFrameForDevice;
  return HoldingFrameForDevice;
}
