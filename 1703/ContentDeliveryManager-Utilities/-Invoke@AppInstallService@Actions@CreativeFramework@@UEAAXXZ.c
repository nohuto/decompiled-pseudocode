/*
 * XREFs of ?Invoke@AppInstallService@Actions@CreativeFramework@@UEAAXXZ @ 0x180056EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CreativeFramework::Actions::AppInstallService::Invoke(
        CreativeFramework::Actions::AppInstallService *this,
        __int64 a2,
        const wchar_t *a3)
{
  WCHAR *v3; // rdx
  char *v5; // rcx

  v3 = (WCHAR *)((char *)this + 40);
  if ( *((_QWORD *)this + 8) >= 8uLL )
    v3 = *(WCHAR **)v3;
  v5 = (char *)this + 8;
  if ( *((_QWORD *)v5 + 3) >= 8uLL )
    v5 = *(char **)v5;
  LOBYTE(a3) = *((_BYTE *)this + 72);
  CreativeFramework::Actions::InstallApp((const WCHAR *)v5, v3, a3, *((_BYTE *)this + 73));
}
