/*
 * XREFs of ?SetProcessConfig@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x1800183F0
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z @ 0x18000CDE0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180010680 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 * Callees:
 *     ?SetApplicationProperties@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAKPEA_K22PEAW4_PSM_APPLICATION_PRIORITY@@2@Z @ 0x180017AD0 (-SetApplicationProperties@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAKPEA_K22PEAW4_P.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ModernResourceEnforcer::SetProcessConfig(
        ModernResourceEnforcer *this,
        struct _RM_ACTIVITY_HOST *a2,
        struct _RM_ENFORCEMENT_SETTINGS *a3)
{
  char v3; // r9
  unsigned int v5; // eax
  unsigned __int64 *v6; // rbp
  __int64 v7; // rcx
  unsigned __int64 *v8; // rsi
  __int64 (__fastcall *v9)(ModernResourceEnforcer *, struct _RM_ACTIVITY_HOST *, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *, unsigned __int64 *); // rdi
  __int64 v11; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v12; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v13; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v14; // [rsp+90h] [rbp+18h] BYREF
  __int64 v15; // [rsp+98h] [rbp+20h] BYREF

  v3 = *((_BYTE *)a3 + 76);
  if ( (v3 & 2) != 0 )
  {
    v12 = -1;
  }
  else
  {
    v5 = *((_DWORD *)a3 + 18);
    v12 = v5;
    if ( v5 != -1 )
      v12 = 100 * v5;
  }
  if ( (v3 & 4) != 0 )
  {
    v6 = (unsigned __int64 *)&v15;
    v15 = *((_QWORD *)a3 + 7);
  }
  else
  {
    v6 = 0LL;
  }
  v7 = *((_QWORD *)a3 + 2);
  v13 = *((_QWORD *)a3 + 1);
  v14 = *(_QWORD *)a3;
  v11 = v7;
  if ( v7 )
    v8 = (unsigned __int64 *)&v11;
  else
    v8 = 0LL;
  v9 = *(__int64 (__fastcall **)(ModernResourceEnforcer *, struct _RM_ACTIVITY_HOST *, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *, unsigned __int64 *))(*(_QWORD *)this + 64LL);
  if ( v9 == ModernResourceEnforcer::SetApplicationProperties )
    return ModernResourceEnforcer::SetApplicationProperties(this, a2, &v12, v8, &v14, &v13, 0LL, v6);
  else
    return ((__int64 (__fastcall *)(ModernResourceEnforcer *, struct _RM_ACTIVITY_HOST *, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, _QWORD, unsigned __int64 *, __int64))v9)(
             this,
             a2,
             &v12,
             v8,
             &v14,
             &v13,
             0LL,
             v6,
             v11);
}
