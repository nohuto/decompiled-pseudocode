/*
 * XREFs of NtSystemDebugControl @ 0x1404C1E48
 * Callers:
 *     <none>
 * Callees:
 *     ExUnlockUserBuffer @ 0x140088288 (ExUnlockUserBuffer.c)
 *     DbgBreakPointWithStatus @ 0x1401672F0 (DbgBreakPointWithStatus.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     DbgkCaptureLiveKernelDump @ 0x1401B7964 (DbgkCaptureLiveKernelDump.c)
 *     KdDisableDebugger @ 0x1401D137C (KdDisableDebugger.c)
 *     KdEnableDebugger @ 0x1401D1450 (KdEnableDebugger.c)
 *     KdSetDbgPrintBufferSize @ 0x1401D1778 (KdSetDbgPrintBufferSize.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     ExLockUserBuffer @ 0x140499EB0 (ExLockUserBuffer.c)
 *     DbgkCaptureLiveDump @ 0x14061AEA0 (DbgkCaptureLiveDump.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  NTSTATUS v14; // ebx
  ULONG v15; // esi
  __int64 v16; // rcx
  __int32 v17; // edi
  __int32 v18; // edi
  __int32 v19; // edi
  __int32 v20; // edi
  int v21; // edi
  int v23; // edi
  int v24; // edi
  NTSTATUS v25; // eax
  __int32 v26; // edi
  __int32 v27; // edi
  __int32 v28; // edi
  int v29; // edi
  unsigned __int64 v30; // rbx
  int v31; // eax
  unsigned int v32; // r14d
  struct _MDL *PoolWithTag; // rdi
  size_t Size; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v35; // [rsp+40h] [rbp-C8h] BYREF
  struct _MDL *v36[2]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v37[56]; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v38[7]; // [rsp+90h] [rbp-78h] BYREF

  v7 = InputBufferLength;
  LODWORD(Size) = 0;
  memset(v37, 0, sizeof(v37));
  memset(v38, 0, 0x40uLL);
  v35 = 0LL;
  v36[0] = 0LL;
  if ( KdPitchDebugger && !KdLocalDebugEnabled && ((ControlCode - 29) & 0xFFFFFFF7) != 0 )
    return -1073740972;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
    return -1073741790;
  v14 = 0;
  if ( PreviousMode )
  {
    if ( (_DWORD)v7 )
    {
      if ( ((unsigned __int8)InputBuffer & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)InputBuffer + v7 > 0x7FFFFFFF0000LL || (char *)InputBuffer + v7 < InputBuffer )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v15 = OutputBufferLength;
    if ( OutputBufferLength )
      ProbeForWrite(OutputBuffer, OutputBufferLength, 4u);
    v16 = (__int64)ReturnLength;
    if ( ReturnLength )
    {
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v16 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v16 = *(_DWORD *)v16;
    }
  }
  else
  {
    v15 = OutputBufferLength;
  }
  if ( ControlCode > SysDbgSetKdUmExceptionEnable )
  {
    v17 = ControlCode - 29;
    if ( !v17 )
    {
      if ( (_DWORD)v7 == 56 && v15 >= 0x40000 )
      {
        *(_OWORD *)v37 = *(_OWORD *)InputBuffer;
        *(_OWORD *)&v37[16] = *((_OWORD *)InputBuffer + 1);
        *(_OWORD *)&v37[32] = *((_OWORD *)InputBuffer + 2);
        *(_QWORD *)&v37[48] = *((_QWORD *)InputBuffer + 6);
        if ( *(_DWORD *)&v37[40] || !*(_DWORD *)&v37[44] || (*(_DWORD *)v37 & 0xFFFFFFFE) != 0 )
          return -1073741811;
        v30 = 8LL * *(unsigned int *)&v37[44];
        if ( v30 > 0xFFFFFFFF )
        {
          LODWORD(v30) = -1;
          v31 = -1073741675;
        }
        else
        {
          v31 = 0;
        }
        if ( (v31 & 0xC0000000) == 0xC0000000 )
          return -1073741811;
        v32 = v15;
        if ( v15 > 0x100000 )
          v32 = 0x100000;
        PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v32, 0x704E534Bu);
        v36[1] = PoolWithTag;
        if ( PoolWithTag )
        {
          v14 = ExLockUserBuffer(*(unsigned __int64 *)&v37[48], v30, PreviousMode, IoReadAccess, &v35, v36);
          if ( v14 >= 0 )
          {
            memset(PoolWithTag, 0, v32);
            *(_QWORD *)&v37[48] = v35;
            v14 = DbgkCaptureLiveDump(v37, PoolWithTag, v32, &Size);
            if ( v14 >= 0 )
            {
              if ( (unsigned int)Size <= v15 )
                memmove(OutputBuffer, PoolWithTag, (unsigned int)Size);
              else
                v14 = -1073741823;
            }
            ExFreePoolWithTag(PoolWithTag, 0);
            ExUnlockUserBuffer(v36[0]);
          }
          else
          {
            ExFreePoolWithTag(PoolWithTag, 0);
          }
        }
        else
        {
          v14 = -1073741801;
        }
        goto LABEL_27;
      }
      return -1073741820;
    }
    v18 = v17 - 1;
    if ( !v18 )
    {
      if ( v15 == 1 )
      {
        *(_BYTE *)OutputBuffer = KdBlockEnable;
        goto LABEL_27;
      }
      return -1073741820;
    }
    v19 = v18 - 1;
    if ( !v19 )
    {
      if ( (_DWORD)v7 == 1 )
      {
        KdBlockEnable = *(_BYTE *)InputBuffer;
        goto LABEL_27;
      }
      return -1073741820;
    }
    v20 = v19 - 1;
    if ( !v20 )
    {
      KdUmBreakMarker = -618808389;
      goto LABEL_26;
    }
    v21 = v20 - 1;
    if ( !v21 )
    {
      if ( v15 == 4 )
      {
        *(_DWORD *)OutputBuffer = KdUmBreakPid;
        if ( !KdResetUmBreakPid )
        {
LABEL_26:
          v14 = 0;
          goto LABEL_27;
        }
LABEL_78:
        KdUmBreakPid = 0;
        goto LABEL_26;
      }
      return -1073741820;
    }
    v23 = v21 - 1;
    if ( !v23 )
      goto LABEL_78;
    v24 = v23 - 1;
    if ( !v24 )
    {
      if ( v15 != 4 )
        return -1073741820;
      *(_DWORD *)OutputBuffer = KdUmAttachPid;
      if ( !KdResetUmAttachPid )
        goto LABEL_26;
LABEL_77:
      KdUmAttachPid = 0;
      goto LABEL_26;
    }
    v29 = v24 - 1;
    if ( !v29 )
      goto LABEL_77;
    if ( v29 == 1 )
    {
      if ( (_DWORD)v7 != 64 || v15 )
        return -1073741820;
      v38[0] = *(_OWORD *)InputBuffer;
      v38[1] = *((_OWORD *)InputBuffer + 1);
      v38[2] = *((_OWORD *)InputBuffer + 2);
      v38[3] = *((_OWORD *)InputBuffer + 3);
      v25 = DbgkCaptureLiveKernelDump((__int64)v38, v11, v12, v13);
      goto LABEL_50;
    }
    goto LABEL_76;
  }
  if ( ControlCode == SysDbgSetKdUmExceptionEnable )
  {
    if ( (_DWORD)v7 == 1 )
    {
      KdIgnoreUmExceptions = *(_BYTE *)InputBuffer == 0;
      goto LABEL_27;
    }
    return -1073741820;
  }
  if ( ControlCode > SysDbgGetAutoKdEnable )
  {
    v26 = ControlCode - 24;
    if ( !v26 )
    {
      if ( (_DWORD)v7 == 1 )
      {
        KdAutoEnableOnEvent = *(_BYTE *)InputBuffer != 0;
        goto LABEL_27;
      }
      return -1073741820;
    }
    v27 = v26 - 1;
    if ( !v27 )
    {
      if ( v15 == 4 )
      {
        *(_DWORD *)OutputBuffer = KdPrintBufferSize;
        goto LABEL_27;
      }
      return -1073741820;
    }
    v28 = v27 - 1;
    if ( !v28 )
    {
      if ( (_DWORD)v7 != 4 )
        return -1073741820;
      HIDWORD(Size) = 0;
      v25 = KdSetDbgPrintBufferSize(*(unsigned int *)InputBuffer);
LABEL_50:
      v14 = v25;
      goto LABEL_27;
    }
    if ( v28 == 1 )
    {
      if ( v15 == 1 )
      {
        *(_BYTE *)OutputBuffer = KdIgnoreUmExceptions == 0;
        goto LABEL_27;
      }
      return -1073741820;
    }
LABEL_76:
    v14 = -1073741821;
    goto LABEL_27;
  }
  if ( ControlCode == SysDbgGetAutoKdEnable )
  {
    if ( v15 == 1 )
    {
      *(_BYTE *)OutputBuffer = KdAutoEnableOnEvent;
      goto LABEL_27;
    }
    return -1073741820;
  }
  if ( ControlCode < SysDbgQueryModuleInformation )
    goto LABEL_76;
  if ( ControlCode <= SysDbgQuerySpecialCalls )
    return -1073741822;
  if ( ControlCode != SysDbgBreakPoint )
  {
    if ( ControlCode > SysDbgCheckLowMemory )
    {
      if ( ControlCode == SysDbgEnableKernelDebugger )
        v25 = KdEnableDebugger();
      else
        v25 = KdDisableDebugger();
      goto LABEL_50;
    }
    return -1073741822;
  }
  if ( (_BYTE)KdDebuggerEnabled == 1 )
    DbgBreakPointWithStatus(6u);
  else
    v14 = -1073741823;
LABEL_27:
  if ( ReturnLength )
    *ReturnLength = Size;
  return v14;
}
