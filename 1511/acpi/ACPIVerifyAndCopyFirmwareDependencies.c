/*
 * XREFs of ACPIVerifyAndCopyFirmwareDependencies @ 0x1C001F350
 * Callers:
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000B510 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C001F1D0 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C0022E90 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0035E80 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C000E05C (AMLIGetNameSpaceObject.c)
 *     memmove @ 0x1C0024E80 (memmove.c)
 *     ACPIWriteEventLogEntry @ 0x1C003AFD4 (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall ACPIVerifyAndCopyFirmwareDependencies(ULONG_PTR BugCheckParameter2, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  unsigned int *v7; // r15
  SIZE_T v8; // rsi
  __int64 v9; // r12
  _OWORD *PoolWithTag; // rax
  _OWORD *v11; // rsi
  size_t v12; // r8
  __int64 v13; // r14
  unsigned int *v15; // rdi
  __int64 v16; // rax
  const void **v17; // rdi
  __int64 v18; // rbp
  __int64 v19; // r15
  __int64 v20; // rax
  unsigned int v21; // [rsp+78h] [rbp+10h]
  volatile signed __int32 *v22; // [rsp+80h] [rbp+18h]

  v3 = 0;
  *a3 = 0LL;
  if ( *(_WORD *)(a2 + 2) == 4 )
  {
    v7 = *(unsigned int **)(a2 + 32);
    v8 = *(unsigned int *)(a2 + 24) + 40LL;
    v21 = 0;
    v9 = *v7;
    if ( (_DWORD)v9 )
    {
      v15 = v7 + 8;
      do
      {
        if ( (int)AMLIGetNameSpaceObject(*((_BYTE **)v15 + 1)) < 0 )
          KeBugCheckEx(0xA5u, 0x18uLL, BugCheckParameter2, *((_QWORD *)v15 + 1), 0LL);
        if ( !v22 || *(_WORD *)(*(_QWORD *)v22 + 58LL) != 6 )
          KeBugCheckEx(0xA5u, 0x19uLL, BugCheckParameter2, *((_QWORD *)v15 + 1), 0LL);
        AMLIDereferenceHandleEx(v22);
        v16 = *v15;
        v15 += 10;
        v8 += v16;
        v22 = 0LL;
        ++v21;
      }
      while ( v21 < (unsigned int)v9 );
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x4F706341u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = *(_OWORD *)a2;
      PoolWithTag[1] = *(_OWORD *)(a2 + 16);
      v12 = *((unsigned int *)PoolWithTag + 6);
      *((_QWORD *)PoolWithTag + 4) = (char *)PoolWithTag + 40;
      memmove((char *)PoolWithTag + 40, *(const void **)(a2 + 32), v12);
      v13 = *(unsigned int *)(a2 + 24) + 40LL;
      if ( (_DWORD)v9 )
      {
        v17 = (const void **)(v7 + 8);
        v18 = *((_QWORD *)v11 + 4) - (_QWORD)v7;
        v19 = v9;
        do
        {
          *(const void **)((char *)v17 + v18 + 8) = (char *)v11 + v13;
          memmove((char *)v11 + v13, v17[1], *(unsigned int *)v17);
          v20 = *(unsigned int *)((char *)v17 + v18);
          v17 += 5;
          v13 += v20;
          --v19;
        }
        while ( v19 );
      }
    }
    else
    {
      v3 = -1073741670;
    }
    *a3 = v11;
    return v3;
  }
  else
  {
    ACPIWriteEventLogEntry(3221553169LL, 0LL, 0LL);
    return 3221225485LL;
  }
}
