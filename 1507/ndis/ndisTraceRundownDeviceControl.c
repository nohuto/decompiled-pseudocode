/*
 * XREFs of ndisTraceRundownDeviceControl @ 0x1C00AD174
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C00E5000 (ndisHandlePnPRequest.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C003DCF4 (WPP_SF_d.c)
 *     ndisTraceRundownReference @ 0x1C00AD344 (ndisTraceRundownReference.c)
 *     ndisTraceRundownConfirmInitialReference @ 0x1C00AD4EC (ndisTraceRundownConfirmInitialReference.c)
 */

__int64 __fastcall ndisTraceRundownDeviceControl(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v11; // rcx
  unsigned __int16 v12; // cx
  unsigned __int16 v13; // cx
  unsigned __int16 v14; // cx

  KeEnterCriticalRegion();
  if ( *(_DWORD *)(a2 + 24) == 1507840 )
  {
    if ( !*(_BYTE *)a3 )
    {
      if ( (unsigned __int8)byte_1C0085322 >= 2u )
      {
        v12 = 10;
        goto LABEL_40;
      }
      goto LABEL_41;
    }
    v8 = ndisTraceRundownReference();
    v7 = v8;
    if ( v8 >= 0 || v8 == -1072037859 || v8 == -1072037851 )
    {
      ExAcquirePushLockExclusiveEx(a3 + 8, 0LL);
      if ( ((v7 + 1072037859) & 0xFFFFFFF7) == 0 )
        *(_BYTE *)(a3 + 20) = 1;
      ++*(_DWORD *)(a3 + 16);
      v9 = a3 + 8;
      goto LABEL_15;
    }
    if ( (unsigned __int8)byte_1C0085322 < 2u )
      goto LABEL_16;
    v14 = 11;
LABEL_45:
    WPP_SF_d(v14, &WPP_98be5e8eac0fef6790683cac5c76438b_Traceguids, v8);
    goto LABEL_16;
  }
  if ( *(_DWORD *)(a2 + 24) == 1507844 )
  {
    if ( !*(_BYTE *)a3 )
    {
      if ( (unsigned __int8)byte_1C0085322 >= 2u )
      {
        v12 = 12;
        goto LABEL_40;
      }
LABEL_41:
      v7 = -1073741790;
      goto LABEL_16;
    }
    ExAcquirePushLockSharedEx(a3 + 8, 0LL);
    v11 = a3 + 8;
    if ( !*(_BYTE *)(a3 + 20) )
    {
      ExReleasePushLockSharedEx(v11);
      if ( (unsigned __int8)byte_1C0085322 >= 2u )
      {
        v13 = 13;
        goto LABEL_34;
      }
LABEL_35:
      v7 = -1073741808;
      goto LABEL_16;
    }
    ExReleasePushLockSharedEx(v11);
    v8 = ndisTraceRundownConfirmInitialReference();
    v7 = v8;
    if ( v8 >= 0 )
    {
      ExAcquirePushLockExclusiveEx(a3 + 8, 0LL);
      v9 = a3 + 8;
      *(_BYTE *)(a3 + 20) = 0;
LABEL_15:
      ExReleasePushLockExclusiveEx(v9, 0LL);
      goto LABEL_16;
    }
    if ( (unsigned __int8)byte_1C0085322 < 2u )
      goto LABEL_16;
    v14 = 14;
    goto LABEL_45;
  }
  if ( *(_DWORD *)(a2 + 24) != 1507848 )
  {
    v7 = -1073741822;
    goto LABEL_16;
  }
  if ( !*(_BYTE *)a3 )
  {
    if ( (unsigned __int8)byte_1C0085322 >= 2u )
    {
      v12 = 15;
LABEL_40:
      WPP_SF_(v12, &WPP_98be5e8eac0fef6790683cac5c76438b_Traceguids);
      goto LABEL_41;
    }
    goto LABEL_41;
  }
  ExAcquirePushLockExclusiveEx(a3 + 8, 0LL);
  v5 = *(_DWORD *)(a3 + 16);
  if ( !v5 )
  {
    ExReleasePushLockExclusiveEx(a3 + 8, 0LL);
    if ( (unsigned __int8)byte_1C0085322 >= 2u )
    {
      v13 = 16;
LABEL_34:
      WPP_SF_(v13, &WPP_98be5e8eac0fef6790683cac5c76438b_Traceguids);
      goto LABEL_35;
    }
    goto LABEL_35;
  }
  v6 = v5 - 1;
  *(_DWORD *)(a3 + 16) = v6;
  if ( !v6 )
    *(_BYTE *)(a3 + 20) = 0;
  ExReleasePushLockExclusiveEx(a3 + 8, 0LL);
  ExAcquirePushLockExclusiveEx(&qword_1C00859C8, 0LL);
  if ( _InterlockedExchangeAdd(&dword_1C0100004, 0xFFFFFFFF) == 1 )
  {
    dword_1C0100000 &= 0xFFFFFFF9;
    KeSetEvent(&Event, 0, 0);
    dword_1C0100000 |= 1u;
    KeSetCoalescableTimer(&Timer, (LARGE_INTEGER)-100000000LL, 0, 0x1F4u, &Dpc);
    if ( (unsigned __int8)byte_1C0085322 >= 5u )
      WPP_SF_(0x1Bu, &WPP_98be5e8eac0fef6790683cac5c76438b_Traceguids);
  }
  ExReleasePushLockExclusiveEx(&qword_1C00859C8, 0LL);
  v7 = 0;
LABEL_16:
  KeLeaveCriticalRegion();
  return v7;
}
