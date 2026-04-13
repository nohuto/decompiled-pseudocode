/*
 * XREFs of ?Initialize@AgileGitPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180003EB8
 * Callers:
 *     ?s_AddThreadAffineWrapper@ComTaskPool@Internal@Windows@@CAJPEAUIComPoolTask@23@PEAPEAU423@@Z @ 0x180004218 (-s_AddThreadAffineWrapper@ComTaskPool@Internal@Windows@@CAJPEAUIComPoolTask@23@PEAPEAU423@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AgileGitPtr::Initialize(AgileGitPtr *this, const struct _GUID *a2, struct IUnknown *a3)
{
  __int64 v5; // rcx
  int AgileReference; // edi
  __int64 v8; // rdx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(_QWORD *)this;
  if ( v5 )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  AgileReference = 0;
  if ( a3 )
  {
    v10 = 0LL;
    AgileReference = RoGetAgileReference(0LL, a2, a3, &v10);
    if ( AgileReference < 0 )
    {
      v8 = v10;
    }
    else
    {
      v8 = *(_QWORD *)this;
      *(_QWORD *)this = v10;
    }
    if ( v8 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  return (unsigned int)AgileReference;
}
