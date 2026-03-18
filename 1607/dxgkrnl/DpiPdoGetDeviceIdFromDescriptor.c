/*
 * XREFs of DpiPdoGetDeviceIdFromDescriptor @ 0x1C00EE780
 * Callers:
 *     DpiPdoAddPdo @ 0x1C00EF39C (DpiPdoAddPdo.c)
 * Callees:
 *     DpiIsValidEdid @ 0x1C000F7D8 (DpiIsValidEdid.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00C1EE4 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00C1F58 (DpiAcquireCoreSyncAccessSafe.c)
 *     MonitorGetMonitorDescriptorIDs @ 0x1C00EF1CC (MonitorGetMonitorDescriptorIDs.c)
 */

__int64 __fastcall DpiPdoGetDeviceIdFromDescriptor(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v7; // r14
  PVOID PoolWithTag; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v13; // rax
  _OWORD *v14; // rax
  _OWORD *v15; // rcx
  __int64 v16; // rdx
  __int128 v17; // xmm1
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax

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
      v11 = *(_DWORD *)(v2 + 496);
      if ( v11 == 1 )
      {
        v5 = DpiAcquireCoreSyncAccessSafe(a1, 0);
        if ( v5 >= 0 )
        {
          MonitorGetMonitorDescriptorIDs(
            *(DXGADAPTER **)(v7 + 3688),
            *(_DWORD *)(v2 + 504),
            (struct _DXGK_GENERIC_DESCRIPTOR *)(v2 + 512));
          DpiReleaseCoreSyncAccessSafe(a1, 0);
        }
      }
      else if ( v11 == 2 )
      {
        v14 = *(_OWORD **)(a2 + 8);
        v15 = (_OWORD *)(v2 + 512);
        v16 = 3LL;
        do
        {
          *v15 = *v14;
          v15[1] = v14[1];
          v15[2] = v14[2];
          v15[3] = v14[3];
          v15[4] = v14[4];
          v15[5] = v14[5];
          v15[6] = v14[6];
          v15 += 8;
          v17 = v14[7];
          v14 += 8;
          *(v15 - 1) = v17;
          --v16;
        }
        while ( v16 );
        *v15 = *v14;
        *((_QWORD *)v15 + 2) = *((_QWORD *)v14 + 2);
      }
      else
      {
        v5 = -1073741823;
        v18 = WdLogNewEntry5_WdError(v10);
        *(_QWORD *)(v18 + 24) = -1073741823LL;
        WdLogEvent5_WdError(v18);
      }
    }
    else
    {
      v5 = -1073741801;
      v13 = WdLogNewEntry5_WdLowResource(v9);
      *(_QWORD *)(v13 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v13);
    }
  }
  else
  {
    memset((void *)(v2 + 512), 0, 0x198uLL);
    v5 = -1073741823;
    v20 = WdLogNewEntry5_WdEvent(v19);
    *(_QWORD *)(v20 + 24) = -1073741823LL;
    WdLogEvent5_WdEvent(v20);
  }
  return (unsigned int)v5;
}
