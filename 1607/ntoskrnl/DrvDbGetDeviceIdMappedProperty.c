/*
 * XREFs of DrvDbGetDeviceIdMappedProperty @ 0x1404B8CDC
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x1404B8C04 (DrvDbDispatchDeviceId.c)
 * Callees:
 *     wcschr @ 0x14014F504 (wcschr.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1404B8F1C (DrvDbGetDeviceIdDriverInfMatches.c)
 *     DrvDbOpenObjectRegKey @ 0x1404DEEA4 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetRegValueMappedProperty @ 0x1404E6F3C (DrvDbGetRegValueMappedProperty.c)
 */

__int64 __fastcall DrvDbGetDeviceIdMappedProperty(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int a7,
        int *a8)
{
  int v12; // r11d
  int v13; // ecx
  __int64 v14; // rax
  char v15; // di
  wchar_t *v16; // rax
  _QWORD *v17; // r12
  int v18; // eax
  int v19; // ecx
  int RegValueMappedProperty; // ebx
  unsigned __int64 v21; // rax
  int v22; // ecx
  int v23; // edx
  __int64 v25; // rax
  __int64 v26; // rax
  wchar_t *v27; // rax
  int v28; // eax
  unsigned int v29; // edx
  __int64 **i; // r8
  __int64 *v31; // r10
  __int64 v32; // rcx
  int v33; // ecx
  __int64 **v34; // rdi
  int v35; // [rsp+40h] [rbp-10h] BYREF
  int v36; // [rsp+44h] [rbp-Ch]
  HANDLE Handle; // [rsp+48h] [rbp-8h] BYREF
  char v39; // [rsp+A8h] [rbp+58h]
  char v40; // [rsp+C8h] [rbp+78h]

  Handle = 0LL;
  v35 = 0;
  *a5 = 0;
  *a8 = 0;
  v12 = *(_DWORD *)(a4 + 16);
  v13 = DEVPKEY_DeviceId_DriverInfMatches;
  v36 = 0;
  v39 = 0;
  if ( v12 == 3 )
  {
    v25 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfMatches;
    if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfMatches )
      v25 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v25 )
      goto LABEL_46;
  }
  if ( v12 != 2 )
    goto LABEL_60;
  v14 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfNames;
  if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfNames )
    v14 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  if ( v14 )
  {
LABEL_60:
    v29 = 0;
    for ( i = &off_14025D798; ; i += 5 )
    {
      v31 = *i;
      if ( *((_DWORD *)*i + 4) == v12 )
      {
        v32 = *v31 - *(_QWORD *)a4;
        if ( *v31 == *(_QWORD *)a4 )
          v32 = v31[1] - *(_QWORD *)(a4 + 8);
        if ( !v32 )
          break;
      }
      if ( ++v29 )
        return (unsigned int)-1073741802;
    }
    v33 = 5 * v29;
    v34 = &(&off_14025D798)[5 * v29];
    if ( v34 )
    {
      if ( !a3 )
      {
        RegValueMappedProperty = DrvDbOpenObjectRegKey(a1, 0, 5, a2, 1, 0, (__int64)&Handle, 0LL);
        if ( RegValueMappedProperty < 0 )
          goto LABEL_33;
        LODWORD(a3) = (_DWORD)Handle;
      }
      RegValueMappedProperty = DrvDbGetRegValueMappedProperty(v33, a3, (_DWORD)v34, (_DWORD)a5, a6, a7, (__int64)a8);
      goto LABEL_33;
    }
    return (unsigned int)-1073741802;
  }
  else
  {
LABEL_46:
    if ( v12 != 3 )
      goto LABEL_7;
    v26 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfMatches;
    if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfMatches )
      v26 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( v26 )
    {
LABEL_7:
      v15 = 0;
      v40 = 0;
    }
    else
    {
      v15 = 1;
      v40 = 1;
    }
    if ( *(_WORD *)a2 != 64 || (v27 = wcschr((const wchar_t *)(a2 + 2), 0x3Au)) == 0LL || (v16 = v27 + 1) == 0LL )
      v16 = (wchar_t *)a2;
    if ( v16 == (wchar_t *)a2 && !*(_QWORD *)(a1 + 40) )
    {
      v17 = *(_QWORD **)(a1 + 16);
      if ( v17 == (_QWORD *)(a1 + 16) )
        goto LABEL_32;
      while ( 1 )
      {
        v18 = DrvDbOpenObjectRegKey(a1, (_DWORD)v17, 5, a2, 1, 0, (__int64)&Handle, 0LL);
        RegValueMappedProperty = v18;
        if ( v18 >= 0 )
        {
          v39 = 1;
          RegValueMappedProperty = DrvDbGetDeviceIdDriverInfMatches(
                                     v19,
                                     (_DWORD)Handle,
                                     v36 + (int)a6,
                                     (a7 - v36) >> 1,
                                     (__int64)&v35,
                                     v40);
          ZwClose(Handle);
          Handle = 0LL;
          if ( RegValueMappedProperty >= 0 )
            goto LABEL_25;
          if ( RegValueMappedProperty != -1073741275 )
          {
            if ( RegValueMappedProperty != -1073741789 )
            {
LABEL_17:
              if ( (int)(RegValueMappedProperty + 0x80000000) >= 0 && RegValueMappedProperty != -1073741789 )
                goto LABEL_33;
              if ( v39 )
              {
                if ( *a8 )
                {
                  *a5 = 8210;
                  *a8 += 2;
                  v21 = (unsigned int)*a8;
                  if ( a6 && (unsigned int)v21 <= a7 )
                    *(_WORD *)(a6 + 2 * (v21 >> 1) - 2) = 0;
                  else
                    RegValueMappedProperty = -1073741789;
                }
                else
                {
                  RegValueMappedProperty = -1073741275;
                }
                goto LABEL_33;
              }
LABEL_32:
              RegValueMappedProperty = -1073741772;
              goto LABEL_33;
            }
LABEL_25:
            v22 = 2 * v35;
            if ( (unsigned int)(2 * v35) > 2 )
              v22 -= 2;
            if ( a6 )
            {
              v23 = v36;
              if ( v36 + v22 < a7 )
                v23 = v36 + v22;
              v36 = v23;
            }
            *a8 += v22;
            goto LABEL_16;
          }
        }
        else if ( v18 != -1073741772 )
        {
          goto LABEL_17;
        }
        RegValueMappedProperty = 0;
LABEL_16:
        v17 = (_QWORD *)*v17;
        if ( v17 == (_QWORD *)(a1 + 16) )
          goto LABEL_17;
      }
    }
    if ( a3 == -1 )
      a3 = 0LL;
    if ( !a3 )
    {
      RegValueMappedProperty = DrvDbOpenObjectRegKey(a1, 0, 5, a2, 1, 0, (__int64)&Handle, 0LL);
      if ( RegValueMappedProperty < 0 )
        goto LABEL_33;
      LODWORD(a3) = (_DWORD)Handle;
    }
    RegValueMappedProperty = DrvDbGetDeviceIdDriverInfMatches(v13, a3, a6, a7 >> 1, (__int64)&v35, v15);
    if ( (int)(RegValueMappedProperty + 0x80000000) < 0 || RegValueMappedProperty == -1073741789 )
    {
      v28 = 2 * v35;
      *a5 = 8210;
      *a8 = v28;
    }
LABEL_33:
    if ( Handle )
      ZwClose(Handle);
  }
  return (unsigned int)RegValueMappedProperty;
}
