/*
 * XREFs of NtDCompositionOpenSharedResourceHandle @ 0x1C0076C00
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0019DA0 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C001CCA0 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionOpenSharedResourceHandle(__int64 a1, int a2, _QWORD *a3)
{
  int v5; // ebx
  DirectComposition::CApplicationChannel *v7; // [rsp+28h] [rbp-10h] BYREF

  v7 = 0LL;
  v5 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v7);
  if ( v5 >= 0 )
  {
    if ( DirectComposition::CApplicationChannel::LookupResourceMarshaler(v7, a2) )
      v5 = _guard_dispatch_icall_fptr();
    else
      v5 = -1073741790;
    _guard_dispatch_icall_fptr();
  }
  if ( v5 >= 0 )
  {
    if ( a3 )
    {
      if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a3 = -1LL;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)v5;
}
