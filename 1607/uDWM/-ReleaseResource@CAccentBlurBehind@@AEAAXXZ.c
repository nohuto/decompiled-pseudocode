/*
 * XREFs of ?ReleaseResource@CAccentBlurBehind@@AEAAXXZ @ 0x1800375E4
 * Callers:
 *     ??1CAccentBlurBehind@@EEAA@XZ @ 0x180037838 (--1CAccentBlurBehind@@EEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CAccentBlurBehind::ReleaseResource(CAccentBlurBehind *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx

  v2 = (CBaseObject *)*((_QWORD *)this + 39);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 39) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 40);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 40) = 0LL;
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 41);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 41) = 0LL;
  }
  v5 = (CBaseObject *)*((_QWORD *)this + 44);
  if ( v5 )
  {
    CBaseObject::Release(v5);
    *((_QWORD *)this + 44) = 0LL;
  }
  v6 = (CBaseObject *)*((_QWORD *)this + 45);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    *((_QWORD *)this + 45) = 0LL;
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 42);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 42) = 0LL;
  }
  v8 = (CBaseObject *)*((_QWORD *)this + 33);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 33) = 0LL;
  }
  v9 = (CBaseObject *)*((_QWORD *)this + 43);
  if ( v9 )
  {
    CBaseObject::Release(v9);
    *((_QWORD *)this + 43) = 0LL;
  }
}
