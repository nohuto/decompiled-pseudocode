/*
 * XREFs of ACPIVerifyAndCopyFirmwareDependencies @ 0x1C00286B8
 * Callers:
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000F530 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C0012C60 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C00267F0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0044CA0 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0004BB0 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_s @ 0x1C0004C64 (WPP_RECORDER_SF_s.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C0014844 (AMLIGetNameSpaceObject.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 *     ACPIWriteEventLogEntry @ 0x1C004D554 (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall ACPIVerifyAndCopyFirmwareDependencies(ULONG_PTR a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  unsigned int *v6; // r14
  unsigned int v7; // r15d
  SIZE_T v8; // rsi
  __int64 v9; // r12
  _OWORD *PoolWithTag; // rax
  _OWORD *v11; // rsi
  size_t v12; // r8
  __int64 v13; // r15
  unsigned int *v15; // rdi
  int v16; // eax
  __int64 v17; // rdx
  const void **v18; // rdi
  __int64 v19; // rbp
  __int64 v20; // r14
  __int64 v21; // rax
  volatile signed __int32 *v23; // [rsp+78h] [rbp+10h]

  v3 = 0;
  *a3 = 0LL;
  if ( *(_WORD *)(a2 + 2) == 4 )
  {
    v6 = *(unsigned int **)(a2 + 32);
    v7 = 0;
    v8 = *(unsigned int *)(a2 + 24) + 40LL;
    v9 = *v6;
    if ( (_DWORD)v9 )
    {
      v15 = v6 + 8;
      do
      {
        v16 = AMLIGetNameSpaceObject(*((_BYTE **)v15 + 1));
        if ( v16 < 0 )
        {
          LOBYTE(v17) = 2;
          WPP_RECORDER_SF_D(
            WPP_GLOBAL_Control->DeviceExtension,
            v17,
            21,
            11,
            (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
            v16);
          KeBugCheckEx(0xA5u, 0x18uLL, a1, *((_QWORD *)v15 + 1), 0LL);
        }
        if ( !v23 || *(_WORD *)(*(_QWORD *)v23 + 66LL) != 6 )
        {
          LOBYTE(v17) = 2;
          WPP_RECORDER_SF_s(
            WPP_GLOBAL_Control->DeviceExtension,
            v17,
            21,
            12,
            (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
            *((_QWORD *)v15 + 1));
          KeBugCheckEx(0xA5u, 0x19uLL, a1, *((_QWORD *)v15 + 1), 0LL);
        }
        AMLIDereferenceHandleEx(v23, v17);
        ++v7;
        v8 += *v15;
        v23 = 0LL;
        v15 += 10;
      }
      while ( v7 < (unsigned int)v9 );
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
        v18 = (const void **)(v6 + 8);
        v19 = *((_QWORD *)v11 + 4) - (_QWORD)v6;
        v20 = v9;
        do
        {
          *(const void **)((char *)v18 + v19 + 8) = (char *)v11 + v13;
          memmove((char *)v11 + v13, v18[1], *(unsigned int *)v18);
          v21 = *(unsigned int *)((char *)v18 + v19);
          v18 += 5;
          v13 += v21;
          --v20;
        }
        while ( v20 );
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
