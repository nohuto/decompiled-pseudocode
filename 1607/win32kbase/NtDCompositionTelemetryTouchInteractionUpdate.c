/*
 * XREFs of NtDCompositionTelemetryTouchInteractionUpdate @ 0x1C0004350
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C003AA10 (Win32AllocPoolWithQuota.c)
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C00446C4 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall NtDCompositionTelemetryTouchInteractionUpdate(unsigned int a1, size_t Size, char *Src)
{
  int v6; // ebx
  struct DirectComposition::CApplicationChannel *v7; // rdi
  __int64 v8; // rax
  __int64 *v9; // rdx
  struct DirectComposition::CApplicationChannel *v11; // [rsp+28h] [rbp-70h] BYREF
  _OWORD v12[3]; // [rsp+30h] [rbp-68h] BYREF

  v6 = 0;
  v11 = 0LL;
  memset(v12, 0, sizeof(v12));
  if ( !Src || Size != 48 )
    v6 = -1073741811;
  if ( v6 >= 0 )
  {
    if ( &Src[Size] < Src || (unsigned __int64)&Src[Size] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v12, Src, Size);
    v6 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v11);
    v7 = v11;
    if ( v6 >= 0 )
    {
      v6 = 0;
      v8 = Win32AllocPoolWithQuota(64LL, 1869890372LL);
      if ( !v8 )
        v6 = -1073741801;
      if ( v6 >= 0 )
      {
        *(_OWORD *)(v8 + 16) = v12[0];
        *(_OWORD *)(v8 + 32) = v12[1];
        *(_OWORD *)(v8 + 48) = v12[2];
        v9 = (__int64 *)*((_QWORD *)v7 + 71);
        if ( (struct DirectComposition::CApplicationChannel *)*v9 != (struct DirectComposition::CApplicationChannel *)((char *)v7 + 560) )
          __fastfail(3u);
        *(_QWORD *)v8 = (char *)v7 + 560;
        *(_QWORD *)(v8 + 8) = v9;
        *v9 = v8;
        *((_QWORD *)v7 + 71) = v8;
      }
      _guard_dispatch_icall_fptr();
    }
  }
  return (unsigned int)v6;
}
