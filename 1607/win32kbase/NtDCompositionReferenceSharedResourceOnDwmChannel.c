/*
 * XREFs of NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C007B700
 * Callers:
 *     <none>
 * Callees:
 *     ?AddSystemResourceRef@CBatch@DirectComposition@@QEAAJVResourceHandle@@@Z @ 0x1C001ADD4 (-AddSystemResourceRef@CBatch@DirectComposition@@QEAAJVResourceHandle@@@Z.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C003EBDC (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?ReferenceHandleAndLock@CDwmChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0042978 (-ReferenceHandleAndLock@CDwmChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C00485A8 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     UserIsCurrentProcessDwm @ 0x1C004B5A0 (UserIsCurrentProcessDwm.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionReferenceSharedResourceOnDwmChannel(__int64 a1, void *a2, int a3, _DWORD *a4, int *a5)
{
  unsigned int v8; // edi
  int v9; // ebx
  int v10; // edi
  __int64 v11; // r8
  PVOID v12; // rsi
  struct DirectComposition::CDwmChannel *v13; // r14
  int v15; // [rsp+24h] [rbp-24h]
  struct DirectComposition::CDwmChannel *v16; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+38h] [rbp-10h] BYREF

  v8 = a1;
  v9 = 0;
  if ( UserIsCurrentProcessDwm(a1) )
  {
    v16 = 0LL;
    v10 = DirectComposition::CDwmChannel::ReferenceHandleAndLock(v8, &v16);
    if ( v10 >= 0 )
    {
      LOBYTE(v11) = 1;
      v10 = DirectComposition::ResourceObject::ResolveHandle(
              a2,
              1LL,
              v11,
              (struct DirectComposition::ResourceObject **)&Object);
      if ( v10 >= 0 )
      {
        v12 = Object;
        if ( *((_DWORD *)Object + 9) == a3 )
        {
          v15 = *((_DWORD *)Object + 10);
          v9 = *((_DWORD *)Object + 11);
          v13 = v16;
          DirectComposition::CApplicationChannel::PreallocateNextBatch(v16);
          v10 = DirectComposition::CBatch::AddSystemResourceRef(*((_QWORD *)v13 + 23), v9);
        }
        else
        {
          v10 = -1073741790;
        }
        ObfDereferenceObject(v12);
      }
      _guard_dispatch_icall_fptr();
    }
  }
  else
  {
    v10 = -1073741790;
  }
  if ( v10 >= 0 )
  {
    if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a4 = v15;
    if ( a5 + 1 < a5 || (unsigned __int64)(a5 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a5 = v9;
  }
  return (unsigned int)v10;
}
