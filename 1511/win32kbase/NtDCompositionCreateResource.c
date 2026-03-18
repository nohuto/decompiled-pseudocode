/*
 * XREFs of NtDCompositionCreateResource @ 0x1C0019C90
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0019DA0 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001B87C (-CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarsh.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001B9E4 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJIPEA_N@Z @ 0x1C001D330 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJIPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionCreateResource(unsigned int a1, unsigned int a2, int a3, _DWORD *a4)
{
  _DWORD *v7; // rdx
  int v8; // ebx
  unsigned int v9; // edx
  struct DirectComposition::CApplicationChannel *v10; // rdi
  int InternalSharedResource; // eax
  struct DirectComposition::CResourceMarshaler *v12; // rax
  struct DirectComposition::CApplicationChannel *v14; // [rsp+28h] [rbp-40h] BYREF
  struct DirectComposition::CResourceMarshaler *v15[7]; // [rsp+30h] [rbp-38h] BYREF

  v14 = 0LL;
  if ( a4 )
  {
    v7 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v7 = (_DWORD *)MmUserProbeAddress;
    *v7 = *v7;
    v8 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v14);
    if ( v8 >= 0 )
    {
      v9 = a2;
      v10 = v14;
      if ( a3 )
        InternalSharedResource = DirectComposition::CApplicationChannel::CreateInternalSharedResource(v14, v9, v15);
      else
        InternalSharedResource = DirectComposition::CApplicationChannel::CreateInternalResource(v14, v9, v15);
      v8 = InternalSharedResource;
      if ( InternalSharedResource >= 0 )
      {
        v12 = v15[0];
        *((_DWORD *)v15[0] + 4) |= 1u;
        *a4 = *((_DWORD *)v12 + 6);
      }
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v10)(v10);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v8;
}
