/*
 * XREFs of ?Init@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_GLOBAL@@P6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEAT_LARGE_INTEGER@@@Z @ 0x1C003F410
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@VIDMM_SEGMENT@@UEAAJPEAVVIDMM_GLOBAL@@P6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEAT_LARGE_INTEGER@@@Z @ 0x1C003D580 (-Init@VIDMM_SEGMENT@@UEAAJPEAVVIDMM_GLOBAL@@P6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEA.c)
 *     ?InitializeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAJXZ @ 0x1C003F374 (-InitializeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAJXZ.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::Init(
        VIDMM_APERTURE_SEGMENT *this,
        struct VIDMM_GLOBAL *a2,
        void (*a3)(void *),
        int a4,
        unsigned int a5,
        struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *a6,
        union _LARGE_INTEGER *a7)
{
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rax

  if ( (*(_DWORD *)a6 & 0x2000) != 0 )
  {
    v8 = WdLogNewEntry5_WdWarning(a6, a2, a3);
    WdLogEvent5_WdWarning(v8);
    return 3221225485LL;
  }
  else
  {
    result = VIDMM_SEGMENT::Init(this, a2, a3, a4, a5, a6, a7);
    if ( (int)result >= 0 )
    {
      *((_QWORD *)this + 15) = 0LL;
      result = VIDMM_APERTURE_SEGMENT::InitializeGuardPages((PHYSICAL_ADDRESS *)this);
      v12 = result;
      if ( (int)result >= 0 )
      {
        v13 = WdLogNewEntry5_WdEvent(v11, v10);
        WdLogEvent5_WdEvent(v13);
        v16 = (_QWORD *)WdLogNewEntry5_WdEvent(v15, v14);
        v16[3] = *((_QWORD *)this + 5);
        v16[4] = *((int *)this + 7);
        v16[5] = *((unsigned int *)this + 6);
        v16[6] = *((unsigned int *)this + 4);
        WdLogEvent5_WdEvent(v16);
        return v12;
      }
    }
  }
  return result;
}
