/*
 * XREFs of ?Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z @ 0x1C0048740
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00187F4 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C0018918 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0019B0C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CSharedSystemResource::Delete(
        DirectComposition::CSharedSystemResource *this,
        struct _WIN32_DELETEMETHOD_PARAMETERS *a2)
{
  struct DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v4; // rbx
  unsigned int v5; // edx

  (*(void (__fastcall **)(DirectComposition::CSharedSystemResource *, struct _WIN32_DELETEMETHOD_PARAMETERS *))(*(_QWORD *)this + 8LL))(
    this,
    a2);
  if ( *((_DWORD *)this + 5) )
  {
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
    v4 = DefaultConnection;
    if ( DefaultConnection )
    {
      DirectComposition::CConnection::ReleaseSystemResource((__int64)DefaultConnection, *((_DWORD *)this + 5));
      DirectComposition::CConnection::Release(v4, v5);
    }
  }
  return 0LL;
}
