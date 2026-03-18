/*
 * XREFs of PipCallDriverAddDeviceQueryRoutine @ 0x1405724D8
 * Callers:
 *     PnpCallDriverQueryServiceHelper @ 0x1404E2B34 (PnpCallDriverQueryServiceHelper.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     PipSetDevNodeState @ 0x1400CFB9C (PipSetDevNodeState.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     PipSetDevNodeFlags @ 0x1404E3454 (PipSetDevNodeFlags.c)
 *     PipOpenServiceEnumKeys @ 0x1404E6D00 (PipOpenServiceEnumKeys.c)
 *     IopGetDriverNameFromKeyNode @ 0x1404E76EC (IopGetDriverNameFromKeyNode.c)
 *     PipSetDevNodeProblem @ 0x140538A88 (PipSetDevNodeProblem.c)
 *     IopCallDriverReinitializationRoutines @ 0x140571B94 (IopCallDriverReinitializationRoutines.c)
 *     IopReferenceDriverObjectByName @ 0x1405727F4 (IopReferenceDriverObjectByName.c)
 *     PnpGetServiceStartType @ 0x1405728B0 (PnpGetServiceStartType.c)
 *     PnpIsLegacyDriver @ 0x140572950 (PnpIsLegacyDriver.c)
 *     IopLoadDriver @ 0x140572EA0 (IopLoadDriver.c)
 *     PnpCheckPossibleBootStartDriver @ 0x1405B3D78 (PnpCheckPossibleBootStartDriver.c)
 *     PpInitGetGroupOrderIndex @ 0x1407B97AC (PpInitGetGroupOrderIndex.c)
 *     PnpLoadBootFilterDriver @ 0x1407E91B4 (PnpLoadBootFilterDriver.c)
 */

