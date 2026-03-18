/*
 * XREFs of ?Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z @ 0x1C0023EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAJI@Z @ 0x1C0022C34 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAJI@Z.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0023418 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0023438 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CSharedSystemResource::Delete(
        DirectComposition::CSharedSystemResource *this,
        struct _WIN32_DELETEMETHOD_PARAMETERS *a2)
{
  DirectComposition::CConnection *DefaultConnection; // rax
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
      DirectComposition::CConnection::ReleaseSystemResource(DefaultConnection, *((_DWORD *)this + 5));
      DirectComposition::CConnection::Release(v4, v5);
    }
  }
  return 0LL;
}
