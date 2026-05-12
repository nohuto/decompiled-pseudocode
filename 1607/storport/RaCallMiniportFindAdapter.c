/*
 * XREFs of RaCallMiniportFindAdapter @ 0x1C000D800
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1C000DA54 (RaidAdapterStartMiniport.c)
 *     RaidAdapterReInitialize @ 0x1C002783C (RaidAdapterReInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1C002AE28 (WPP_SF_.c)
 *     Template_qqqqqqqqqqcccqqtt @ 0x1C002CB50 (Template_qqqqqqqqqqcccqqtt.c)
 *     Template_zzqqq @ 0x1C002CCF0 (Template_zzqqq.c)
 */

__int64 __fastcall RaCallMiniportFindAdapter(PVOID *a1, const GUID *a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 *v5; // r14
  _DWORD *v6; // rbx
  int v7; // ebp
  __int64 v9; // r15
  PVOID v10; // rax
  int v11; // eax
  int v12; // ebp
  _QWORD *v13; // rax
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // r9d
  unsigned int v19; // ebp
  __int64 v20; // rax
  PDEVICE_OBJECT v21; // rcx
  int v22; // ebp
  char v23; // [rsp+D0h] [rbp+8h] BYREF

  v4 = 0;
  v5 = qword_1C001B1E0;
  v23 = 0;
  v6 = a1 + 1;
  v7 = 3;
  if ( a2 )
    v5 = (__int64 *)a2;
  v9 = *((_QWORD *)*a1 + 1);
  if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
    Template_qqqqqqqqqqcccqqtt(
      *((unsigned __int8 *)a1 + 91),
      (unsigned int)&EventAdapterInitPortConfigInfo,
      *((unsigned __int8 *)v6 + 97),
      *v6,
      v6[6],
      *((_BYTE *)a1 + 80),
      *((_BYTE *)v6 + 97),
      *((_BYTE *)a1 + 154),
      v6[51],
      v6[52],
      v6[53],
      v6[48],
      v6[55],
      *((_BYTE *)v6 + 98),
      *((_BYTE *)v6 + 99),
      *((_BYTE *)v6 + 144),
      v6[54],
      v6[40],
      *((_BYTE *)a1 + 91),
      *((_BYTE *)v6 + 196));
  *((_BYTE *)a1 + 248) |= 1u;
  v10 = a1[29];
  LOBYTE(a2) = *((_BYTE *)a1 + 248);
  if ( *(_DWORD *)v10 == 136 )
    goto LABEL_8;
  if ( ((unsigned __int8)a2 & 4) != 0 )
  {
    v11 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64 *, _DWORD *, char *))v10 + 4))(
            (__int64)a1[30] + 16,
            *((_QWORD *)*a1 + 4),
            v9,
            *((_QWORD *)*a1 + 3),
            v5,
            v6,
            &v23);
    goto LABEL_9;
  }
  if ( *(_DWORD *)v10 == 208 )
  {
LABEL_8:
    v11 = (*((__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *, _DWORD *, char *))v10 + 4))(
            (__int64)a1[30] + 16,
            0LL,
            0LL,
            v5,
            v6,
            &v23);
LABEL_9:
    v7 = v11;
  }
  *((_BYTE *)a1 + 248) &= ~1u;
  if ( v7 == 1 && (!*((_BYTE *)v6 + 90) || !*((_BYTE *)v6 + 91) || !*((_BYTE *)v6 + 81) || !*((_BYTE *)v6 + 82)) )
  {
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 10LL, &WPP_2cdf5e3a8b473e064111cab9dd01f326_Traceguids, a4);
        v21 = WPP_GLOBAL_Control;
      }
      if ( v21 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v21->Timer) & 2) != 0 && BYTE1(v21->Timer) >= 2u )
        WPP_SF_(v21->AttachedDevice, 11LL, &WPP_2cdf5e3a8b473e064111cab9dd01f326_Traceguids, a4);
    }
