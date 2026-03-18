/*
 * XREFs of ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1C007EB18
 * Callers:
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C0013B0C (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 * Callees:
 *     ??0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_N@Z @ 0x1C001A780 (--0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_N@Z.c)
 *     Win32AllocPoolZInit @ 0x1C004F690 (Win32AllocPoolZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CSystemChannel::Create(
        struct DirectComposition::CConnection *a1,
        struct DirectComposition::CSystemChannel **a2)
{
  DirectComposition::CApplicationChannel *v4; // rax
  struct DirectComposition::CSystemChannel *v5; // rbx
  int v6; // edi

  v4 = (DirectComposition::CApplicationChannel *)Win32AllocPoolZInit(0x2E0uLL);
  v5 = v4;
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::CApplicationChannel(v4, a1, 0);
    *((_QWORD *)v5 + 2) = 0LL;
    *(_QWORD *)v5 = &DirectComposition::CSystemChannel::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(struct DirectComposition::CSystemChannel *))(*(_QWORD *)v5 + 40LL))(v5);
    if ( v6 < 0 )
      (*(void (__fastcall **)(struct DirectComposition::CSystemChannel *, __int64))(*(_QWORD *)v5 + 32LL))(v5, 1LL);
    else
      *a2 = v5;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v6;
}
