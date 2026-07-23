/*
 * XREFs of PiDevCfgQueryObjectProperties @ 0x14057AE94
 * Callers:
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140632C24 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgConfigureDevice @ 0x1406332C8 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1406383DC (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgGetDriverPackageId @ 0x140639094 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgInitDeviceContext @ 0x140639568 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406399B4 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgLogDeviceStarted @ 0x14063A2D0 (PiDevCfgLogDeviceStarted.c)
 *     PiDevCfgProcessDevice @ 0x14063B1DC (PiDevCfgProcessDevice.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x14063BE34 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgQueryDriverNode @ 0x14063C2F0 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgResolveDeviceDependencies @ 0x14063DBB0 (PiDevCfgResolveDeviceDependencies.c)
 *     PiDevCfgResolveDriverDependencies @ 0x14063DE54 (PiDevCfgResolveDriverDependencies.c)
 *     PpDevCfgProcessDeviceClass @ 0x140641444 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x140641768 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x140641DE4 (PpDevCfgProcessDeviceReset.c)
 *     PpDevCfgInit @ 0x1407B8124 (PpDevCfgInit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PnpValidateMultiSzData @ 0x1401CF37C (PnpValidateMultiSzData.c)
 *     PnpValidateStringData @ 0x1401CF488 (PnpValidateStringData.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExpAllocateStringRoutine @ 0x1403F6F7C (ExpAllocateStringRoutine.c)
 *     _PnpOpenObjectRegKey @ 0x1404DF2D0 (_PnpOpenObjectRegKey.c)
 *     _PnpGetObjectProperty @ 0x1404E1740 (_PnpGetObjectProperty.c)
 */

__int64 __fastcall PiDevCfgQueryObjectProperties(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        void *a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v6; // r10
  int ObjectProperty; // ebx
  void *v8; // r14
  unsigned int v9; // r13d
  int v10; // eax
  __int64 v11; // rdi
  int v12; // eax
  wchar_t *Buffer; // r15
  UNICODE_STRING *v14; // rsi
  unsigned int MaximumLength; // r12d
  HANDLE v16; // r9
  PVOID v18; // rax
  PVOID PoolWithTag; // rax
  SIZE_T v20; // rdx
  wchar_t *StringRoutine; // rax
  wchar_t *v22; // rdx
  int v23; // [rsp+68h] [rbp-19h] BYREF
  int v24; // [rsp+6Ch] [rbp-15h]
  HANDLE Handle; // [rsp+70h] [rbp-11h] BYREF
  __int64 v26; // [rsp+78h] [rbp-9h]
  unsigned int NumberOfBytes; // [rsp+D8h] [rbp+57h] BYREF
  int NumberOfBytes_4; // [rsp+DCh] [rbp+5Bh]
  __int64 v29; // [rsp+E0h] [rbp+5Fh]
  unsigned int v30; // [rsp+E8h] [rbp+67h]
  void *v31; // [rsp+F0h] [rbp+6Fh]

  v31 = a4;
  v30 = a3;
  v29 = a2;
  NumberOfBytes_4 = HIDWORD(a1);
  v6 = 0LL;
  v26 = *(_QWORD *)&PiPnpRtlCtx;
  ObjectProperty = 0;
  Handle = 0LL;
  v8 = 0LL;
  v23 = 1;
  v9 = 0;
  NumberOfBytes = 0;
  if ( !a4 )
  {
    v10 = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, a2, a3, 33554433, 0, (__int64)&Handle, 0LL, 0);
    v6 = 0LL;
    ObjectProperty = v10;
    if ( v10 < 0 )
      goto LABEL_21;
  }
  v24 = 0;
  if ( !a6 )
    goto LABEL_21;
  v11 = a5 + 8;
  while ( 1 )
  {
    v12 = *(_DWORD *)(v11 + 20);
    if ( (v12 & 4) != 0 )
    {
      v14 = *(UNICODE_STRING **)(v11 + 8);
      Buffer = v14->Buffer;
      MaximumLength = v14->MaximumLength;
    }
    else
    {
      Buffer = *(wchar_t **)(v11 + 8);
      v14 = (UNICODE_STRING *)v6;
      MaximumLength = *(_DWORD *)(v11 + 16);
    }
    if ( (v12 & 2) != 0 )
      break;
    while ( 1 )
    {
      v16 = Handle;
      if ( v31 )
        v16 = v31;
      ObjectProperty = PnpGetObjectProperty(
                         v26,
                         v29,
                         v30,
                         (__int64)v16,
                         v6,
                         *(_QWORD *)(v11 - 8),
                         (__int64)&v23,
                         (__int64)Buffer,
                         MaximumLength,
                         (__int64)&NumberOfBytes,
                         v6);
      if ( ObjectProperty != -1073741789 )
      {
        v6 = 0LL;
        goto LABEL_12;
      }
      if ( (*(_DWORD *)(v11 + 20) & 2) == 0 )
        goto LABEL_36;
      if ( NumberOfBytes <= MaximumLength )
      {
        ObjectProperty = -1073741595;
LABEL_36:
        v6 = 0LL;
        goto LABEL_14;
      }
      ExFreePoolWithTag(v8, 0);
      v9 = NumberOfBytes;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x63647050u);
      v6 = 0LL;
      v8 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      Buffer = (wchar_t *)PoolWithTag;
LABEL_30:
      MaximumLength = v9;
    }
    ObjectProperty = -1073741670;
