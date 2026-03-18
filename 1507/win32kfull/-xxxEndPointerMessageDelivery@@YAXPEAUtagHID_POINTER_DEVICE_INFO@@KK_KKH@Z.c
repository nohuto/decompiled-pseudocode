/*
 * XREFs of ?xxxEndPointerMessageDelivery@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KK_KKH@Z @ 0x1C01C6E14
 * Callers:
 *     xxxAssessPointerContactState @ 0x1C01CD534 (xxxAssessPointerContactState.c)
 *     xxxUpdateDeviceFrameState @ 0x1C01CDE84 (xxxUpdateDeviceFrameState.c)
 * Callees:
 *     PopW32ThreadLock @ 0x1C005BC70 (PopW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?AddSimulatedPointerDeviceData@@YAJPEAUtagHID_POINTER_DEVICE_INFO@@KPEAUtagPOINTEREVENTINT@@PEAPEAEPEAK@Z @ 0x1C01C41C8 (-AddSimulatedPointerDeviceData@@YAJPEAUtagHID_POINTER_DEVICE_INFO@@KPEAUtagPOINTEREVENTINT@@PEAP.c)
 *     DecActiveContacts @ 0x1C01C83FC (DecActiveContacts.c)
 *     RemoveContactFromActiveList @ 0x1C01CC48C (RemoveContactFromActiveList.c)
 *     SimulatedPointerDeviceScanTime @ 0x1C01CC93C (SimulatedPointerDeviceScanTime.c)
 *     xxxProcessPointerEvent @ 0x1C01E131C (xxxProcessPointerEvent.c)
 */

void __fastcall xxxEndPointerMessageDelivery(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        __int16 a5,
        int a6)
{
  __int64 v6; // r15
  unsigned int v7; // esi
  __int64 v9; // r13
  unsigned __int8 *v10; // r14
  __int64 v11; // r12
  int v12; // edx
  unsigned int v13; // ebx
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  void *v19; // r15
  unsigned int v20; // eax
  unsigned int v21; // esi
  unsigned int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  int v25; // esi
  __int64 v26; // rcx
  int v27; // [rsp+50h] [rbp-B0h]
  unsigned int v28; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v29; // [rsp+58h] [rbp-A8h] BYREF
  void *v30; // [rsp+60h] [rbp-A0h]
  int v31; // [rsp+68h] [rbp-98h]
  unsigned __int8 *v32; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v33[3]; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v34[40]; // [rsp+90h] [rbp-70h] BYREF

  v6 = *((_QWORD *)a1 + 85);
  v7 = a3;
  v28 = 0;
  v9 = a2;
  v29 = a3;
  v10 = 0LL;
  v27 = 0;
  v11 = 2400LL * a2;
  v30 = a4;
  v32 = 0LL;
  v31 = *(_DWORD *)(v6 + v11 + 2340);
  memset(v34, 0, sizeof(v34));
  v12 = *(_DWORD *)(v6 + v11 + 2392);
  v13 = v34[5];
  if ( (v12 & 1) != 0 )
  {
    v13 = v34[5] | 0x2000;
    v34[5] |= 0x2000u;
  }
  if ( a6 )
  {
    v13 |= 0x8000u;
    v34[5] = v13;
  }
  if ( (*((_DWORD *)a1 + 59) & 4) != 0 )
  {
    v13 |= 0x4000u;
    v34[5] = v13;
  }
  v14 = *(_QWORD *)(v6 + v11 + 2252);
  v15 = *((_DWORD *)a1 + 6);
  v34[27] = 0;
  *(_QWORD *)&v34[10] = v14;
  *(_QWORD *)&v34[12] = *(_QWORD *)(v6 + v11 + 2260);
  *(_QWORD *)&v34[14] = *(_QWORD *)(v6 + v11 + 2268);
  *(_QWORD *)&v34[16] = *(_QWORD *)(v6 + v11 + 2276);
  if ( (unsigned int)(v15 - 1) > 4 )
  {
    if ( v15 == 8 )
    {
      v16 = (unsigned int)(*((_DWORD *)a1 + 176) - 1);
      v34[2] = 5;
      if ( (_DWORD)v9 != (_DWORD)v16
        && *(_DWORD *)(2400 * v16 + v6 + 2336)
        && (*(_DWORD *)(2400 * v16 + v6 + 2344) & 2) != 0 )
      {
        v13 |= 0x10u;
        v34[5] = v13;
      }
    }
  }
  else
  {
    v34[2] = 2;
  }
  if ( (v12 & 0x1000) != 0 )
  {
    gIsPTPButtonDown = 0;
    v27 = 1;
  }
  else
  {
    v17 = AddSimulatedPointerDeviceData(a1, v9, (struct tagPOINTEREVENTINT *)v34, (CHAR **)&v32, &v28);
    v10 = v32;
    if ( v17 >= 0 )
      PushW32ThreadLock((__int64)v32, v33, (__int64)Win32FreePool);
    v13 = v34[5];
  }
  v18 = *((_DWORD *)a1 + 59);
  v19 = v30;
  *(_OWORD *)&v34[28] = *(_OWORD *)&v34[32];
  if ( (v18 & 0x80u) != 0 )
  {
    v20 = *((_DWORD *)a1 + 355);
    if ( v20 >= v7 )
    {
      v21 = *((_DWORD *)a1 + 359);
      if ( v21 )
        v7 = v20 + (v21 >> 3);
      else
        v7 = v20 + 8;
    }
  }
  else
  {
    SimulatedPointerDeviceScanTime(a1, v30, &v29);
    v7 = v29;
  }
  *(_QWORD *)&v34[6] = *((_QWORD *)a1 + 90);
  LOWORD(v34[0]) = a5;
  v22 = *((_DWORD *)a1 + 6) - 6;
  v34[18] = v7;
  *(_QWORD *)&v34[22] = v19;
  if ( v22 <= 1 )
  {
    v34[27] = 0;
    v34[2] = 3;
  }
  v23 = *((_QWORD *)a1 + 85);
  v24 = *(_DWORD *)(v23 + v11 + 2392);
  v25 = -__CFSHR__(v24, 11);
  if ( (v24 & 0x20) != 0 )
  {
    *(_DWORD *)(v23 + v11 + 2392) = v24 & 0xFFFFFFBF;
    if ( *((_DWORD *)a1 + 6) == 8 )
    {
      v26 = *((_QWORD *)a1 + 85);
      if ( (*(_DWORD *)(v26 + v11 + 2392) & 0x800) != 0 )
        EtwTraceTouchPadConfidenceUpped(*(unsigned int *)(v26 + 2400 * v9));
    }
  }
  else
  {
    RemoveContactFromActiveList(a1);
  }
  if ( (v31 & 2) != 0 )
  {
    v34[5] = v13 | 0x40000;
    if ( !v25 )
      DecActiveContacts(&gActivePointerDeviceList);
    if ( (unsigned int)(*((_DWORD *)a1 + 6) - 6) <= 1 )
      --gSqmPenDownCount;
  }
  else
  {
    v34[5] = v13 | 0x20000;
  }
  xxxProcessPointerEvent(
    1uLL,
    0,
    (unsigned int)v34,
    (struct tagPOINTEREVENTINT *)v28,
    (unsigned int)v10,
    -__CFSHR__(*((_DWORD *)a1 + 59), 4),
    -__CFSHR__(*((_DWORD *)a1 + 59), 5),
    v27,
    v19);
  if ( v10 )
  {
    PopW32ThreadLock(v33);
    Win32FreePool(v10);
  }
}
