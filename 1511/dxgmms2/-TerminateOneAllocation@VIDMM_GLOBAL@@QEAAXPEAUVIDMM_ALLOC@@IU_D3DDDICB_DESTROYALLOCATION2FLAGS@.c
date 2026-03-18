/*
 * XREFs of ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C004D668
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C004D1F0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C004FC90 (-TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FL.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011E30 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011EF0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     VidSchSubmitDeviceCommand @ 0x1C00121A0 (VidSchSubmitDeviceCommand.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     Template_p @ 0x1C001CD38 (Template_p.c)
 *     VidSchFlushDevice @ 0x1C003C560 (VidSchFlushDevice.c)
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
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD v27[2]; // [rsp+38h] [rbp-11h] BYREF
  _QWORD v28[2]; // [rsp+48h] [rbp-1h] BYREF
  _QWORD v29[8]; // [rsp+58h] [rbp+Fh] BYREF
  char v30; // [rsp+C0h] [rbp+77h]

  v30 = (char)a4.0;
  v7 = **a2;
  DXGFASTMUTEX::Acquire(*(union _LARGE_INTEGER **)(v7 + 312));
  *((_DWORD *)a2 + 8) |= 1u;
  DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v7 + 312), v8, v9, v10);
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
  v27[1] = a2;
  v27[0] = 1LL;
  memset(v29, 0, 0x38uLL);
  LODWORD(v29[6]) = 0;
  v29[3] = 0LL;
  v29[4] = v27;
  v15 = a2[1];
  LODWORD(v29[0]) = (v30 & 1) == 0;
  v16 = v15[4];
  v19 = VidSchSubmitDeviceCommand(v16, (__int64)v29, v17, v18);
  v21 = v19;
  if ( v19 < 0 )
  {
    v22 = WdLogNewEntry5_WdWarning(v20);
    *(_QWORD *)(v22 + 24) = v21;
    WdLogEvent5_WdWarning(v22);
    v28[0] = 5LL;
    v28[1] = 0LL;
    VidSchFlushDevice(v16, (int *)v28, v23, v24);
    LODWORD(v29[0]) = 0;
    VidSchSubmitDeviceCommand(v16, (__int64)v29, v25, v26);
  }
  if ( !LOBYTE(v27[0]) )
    *((_DWORD *)a2 + 8) |= 2u;
}
