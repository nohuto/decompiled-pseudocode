/*
 * XREFs of ?IsWarpAdapterLuid@CDisplayManager@@QEAA_NU_LUID@@@Z @ 0x1800380E0
 * Callers:
 *     ?ShouldTripleBuffer@CDisplay@@QEBA_NXZ @ 0x1800343C8 (-ShouldTripleBuffer@CDisplay@@QEBA_NXZ.c)
 * Callees:
 *     ?IsWarpAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z @ 0x180036794 (-IsWarpAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

char __fastcall CDisplayManager::IsWarpAdapterLuid(CDisplayManager *this, struct _LUID a2)
{
  char IsWarpAdapterLuid; // bl
  _RTL_CRITICAL_SECTION *v4; // [rsp+30h] [rbp+8h] BYREF
  struct _LUID v5; // [rsp+38h] [rbp+10h]

  v5 = a2;
  IsWarpAdapterLuid = 0;
  v4 = &g_DisplayManager;
  EnterCriticalSection(&g_DisplayManager);
  if ( qword_1801EFD30 )
    IsWarpAdapterLuid = CDXGIEnumeration::IsWarpAdapterLuid(qword_1801EFD30, v5);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v4);
  return IsWarpAdapterLuid;
}