LABEL_48:
    v4 = -1073741438;
    goto LABEL_18;
  }
  if ( !v7 )
  {
    v4 = -1073741275;
    goto LABEL_18;
  }
  v12 = v7 - 1;
  if ( v12 )
  {
    v22 = v12 - 1;
    if ( !v22 )
    {
      v4 = -1073741630;
      goto LABEL_18;
    }
    if ( v22 != 1 )
    {
      v4 = -1073741595;
      goto LABEL_18;
    }
    goto LABEL_48;
  }
  v13 = *a1;
  if ( *((_DWORD *)*a1 + 1224) && v13[613] && v13[614] )
  {
    v19 = 0;
    do
    {
      a3 = v19;
      a2 = (const GUID *)(16LL * v19 + *((_QWORD *)*a1 + 613));
      v20 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 )
        v20 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
      if ( v20 )
        PoRegisterPowerSettingCallback(
          *((PDEVICE_OBJECT *)*a1 + 1),
          a2,
          RaidPowerSettingCallback,
          *a1,
          (PVOID *)(*((_QWORD *)*a1 + 614) + 8LL * v19));
      ++v19;
    }
    while ( v19 < *((_DWORD *)*a1 + 1224) );
  }
LABEL_18:
  v14 = v6[51];
  if ( v14 <= 0x3E8 || (LOBYTE(a2) = *((_BYTE *)v6 + 144), (unsigned __int8)((_BYTE)a2 - 2) <= 2u) )
  {
    if ( v14 < 0x10 )
    {
      if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
        Template_zzqqq(v14, (_DWORD)a2, a3, (unsigned int)L"MaxNumberOfIO", (__int64)L"MaxNumberOfIO", 16, v14, 16);
      v6[51] = 16;
    }
  }
  else
  {
    if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
      Template_zzqqq(
        v14,
        (_DWORD)a2,
        a3,
        (unsigned int)L"MaxNumberOfIO",
        (__int64)L"Dma64BitAddresses",
        (char)a2,
        v14,
        232);
    v6[51] = 1000;
  }
  v15 = v6[52];
  if ( v15 <= 0xFF || (LOBYTE(a2) = *((_BYTE *)v6 + 98), (_BYTE)a2 == 1) )
  {
    if ( v15 < 0x10 )
    {
      if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
        Template_zzqqq(v15, (_DWORD)a2, a3, (unsigned int)L"MaxIOsPerLun", (__int64)L"MaxIOsPerLun", 16, v15, 16);
      v6[52] = 16;
    }
    else
    {
      LODWORD(a2) = v6[51];
      if ( v15 > (unsigned int)a2 )
      {
        if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
          Template_zzqqq(
            v15,
            (_DWORD)a2,
            a3,
            (unsigned int)L"MaxIOsPerLun",
            (__int64)L"MaxNumberOfIO",
            (char)a2,
            v15,
            v6[51]);
        v6[52] = v6[51];
      }
    }
  }
  else
  {
    if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
      Template_zzqqq(v15, (_DWORD)a2, a3, (unsigned int)L"MaxIOsPerLun", (__int64)L"SrbType", (char)a2, v15, 255);
    v6[52] = 255;
  }
  v16 = v6[53];
  v17 = v6[52];
  if ( v16 > v17 )
  {
    if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
      Template_zzqqq(
        v16,
        (_DWORD)a2,
        a3,
        (unsigned int)L"InitialLunQueueDepth",
        (__int64)L"MaxIOsPerLun",
        v17,
        v16,
        v17);
    v17 = v6[52];
    v6[53] = v17;
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
    Template_qqqqqqqqqqcccqqtt(
      v6[6],
      (unsigned int)&EventAdapterFinalPortConfigInfo,
      *((unsigned __int8 *)v6 + 97),
      *v6,
      v6[6],
      *((_BYTE *)v6 + 72),
      *((_BYTE *)v6 + 97),
      *((_BYTE *)v6 + 146),
      v6[51],
      v17,
      v6[53],
      v6[48],
      v6[55],
      *((_BYTE *)v6 + 98),
      *((_BYTE *)v6 + 99),
      *((_BYTE *)v6 + 144),
      v6[54],
      v6[40],
      *((_BYTE *)v6 + 83),
      *((_BYTE *)v6 + 196));
  return v4;
}
