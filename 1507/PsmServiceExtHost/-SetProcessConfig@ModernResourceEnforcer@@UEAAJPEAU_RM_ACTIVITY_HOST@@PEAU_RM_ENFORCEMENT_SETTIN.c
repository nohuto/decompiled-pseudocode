/*
 * XREFs of ?SetProcessConfig@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18000CCC0
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000F7D0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAJXZ.c)
 * Callees:
 *     ?SetApplicationProperties@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAKPEA_K22PEAW4_PSM_APPLICATION_PRIORITY@@@Z @ 0x18000C470 (-SetApplicationProperties@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAKPEA_K22PEAW4_P.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ModernResourceEnforcer::SetProcessConfig(
        ModernResourceEnforcer *this,
        struct _RM_ACTIVITY_HOST *a2,
        struct _RM_ENFORCEMENT_SETTINGS *a3)
{
  unsigned int v4; // eax
  unsigned __int64 v5; // rcx
  __int64 (__fastcall *v6)(ModernResourceEnforcer *, struct _RM_ACTIVITY_HOST *, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *); // rsi
  unsigned int v8; // [rsp+70h] [rbp+30h] BYREF
  unsigned __int64 v9; // [rsp+78h] [rbp+38h] BYREF
  unsigned __int64 v10; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int64 v11; // [rsp+88h] [rbp+48h] BYREF

  if ( (*((_BYTE *)a3 + 64) & 2) != 0 )
  {
    v8 = -1;
  }
  else
  {
    v4 = *((_DWORD *)a3 + 15);
    v8 = v4;
    if ( v4 != -1 )
      v8 = 100 * v4;
  }
  v5 = *((_QWORD *)a3 + 2);
  v9 = *((_QWORD *)a3 + 1);
  v10 = *(_QWORD *)a3;
  v11 = v5;
  v6 = *(__int64 (__fastcall **)(ModernResourceEnforcer *, struct _RM_ACTIVITY_HOST *, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *))(*(_QWORD *)this + 64LL);
  if ( v6 == ModernResourceEnforcer::SetApplicationProperties )
    return ModernResourceEnforcer::SetApplicationProperties(
             this,
             a2,
             &v8,
             (unsigned __int64 *)((unsigned __int64)&v11 & ((unsigned __int128)-(__int128)v5 >> 64)),
             &v10,
             &v9,
             0LL);
  else
    return v6(
             this,
             a2,
             &v8,
             (unsigned __int64 *)((unsigned __int64)&v11 & ((unsigned __int128)-(__int128)v5 >> 64)),
             &v10,
             &v9,
             0LL);
}
