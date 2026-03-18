/*
 * XREFs of NtDCompositionCreateResource @ 0x1C002CC10
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C002CF70 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?CreateResource@CApplicationChannel@DirectComposition@@QEAAJIHPEAI@Z @ 0x1C00300F4 (-CreateResource@CApplicationChannel@DirectComposition@@QEAAJIHPEAI@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJIPEA_N@Z @ 0x1C0030130 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJIPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionCreateResource(unsigned int a1, unsigned int a2, int a3, _DWORD *a4)
{
  _DWORD *v7; // rdx
  int Resource; // ebx
  int v9; // r8d
  struct DirectComposition::CApplicationChannel *v10; // rdi
  unsigned int v12[2]; // [rsp+20h] [rbp-38h] BYREF
  struct DirectComposition::CApplicationChannel *v13; // [rsp+28h] [rbp-30h] BYREF

  v13 = 0LL;
  v12[0] = 0;
  if ( a4 )
  {
    v7 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v7 = (_DWORD *)MmUserProbeAddress;
    *v7 = *v7;
    v12[1] = 0;
    Resource = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v13);
    if ( Resource >= 0 )
    {
      v9 = a3;
      v10 = v13;
      Resource = DirectComposition::CApplicationChannel::CreateResource(v13, a2, v9, v12);
      if ( Resource >= 0 )
        *a4 = v12[0];
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v10)(v10);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)Resource;
}
