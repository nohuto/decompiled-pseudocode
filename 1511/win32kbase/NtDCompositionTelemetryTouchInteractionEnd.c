/*
 * XREFs of NtDCompositionTelemetryTouchInteractionEnd @ 0x1C0005490
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0019DA0 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     Win32AllocPoolWithQuota @ 0x1C00211D0 (Win32AllocPoolWithQuota.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionTelemetryTouchInteractionEnd(unsigned int a1, __int64 *a2)
{
  int v2; // ebx
  struct DirectComposition::CApplicationChannel *v3; // rdi
  struct DirectComposition::CApplicationChannel *v4; // rax
  struct DirectComposition::CApplicationChannel **v5; // rdx
  struct DirectComposition::CApplicationChannel *v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h]

  v8 = 0LL;
  v7 = 0LL;
  v2 = 0;
  if ( !a2 )
    v2 = -1073741811;
  if ( v2 >= 0 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v8 = *a2;
    v2 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v7);
    v3 = v7;
    if ( v2 >= 0 )
    {
      v2 = 0;
      v4 = (struct DirectComposition::CApplicationChannel *)Win32AllocPoolWithQuota(24LL, 1869890372LL);
      if ( !v4 )
        v2 = -1073741801;
      if ( v2 >= 0 )
      {
        *((_QWORD *)v4 + 2) = v8;
        v5 = (struct DirectComposition::CApplicationChannel **)*((_QWORD *)v3 + 72);
        *(_QWORD *)v4 = (char *)v3 + 568;
        *((_QWORD *)v4 + 1) = v5;
        if ( *v5 != (struct DirectComposition::CApplicationChannel *)((char *)v3 + 568) )
          __fastfail(3u);
        *v5 = v4;
        *((_QWORD *)v3 + 72) = v4;
      }
      _guard_dispatch_icall_fptr();
    }
  }
  return (unsigned int)v2;
}
