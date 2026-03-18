/*
 * XREFs of VidSchCreateProcess @ 0x1C0036370
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0005F40 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0005F60 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     memset @ 0x1C0008500 (memset.c)
 */

char *__fastcall VidSchCreateProcess(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *PoolWithTag; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  char *v9; // rbx
  DXGGLOBAL *Global; // rax
  unsigned int MaximumAdapterCount; // ebp
  PVOID v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  PVOID v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax

  if ( a1 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0xA70uLL, 0x68536956u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0xA70uLL);
      *(_DWORD *)v9 = 1869762646;
      *((_QWORD *)v9 + 1) = a1;
      *((_QWORD *)v9 + 333) = *(_QWORD *)(a1 + 24);
      if ( *(_BYTE *)(a1 + 313) )
        *((_DWORD *)v9 + 4) = 5;
      else
        *((_DWORD *)v9 + 4) = 2;
      TdrHistoryInit((struct _TDR_HISTORY *)(v9 + 32));
      Global = DXGGLOBAL::GetGlobal();
      MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global);
      v12 = ExAllocatePoolWithTag(PagedPool, 4LL * ((MaximumAdapterCount + 31) >> 5), 0x68536956u);
      *((_QWORD *)v9 + 327) = v12;
      if ( v12 )
      {
        memset(v12, 0, 4LL * ((MaximumAdapterCount + 31) >> 5));
        v16 = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * MaximumAdapterCount, 0x68536956u);
        *((_QWORD *)v9 + 3) = v16;
        if ( v16 )
        {
          memset(v16, 0, 8LL * MaximumAdapterCount);
          *((_QWORD *)v9 + 329) = *(_QWORD *)(a1 + 64);
          *((_QWORD *)v9 + 331) = *(_QWORD *)(a1 + 56);
          v20 = *(_QWORD *)(a1 + 72);
          if ( v20 )
            v21 = *(_QWORD *)(v20 + 80);
          else
            v21 = 0LL;
          *((_QWORD *)v9 + 330) = v21;
          if ( *(_BYTE *)(a1 + 313) )
            g_pVidSchSystemProcess = (__int64)v9;
          return v9;
        }
        else
        {
          v26 = WdLogNewEntry5_WdWarning(v18, v17, v19);
          WdLogEvent5_WdWarning(v26);
          ExFreePoolWithTag(*((PVOID *)v9 + 327), 0);
          ExFreePoolWithTag(v9, 0);
          return 0LL;
        }
      }
      else
      {
        v25 = WdLogNewEntry5_WdWarning(v14, v13, v15);
        WdLogEvent5_WdWarning(v25);
        ExFreePoolWithTag(v9, 0);
        return 0LL;
      }
    }
    else
    {
      v24 = WdLogNewEntry5_WdWarning(v7, v6, v8);
      WdLogEvent5_WdWarning(v24);
      return 0LL;
    }
  }
  else
  {
    v23 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v23);
    return 0LL;
  }
}
