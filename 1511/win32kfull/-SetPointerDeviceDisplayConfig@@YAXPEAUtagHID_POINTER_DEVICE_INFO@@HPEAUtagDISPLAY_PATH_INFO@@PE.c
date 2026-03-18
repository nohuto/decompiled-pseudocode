/*
 * XREFs of ?SetPointerDeviceDisplayConfig@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@HPEAUtagDISPLAY_PATH_INFO@@PEAUtagQDC_DATA@@@Z @ 0x1C01C81E8
 * Callers:
 *     FindMonitorForDigitizerWithQDCData @ 0x1C01CBFE0 (FindMonitorForDigitizerWithQDCData.c)
 * Callees:
 *     ?NotifyPointerDeviceChangeClients@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UDISPLAYCONFIG_PATH_TARGET_INFO@@UDISPLAYCONFIG_SOURCE_MODE@@H@Z @ 0x1C01C7540 (-NotifyPointerDeviceChangeClients@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UDISPLAYCONFIG_PATH_TARGET.c)
 *     ?UpdatePointerDeviceOrientation@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@W4DISPLAYCONFIG_ROTATION@@@Z @ 0x1C01C8488 (-UpdatePointerDeviceOrientation@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@W4DISPLAYCONFIG_ROTATION@@@Z.c)
 *     EndAllActiveContacts @ 0x1C01CB36C (EndAllActiveContacts.c)
 *     UpdatePointerDeviceScalingInfo @ 0x1C01CE718 (UpdatePointerDeviceScalingInfo.c)
 */

void __fastcall SetPointerDeviceDisplayConfig(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        int a2,
        struct tagDISPLAY_PATH_INFO *a3,
        struct tagQDC_DATA *a4)
{
  struct tagDISPLAY_PATH_INFO *v4; // rdi
  _DWORD *v6; // rsi
  _DWORD *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  BOOL v10; // esi
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int64 v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r9
  __int128 v20; // [rsp+50h] [rbp-58h] BYREF
  int v21; // [rsp+60h] [rbp-48h]
  _OWORD v22[3]; // [rsp+70h] [rbp-38h] BYREF

  v4 = a3;
  if ( a2 )
  {
    v6 = (_DWORD *)((char *)a1 + 744);
    if ( RtlCompareMemory((char *)a1 + 744, (const void *)(*(_QWORD *)a3 + 20LL), 0x30uLL) != 48
      || (v7 = (_DWORD *)*((_QWORD *)v4 + 1), *((_DWORD *)a1 + 198) != v7[4])
      || *((_DWORD *)a1 + 199) != v7[5]
      || *((_DWORD *)a1 + 201) != v7[7]
      || *((_DWORD *)a1 + 202) != v7[8]
      || (a3 = (struct tagDISPLAY_PATH_INFO *)*((unsigned int *)a1 + 213),
          v8 = *((_QWORD *)v4 + 3),
          ((_DWORD)a3 != 0) != (v8 != 0))
      || (_DWORD)a3 && v8 && RtlCompareMemory((char *)a1 + 812, (const void *)(v8 + 16), 0x28uLL) != 40 )
    {
      v9 = *(_QWORD *)v4;
      v10 = *v6 != *(_DWORD *)(*(_QWORD *)v4 + 20LL)
         || *((_DWORD *)a1 + 187) != *(_DWORD *)(v9 + 24)
         || *((_DWORD *)a1 + 188) != *(_DWORD *)(v9 + 28);
      EndAllActiveContacts(a1);
      v11 = *((_QWORD *)v4 + 1);
      *(_OWORD *)((char *)a1 + 124) = *(_OWORD *)(*((_QWORD *)a1 + 35) + 28LL);
      v12 = *(_OWORD *)(v11 + 16);
      v21 = *(_DWORD *)(v11 + 32);
      v13 = *(_QWORD *)v4;
      v20 = v12;
      v14 = *(_OWORD *)(v13 + 36);
      v22[0] = *(_OWORD *)(v13 + 20);
      v15 = *(_OWORD *)(v13 + 52);
      v22[1] = v14;
      v22[2] = v15;
      NotifyPointerDeviceChangeClients(a1, (__int64)v22, &v20, v10);
    }
  }
  v16 = *(_QWORD *)v4;
  *(_OWORD *)((char *)a1 + 744) = *(_OWORD *)(*(_QWORD *)v4 + 20LL);
  *(_OWORD *)((char *)a1 + 760) = *(_OWORD *)(v16 + 36);
  *(_OWORD *)((char *)a1 + 776) = *(_OWORD *)(v16 + 52);
  v17 = *(unsigned int *)(v16 + 40);
  if ( *((_DWORD *)a1 + 181) != (_DWORD)v17 )
    UpdatePointerDeviceOrientation(a1, v17, a3, a4);
  v18 = *((_QWORD *)v4 + 1);
  v19 = *((_QWORD *)v4 + 3);
  *(_OWORD *)((char *)a1 + 792) = *(_OWORD *)(v18 + 16);
  *((_DWORD *)a1 + 202) = *(_DWORD *)(v18 + 32);
  *((_DWORD *)a1 + 213) = v19 != 0;
  if ( v19 )
  {
    *(_OWORD *)((char *)a1 + 812) = *(_OWORD *)(v19 + 16);
    *(_OWORD *)((char *)a1 + 828) = *(_OWORD *)(v19 + 32);
    *(_QWORD *)((char *)a1 + 844) = *(_QWORD *)(v19 + 48);
  }
  UpdatePointerDeviceScalingInfo((_DWORD)a1 + 156, (_DWORD)a1 + 792, *((_QWORD *)v4 + 2), v19, (__int64)a1 + 744);
}
