/*
 * XREFs of ?ProcessSetHandoff@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETHANDOFF@@@Z @ 0x18001F074
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18003ABA0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimation::ProcessSetHandoff(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATION_SETHANDOFF *a3)
{
  __int64 v6; // rdx
  __int64 Resource; // rax
  bool v9; // al

  *((_DWORD *)this + 70) = *((_DWORD *)a3 + 2);
  *((_QWORD *)this + 36) = *(_QWORD *)((char *)a3 + 12);
  v6 = *((unsigned int *)a3 + 5);
  if ( (_DWORD)v6 )
  {
    Resource = CResourceTable::GetResource(a2, v6, 88LL);
    *((_QWORD *)this + 37) = Resource;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Resource + 8LL))(Resource);
    v9 = *((_DWORD *)a3 + 7) != 0;
    *((_BYTE *)this + 176) &= ~0x20u;
    *((_BYTE *)this + 176) |= 32 * v9;
    *((_QWORD *)this + 39) = *((_QWORD *)a3 + 4);
    *((_QWORD *)this + 40) = *((_QWORD *)a3 + 5);
  }
  *((_DWORD *)this + 76) = *((_DWORD *)a3 + 6);
  return 0LL;
}
