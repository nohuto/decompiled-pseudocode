/*
 * XREFs of ?AddHandleToTable@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAVCOPMProtectedOutput@@PEAPEAX@Z @ 0x1C0084B54
 * Callers:
 *     ?CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1C008457C (-CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH.c)
 * Callees:
 *     ?AddElement@?$CList@VCOPMProtectedOutput@@@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z @ 0x1C0084F2C (-AddElement@-$CList@VCOPMProtectedOutput@@@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z.c)
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
