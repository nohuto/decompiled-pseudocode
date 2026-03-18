/*
 * XREFs of DpiPdoGetDeviceIdFromDescriptor @ 0x1C00E3D50
 * Callers:
 *     DpiPdoAddPdo @ 0x1C00E2A50 (DpiPdoAddPdo.c)
 * Callees:
 *     DpiIsValidEdid @ 0x1C000F900 (DpiIsValidEdid.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00A9EA8 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00A9F1C (DpiAcquireCoreSyncAccessSafe.c)
 *     MonitorGetMonitorDescriptorIDs @ 0x1C00E2FD4 (MonitorGetMonitorDescriptorIDs.c)
 */

__int64 __fastcall DpiPdoGetDeviceIdFromDescriptor(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v7; // r14
  PVOID PoolWithTag; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // r9
  _QWORD *v17; // rax
  _OWORD *v18; // rax
  _OWORD *v19; // rcx
  __int64 v20; // rdx
  __int128 v21; // xmm1
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v4 = *(_QWORD *)(a2 + 8);
  v5 = 0;
  v7 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 64LL);
  if ( v4 && (*(_DWORD *)(v2 + 496) != 1 || DpiIsValidEdid(v4)) )
  {
    *(_DWORD *)(v2 + 924) = *(_DWORD *)(a2 + 4);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a2 + 4), 0x74727044u);
    *(_QWORD *)(v2 + 928) = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, *(const void **)(a2 + 8), *(unsigned int *)(a2 + 4));
      v14 = *(_DWORD *)(v2 + 496);
      if ( v14 == 1 )
      {
        v5 = DpiAcquireCoreSyncAccessSafe(a1, 0);
        if ( v5 >= 0 )
        {
          MonitorGetMonitorDescriptorIDs(
            *(DXGADAPTER **)(v7 + 2544),
            *(unsigned int *)(v2 + 504),
            (struct _DXGK_GENERIC_DESCRIPTOR *)(v2 + 512),
            v15);
          DpiReleaseCoreSyncAccessSafe(a1, 0);
        }
      }
      else if ( v14 == 2 )
      {
        v18 = *(_OWORD **)(a2 + 8);
        v19 = (_OWORD *)(v2 + 512);
        v20 = 3LL;
        do
        {
          *v19 = *v18;
          v19[1] = v18[1];
          v19[2] = v18[2];
          v19[3] = v18[3];
          v19[4] = v18[4];
          v19[5] = v18[5];
          v19[6] = v18[6];
          v19 += 8;
          v21 = v18[7];
          v18 += 8;
          *(v19 - 1) = v21;
          --v20;
        }
        while ( v20 );
        *v19 = *v18;
        *((_QWORD *)v19 + 2) = *((_QWORD *)v18 + 2);
      }
      else
      {
        v5 = -1073741823;
        v22 = (_QWORD *)WdLogNewEntry5_WdError(v13);
        v22[4] = 0LL;
        v22[3] = DpiPdoGetDeviceIdFromDescriptor;
        v22[5] = -1073741823LL;
        WdLogEvent5_WdError(v22);
      }
    }
    else
    {
      v5 = -1073741801;
      v17 = (_QWORD *)WdLogNewEntry5_WdLowResource(v10, v9, v11, v12);
      v17[3] = DpiPdoGetDeviceIdFromDescriptor;
      v17[4] = ExAllocatePoolWithTag;
      v17[5] = -1073741801LL;
      WdLogEvent5_WdLowResource(v17);
    }
  }
  else
  {
    memset((void *)(v2 + 512), 0, 0x198uLL);
    v5 = -1073741823;
    v27 = WdLogNewEntry5_WdEvent(v24, v23, v25, v26);
    *(_QWORD *)(v27 + 24) = DpiPdoGetDeviceIdFromDescriptor;
    *(_QWORD *)(v27 + 32) = -1073741823LL;
    WdLogEvent5_WdEvent(v27);
  }
  return (unsigned int)v5;
}
