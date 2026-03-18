/*
 * XREFs of NtDCompositionReleaseResource @ 0x1C002C930
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C002CF70 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJIPEA_N@Z @ 0x1C0030130 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJIPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionReleaseResource(unsigned int a1, unsigned int a2, bool *a3)
{
  int v5; // edi
  _BYTE *v6; // rdx
  unsigned int v7; // edx
  struct DirectComposition::CApplicationChannel *v8; // rbx
  struct DirectComposition::CApplicationChannel *v10; // [rsp+20h] [rbp-28h] BYREF
  bool v11; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0;
  v11 = 0;
  if ( a3 )
  {
    v6 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v6 = (_BYTE *)MmUserProbeAddress;
    *v6 = *v6;
  }
  else
  {
    v5 = -1073741811;
  }
  if ( v5 >= 0 )
  {
    v10 = 0LL;
    v5 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v10);
    if ( v5 >= 0 )
    {
      v7 = a2;
      v8 = v10;
      v5 = DirectComposition::CApplicationChannel::ReleaseResource(v10, v7, &v11);
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v8)(v8);
    }
    if ( v5 >= 0 )
      *a3 = v11;
  }
  return (unsigned int)v5;
}
