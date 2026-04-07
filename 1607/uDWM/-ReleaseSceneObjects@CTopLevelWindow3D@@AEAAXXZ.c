/*
 * XREFs of ?ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ @ 0x18002A918
 * Callers:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800282A4 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x18002A988 (--1CTopLevelWindow3D@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CTopLevelWindow3D::ReleaseSceneObjects(CTopLevelWindow3D *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  v2 = (CBaseObject *)*((_QWORD *)this + 40);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 40) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 41);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 41) = 0LL;
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 42);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 42) = 0LL;
  }
  *((_BYTE *)this + 274) = 0;
}
