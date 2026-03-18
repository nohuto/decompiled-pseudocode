/*
 * XREFs of DrvDbGetDeviceIdMappedProperty @ 0x1405887F4
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x14058871C (DrvDbDispatchDeviceId.c)
 * Callees:
 *     wcschr @ 0x140173B98 (wcschr.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     DrvDbGetRegValueMappedProperty @ 0x1404DAAE4 (DrvDbGetRegValueMappedProperty.c)
 *     DrvDbOpenObjectRegKey @ 0x1404DDA8C (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x140588A84 (DrvDbGetDeviceIdDriverInfMatches.c)
 */

__int64 __fastcall DrvDbGetDeviceIdMappedProperty(
        __int64 a1,
        __int64 a2,
        HANDLE a3,
        __int64 a4,
        _DWORD *a5,
        _WORD *a6,
        unsigned int a7,
        int *a8)
{
  int v12; // r11d
  int v13; // ecx
  __int64 v14; // rax
  char v15; // di
  wchar_t *v16; // rax
  __int64 *v17; // r12
  int v18; // eax
  int v19; // ecx
  int RegValueMappedProperty; // ebx
  unsigned __int64 v21; // rax
  int v23; // ecx
  int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rax
  wchar_t *v27; // rax
  int v28; // eax
  unsigned int v29; // edx
  __int64 **i; // r8
  __int64 *v31; // r10
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 **v34; // rdi
  __int64 v35; // [rsp+20h] [rbp-30h]
  __int64 v36; // [rsp+28h] [rbp-28h]
  int v37; // [rsp+40h] [rbp-10h] BYREF
  int v38; // [rsp+44h] [rbp-Ch]
  HANDLE Handle; // [rsp+48h] [rbp-8h] BYREF
  char v41; // [rsp+A8h] [rbp+58h]
  char v42; // [rsp+C8h] [rbp+78h]

  Handle = 0LL;
  v37 = 0;
  *a5 = 0;
  *a8 = 0;
  v12 = *(_DWORD *)(a4 + 16);
  v13 = DEVPKEY_DeviceId_DriverInfMatches;
  v38 = 0;
  v41 = 0;
  if ( v12 == 3 )
  {
    v25 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfMatches;
    if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfMatches )
      v25 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( !v25 )
      goto LABEL_40;
  }
  if ( v12 != 2 )
    goto LABEL_61;
  v14 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfNames;
  if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfNames )
    v14 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  if ( v14 )
  {
LABEL_61:
    v29 = 0;
    for ( i = &off_1402AE660; ; i += 5 )
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
    v33 = 5LL * v29;
    v34 = &(&off_1402AE660)[5 * v29];
    if ( v34 )
    {
      if ( !a3 )
      {
        RegValueMappedProperty = DrvDbOpenObjectRegKey((__int64 **)a1, 0LL, 5u, a2, 1, 0, &Handle, 0LL);
        if ( RegValueMappedProperty < 0 )
          goto LABEL_23;
        a3 = Handle;
      }
      RegValueMappedProperty = DrvDbGetRegValueMappedProperty(v33, a3, (__int64)v34, a5, a6, a7, a8);
      goto LABEL_23;
    }
    return (unsigned int)-1073741802;
  }
  else
  {
LABEL_40:
    if ( v12 != 3 )
      goto LABEL_7;
    v26 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfMatches;
    if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfMatches )
      v26 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( v26 )
    {
LABEL_7:
      v15 = 0;
      v42 = 0;
    }
    else
    {
      v15 = 1;
      v42 = 1;
    }
    if ( *(_WORD *)a2 != 64 || (v27 = wcschr((const wchar_t *)(a2 + 2), 0x3Au)) == 0LL || (v16 = v27 + 1) == 0LL )
      v16 = (wchar_t *)a2;
    if ( v16 == (wchar_t *)a2 && !*(_QWORD *)(a1 + 40) )
    {
      v17 = *(__int64 **)(a1 + 16);
      if ( v17 == (__int64 *)(a1 + 16) )
        goto LABEL_48;
      while ( 1 )
      {
        LOBYTE(v36) = 0;
        LODWORD(v35) = 1;
        v18 = DrvDbOpenObjectRegKey((__int64 **)a1, v17, 5u, a2, v35, v36, &Handle, 0LL);
        RegValueMappedProperty = v18;
        if ( v18 >= 0 )
        {
          v41 = 1;
          RegValueMappedProperty = DrvDbGetDeviceIdDriverInfMatches(
                                     v19,
                                     (_DWORD)Handle,
                                     v38 + (int)a6,
                                     (a7 - v38) >> 1,
                                     (__int64)&v37,
                                     v42);
          ZwClose(Handle);
          Handle = 0LL;
          if ( RegValueMappedProperty >= 0 )
            goto LABEL_27;
          if ( RegValueMappedProperty != -1073741275 )
          {
            if ( RegValueMappedProperty != -1073741789 )
            {
LABEL_17:
              if ( (int)(RegValueMappedProperty + 0x80000000) >= 0 && RegValueMappedProperty != -1073741789 )
                goto LABEL_23;
              if ( v41 )
              {
                if ( *a8 )
                {
                  *a5 = 8210;
                  *a8 += 2;
                  v21 = (unsigned int)*a8;
                  if ( a6 && (unsigned int)v21 <= a7 )
                    a6[(v21 >> 1) - 1] = 0;
                  else
                    RegValueMappedProperty = -1073741789;
                }
                else
                {
                  RegValueMappedProperty = -1073741275;
                }
                goto LABEL_23;
              }
LABEL_48:
              RegValueMappedProperty = -1073741772;
              goto LABEL_23;
            }
LABEL_27:
            v23 = 2 * v37;
            if ( (unsigned int)(2 * v37) > 2 )
              v23 -= 2;
            if ( a6 )
            {
              v24 = v38;
              if ( v38 + v23 < a7 )
                v24 = v38 + v23;
              v38 = v24;
            }
            *a8 += v23;
            goto LABEL_16;
          }
        }
        else if ( v18 != -1073741772 )
        {
          goto LABEL_17;
        }
        RegValueMappedProperty = 0;
LABEL_16:
        v17 = (__int64 *)*v17;
        if ( v17 == (__int64 *)(a1 + 16) )
          goto LABEL_17;
      }
    }
    if ( a3 == (HANDLE)-1LL )
      a3 = 0LL;
    if ( !a3 )
    {
      RegValueMappedProperty = DrvDbOpenObjectRegKey((__int64 **)a1, 0LL, 5u, a2, 1, 0, &Handle, 0LL);
      if ( RegValueMappedProperty < 0 )
        goto LABEL_23;
      LODWORD(a3) = (_DWORD)Handle;
    }
    RegValueMappedProperty = DrvDbGetDeviceIdDriverInfMatches(v13, (_DWORD)a3, (_DWORD)a6, a7 >> 1, (__int64)&v37, v15);
    if ( (int)(RegValueMappedProperty + 0x80000000) < 0 || RegValueMappedProperty == -1073741789 )
    {
      v28 = 2 * v37;
      *a5 = 8210;
      *a8 = v28;
    }
LABEL_23:
    if ( Handle )
      ZwClose(Handle);
  }
  return (unsigned int)RegValueMappedProperty;
}
