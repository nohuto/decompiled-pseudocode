/*
 * XREFs of UsbhInternalValidatePlatformCapabilityDescriptor @ 0x1C0052EA8
 * Callers:
 *     UsbhInternalValidateDeviceCapabilityDescriptor @ 0x1C0052CC4 (UsbhInternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

char __fastcall UsbhInternalValidatePlatformCapabilityDescriptor(
        __int64 a1,
        unsigned __int8 *a2,
        ULONG **a3,
        __int64 a4)
{
  char v7; // bp
  unsigned __int8 v9; // al
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r9
  int v13; // r8d
  ULONG v14; // r15d
  unsigned int v15; // r10d
  unsigned int v16; // ecx
  unsigned int v17; // r8d
  _DWORD *v18; // rdx
  unsigned int v19; // r9d
  ULONG *v20; // rbx
  __int64 v21; // r14
  __int64 v22; // rax
  unsigned __int8 v23; // r8
  unsigned __int8 v24; // al

  *a3 = 0LL;
  v7 = 1;
  FdoExt(a1, (__int64)a2, (__int64)a3, a4);
  if ( *a2 < 0x14u )
  {
    Log(a1, 256, 1448100913, *a2, 0LL);
    return 0;
  }
  v9 = a2[3];
  if ( v9 )
    Log(a1, 256, 1448100914, v9, 0LL);
  v10 = *(_QWORD *)(a2 + 4) - *(_QWORD *)&GUID_NULL.Data1;
  if ( !v10 )
    v10 = *(_QWORD *)(a2 + 12) - *(_QWORD *)GUID_NULL.Data4;
  if ( !v10 )
  {
    Log(a1, 256, 1448100915, 0LL, 0LL);
    v7 = 0;
  }
  v11 = *(_QWORD *)(a2 + 4) - *(_QWORD *)&GUID_USB_MSOS20_PLATFORM_CAPABILITY_ID.Data1;
  if ( !v11 )
    v11 = *(_QWORD *)(a2 + 12) - *(_QWORD *)GUID_USB_MSOS20_PLATFORM_CAPABILITY_ID.Data4;
  if ( !v11 )
  {
    v12 = *a2;
    if ( *a2 >= 0x1Cu )
    {
      if ( (((_BYTE)v12 - 4) & 7) == 0 )
      {
        v14 = 0;
        v15 = 0;
        v16 = ((unsigned __int64)(v12 - 28) >> 3) + 1;
        if ( (unsigned int)((unsigned __int64)(v12 - 28) >> 3) == -1 )
        {
LABEL_22:
          if ( !v16 )
            goto LABEL_29;
          v20 = (ULONG *)(a2 + 20);
          v21 = v16;
          do
          {
            if ( *v20 > v14 )
            {
              if ( RtlIsNtDdiVersionAvailable(*v20) )
              {
                v14 = *v20;
                *a3 = v20;
              }
            }
            v20 += 2;
            --v21;
          }
          while ( v21 );
          if ( !v14 )
LABEL_29:
            Log(a1, 256, 1146308915, 0LL, 0LL);
          return v7;
        }
        v17 = 1;
        v18 = a2 + 20;
        while ( 1 )
        {
          v19 = v17;
          if ( v17 < v16 )
            break;
LABEL_21:
          ++v15;
          ++v17;
          v18 += 2;
          if ( v15 >= v16 )
            goto LABEL_22;
        }
        while ( *(_DWORD *)&a2[8 * v19 + 20] != *v18 )
        {
          if ( ++v19 >= v16 )
            goto LABEL_21;
        }
        Log(a1, 256, 1146308913, (unsigned int)*v18, 0LL);
        return 0;
      }
      v13 = 1297105970;
    }
    else
    {
      v13 = 1297105969;
    }
LABEL_41:
    Log(a1, 256, v13, v12, 0LL);
    return 0;
  }
  v22 = *(_QWORD *)(a2 + 4) - *(_QWORD *)&GUID_USB_PLATFORM_FEATURES.Data1;
  if ( !v22 )
    v22 = *(_QWORD *)(a2 + 12) - *(_QWORD *)GUID_USB_PLATFORM_FEATURES.Data4;
  if ( v22 )
    return v7;
  Log(a1, 256, 1146242608, a2[20], *a2);
  v23 = *a2;
  if ( *a2 < 0x1Au )
  {
    v12 = v23;
    v13 = 1146242609;
    goto LABEL_41;
  }
  v24 = a2[20];
  if ( v24 == 1 )
  {
    if ( v23 != 26 )
    {
      v12 = v23;
      v13 = 1146242610;
      goto LABEL_41;
    }
  }
  else if ( !v24 )
  {
    v12 = v23;
    v13 = 1146242611;
    goto LABEL_41;
  }
  return v7;
}
