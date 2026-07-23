/*
 * XREFs of PipCallDriverAddDeviceQueryRoutine @ 0x140538F54
 * Callers:
 *     PnpCallDriverQueryServiceHelper @ 0x1403F4410 (PnpCallDriverQueryServiceHelper.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1400091A0 (PipSetDevNodeState.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x1400AED24 (PnpDiagnosticTraceDeviceOperation.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PipSetDevNodeFlags @ 0x1403F2264 (PipSetDevNodeFlags.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     PipSetDevNodeProblem @ 0x140484270 (PipSetDevNodeProblem.c)
 *     IopCallDriverReinitializationRoutines @ 0x1404C903C (IopCallDriverReinitializationRoutines.c)
 *     PnpIsLegacyDriver @ 0x1404D17C4 (PnpIsLegacyDriver.c)
 *     IopLoadDriver @ 0x140516794 (IopLoadDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x140517688 (IopGetDriverNameFromKeyNode.c)
 *     IopReferenceDriverObjectByName @ 0x140539268 (IopReferenceDriverObjectByName.c)
 *     PipOpenServiceEnumKeys @ 0x140539324 (PipOpenServiceEnumKeys.c)
 *     PnpGetServiceStartType @ 0x14053947C (PnpGetServiceStartType.c)
 *     PnpCheckPossibleBootStartDriver @ 0x14057312C (PnpCheckPossibleBootStartDriver.c)
 *     PnpLoadBootFilterDriver @ 0x14079A54C (PnpLoadBootFilterDriver.c)
 *     PpInitGetGroupOrderIndex @ 0x14079C094 (PpInitGetGroupOrderIndex.c)
 */

