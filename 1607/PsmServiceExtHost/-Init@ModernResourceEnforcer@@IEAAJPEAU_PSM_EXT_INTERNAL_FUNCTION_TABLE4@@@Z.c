/*
 * XREFs of ?Init@ModernResourceEnforcer@@IEAAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@@Z @ 0x18001CCD8
 * Callers:
 *     ?CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEnforcer@@@Z @ 0x18001CC1C (-CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEn.c)
 * Callees:
 *     <none>
 */

int __fastcall ModernResourceEnforcer::Init(ModernResourceEnforcer *this, struct _PSM_EXT_INTERNAL_FUNCTION_TABLE4 *a2)
{
  int v2; // eax

  *((_OWORD *)this + 6) = *(_OWORD *)a2;
  *((_OWORD *)this + 7) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 8) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 9) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 10) = *((_OWORD *)a2 + 4);
  *((_OWORD *)this + 11) = *((_OWORD *)a2 + 5);
  *((_OWORD *)this + 12) = *((_OWORD *)a2 + 6);
  *((_OWORD *)this + 13) = *((_OWORD *)a2 + 7);
  *((_OWORD *)this + 14) = *((_OWORD *)a2 + 8);
  *((_QWORD *)this + 30) = *((_QWORD *)a2 + 18);
  v2 = TpAllocWork((char *)this + 56, ModernResourceEnforcer::NotificationWorkCallback, this, 0LL);
  if ( v2 >= 0 )
    v2 = 0;
  return v2 | 0x10000000;
}
