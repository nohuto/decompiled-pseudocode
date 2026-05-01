/*
 * XREFs of ??1ResourceSetClientProxy@@MEAA@XZ @ 0x1800124F8
 * Callers:
 *     ??_GResourceSetClientProxy@@MEAAPEAXI@Z @ 0x1800125A0 (--_GResourceSetClientProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 *     ?ReleaseResources@ResourceSetClientProxy@@UEAAJXZ @ 0x180014920 (-ReleaseResources@ResourceSetClientProxy@@UEAAJXZ.c)
 */

void __fastcall ResourceSetClientProxy::~ResourceSetClientProxy(ResourceSetClientProxy *this)
{
  bool v1; // zf
  __int64 v3; // rdi

  v1 = *((_DWORD *)this + 6) == 0;
  *(_QWORD *)this = &ResourceSetClientProxy::`vftable';
  if ( !v1 )
    ResourceSetClientProxy::ReleaseResources(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
}
