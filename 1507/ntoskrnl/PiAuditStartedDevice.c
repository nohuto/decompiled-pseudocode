/*
 * XREFs of PiAuditStartedDevice @ 0x1406964A4
 * Callers:
 *     PipProcessStartPhase3 @ 0x14045ED7C (PipProcessStartPhase3.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x140438FD0 (_PnpGetObjectProperty.c)
 *     SeAuditPlugAndPlay @ 0x1406D1DA4 (SeAuditPlugAndPlay.c)
 */

__int64 __fastcall PiAuditStartedDevice(__int64 a1)
{
  __int64 v1; // rdx
  void *v3; // rdi
  void *v4; // rsi
  void *v5; // r14
  int ObjectProperty; // ebx
  SIZE_T i; // rdx
  PVOID PoolWithTag; // rax
  int v9; // eax
  __int16 v10; // ax
  SIZE_T v11; // rdx
  PVOID v12; // rax
  int v13; // eax
  __int16 v14; // ax
  SIZE_T v15; // rdx
  PVOID v16; // rax
  int v17; // eax
  __int16 v18; // ax
  __int64 v19; // rdx
  int v21; // [rsp+68h] [rbp-29h] BYREF
  unsigned int NumberOfBytes; // [rsp+6Ch] [rbp-25h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+70h] [rbp-21h] BYREF
  unsigned int v24; // [rsp+74h] [rbp-1Dh] BYREF
  _BYTE v25[4]; // [rsp+78h] [rbp-19h] BYREF
  int v26; // [rsp+7Ch] [rbp-15h] BYREF
  _WORD v27[4]; // [rsp+80h] [rbp-11h] BYREF
  void *v28; // [rsp+88h] [rbp-9h]
  _WORD v29[4]; // [rsp+90h] [rbp-1h] BYREF
  void *v30; // [rsp+98h] [rbp+7h]
  _WORD v31[4]; // [rsp+A0h] [rbp+Fh] BYREF
  void *v32; // [rsp+A8h] [rbp+17h]
  _BYTE v33[16]; // [rsp+B0h] [rbp+1Fh] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v26 = 1;
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     v1,
                     1u,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_InLocalMachineContainer,
                     (__int64)&v21,
                     (__int64)v25,
                     1,
                     (__int64)&v26,
                     0);
  if ( ObjectProperty < 0 )
    return (unsigned int)ObjectProperty;
  if ( v21 != 17 || v26 != 1 )
    goto LABEL_40;
  if ( v25[0] == 0xFF )
    return (unsigned int)ObjectProperty;
  v24 = 512;
  for ( i = 512LL; ; i = v24 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, i, 0x20207050u);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    v9 = PnpGetObjectProperty(
           *(__int64 *)&PiPnpRtlCtx,
           *(_QWORD *)(a1 + 48),
           1u,
           0LL,
           0LL,
           (__int64)&DEVPKEY_Device_HardwareIds,
           (__int64)&v21,
           (__int64)PoolWithTag,
           v24,
           (__int64)&v24,
           0);
    ObjectProperty = v9;
    if ( v9 != -1073741789 )
      break;
    ExFreePoolWithTag(v4, 0);
  }
  if ( v9 == -1073741275 )
  {
    ExFreePoolWithTag(v4, 0);
    v10 = 0;
    v4 = 0LL;
    v24 = 0;
    goto LABEL_16;
  }
  if ( v9 >= 0 )
  {
    if ( v21 == 8210 )
    {
      v10 = v24;
LABEL_16:
      v29[0] = v10;
      v11 = 512LL;
      v29[1] = v10;
      v30 = v4;
      for ( NumberOfBytes_4 = 512; ; v11 = NumberOfBytes_4 )
      {
        v12 = ExAllocatePoolWithTag(PagedPool, v11, 0x20207050u);
        v3 = v12;
        if ( !v12 )
        {
          ObjectProperty = -1073741670;
          goto LABEL_43;
        }
        v13 = PnpGetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                *(_QWORD *)(a1 + 48),
                1u,
                0LL,
                0LL,
                (__int64)&DEVPKEY_Device_CompatibleIds,
                (__int64)&v21,
                (__int64)v12,
                NumberOfBytes_4,
                (__int64)&NumberOfBytes_4,
                0);
        ObjectProperty = v13;
        if ( v13 != -1073741789 )
          break;
        ExFreePoolWithTag(v3, 0);
      }
      if ( v13 == -1073741275 )
      {
        ExFreePoolWithTag(v3, 0);
        v14 = 0;
        v3 = 0LL;
        NumberOfBytes_4 = 0;
      }
      else
      {
        if ( v13 < 0 )
          goto LABEL_41;
        if ( v21 != 8210 )
          goto LABEL_40;
        v14 = NumberOfBytes_4;
      }
      v15 = 64LL;
      v27[0] = v14;
      NumberOfBytes = 64;
      v27[1] = v14;
      v28 = v3;
      while ( 1 )
      {
        v16 = ExAllocatePoolWithTag(PagedPool, v15, 0x20207050u);
        v5 = v16;
        if ( !v16 )
        {
          ObjectProperty = -1073741670;
          goto LABEL_41;
        }
        v17 = PnpGetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                *(_QWORD *)(a1 + 48),
                1u,
                0LL,
                0LL,
                (__int64)&DEVPKEY_Device_LocationInfo,
                (__int64)&v21,
                (__int64)v16,
                NumberOfBytes,
                (__int64)&NumberOfBytes,
                0);
        ObjectProperty = v17;
        if ( v17 != -1073741789 )
          break;
        ExFreePoolWithTag(v5, 0);
        v15 = NumberOfBytes;
      }
      if ( v17 == -1073741275 )
      {
        ExFreePoolWithTag(v5, 0);
        v18 = 0;
        v5 = 0LL;
        NumberOfBytes = 0;
      }
      else
      {
        if ( v17 < 0 )
          goto LABEL_41;
        if ( v21 != 18 )
          goto LABEL_40;
        v18 = NumberOfBytes;
      }
      v19 = *(_QWORD *)(a1 + 48);
      v31[0] = v18;
      v31[1] = v18;
      v26 = 16;
      v32 = v5;
      ObjectProperty = PnpGetObjectProperty(
                         *(__int64 *)&PiPnpRtlCtx,
                         v19,
                         1u,
                         0LL,
                         0LL,
                         (__int64)&DEVPKEY_Device_ClassGuid,
                         (__int64)&v21,
                         (__int64)v33,
                         16,
                         (__int64)&v26,
                         0);
      if ( ObjectProperty < 0 )
        goto LABEL_41;
      if ( v21 == 13 && v26 == 16 )
      {
        SeAuditPlugAndPlay(v29, v27, v31, v33);
        goto LABEL_41;
      }
LABEL_40:
      ObjectProperty = -1073741823;
LABEL_41:
      if ( v3 )
        ExFreePoolWithTag(v3, 0);
      goto LABEL_43;
    }
    ObjectProperty = -1073741823;
  }
LABEL_43:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)ObjectProperty;
}