__int64 __fastcall PipCallDriverAddDeviceQueryRoutine(int a1, const WCHAR *a2, unsigned int a3, __int64 *a4, int a5)
{
  const wchar_t *v5; // rbx
  __int64 result; // rax
  _DWORD *v8; // rsi
  int v9; // r13d
  HANDLE v10; // r15
  __int16 v11; // dx
  char v12; // r14
  int v13; // ecx
  int v14; // eax
  int v15; // ebx
  int DriverNameFromKeyNode; // eax
  int ServiceStartType; // eax
  unsigned int v18; // r14d
  __int64 v19; // rax
  SIZE_T v20; // rdx
  _QWORD *v21; // rdi
  _QWORD *PoolWithTag; // rax
  int Driver; // eax
  int v24; // eax
  void *v25; // rcx
  __int64 v26; // rcx
  int v27; // edx
  int v28; // r8d
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // ecx
  __int64 v32; // rdx
  unsigned __int16 v33; // ax
  REGHANDLE v34; // r14
  char v35; // [rsp+30h] [rbp-91h]
  HANDLE Handle; // [rsp+38h] [rbp-89h] BYREF
  int v37; // [rsp+40h] [rbp-81h] BYREF
  unsigned int v38; // [rsp+44h] [rbp-7Dh] BYREF
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-79h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-69h] BYREF
  int v41; // [rsp+68h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-51h] BYREF
  __int64 v43; // [rsp+80h] [rbp-41h]
  int v44; // [rsp+88h] [rbp-39h]
  int v45; // [rsp+8Ch] [rbp-35h]
  int *v46; // [rsp+90h] [rbp-31h]
  __int64 v47; // [rsp+98h] [rbp-29h]
  int *v48; // [rsp+A0h] [rbp-21h]
  __int64 v49; // [rsp+A8h] [rbp-19h]
  wchar_t *Buffer; // [rsp+B0h] [rbp-11h]
  int v51; // [rsp+B8h] [rbp-9h]
  int v52; // [rsp+BCh] [rbp-5h]
  HANDLE *p_Handle; // [rsp+C0h] [rbp-1h]
  __int64 v54; // [rsp+C8h] [rbp+7h]

  v5 = L"\\Driver\\";
  result = 0LL;
  v37 = 0;
  v8 = 0LL;
  v35 = 0;
  v9 = 0;
  Handle = 0LL;
  v10 = 0LL;
  if ( a1 == 1 && a3 > 2 )
  {
    DestinationString.Length = 0;
    RtlInitUnicodeString(&DestinationString, a2);
    v11 = 92;
    v12 = 1;
    v13 = 0;
    while ( DestinationString.Buffer[v13] == v11 )
    {
      ++v5;
      ++v13;
      v11 = *v5;
      if ( !*v5 )
        goto LABEL_6;
    }
    v12 = 0;
LABEL_6:
    UnicodeString.Length = 0;
    if ( v12 )
    {
      RtlInitUnicodeString(&UnicodeString, DestinationString.Buffer);
    }
    else
    {
      if ( !*(_WORD *)(*a4 + 56) )
      {
        *(UNICODE_STRING *)(*a4 + 56) = DestinationString;
        *(_QWORD *)(*a4 + 64) = ExAllocatePoolWithTag(PagedPool, DestinationString.MaximumLength, 0x48706E50u);
        v25 = *(void **)(*a4 + 64);
        if ( !v25 )
        {
          *(_WORD *)(*a4 + 58) = 0;
          *(_WORD *)(*a4 + 56) = 0;
          *(_QWORD *)(*a4 + 64) = 0LL;
          return (unsigned int)-1073741823;
        }
        memmove(v25, DestinationString.Buffer, DestinationString.MaximumLength);
      }
      v14 = PipOpenServiceEnumKeys(&DestinationString, 0x20019u, &Handle, 0LL, 0);
      v15 = v14;
      if ( v14 < 0 )
      {
        PipSetDevNodeProblem(*a4, 19, v14);
        v10 = Handle;
        goto LABEL_22;
      }
      v10 = Handle;
      DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(Handle, &UnicodeString);
      v15 = DriverNameFromKeyNode;
      if ( DriverNameFromKeyNode < 0 )
      {
        v26 = *a4;
        v27 = 19;
        goto LABEL_58;
      }
      v35 = 1;
    }
    Handle = (HANDLE)IopReferenceDriverObjectByName(&UnicodeString);
    v8 = Handle;
    if ( Handle )
      goto LABEL_30;
    if ( !v12 )
    {
      ServiceStartType = PnpGetServiceStartType(DestinationString.Buffer, v10, &v38);
      v18 = v38;
      if ( ServiceStartType < 0 )
        v18 = 4;
      if ( a5 != 2 && !PnPBootDriversInitialized )
      {
        PpInitGetGroupOrderIndex(v10);
        v24 = PnpLoadBootFilterDriver(v10, &UnicodeString);
        v15 = v24;
        if ( v24 >= 0 )
        {
          v8 = Handle;
          if ( Handle )
          {
            ObfReferenceObject(Handle);
            goto LABEL_49;
          }
LABEL_86:
          v32 = *a4;
          LODWORD(Handle) = 0;
          v41 = v15;
          v45 = 0;
          v33 = *(_WORD *)(v32 + 40);
          v44 = v33;
          LOWORD(v38) = v33 >> 1;
          UserData.Ptr = (ULONGLONG)&v38;
          v43 = *(_QWORD *)(v32 + 48);
          v46 = &v41;
          v48 = &v37;
          Buffer = UnicodeString.Buffer;
          v52 = 0;
          v34 = PnpEtwHandle;
          v51 = 2 * (UnicodeString.Length >> 1);
          p_Handle = &Handle;
          *(_QWORD *)&UserData.Size = 2LL;
          v47 = 4LL;
          LOWORD(v37) = UnicodeString.Length >> 1;
          v49 = 2LL;
          v54 = 4LL;
          if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_DriverLoad_Fail) )
            EtwWrite(v34, &KMPnPEvt_DriverLoad_Fail, 0LL, 6u, &UserData);
          v26 = *a4;
          if ( (*(_DWORD *)(*a4 + 396) & 0x6000) != 0 )
            goto LABEL_22;
          if ( v15 > -1073740955 )
          {
            if ( v15 == -1073740949 )
            {
              PipSetDevNodeProblem(v26, 48, -1073740949);
              PipSetDevNodeFlags(*a4, 0x100000);
              goto LABEL_22;
            }
            if ( v15 == -1073740948 )
            {
              PipSetDevNodeFlags(v26, 0x100000);
              v15 = 0;
              goto LABEL_22;
            }
            v28 = -1073740914;
            if ( v15 == -1073740914 )
            {
              v27 = 38;
              goto LABEL_60;
            }
            DriverNameFromKeyNode = -1073740760;
            if ( v15 != -1073740760 )
            {
LABEL_59:
              v28 = v15;
              v27 = 31;
              goto LABEL_60;
            }
            v27 = 52;
          }
          else
          {
            if ( v15 == -1073740955 )
            {
              v28 = v9;
              v27 = 37;
              goto LABEL_60;
            }
            DriverNameFromKeyNode = -1073741670;
            if ( v15 == -1073741670 )
            {
              v27 = 3;
            }
            else
            {
              v28 = -1073741472;
              if ( v15 == -1073741472 )
              {
                v27 = 40;
                goto LABEL_60;
              }
              if ( v15 == -1073741411 )
                goto LABEL_97;
              DriverNameFromKeyNode = -1073741218;
              if ( v15 != -1073741218 )
              {
                if ( v15 == -1073741204 )
                {
LABEL_97:
                  v28 = v15;
                  v27 = 39;
                  goto LABEL_60;
                }
                goto LABEL_59;
              }
              v27 = 41;
            }
          }
LABEL_58:
          v28 = DriverNameFromKeyNode;
LABEL_60:
          PipSetDevNodeProblem(v26, v27, v28);
          goto LABEL_22;
        }
        if ( (unsigned int)(v24 + 1073740949) > 1 )
        {
          if ( v18 && !*(_BYTE *)(a4[1] + 4) && !(unsigned __int8)PnpCheckPossibleBootStartDriver(v10) )
            *(_BYTE *)(*a4 + 688) = 1;
          v8 = Handle;
          goto LABEL_22;
        }
        v8 = Handle;
LABEL_49:
        if ( !v8 )
          goto LABEL_86;
        goto LABEL_30;
      }
      v19 = a4[1];
      if ( v18 > *(_DWORD *)v19 )
      {
        if ( v18 == 4 && (*(_DWORD *)(*a4 + 396) & 0x6000) == 0 )
          PipSetDevNodeProblem(*a4, 32, 0);
      }
      else
      {
        if ( *(_BYTE *)(v19 + 4) )
        {
          Driver = IopLoadDriver(v10);
          v9 = v37;
          v15 = Driver;
          v10 = 0LL;
          if ( Driver < 0 )
          {
            if ( Driver == -1073740955 )
            {
              if ( v37 == -1073741670 )
                v15 = -1073741670;
            }
            else
            {
              v29 = (unsigned int)(Driver + 1073740961);
              if ( (unsigned int)v29 > 0x2F || (v30 = 0x800000003001LL, !_bittest64(&v30, v29)) )
              {
                if ( v15 != -1073741218 && v15 != -1073741670 && v15 != -1073740760 )
                  v15 = -1073741204;
              }
            }
          }
          if ( PnPInitialized )
            IopCallDriverReinitializationRoutines(0);
          v8 = (_DWORD *)IopReferenceDriverObjectByName(&UnicodeString);
          if ( v8 )
          {
LABEL_30:
            if ( (v8[4] & 0x10) != 0 )
            {
              if ( (unsigned int)PnpIsLegacyDriver(v8) )
              {
                if ( a5 != 2 )
                {
                  v15 = 0;
                  goto LABEL_22;
                }
                PipSetDevNodeFlags(*a4, 4096);
                PipSetDevNodeState(*a4, 776);
              }
              else if ( (unsigned int)(*(_DWORD *)(*a4 + 300) - 770) <= 1 )
              {
                v21 = (__int64 *)((char *)&a4[a5] + v20);
                v15 = 0;
                PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(v20 - 15), v20, 0x6E657050u);
                if ( PoolWithTag )
                {
                  *PoolWithTag = v8;
                  v8 = 0LL;
                  PoolWithTag[1] = 0LL;
                  while ( *v21 )
                    v21 = (_QWORD *)(*v21 + 8LL);
                  *v21 = PoolWithTag;
                }
                else
                {
                  v15 = -1073741670;
                }
                goto LABEL_22;
              }
            }
            goto LABEL_21;
          }
          if ( !PnpBootMode )
            goto LABEL_86;
          if ( (unsigned int)(v15 + 1073740961) <= 0xD )
          {
            v31 = 12353;
            if ( _bittest(&v31, v15 + 1073740961) )
              goto LABEL_86;
          }
          if ( v15 == -1073740760 )
            goto LABEL_86;
          v15 = -1073741204;
          goto LABEL_49;
        }
        if ( v18 && !(unsigned __int8)PnpCheckPossibleBootStartDriver(v10) )
          *(_BYTE *)(*a4 + 688) = 1;
      }
    }
LABEL_21:
    v15 = -1073741823;
LABEL_22:
    if ( v10 )
      ZwClose(v10);
    if ( v35 )
      RtlFreeAnsiString(&UnicodeString);
    if ( v8 )
      ObfDereferenceObject(v8);
    return (unsigned int)v15;
  }
  return result;
}
