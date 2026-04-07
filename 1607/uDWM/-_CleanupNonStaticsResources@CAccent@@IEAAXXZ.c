/*
 * XREFs of ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x18003744C
 * Callers:
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x180007368 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x1800366E0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ??1CAccent@@MEAA@XZ @ 0x180037568 (--1CAccent@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18001CBB0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 */

void __fastcall CAccent::_CleanupNonStaticsResources(CAccent *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  __int64 v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  int v9; // edi
  CBaseObject **v10; // rbx

  if ( (*((_BYTE *)this + 268) & 4) != 0 )
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) = 0LL;
  VisualCollection::RemoveAll((CAccent *)((char *)this + 32));
  v2 = (CBaseObject *)*((_QWORD *)this + 38);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 38) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 39);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 39) = 0LL;
  }
  v4 = *((_QWORD *)this + 42);
  if ( v4 )
  {
    CBaseObject::Release((CBaseObject *)(v4 + 8));
    *((_QWORD *)this + 42) = 0LL;
  }
  v5 = (CBaseObject *)*((_QWORD *)this + 40);
  if ( v5 )
  {
    CBaseObject::Release(v5);
    *((_QWORD *)this + 40) = 0LL;
  }
  v6 = (CBaseObject *)*((_QWORD *)this + 46);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    *((_QWORD *)this + 46) = 0LL;
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 47);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 47) = 0LL;
  }
  v8 = (CBaseObject *)*((_QWORD *)this + 48);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 48) = 0LL;
  }
  v9 = 0;
  v10 = (CBaseObject **)((char *)this + 392);
  do
  {
    if ( *v10 )
    {
      CBaseObject::Release(*v10);
      *v10 = 0LL;
    }
    ++v9;
    ++v10;
  }
  while ( (unsigned __int64)v9 < 0x16 );
}
