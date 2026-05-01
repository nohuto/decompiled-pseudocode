/*
 * XREFs of ?GetApplicationProperties@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAKPEA_K222@Z @ 0x18003ABF0
 * Callers:
 *     <none>
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

int __fastcall ModernResourceEnforcer::GetApplicationProperties(
        ModernResourceEnforcer *this,
        struct _RM_ACTIVITY_HOST *a2,
        unsigned int *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7)
{
  int v7; // eax

  v7 = (*(__int64 (__fastcall **)(ModernResourceEnforcer *, char *, char *, _QWORD, _DWORD, _QWORD, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, _QWORD, unsigned __int64 *))(*(_QWORD *)this + 112LL))(
         this,
         (char *)a2 + 48,
         (char *)a2 + 512,
         *((unsigned int *)a2 + 145),
         *((_DWORD *)a2 + 146),
         *((_QWORD *)a2 + 3),
         a3,
         a4,
         a5,
         a6,
         0LL,
         a7);
  if ( v7 >= 0 )
    return 0;
  else
    return v7 | 0x10000000;
}
