/*
 * XREFs of NtDCompositionTelemetryTouchInteractionUpdate @ 0x1C0004A30
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0019DA0 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     Win32AllocPoolWithQuota @ 0x1C00211D0 (Win32AllocPoolWithQuota.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 __fastcall NtDCompositionTelemetryTouchInteractionUpdate(unsigned int a1, size_t Size, char *Src)
{
  int v4; // ebx
  struct DirectComposition::CApplicationChannel *v5; // rdi
  __int64 v6; // rax
  __int64 *v7; // rdx
  struct DirectComposition::CApplicationChannel *v9; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v10; // [rsp+28h] [rbp-70h]
  _OWORD v11[3]; // [rsp+30h] [rbp-68h] BYREF

  v10 = a1;
  v4 = 0;
  v9 = 0LL;
  memset(v11, 0, sizeof(v11));
  if ( !Src || Size != 48 )
    v4 = -1073741811;
  if ( v4 >= 0 )
  {
    if ( &Src[Size] < Src || (unsigned __int64)&Src[Size] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v11, Src, Size);
    v4 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v9);
    v5 = v9;
    if ( v4 >= 0 )
    {
      v4 = 0;
      v6 = Win32AllocPoolWithQuota(64LL, 1869890372LL);
      if ( !v6 )
        v4 = -1073741801;
      if ( v4 >= 0 )
      {
        *(_OWORD *)(v6 + 16) = v11[0];
        *(_OWORD *)(v6 + 32) = v11[1];
        *(_OWORD *)(v6 + 48) = v11[2];
        v7 = (__int64 *)*((_QWORD *)v5 + 70);
        *(_QWORD *)v6 = (char *)v5 + 552;
        *(_QWORD *)(v6 + 8) = v7;
        if ( (struct DirectComposition::CApplicationChannel *)*v7 != (struct DirectComposition::CApplicationChannel *)((char *)v5 + 552) )
          __fastfail(3u);
        *v7 = v6;
        *((_QWORD *)v5 + 70) = v6;
      }
      _guard_dispatch_icall_fptr();
    }
  }
  return (unsigned int)v4;
}
