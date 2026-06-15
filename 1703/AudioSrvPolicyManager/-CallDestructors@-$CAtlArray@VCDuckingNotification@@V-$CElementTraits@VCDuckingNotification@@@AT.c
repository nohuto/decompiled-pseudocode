/*
 * XREFs of ?CallDestructors@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@CAXPEAVCDuckingNotification@@_K@Z @ 0x180009A6C
 * Callers:
 *     ??1CDuckingManager@@UEAA@XZ @ 0x180006104 (--1CDuckingManager@@UEAA@XZ.c)
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180008DD0 (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z.c)
 *     ?RemoveAt@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180009504 (-RemoveAt@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@ATL@@@ATL.c)
 *     ??1?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAA@XZ @ 0x1800095C8 (--1-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAA@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::CallDestructors(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rdi
  _QWORD *v3; // rbx
  volatile signed __int32 *v4; // rdx
  signed __int32 v5; // eax
  bool v6; // cc
  __int64 result; // rax

  if ( a2 )
  {
    v2 = a2;
    v3 = (_QWORD *)(a1 + 24);
    do
    {
      if ( *v3 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 16LL))(*v3);
      v4 = (volatile signed __int32 *)(*(v3 - 1) - 24LL);
      v5 = _InterlockedExchangeAdd(v4 + 4, 0xFFFFFFFF);
      v6 = v5 <= 1;
      result = (unsigned int)(v5 - 1);
      if ( v6 )
        result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v4 + 8LL))(*(_QWORD *)v4);
      v3 += 4;
      --v2;
    }
    while ( v2 );
  }
  return result;
}
