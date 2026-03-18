/*
 * XREFs of PiDevCfgQueryObjectProperties @ 0x1405B3DCC
 * Callers:
 *     PiDevCfgProcessDevice @ 0x14058793C (PiDevCfgProcessDevice.c)
 *     PiDevCfgConfigureDevice @ 0x140587D2C (PiDevCfgConfigureDevice.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140587FA4 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgResolveDriverDependencies @ 0x140588148 (PiDevCfgResolveDriverDependencies.c)
 *     PiDevCfgQueryDriverNode @ 0x140588D38 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgGetDriverPackageId @ 0x1405893D8 (PiDevCfgGetDriverPackageId.c)
 *     PpDevCfgProcessDeviceClass @ 0x140589730 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x140589A64 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgInitDeviceContext @ 0x14058A12C (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140682C5C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14068606C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406871F0 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgLogDeviceStarted @ 0x140687ACC (PiDevCfgLogDeviceStarted.c)
 *     PiDevCfgResolveDeviceDependencies @ 0x1406893E8 (PiDevCfgResolveDeviceDependencies.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14068CF4C (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgInit @ 0x1407DC428 (PpDevCfgInit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x140438FD0 (_PnpGetObjectProperty.c)
 *     _PnpOpenObjectRegKey @ 0x14043BAF4 (_PnpOpenObjectRegKey.c)
 *     ExpAllocateStringRoutine @ 0x1404FFFAC (ExpAllocateStringRoutine.c)
 */