__int64 __fastcall PipCallDriverAddDeviceQueryRoutine(int a1, const WCHAR *a2, unsigned int a3, __int64 *a4, int a5)
{
  __int64 result; // rax
  const wchar_t *v6; // rbx
  _DWORD *v8; // rsi
  int v9; // r13d
  char v10; // r12
  HANDLE v11; // r15
  __int16 v12; // dx
  char v13; // r14
  int v14; // ecx
  int v15; // ebx
  int v16; // eax
  int DriverNameFromKeyNode; // eax
  int ServiceStartType; // eax
  __int64 v19; // rdx
  unsigned int v20; // r14d
  __int64 v21; // rax
  int v22; // eax
  SIZE_T v23; // rdx
  _QWORD *v24; // rdi
  _QWORD *PoolWithTag; // rax
  int v26; // eax
  void *v27; // rcx
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // ecx
  __int64 v31; // rcx
  int v32; // eax
  int v33; // r8d
  int v34; // edx
  int v35; // [rsp+30h] [rbp-40h] BYREF
  int v36; // [rsp+34h] [rbp-3Ch]
  unsigned int v37; // [rsp+38h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-28h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-18h] BYREF
  char v41; // [rsp+A0h] [rbp+30h]

  result = 0LL;
  v6 = L"\\Driver\\";
  v35 = 0;
  v36 = 0;
  v8 = 0LL;
  v41 = 0;
  v9 = 0;
  Handle = 0LL;
  v10 = 0;
  v11 = 0LL;
  if ( a1 == 1 && a3 > 2 )
  {
    DestinationString.Length = 0;
    RtlInitUnicodeString(&DestinationString, a2);
    v12 = 92;
    v13 = 1;
    v14 = 0;
    do
    {
      if ( DestinationString.Buffer[v14] != v12 )
      {
        v15 = 0;
        v13 = 0;
        goto LABEL_6;
      }
      ++v6;
      ++v14;
      v12 = *v6;
    }
    while ( *v6 );
    v15 = 0;
LABEL_6:
    UnicodeString.Length = 0;
    if ( v13 )
    {
      RtlInitUnicodeString(&UnicodeString, DestinationString.Buffer);
    }
    else
    {
      if ( !*(_WORD *)(*a4 + 56) )
      {
        *(UNICODE_STRING *)(*a4 + 56) = DestinationString;
        *(_QWORD *)(*a4 + 64) = ExAllocatePoolWithTag(PagedPool, DestinationString.MaximumLength, 0x48706E50u);
        v27 = *(void **)(*a4 + 64);
        if ( !v27 )
        {
          *(_WORD *)(*a4 + 58) = 0;
          *(_WORD *)(*a4 + 56) = 0;
          *(_QWORD *)(*a4 + 64) = 0LL;
          return (unsigned int)-1073741823;
        }
        memmove(v27, DestinationString.Buffer, DestinationString.MaximumLength);
      }
      v16 = PipOpenServiceEnumKeys(&DestinationString, 131097LL, &Handle, 0LL, 0);
      v15 = v16;
      if ( v16 < 0 )
      {
        PipSetDevNodeProblem(*a4, 19, v16);
        v11 = Handle;
        goto LABEL_23;
      }
      v11 = Handle;
      DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(Handle, &UnicodeString);
      v15 = DriverNameFromKeyNode;
      if ( DriverNameFromKeyNode < 0 )
      {
        PipSetDevNodeProblem(*a4, 19, DriverNameFromKeyNode);
        goto LABEL_23;
      }
      v41 = 1;
      v15 = 0;
    }
    v8 = (_DWORD *)IopReferenceDriverObjectByName(&UnicodeString);
    Handle = v8;
    if ( v8 )
    {
LABEL_36:
      if ( (v8[4] & 0x10) != 0 )
      {
        if ( (unsigned int)PnpIsLegacyDriver((__int64)v8) )
        {
          if ( a5 != 2 )
            goto LABEL_22;
          PipSetDevNodeFlags(*a4, 4096);
          PipSetDevNodeState(*a4, 776);
        }
        else if ( (unsigned int)(*(_DWORD *)(*a4 + 300) - 770) <= 1 )
        {
          v24 = (__int64 *)((char *)&a4[a5] + v23);
          PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(v23 - 15), v23, 0x6E657050u);
          if ( PoolWithTag )
          {
            *PoolWithTag = v8;
            v8 = 0LL;
            PoolWithTag[1] = 0LL;
            while ( *v24 )
              v24 = (_QWORD *)(*v24 + 8LL);
            *v24 = PoolWithTag;
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
    if ( !v13 )
    {
      ServiceStartType = PnpGetServiceStartType(DestinationString.Buffer, v11, &v37);
      v20 = v37;
      if ( ServiceStartType < 0 )
        v20 = 4;
      if ( a5 != 2 && !PnPBootDriversInitialized )
      {
        PpInitGetGroupOrderIndex(v11);
        v26 = PnpLoadBootFilterDriver(v11, &UnicodeString);
        v15 = v26;
        if ( v26 < 0 )
        {
          if ( (unsigned int)(v26 + 1073740949) > 1 )
          {
            if ( v20 && !*(_BYTE *)(a4[1] + 4) && !(unsigned __int8)PnpCheckPossibleBootStartDriver(v11, 0LL) )
              *(_BYTE *)(*a4 + 688) = 1;
            v8 = Handle;
            goto LABEL_22;
          }
          v8 = Handle;
        }
        else
        {
          v8 = Handle;
          if ( !Handle )
            goto LABEL_83;
          ObfReferenceObject(Handle);
        }
        goto LABEL_50;
      }
      v21 = a4[1];
      if ( v20 > *(_DWORD *)v21 )
      {
        if ( v20 == 4 && (*(_DWORD *)(*a4 + 396) & 0x6000) == 0 )
          PipSetDevNodeProblem(*a4, 32, 0);
      }
      else
      {
        if ( *(_BYTE *)(v21 + 4) )
        {
          v22 = IopLoadDriver(v11, 0, a5 != 2, &v35);
          v9 = v35;
          v36 = v22;
          v15 = v22;
          v11 = 0LL;
          if ( v22 < 0 )
          {
            if ( v22 == -1073740955 )
            {
              if ( v35 == -1073741670 )
                v15 = -1073741670;
            }
            else
            {
              v28 = (unsigned int)(v22 + 1073740961);
              if ( (unsigned int)v28 > 0x2F || (v29 = 0x800000003001LL, !_bittest64(&v29, v28)) )
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
LABEL_35:
            v15 = 0;
            goto LABEL_36;
          }
          if ( !PnpBootMode
            || (unsigned int)(v15 + 1073740961) <= 0xD && (v30 = 12353, _bittest(&v30, v15 + 1073740961))
            || v15 == -1073740760 )
          {
LABEL_83:
            PnpDiagnosticTraceDeviceOperation(
              &KMPnPEvt_DriverLoad_Fail,
              (unsigned __int16 *)(*a4 + 40),
              v15,
              (__int64)&UnicodeString,
              0);
            v31 = *a4;
            if ( (*(_DWORD *)(*a4 + 396) & 0x6000) == 0 )
            {
              if ( v15 > -1073740955 )
              {
                if ( v15 == -1073740949 )
                {
                  PipSetDevNodeProblem(v31, 48, -1073740949);
                  PipSetDevNodeFlags(*a4, 0x100000);
                  goto LABEL_22;
                }
                if ( v15 == -1073740948 )
                {
                  PipSetDevNodeFlags(v31, 0x100000);
                  v15 = 0;
                  goto LABEL_22;
                }
                v33 = -1073740914;
                if ( v15 == -1073740914 )
                {
                  v34 = 38;
                  goto LABEL_96;
                }
                v32 = -1073740760;
                if ( v15 != -1073740760 )
                  goto LABEL_104;
                v34 = 52;
              }
              else
              {
                if ( v15 == -1073740955 )
                {
                  v33 = v9;
                  v34 = 37;
                  goto LABEL_96;
                }
                v32 = -1073741670;
                if ( v15 == -1073741670 )
                {
                  v34 = 3;
                }
                else
                {
                  v33 = -1073741472;
                  if ( v15 == -1073741472 )
                  {
                    v34 = 40;
                    goto LABEL_96;
                  }
                  if ( v15 == -1073741411 )
                    goto LABEL_91;
                  v32 = -1073741218;
                  if ( v15 != -1073741218 )
                  {
                    if ( v15 == -1073741204 )
                    {
LABEL_91:
                      v33 = v36;
                      v34 = 39;
LABEL_96:
                      PipSetDevNodeProblem(v31, v34, v33);
                      goto LABEL_22;
                    }
LABEL_104:
                    v33 = v15;
                    v34 = 31;
                    goto LABEL_96;
                  }
                  v34 = 41;
                }
              }
              v33 = v32;
              goto LABEL_96;
            }
LABEL_22:
            v10 = v41;
LABEL_23:
            if ( v11 )
              ZwClose(v11);
            if ( v10 )
              RtlFreeAnsiString(&UnicodeString);
            if ( v8 )
              ObfDereferenceObject(v8);
            return (unsigned int)v15;
          }
          v15 = -1073741204;
LABEL_50:
          if ( !v8 )
            goto LABEL_83;
          goto LABEL_35;
        }
        if ( v20 && !(unsigned __int8)PnpCheckPossibleBootStartDriver(v11, v19) )
          *(_BYTE *)(*a4 + 688) = 1;
      }
    }
LABEL_21:
    v15 = -1073741823;
    goto LABEL_22;
  }
  return result;
}
