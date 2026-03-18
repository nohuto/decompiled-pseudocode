/*
 * XREFs of NtDCompositionOpenSharedResource @ 0x1C0076180
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0019DA0 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001B798 (-OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceM.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJIPEA_N@Z @ 0x1C001D330 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJIPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionOpenSharedResource(unsigned int a1, void *a2, unsigned int a3, int a4, _DWORD *a5)
{
  _DWORD *v8; // rdx
  int v9; // ebx
  __int64 v10; // r9
  struct DirectComposition::CApplicationChannel *v11; // rdi
  struct DirectComposition::CResourceMarshaler *v12; // rax
  struct DirectComposition::CApplicationChannel *v14; // [rsp+38h] [rbp-50h] BYREF
  struct DirectComposition::CResourceMarshaler *v15; // [rsp+40h] [rbp-48h] BYREF

  v14 = 0LL;
  if ( a5 )
  {
    v8 = a5;
    if ( (unsigned __int64)a5 >= MmUserProbeAddress )
      v8 = (_DWORD *)MmUserProbeAddress;
    *v8 = *v8;
    v9 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v14);
    if ( v9 >= 0 )
    {
      LOBYTE(v10) = a4 != 0;
      v11 = v14;
      v9 = DirectComposition::CApplicationChannel::OpenInternalSharedResource(v14, a2, a3, v10, &v15);
      if ( v9 >= 0 )
      {
        v12 = v15;
        *((_DWORD *)v15 + 4) |= 1u;
        *a5 = *((_DWORD *)v12 + 6);
      }
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v11)(v11);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
