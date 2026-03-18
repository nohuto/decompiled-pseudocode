/*
 * XREFs of ?ProcessSetInertiaModifierAnimations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETINERTIAMODIFIERANIMATIONS@@PEBXI@Z @ 0x18010B7D4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetInertiaModifierAnimations(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_SETINERTIAMODIFIERANIMATIONS *a3,
        const void *a4,
        unsigned int a5)
{
  __int64 Resource; // rax
  __int64 v9; // rbp
  unsigned int v10; // ebx
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rdx

  Resource = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 4), 0x6Bu);
  v9 = *((unsigned int *)a3 + 3);
  v10 = 0;
  v11 = Resource;
  if ( *((_QWORD *)this + v9 + 57) != Resource )
  {
    if ( Resource )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)Resource + 8LL))(Resource);
    v12 = *((_QWORD *)this + v9 + 57);
    *((_QWORD *)this + v9 + 57) = v11;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( *((_DWORD *)a3 + 5) == a5 )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + *((unsigned int *)a3 + 3) + 60));
    *((_QWORD *)this + *((unsigned int *)a3 + 3) + 60) = 0LL;
    *((_DWORD *)this + *((unsigned int *)a3 + 3) + 126) = *((_DWORD *)a3 + 5);
    if ( *((_DWORD *)a3 + 5) )
    {
      v13 = 4LL * *((unsigned int *)a3 + 5);
      if ( !is_mul_ok(*((unsigned int *)a3 + 5), 4uLL) )
        v13 = -1LL;
      *((_QWORD *)this + *((unsigned int *)a3 + 3) + 60) = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                             WPF::g_pProcessHeap,
                                                             v13);
      memcpy_0(*((void **)this + *((unsigned int *)a3 + 3) + 60), a4, *((unsigned int *)a3 + 5));
    }
  }
  else
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x31Du);
  }
  return v10;
}
