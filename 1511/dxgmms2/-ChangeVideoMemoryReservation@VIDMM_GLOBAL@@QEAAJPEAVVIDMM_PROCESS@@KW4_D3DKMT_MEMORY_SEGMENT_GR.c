/*
 * XREFs of ?ChangeVideoMemoryReservation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z @ 0x1C007A4C4
 * Callers:
 *     VidMmChangeVideoMemoryReservation @ 0x1C001C640 (VidMmChangeVideoMemoryReservation.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00144B8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?ChangeVideoMemoryReservation@VIDMM_PROCESS@@QEAAJKKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z @ 0x1C007F418 (-ChangeVideoMemoryReservation@VIDMM_PROCESS@@QEAAJKKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ChangeVideoMemoryReservation(
        struct _KTHREAD **this,
        struct VIDMM_PROCESS *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v5; // esi
  __int64 v6; // rbx
  __int64 v9; // rax
  unsigned int v11; // ebx
  _BYTE v12[40]; // [rsp+30h] [rbp-28h] BYREF

  v5 = (int)a4;
  v6 = (unsigned int)a3;
  if ( (unsigned int)a3 < *((_DWORD *)this + 1604) )
  {
    DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v12, this + 5088, a3, a4);
    v11 = VIDMM_PROCESS::ChangeVideoMemoryReservation(a2, *((_DWORD *)this[3] + 46), v6, v5, a5);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
    return v11;
  }
  else
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = v6;
    WdLogEvent5_WdAssertion(v9);
    return 3221225485LL;
  }
}
