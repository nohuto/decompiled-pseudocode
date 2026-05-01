/*
 * XREFs of ?IsProcessInApplication@ModernResourceEnforcer@@UEAAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18000C840
 * Callers:
 *     RmpSystemIsProcessInApplication @ 0x180007440 (RmpSystemIsProcessInApplication.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ModernResourceEnforcer::IsProcessInApplication(
        ModernResourceEnforcer *this,
        struct _RM_ACTIVITY_HOST *a2,
        void *a3)
{
  return (*((__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, void *))this + 21))(
           (char *)a2 + 520,
           *((unsigned int *)a2 + 147),
           (char *)a2 + 56,
           *((unsigned int *)a2 + 148),
           *((_QWORD *)a2 + 3),
           a3);
}
