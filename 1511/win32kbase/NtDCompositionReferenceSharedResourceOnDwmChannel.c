/*
 * XREFs of NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C00117E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CDwmChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0011910 (-ReferenceHandleAndLock@CDwmChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?AddSystemResourceRef@CBatch@DirectComposition@@QEAAJI@Z @ 0x1C001A450 (-AddSystemResourceRef@CBatch@DirectComposition@@QEAAJI@Z.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C001ABC8 (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     UserIsCurrentProcessDwm @ 0x1C004D740 (UserIsCurrentProcessDwm.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C007700C (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionReferenceSharedResourceOnDwmChannel(
        unsigned int a1,
        void *a2,
        int a3,
        _DWORD *a4,
        unsigned int *a5)
{
  int v9; // ebx
  PVOID v10; // rdi
  unsigned int v11; // ebx
  struct DirectComposition::CDwmChannel *v12; // rsi
  int v14; // [rsp+20h] [rbp-28h]
  unsigned int v15; // [rsp+24h] [rbp-24h]
  struct DirectComposition::CDwmChannel *v16; // [rsp+28h] [rbp-20h] BYREF
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF

  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    v16 = 0LL;
    v9 = DirectComposition::CDwmChannel::ReferenceHandleAndLock(a1, &v16);
    if ( v9 >= 0 )
    {
      v9 = DirectComposition::ResourceObject::ResolveHandle(
             a2,
             1u,
             1,
             (struct DirectComposition::ResourceObject **)&Object);
      if ( v9 >= 0 )
      {
        v10 = Object;
        if ( *((_DWORD *)Object + 9) == a3 )
        {
          v14 = *((_DWORD *)Object + 10);
          v11 = *((_DWORD *)Object + 11);
          v15 = v11;
          v12 = v16;
          DirectComposition::CApplicationChannel::PreallocateNextBatch(v16);
          v9 = DirectComposition::CBatch::AddSystemResourceRef(*((DirectComposition::CBatch **)v12 + 15), v11);
        }
        else
        {
          v9 = -1073741790;
        }
        ObfDereferenceObject(v10);
      }
      _guard_dispatch_icall_fptr();
    }
  }
  else
  {
    v9 = -1073741790;
  }
  if ( v9 >= 0 )
  {
    if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a4 = v14;
    if ( a5 + 1 < a5 || (unsigned __int64)(a5 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a5 = v15;
  }
  return (unsigned int)v9;
}
