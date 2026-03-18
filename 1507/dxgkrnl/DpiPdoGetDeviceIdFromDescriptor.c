/*
 * XREFs of DpiPdoGetDeviceIdFromDescriptor @ 0x1C00DD620
 * Callers:
 *     DpiPdoAddPdo @ 0x1C00C75F0 (DpiPdoAddPdo.c)
 * Callees:
 *     DpiIsValidEdid @ 0x1C000D600 (DpiIsValidEdid.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0061D64 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0061DDC (DpiAcquireCoreSyncAccessSafe.c)
 *     MonitorGetMonitorDescriptorIDs @ 0x1C00DD70C (MonitorGetMonitorDescriptorIDs.c)
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
  _QWORD *v13; // rax
  _OWORD *v14; // rax
  _OWORD *v15; // rcx
  __int64 v16; // rdx
  __int128 v17; // xmm1
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v4 = *(_QWORD *)(a2 + 8);
  v5 = 0;
  v7 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 64LL);
  if ( v4 && (*(_DWORD *)(v2 + 464) != 1 || DpiIsValidEdid(v4)) )
  {
    *(_DWORD *)(v2 + 892) = *(_DWORD *)(a2 + 4);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a2 + 4), 0x74727044u);
    *(_QWORD *)(v2 + 896) = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, *(const void **)(a2 + 8), *(unsigned int *)(a2 + 4));
      v11 = *(_DWORD *)(v2 + 464);
      if ( v11 == 1 )
      {
        v5 = DpiAcquireCoreSyncAccessSafe(a1, 0);
        if ( v5 >= 0 )
        {
          MonitorGetMonitorDescriptorIDs(
            *(DXGADAPTER **)(v7 + 2504),
            *(_DWORD *)(v2 + 472),
            (struct _DXGK_GENERIC_DESCRIPTOR *)(v2 + 480));
          DpiReleaseCoreSyncAccessSafe(a1, 0);
        }
      }
      else if ( v11 == 2 )
      {
        v14 = *(_OWORD **)(a2 + 8);
        v15 = (_OWORD *)(v2 + 480);
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
        v18 = (_QWORD *)WdLogNewEntry5_WdError(v10);
        v18[4] = 0LL;
        v18[3] = DpiPdoGetDeviceIdFromDescriptor;
        v18[5] = -1073741823LL;
        WdLogEvent5_WdError(v18);
      }
    }
    else
    {
      v5 = -1073741801;
      v13 = (_QWORD *)WdLogNewEntry5_WdLowResource(v9);
      v13[3] = DpiPdoGetDeviceIdFromDescriptor;
      v13[4] = ExAllocatePoolWithTag;
      v13[5] = -1073741801LL;
      WdLogEvent5_WdLowResource(v13);
    }
  }
  else
  {
    memset((void *)(v2 + 480), 0, 0x198uLL);
    v5 = -1073741823;
    v23 = WdLogNewEntry5_WdEvent(v20, v19, v21, v22);
    *(_QWORD *)(v23 + 24) = DpiPdoGetDeviceIdFromDescriptor;
    *(_QWORD *)(v23 + 32) = -1073741823LL;
    WdLogEvent5_WdEvent(v23);
  }
  return (unsigned int)v5;
}
