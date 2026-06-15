/*
 * XREFs of ??1CCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140014B34
 * Callers:
 *     ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x140015350 (--1CCrossProcessBaseServerEndpoint@@UEAA@XZ.c)
 *     ??1CCrossProcessBaseClientEndpoint@@UEAA@XZ @ 0x140035DA4 (--1CCrossProcessBaseClientEndpoint@@UEAA@XZ.c)
 *     ??_GCCrossProcessBaseEndpoint@@UEAAPEAXI@Z @ 0x140036200 (--_GCCrossProcessBaseEndpoint@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x140013CC4 (--1-$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140015620 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140015E50 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140015F0C (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTUnlockMemory@@YAJPEAX_K@Z @ 0x140015F7C (-AERTUnlockMemory@@YAJPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CCrossProcessBaseEndpoint::~CCrossProcessBaseEndpoint(CCrossProcessBaseEndpoint *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rax

  *(_QWORD *)this = &CCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpointRT'};
  v2 = (void *)*((_QWORD *)this + 14);
  if ( v2 )
  {
    AERTDestroyZoneHeap(v2);
    *((_QWORD *)this + 14) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 8);
  if ( v3 )
  {
    AERTUnlockMemory(v3, *(unsigned int *)(*((_QWORD *)this + 9) + 148LL));
    UnmapViewOfFile(*((LPCVOID *)this + 8));
    *((_QWORD *)this + 8) = 0LL;
  }
  v4 = AERTGetDLLRTHeap();
  AERTFree(*((void **)this + 9), v4);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 22) = &CCrossProcessEndpointTraceLogger::`vftable';
  CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::~CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>((__int64)this + 280);
  *((_QWORD *)this + 25) = &CAggregateValuesBase<enum CpGlitchEvent,unsigned int *>::`vftable';
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
}