__int64 __fastcall PiDevCfgQueryObjectProperties(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        void *a4,
        __int64 a5,
        unsigned int a6)
{
  int ObjectProperty; // ebx
  PVOID v7; // r15
  int v8; // r13d
  __int64 v9; // rdi
  int v10; // eax
  UNICODE_STRING *v11; // r14
  wchar_t *Buffer; // rsi
  unsigned int MaximumLength; // r12d
  HANDLE v14; // r9
  SIZE_T v15; // rcx
  wchar_t *StringRoutine; // rax
  wchar_t *v18; // rdx
  bool v19; // zf
  PVOID PoolWithTag; // rax
  int v21; // [rsp+68h] [rbp-19h] BYREF
  int v22; // [rsp+6Ch] [rbp-15h]
  HANDLE Handle; // [rsp+70h] [rbp-11h] BYREF
  __int64 v24; // [rsp+78h] [rbp-9h]
  unsigned int Size; // [rsp+D8h] [rbp+57h] BYREF
  int Size_4; // [rsp+DCh] [rbp+5Bh]
  __int64 v27; // [rsp+E0h] [rbp+5Fh]
  unsigned int v28; // [rsp+E8h] [rbp+67h]
  void *v29; // [rsp+F0h] [rbp+6Fh]

  v29 = a4;
  v28 = a3;
  v27 = a2;
  Size_4 = HIDWORD(a1);
  v24 = *(_QWORD *)&PiPnpRtlCtx;
  ObjectProperty = 0;
  Handle = 0LL;
  v7 = 0LL;
  v21 = 1;
  v8 = 0;
  Size = 0;
  if ( !a4 )
  {
    ObjectProperty = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, a2, a3, 33554433, 0, (__int64)&Handle, 0LL, 0);
    if ( ObjectProperty < 0 )
      goto LABEL_40;
  }
  v22 = 0;
  if ( !a6 )
    goto LABEL_40;
  v9 = a5 + 8;
  while ( 2 )
  {
    v10 = *(_DWORD *)(v9 + 20);
    if ( (v10 & 4) != 0 )
    {
      v11 = *(UNICODE_STRING **)(v9 + 8);
      Buffer = v11->Buffer;
      MaximumLength = v11->MaximumLength;
    }
    else
    {
      Buffer = *(wchar_t **)(v9 + 8);
      v11 = 0LL;
      MaximumLength = *(_DWORD *)(v9 + 16);
    }
    if ( (v10 & 2) == 0 )
    {
      while ( 1 )
      {
        v14 = Handle;
        if ( v29 )
          v14 = v29;
        ObjectProperty = PnpGetObjectProperty(
                           v24,
                           v27,
                           v28,
                           (__int64)v14,
                           0LL,
                           *(_QWORD *)(v9 - 8),
                           (__int64)&v21,
                           (__int64)Buffer,
                           MaximumLength,
                           (__int64)&Size,
                           0);
        if ( ObjectProperty != -1073741789 )
          goto LABEL_14;
        if ( (*(_DWORD *)(v9 + 20) & 2) == 0 )
          goto LABEL_36;
        if ( Size <= MaximumLength )
        {
          ObjectProperty = -1073741595;
          goto LABEL_36;
        }
        ExFreePoolWithTag(v7, 0);
        v8 = Size;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x63647050u);
        v7 = PoolWithTag;
        if ( !PoolWithTag )
          break;
        Buffer = (wchar_t *)PoolWithTag;
LABEL_10:
        MaximumLength = v8;
      }
      ObjectProperty = -1073741670;
LABEL_14:
      if ( ObjectProperty == -1073741670 )
        goto LABEL_38;
      if ( ObjectProperty >= 0 )
      {
        v15 = Size;
        if ( !v21 )
        {
          *(_DWORD *)v9 = 0;
          goto LABEL_22;
        }
        if ( v21 == *(_DWORD *)v9 )
        {
          if ( v21 == 18 || v21 == 20 || v21 == 25 )
          {
            if ( Size >= 2 )
            {
              v19 = Buffer[((unsigned __int64)Size >> 1) - 1] == 0;
              goto LABEL_58;
            }
LABEL_73:
            ObjectProperty = -1073741823;
          }
          else if ( v21 == 8210
                 && (Size < 4 || Buffer[((unsigned __int64)Size >> 1) - 1] || Buffer[((unsigned __int64)Size >> 1) - 2]) )
          {
            if ( Size != 2 )
              goto LABEL_73;
            v19 = *Buffer == 0;
LABEL_58:
            if ( !v19 )
              goto LABEL_73;
          }
LABEL_22:
          if ( ObjectProperty >= 0 )
          {
            if ( v11 && (unsigned int)v15 > 0xFFFE )
              ObjectProperty = -2147483643;
            if ( ObjectProperty >= 0 )
            {
              if ( (*(_DWORD *)(v9 + 20) & 2) != 0 )
              {
                if ( v11 )
                {
                  StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v15);
                  v11->Buffer = StringRoutine;
                  if ( StringRoutine )
                  {
                    v11->MaximumLength = Size;
                    goto LABEL_31;
                  }
LABEL_75:
                  ObjectProperty = -1073741670;
                  goto LABEL_38;
                }
                StringRoutine = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v15, 0x63647050u);
                Buffer = StringRoutine;
                if ( !StringRoutine )
                  goto LABEL_75;
LABEL_31:
                memmove(StringRoutine, v7, Size);
                LODWORD(v15) = Size;
              }
              if ( v11 )
              {
                v11->Length = v15;
                if ( v21 != 8210 )
                {
                  v18 = v11->Buffer;
                  if ( v18 )
                  {
                    if ( (unsigned __int16)Size >= 2u && !v18[((unsigned __int64)(unsigned __int16)Size >> 1) - 1] )
                      v11->Length = Size - 2;
                  }
                }
              }
              else
              {
                if ( (*(_DWORD *)(v9 + 20) & 2) != 0 )
                {
                  **(_QWORD **)(v9 + 8) = Buffer;
                  LODWORD(v15) = Size;
                }
                *(_DWORD *)(v9 + 16) = v15;
              }
            }
          }
        }
        else
        {
          ObjectProperty = -1073741823;
        }
      }
LABEL_36:
      *(_DWORD *)(v9 + 24) = ObjectProperty;
      if ( ObjectProperty < 0 )
      {
        if ( (*(_DWORD *)(v9 + 20) & 8) != 0 )
        {
          if ( v11 )
          {
            RtlInitUnicodeString(v11, 0LL);
          }
          else if ( Buffer )
          {
            memset(Buffer, 0, MaximumLength);
          }
        }
        if ( (*(_DWORD *)(v9 + 20) & 1) != 0 )
        {
LABEL_38:
          if ( v7 )
            ExFreePoolWithTag(v7, 0);
          goto LABEL_40;
        }
        ObjectProperty = 0;
      }
      v9 += 40LL;
      if ( ++v22 < a6 )
        continue;
      goto LABEL_38;
    }
    break;
  }
  if ( v7 || (v8 = 260, (v7 = ExAllocatePoolWithTag(PagedPool, 0x104uLL, 0x63647050u)) != 0LL) )
  {
    Buffer = (wchar_t *)v7;
    goto LABEL_10;
  }
  ObjectProperty = -1073741670;
LABEL_40:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)ObjectProperty;
}
