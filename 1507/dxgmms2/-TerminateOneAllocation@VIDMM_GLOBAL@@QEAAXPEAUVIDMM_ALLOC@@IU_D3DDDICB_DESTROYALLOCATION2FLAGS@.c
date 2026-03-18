/*
 * XREFs of ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C00307E0
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0030478 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0031024 (-TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FL.c)
 * Callees:
 *     VidSchSubmitDeviceCommand @ 0x1C0001048 (VidSchSubmitDeviceCommand.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005B60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005BE8 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     Template_p @ 0x1C0006E98 (Template_p.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     VidSchFlushDevice @ 0x1C002F300 (VidSchFlushDevice.c)
 */

void __fastcall VIDMM_GLOBAL::TerminateOneAllocation(
        VIDMM_GLOBAL *this,
        __int64 **a2,
        __int64 a3,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a4,
        struct DXGTERMINATIONTRACKER *a5)
{
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD v22[2]; // [rsp+38h] [rbp-11h] BYREF
  _QWORD v23[2]; // [rsp+48h] [rbp-1h] BYREF
  _QWORD v24[8]; // [rsp+58h] [rbp+Fh] BYREF
  char v25; // [rsp+C0h] [rbp+77h]

  v25 = (char)a4.0;
  v7 = **a2;
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v7 + 312));
  *((_DWORD *)a2 + 8) |= 1u;
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v7 + 312), v8, v9, v10);
  a2[24] = (__int64 *)a5;
  while ( *((_DWORD *)a2 + 40) )
    KeWaitForSingleObject(a2 + 21, Executive, 0, 0, 0LL);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
    Template_p(v11, &EventTerminateAllocation, v12, a2);
  v13 = **a2;
  v14 = *(_QWORD *)(v13 + 16);
  if ( (**(_DWORD **)(v13 + 472) & 0x20000000) != 0 )
  {
    ++*((_DWORD *)this + 1926);
    *((_QWORD *)this + 964) += v14;
  }
  else
  {
    ++*((_DWORD *)this + 1930);
    *((_QWORD *)this + 966) += v14;
  }
  v22[1] = a2;
  v22[0] = 1LL;
  memset(v24, 0, 0x38uLL);
  LODWORD(v24[6]) = 0;
  v24[3] = 0LL;
  v24[4] = v22;
  v15 = a2[1];
  LODWORD(v24[0]) = (v25 & 1) == 0;
  v16 = v15[4];
  v17 = VidSchSubmitDeviceCommand(v16, (__int64)v24);
  v18 = v17;
  if ( v17 < 0 )
  {
    v19 = WdLogNewEntry5_WdWarning();
    *(_QWORD *)(v19 + 24) = v18;
    WdLogEvent5_WdWarning(v19);
    v23[0] = 3LL;
    v23[1] = 0LL;
    VidSchFlushDevice(v16, (int *)v23, v20, v21);
    LODWORD(v24[0]) = 0;
    VidSchSubmitDeviceCommand(v16, (__int64)v24);
  }
  if ( !LOBYTE(v22[0]) )
    *((_DWORD *)a2 + 8) |= 2u;
}
