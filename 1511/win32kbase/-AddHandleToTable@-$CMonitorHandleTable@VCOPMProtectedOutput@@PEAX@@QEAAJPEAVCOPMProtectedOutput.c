/*
 * XREFs of ?AddHandleToTable@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAVCOPMProtectedOutput@@PEAPEAX@Z @ 0x1C0083184
 * Callers:
 *     ?CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAX@Z @ 0x1C0082B6C (-CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAX@Z.c)
 * Callees:
 *     ?AddElement@?$CList@VCOPMProtectedOutput@@@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z @ 0x1C00835B4 (-AddElement@-$CList@VCOPMProtectedOutput@@@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z.c)
 */

__int64 __fastcall CMonitorHandleTable<COPMProtectedOutput,void *>::AddHandleToTable(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  int v5; // edx
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v5 = CList<COPMProtectedOutput>::AddElement(a1, a2, &v7);
  if ( v5 >= 0 )
  {
    if ( v7 == -1LL )
      v5 = -1073741823;
    if ( v5 >= 0 )
    {
      *a3 = v7;
      return 0LL;
    }
    *(_QWORD *)(*(_QWORD *)a1 + 8LL * v7) = 0LL;
    --*(_DWORD *)(a1 + 8);
  }
  return (unsigned int)v5;
}
