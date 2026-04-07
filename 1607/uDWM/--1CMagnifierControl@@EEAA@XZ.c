/*
 * XREFs of ??1CMagnifierControl@@EEAA@XZ @ 0x18007BC10
 * Callers:
 *     ??_ECMagnifierControl@@EEAAPEAXI@Z @ 0x18007BCF0 (--_ECMagnifierControl@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAHPEAVMagnifierTableElement@CMagnifierControl@@@Z @ 0x18007C464 (-RemoveElement@-$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAHP.c)
 */

void __fastcall CMagnifierControl::~CMagnifierControl(CMagnifierControl *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CMagnifierControl::MagnifierTableElement *v6; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CMagnifierControl::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 4) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 6) = 0LL;
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 7);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 7) = 0LL;
  }
  v5 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v5 )
  {
    CBaseObject::Release(v5);
    *((_QWORD *)this + 3) = 0LL;
  }
  *((_QWORD *)this + 2) = 0LL;
  while ( 1 )
  {
    RestartKey = 0LL;
    v6 = (CMagnifierControl::MagnifierTableElement *)RtlEnumerateGenericTableWithoutSplaying(
                                                       (PRTL_GENERIC_TABLE)((char *)this + 64),
                                                       &RestartKey);
    if ( !v6 )
      break;
    CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::RemoveElement(
      (PRTL_GENERIC_TABLE)((char *)this + 64),
      v6);
  }
  *(_QWORD *)this = &CBaseObject::`vftable';
}
