/*
 * XREFs of NtSystemDebugControl @ 0x1406772A8
 * Callers:
 *     <none>
 * Callees:
 *     ExUnlockUserBuffer @ 0x1400E718C (ExUnlockUserBuffer.c)
 *     KdDisableDebugger @ 0x140142870 (KdDisableDebugger.c)
 *     DbgBreakPointWithStatus @ 0x14015B8E0 (DbgBreakPointWithStatus.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     DbgkCaptureLiveKernelDump @ 0x1401ABBD4 (DbgkCaptureLiveKernelDump.c)
 *     KdEnableDebugger @ 0x1401C1FF0 (KdEnableDebugger.c)
 *     KdSetDbgPrintBufferSize @ 0x1401C25A4 (KdSetDbgPrintBufferSize.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     ExLockUserBuffer @ 0x1404AC538 (ExLockUserBuffer.c)
 *     DbgkCaptureLiveDump @ 0x1405F0B8C (DbgkCaptureLiveDump.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSystemDebugControl(
        SYSDBG_COMMAND ControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  __int64 v7; // r15
  KPROCESSOR_MODE PreviousMode; // r13
  NTSTATUS v12; // ebx
  ULONG v13; // esi
  _DWORD *v14; // rcx
  NTSTATUS v15; // eax
  __int32 v16; // edi
  __int32 v17; // edi
  __int32 v18; // edi
  __int32 v19; // edi
  __int32 v20; // edi
  __int32 v21; // edi
  __int32 v22; // edi
  int v23; // edi
  int v24; // edi
  int v25; // edi
  int v26; // edi
  unsigned __int64 v27; // rbx
  int v28; // eax
  unsigned int v29; // r14d
  struct _MDL *PoolWithTag; // rdi
  size_t Size; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+40h] [rbp-C8h] BYREF
  struct _MDL *v33[2]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v34[56]; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v35[7]; // [rsp+90h] [rbp-78h] BYREF

  v7 = InputBufferLength;
  LODWORD(Size) = 0;
  memset(v34, 0, sizeof(v34));
  memset(v35, 0, 64);
  v32 = 0LL;
  v33[0] = 0LL;
  if ( KdPitchDebugger && !KdLocalDebugEnabled && ((ControlCode - 29) & 0xFFFFFFF7) != 0 )
    return -1073740972;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
    return -1073741790;
  v12 = 0;
  if ( PreviousMode )
  {
    if ( (_DWORD)v7 )
    {
      if ( ((unsigned __int8)InputBuffer & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)InputBuffer + v7 > MmUserProbeAddress || (char *)InputBuffer + v7 < InputBuffer )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v13 = OutputBufferLength;
    if ( OutputBufferLength )
      ProbeForWrite(OutputBuffer, OutputBufferLength, 4u);
    v14 = ReturnLength;
    if ( ReturnLength )
    {
      if ( (unsigned __int64)ReturnLength >= MmUserProbeAddress )
        v14 = (_DWORD *)MmUserProbeAddress;
      *v14 = *v14;
    }
  }
  else
  {
    v13 = OutputBufferLength;
  }
  if ( ControlCode > SysDbgSetKdUmExceptionEnable )
  {
    v19 = ControlCode - 29;
    if ( !v19 )
    {
      if ( (_DWORD)v7 == 56 && v13 >= 0x40000 )
      {
        *(_OWORD *)v34 = *(_OWORD *)InputBuffer;
        *(_OWORD *)&v34[16] = *((_OWORD *)InputBuffer + 1);
        *(_OWORD *)&v34[32] = *((_OWORD *)InputBuffer + 2);
        *(_QWORD *)&v34[48] = *((_QWORD *)InputBuffer + 6);
        if ( *(_DWORD *)&v34[40] || !*(_DWORD *)&v34[44] || (*(_DWORD *)v34 & 0xFFFFFFFE) != 0 )
          return -1073741811;
        v27 = 8LL * *(unsigned int *)&v34[44];
        if ( v27 > 0xFFFFFFFF )
        {
          LODWORD(v27) = -1;
          v28 = -1073741675;
        }
        else
        {
          v28 = 0;
        }
        if ( (v28 & 0xC0000000) == 0xC0000000 )
          return -1073741811;
        v29 = v13;
        if ( v13 > 0x100000 )
          v29 = 0x100000;
        PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v29, 0x704E534Bu);
        v33[1] = PoolWithTag;
        if ( PoolWithTag )
        {
          v12 = ExLockUserBuffer(*(unsigned __int64 *)&v34[48], v27, PreviousMode, IoReadAccess, &v32, v33);
          if ( v12 >= 0 )
          {
            memset(PoolWithTag, 0, v29);
            *(_QWORD *)&v34[48] = v32;
            v12 = DbgkCaptureLiveDump((__int64)v34, (__int64)PoolWithTag, v29, (__int64)&Size);
            if ( v12 >= 0 )
            {
              if ( (unsigned int)Size <= v13 )
                memmove(OutputBuffer, PoolWithTag, (unsigned int)Size);
              else
                v12 = -1073741823;
            }
            ExFreePoolWithTag(PoolWithTag, 0);
            ExUnlockUserBuffer(v33[0]);
          }
          else
          {
            ExFreePoolWithTag(PoolWithTag, 0);
          }
        }
        else
        {
          v12 = -1073741801;
        }
        goto LABEL_101;
      }
      return -1073741820;
    }
    v20 = v19 - 1;
    if ( !v20 )
    {
      if ( v13 == 1 )
      {
        *(_BYTE *)OutputBuffer = KdBlockEnable;
        goto LABEL_101;
      }
      return -1073741820;
    }
    v21 = v20 - 1;
    if ( !v21 )
    {
      if ( (_DWORD)v7 == 1 )
      {
        KdBlockEnable = *(_BYTE *)InputBuffer;
        goto LABEL_101;
      }
      return -1073741820;
    }
    v22 = v21 - 1;
    if ( !v22 )
    {
      KdUmBreakMarker = -618808389;
      goto LABEL_75;
    }
    v23 = v22 - 1;
    if ( v23 )
    {
      v24 = v23 - 1;
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( v25 )
        {
          v26 = v25 - 1;
          if ( v26 )
          {
            if ( v26 != 1 )
              goto LABEL_64;
            if ( (_DWORD)v7 != 64 || v13 )
              return -1073741820;
            v35[0] = *(_OWORD *)InputBuffer;
            v35[1] = *((_OWORD *)InputBuffer + 1);
            v35[2] = *((_OWORD *)InputBuffer + 2);
            v35[3] = *((_OWORD *)InputBuffer + 3);
            v15 = DbgkCaptureLiveKernelDump((__int64)v35);
            goto LABEL_34;
          }
          goto LABEL_70;
        }
        if ( v13 != 4 )
          return -1073741820;
        *(_DWORD *)OutputBuffer = KdUmAttachPid;
        if ( KdResetUmAttachPid )
LABEL_70:
          KdUmAttachPid = 0;
LABEL_75:
        v12 = 0;
        goto LABEL_101;
      }
    }
    else
    {
      if ( v13 != 4 )
        return -1073741820;
      *(_DWORD *)OutputBuffer = KdUmBreakPid;
      if ( !KdResetUmBreakPid )
        goto LABEL_75;
    }
    KdUmBreakPid = 0;
    goto LABEL_75;
  }
  if ( ControlCode == SysDbgSetKdUmExceptionEnable )
  {
    if ( (_DWORD)v7 == 1 )
    {
      KdIgnoreUmExceptions = *(_BYTE *)InputBuffer == 0;
      goto LABEL_101;
    }
    return -1073741820;
  }
  if ( ControlCode > SysDbgGetAutoKdEnable )
  {
    v16 = ControlCode - 24;
    if ( !v16 )
    {
      if ( (_DWORD)v7 == 1 )
      {
        KdAutoEnableOnEvent = *(_BYTE *)InputBuffer != 0;
        goto LABEL_101;
      }
      return -1073741820;
    }
    v17 = v16 - 1;
    if ( !v17 )
    {
      if ( v13 == 4 )
      {
        *(_DWORD *)OutputBuffer = KdPrintBufferSize;
        goto LABEL_101;
      }
      return -1073741820;
    }
    v18 = v17 - 1;
    if ( v18 )
    {
      if ( v18 != 1 )
        goto LABEL_64;
      if ( v13 == 1 )
      {
        *(_BYTE *)OutputBuffer = KdIgnoreUmExceptions == 0;
        goto LABEL_101;
      }
      return -1073741820;
    }
    if ( (_DWORD)v7 != 4 )
      return -1073741820;
    HIDWORD(Size) = 0;
    v15 = KdSetDbgPrintBufferSize(*(unsigned int *)InputBuffer);
LABEL_34:
    v12 = v15;
    goto LABEL_101;
  }
  if ( ControlCode == SysDbgGetAutoKdEnable )
  {
    if ( v13 == 1 )
    {
      *(_BYTE *)OutputBuffer = KdAutoEnableOnEvent;
      goto LABEL_101;
    }
    return -1073741820;
  }
  if ( ControlCode < SysDbgQueryModuleInformation )
  {
LABEL_64:
    v12 = -1073741821;
    goto LABEL_101;
  }
  if ( ControlCode <= SysDbgQuerySpecialCalls )
    return -1073741822;
  if ( ControlCode != SysDbgBreakPoint )
  {
    if ( ControlCode > SysDbgCheckLowMemory )
    {
      if ( ControlCode == SysDbgEnableKernelDebugger )
        v15 = KdEnableDebugger();
      else
        v15 = KdDisableDebugger();
      goto LABEL_34;
    }
    return -1073741822;
  }
  if ( (_BYTE)KdDebuggerEnabled == 1 )
    DbgBreakPointWithStatus(6u);
  else
    v12 = -1073741823;
LABEL_101:
  if ( ReturnLength )
    *ReturnLength = Size;
  return v12;
}
