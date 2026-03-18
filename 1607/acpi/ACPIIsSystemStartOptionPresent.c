/*
 * XREFs of ACPIIsSystemStartOptionPresent @ 0x1C00A7A88
 * Callers:
 *     ACPIInitGetPlatformOverrides @ 0x1C00A7984 (ACPIInitGetPlatformOverrides.c)
 * Callees:
 *     <none>
 */

bool __fastcall ACPIIsSystemStartOptionPresent(const wchar_t *a1)
{
  char v2; // bl
  wchar_t *v3; // rdx
  __int64 v4; // rax

  v2 = 0;
  v3 = wcsstr(a1, L"TESTSIGNING");
  if ( v3 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( aTestsigning[v4] );
    if ( v3 == a1 || *(v3 - 1) == 32 )
      return (v3[(unsigned int)v4] & 0xFFDF) == 0;
  }
  return v2;
}
