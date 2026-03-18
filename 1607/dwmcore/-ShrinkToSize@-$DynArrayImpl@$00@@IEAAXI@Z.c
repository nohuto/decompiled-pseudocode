/*
 * XREFs of ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800A3618
 * Callers:
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18003B930 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x180044A60 (-ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ.c)
 *     ??1CAnalogCompositorClient@@QEAA@XZ @ 0x1800BD2C0 (--1CAnalogCompositorClient@@QEAA@XZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180116584 (--1CComposition@@MEAA@XZ.c)
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x180116F8C (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ?ReleaseTargets@CRenderTargetManager@@QEAAXXZ @ 0x18011B430 (-ReleaseTargets@CRenderTargetManager@@QEAAXXZ.c)
 * Callees:
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DynArrayImpl<1>::ShrinkToSize(__int64 *a1)
{
  __int64 result; // rax
  void *v3; // rcx
  unsigned __int64 v4; // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  result = *a1;
  v3 = (void *)a1[1];
  if ( (void *)result != v3 )
  {
    v4 = 8LL * *((unsigned int *)a1 + 6);
    if ( v4 <= 0xFFFFFFFF )
    {
      if ( *((_DWORD *)a1 + 6) <= *((_DWORD *)a1 + 4) )
      {
        memcpy_0(v3, (const void *)result, (unsigned int)v4);
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *a1);
        *a1 = a1[1];
        result = *((unsigned int *)a1 + 4);
LABEL_6:
        *((_DWORD *)a1 + 5) = result;
        return result;
      }
      v5 = result;
      result = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64 *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 24LL))(
                 WPF::g_pProcessHeap,
                 &v5,
                 (unsigned int)v4);
      if ( (int)result >= 0 )
      {
        *a1 = v5;
        result = *((unsigned int *)a1 + 6);
        goto LABEL_6;
      }
    }
  }
  return result;
}
