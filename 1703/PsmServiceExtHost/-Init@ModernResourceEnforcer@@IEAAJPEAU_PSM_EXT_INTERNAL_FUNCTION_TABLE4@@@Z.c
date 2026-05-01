/*
 * XREFs of ?Init@ModernResourceEnforcer@@IEAAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@@Z @ 0x18001C8C8
 * Callers:
 *     ?CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEnforcer@@@Z @ 0x18001C7EC (-CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEn.c)
 * Callees:
 *     <none>
 */

int __fastcall ModernResourceEnforcer::Init(ModernResourceEnforcer *this, struct _PSM_EXT_INTERNAL_FUNCTION_TABLE4 *a2)
{
  int v2; // eax

  *(_OWORD *)((char *)this + 88) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 104) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 120) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 136) = *((_OWORD *)a2 + 3);
  *(_OWORD *)((char *)this + 152) = *((_OWORD *)a2 + 4);
  *(_OWORD *)((char *)this + 168) = *((_OWORD *)a2 + 5);
  *(_OWORD *)((char *)this + 184) = *((_OWORD *)a2 + 6);
  *(_OWORD *)((char *)this + 200) = *((_OWORD *)a2 + 7);
  *(_OWORD *)((char *)this + 216) = *((_OWORD *)a2 + 8);
  *((_QWORD *)this + 29) = *((_QWORD *)a2 + 18);
  v2 = TpAllocWork((char *)this + 56, ModernResourceEnforcer::NotificationWorkCallback, this, 0LL);
  if ( v2 >= 0 )
    v2 = 0;
  return v2 | 0x10000000;
}
