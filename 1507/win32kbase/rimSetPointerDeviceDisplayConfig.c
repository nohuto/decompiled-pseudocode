/*
 * XREFs of rimSetPointerDeviceDisplayConfig @ 0x1C001A170
 * Callers:
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0019D50 (rimFindMonitorForDigitizerWithQDCData.c)
 * Callees:
 *     RIMUpdatePointerDeviceScalingInfo @ 0x1C001A2E0 (RIMUpdatePointerDeviceScalingInfo.c)
 *     RIMEndAllActiveContacts @ 0x1C00C3D88 (RIMEndAllActiveContacts.c)
 *     rimNotifyPointerDeviceChangeClients @ 0x1C00CEAEC (rimNotifyPointerDeviceChangeClients.c)
 *     rimUpdatePointerDeviceOrientation @ 0x1C00CEC10 (rimUpdatePointerDeviceOrientation.c)
 */

__int64 __fastcall rimSetPointerDeviceDisplayConfig(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  _DWORD *v7; // rsi
  _DWORD *v8; // rcx
  int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v15; // rcx
  BOOL v16; // esi
  __int64 v17; // rax
  __int128 v18; // xmm0
  __int64 v19; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // [rsp+50h] [rbp-58h] BYREF
  int v23; // [rsp+60h] [rbp-48h]
  _OWORD v24[3]; // [rsp+70h] [rbp-38h] BYREF

  if ( a3 )
  {
    v7 = (_DWORD *)(a2 + 728);
    if ( RtlCompareMemory((const void *)(a2 + 728), (const void *)(*a4 + 20LL), 0x30uLL) != 48
      || (v8 = (_DWORD *)a4[1], *(_DWORD *)(a2 + 776) != v8[4])
      || *(_DWORD *)(a2 + 780) != v8[5]
      || *(_DWORD *)(a2 + 788) != v8[7]
      || *(_DWORD *)(a2 + 792) != v8[8]
      || (v9 = *(_DWORD *)(a2 + 836), v10 = a4[3], (v9 != 0) != (v10 != 0))
      || v9 && v10 && RtlCompareMemory((const void *)(a2 + 796), (const void *)(v10 + 16), 0x28uLL) != 40 )
    {
      v15 = *a4;
      v16 = *v7 != *(_DWORD *)(*a4 + 20LL)
         || *(_DWORD *)(a2 + 732) != *(_DWORD *)(v15 + 24)
         || *(_DWORD *)(a2 + 736) != *(_DWORD *)(v15 + 28);
      RIMEndAllActiveContacts(a1, a2);
      v17 = a4[1];
      *(_OWORD *)(a2 + 124) = *(_OWORD *)(*(_QWORD *)(a2 + 264) + 28LL);
      v18 = *(_OWORD *)(v17 + 16);
      v23 = *(_DWORD *)(v17 + 32);
      v19 = *a4;
      v22 = v18;
      v20 = *(_OWORD *)(v19 + 36);
      v24[0] = *(_OWORD *)(v19 + 20);
      v21 = *(_OWORD *)(v19 + 52);
      v24[1] = v20;
      v24[2] = v21;
      rimNotifyPointerDeviceChangeClients(a2, v24, &v22, v16);
    }
  }
  v11 = *a4;
  *(_OWORD *)(a2 + 728) = *(_OWORD *)(*a4 + 20LL);
  *(_OWORD *)(a2 + 744) = *(_OWORD *)(v11 + 36);
  *(_OWORD *)(a2 + 760) = *(_OWORD *)(v11 + 52);
  if ( *(_DWORD *)(a2 + 708) != *(_DWORD *)(v11 + 40) )
    rimUpdatePointerDeviceOrientation(a2);
  v12 = a4[1];
  v13 = a4[3];
  *(_OWORD *)(a2 + 776) = *(_OWORD *)(v12 + 16);
  *(_DWORD *)(a2 + 792) = *(_DWORD *)(v12 + 32);
  *(_DWORD *)(a2 + 836) = v13 != 0;
  if ( v13 )
  {
    *(_OWORD *)(a2 + 796) = *(_OWORD *)(v13 + 16);
    *(_OWORD *)(a2 + 812) = *(_OWORD *)(v13 + 32);
    *(_QWORD *)(a2 + 828) = *(_QWORD *)(v13 + 48);
  }
  return RIMUpdatePointerDeviceScalingInfo((int)a2 + 156, (int)a2 + 776, a4[2], v13, a2 + 728);
}