LABEL_12:
    if ( ObjectProperty == -1073741670 )
      goto LABEL_19;
    if ( ObjectProperty >= 0 )
    {
      v20 = NumberOfBytes;
      if ( v23 )
      {
        if ( v23 != *(_DWORD *)v11 )
        {
          ObjectProperty = -1073741823;
          goto LABEL_14;
        }
        if ( v23 == 18 || v23 == 20 || v23 == 25 )
        {
          if ( !PnpValidateStringData((__int64)Buffer, NumberOfBytes) )
            ObjectProperty = -1073741823;
        }
        else if ( v23 == 8210 && !(unsigned __int8)PnpValidateMultiSzData(Buffer, NumberOfBytes) )
        {
          ObjectProperty = -1073741823;
        }
      }
      else
      {
        *(_DWORD *)v11 = 0;
      }
      if ( ObjectProperty >= 0 )
      {
        if ( v14 && (unsigned int)v20 > 0xFFFE )
          ObjectProperty = -2147483643;
        if ( ObjectProperty >= 0 )
        {
          if ( (*(_DWORD *)(v11 + 20) & 2) != 0 )
          {
            if ( v14 )
            {
              StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v20);
              v14->Buffer = StringRoutine;
              if ( !StringRoutine )
                goto LABEL_74;
              v14->MaximumLength = NumberOfBytes;
            }
            else
            {
              StringRoutine = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v20, 0x63647050u);
              Buffer = StringRoutine;
              if ( !StringRoutine )
              {
LABEL_74:
                ObjectProperty = -1073741670;
LABEL_19:
                if ( v8 )
                  ExFreePoolWithTag(v8, 0);
                goto LABEL_21;
              }
            }
            memmove(StringRoutine, v8, NumberOfBytes);
            LODWORD(v20) = NumberOfBytes;
            v6 = 0LL;
          }
          if ( v14 )
          {
            v14->Length = v20;
            if ( v23 != 8210 )
            {
              v22 = v14->Buffer;
              if ( v22 )
              {
                if ( (unsigned __int16)NumberOfBytes >= 2u
                  && v22[((unsigned __int64)(unsigned __int16)NumberOfBytes >> 1) - 1] == (_WORD)v6 )
                {
                  v14->Length = NumberOfBytes - 2;
                }
              }
            }
          }
          else
          {
            if ( (*(_DWORD *)(v11 + 20) & 2) != 0 )
            {
              **(_QWORD **)(v11 + 8) = Buffer;
              LODWORD(v20) = NumberOfBytes;
            }
            *(_DWORD *)(v11 + 16) = v20;
          }
        }
      }
    }
LABEL_14:
    *(_DWORD *)(v11 + 24) = ObjectProperty;
    if ( ObjectProperty < 0 )
    {
      if ( (*(_DWORD *)(v11 + 20) & 8) == 0 )
      {
LABEL_16:
        if ( (*(_DWORD *)(v11 + 20) & 1) != 0 )
          goto LABEL_19;
        ObjectProperty = v6;
        goto LABEL_18;
      }
      if ( v14 )
      {
        RtlInitUnicodeString(v14, 0LL);
      }
      else
      {
        if ( !Buffer )
          goto LABEL_16;
        memset(Buffer, 0, MaximumLength);
      }
      v6 = 0LL;
      goto LABEL_16;
    }
LABEL_18:
    v11 += 40LL;
    if ( ++v24 >= a6 )
      goto LABEL_19;
  }
  if ( v8 || (v9 = 260, v18 = ExAllocatePoolWithTag(PagedPool, 0x104uLL, 0x63647050u), v6 = 0LL, (v8 = v18) != 0LL) )
  {
    Buffer = (wchar_t *)v8;
    goto LABEL_30;
  }
  ObjectProperty = -1073741670;
LABEL_21:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)ObjectProperty;
}
