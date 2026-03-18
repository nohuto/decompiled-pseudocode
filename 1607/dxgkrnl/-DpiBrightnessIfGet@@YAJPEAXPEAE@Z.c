/*
 * XREFs of ?DpiBrightnessIfGet@@YAJPEAXPEAE@Z @ 0x1C0198EF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00C1EE4 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00C1F58 (DpiAcquireCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiBrightnessIfGet(_QWORD *a1, unsigned __int8 *a2)
{
  __int64 v2; // rbx
  int v5; // edi

  v2 = a1[8];
  v5 = -1073741661;
  KeWaitForSingleObject((PVOID)(v2 + 4144), Executive, 0, 0, 0LL);
  if ( *(_QWORD *)(v2 + 4392) )
  {
    v5 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 0);
    if ( v5 >= 0 )
    {
      if ( *(_BYTE *)(v2 + 4128) || *(_BYTE *)(v2 + 4129) )
      {
        v5 = 0;
        *a2 = *(_BYTE *)(v2 + 4136);
      }
      else
      {
        v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 *))(v2 + 4392))(*(_QWORD *)(v2 + 4352), a2);
      }
      DpiReleaseCoreSyncAccessSafe((__int64)a1, 0);
    }
  }
  KeReleaseMutex((PRKMUTEX)(v2 + 4144), 0);
  return (unsigned int)v5;
}
