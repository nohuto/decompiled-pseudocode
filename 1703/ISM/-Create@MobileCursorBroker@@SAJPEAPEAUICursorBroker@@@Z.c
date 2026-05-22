/*
 * XREFs of ?Create@MobileCursorBroker@@SAJPEAPEAUICursorBroker@@@Z @ 0x180025C08
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18001248C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??0MobileCursorBroker@@IEAA@XZ @ 0x18002570C (--0MobileCursorBroker@@IEAA@XZ.c)
 *     ?Initialize@MobileCursorBroker@@QEAAJXZ @ 0x180025950 (-Initialize@MobileCursorBroker@@QEAAJXZ.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MobileCursorBroker::Create(struct ICursorBroker **a1)
{
  MobileCursorBroker *v2; // rax
  __int64 v3; // rcx
  MobileCursorBroker *v4; // rbx
  MobileCursorBroker *v5; // rdi
  int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx

  *a1 = 0LL;
  v2 = (MobileCursorBroker *)malloc(0x548uLL);
  v4 = v2;
  if ( v2 )
    memset(v2, 0, 0x548uLL);
  if ( v4 )
    v5 = MobileCursorBroker::MobileCursorBroker(v4);
  else
    v5 = 0LL;
  if ( v5 )
  {
    v7 = MobileCursorBroker::Initialize(v5);
    v6 = v7;
    if ( v7 >= 0 )
    {
      *a1 = v5;
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq(v8, &MinInput_Warning_CheckResult, 0, 124, v7);
    }
    if ( v6 < 0 )
      (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v5 + 4) + 24LL))((__int64)v5 + 32, 1LL);
  }
  else
  {
    v6 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v3, &MinInput_Warning_CheckResult, 0, 122, 14);
  }
  return (unsigned int)v6;
}
