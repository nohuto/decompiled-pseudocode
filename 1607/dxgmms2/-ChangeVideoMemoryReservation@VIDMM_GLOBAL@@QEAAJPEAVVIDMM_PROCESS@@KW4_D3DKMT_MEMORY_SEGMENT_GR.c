/*
 * XREFs of ?ChangeVideoMemoryReservation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z @ 0x1C0088438
 * Callers:
 *     VidMmChangeVideoMemoryReservation @ 0x1C001D4F0 (VidMmChangeVideoMemoryReservation.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000FC8C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ChangeVideoMemoryReservation@VIDMM_PROCESS@@QEAAJKKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z @ 0x1C009069C (-ChangeVideoMemoryReservation@VIDMM_PROCESS@@QEAAJKKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ChangeVideoMemoryReservation(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        unsigned int a3,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a4,
        unsigned __int64 a5)
{
  __int64 v6; // rbx
  __int64 v9; // rax
  unsigned int v11; // ebx
  _BYTE v12[40]; // [rsp+30h] [rbp-28h] BYREF

  v6 = a3;
  if ( a3 < *((_DWORD *)this + 1604) )
  {
    DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v12, (VIDMM_GLOBAL *)((char *)this + 40968));
    v11 = VIDMM_PROCESS::ChangeVideoMemoryReservation(a2, *(_DWORD *)(*((_QWORD *)this + 3) + 200LL), v6, a4, a5);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
    return v11;
  }
  else
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v9 + 24) = v6;
    WdLogEvent5_WdAssertion(v9);
    return 3221225485LL;
  }
}
