/*
 * XREFs of ?_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ @ 0x1800745A0
 * Callers:
 *     ??1CLivePreview@@MEAA@XZ @ 0x180072D64 (--1CLivePreview@@MEAA@XZ.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180073170 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CLivePreview::_ReleasePerMonitorResources(CLivePreview *this)
{
  unsigned int i; // esi
  __int64 v3; // rdi
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx

  for ( i = 0; i < *((_DWORD *)this + 94); ++i )
  {
    v3 = 136LL * i;
    v4 = *(CBaseObject **)(*((_QWORD *)this + 44) + v3 + 16);
    if ( v4 )
    {
      CBaseObject::Release(v4);
      *(_QWORD *)(*((_QWORD *)this + 44) + v3 + 16) = 0LL;
    }
    v5 = *(CBaseObject **)(*((_QWORD *)this + 44) + v3 + 24);
    if ( v5 )
    {
      CBaseObject::Release(v5);
      *(_QWORD *)(*((_QWORD *)this + 44) + v3 + 24) = 0LL;
    }
    v6 = *(CBaseObject **)(*((_QWORD *)this + 44) + v3 + 32);
    if ( v6 )
    {
      CBaseObject::Release(v6);
      *(_QWORD *)(*((_QWORD *)this + 44) + v3 + 32) = 0LL;
    }
    v7 = *(CBaseObject **)(*((_QWORD *)this + 44) + v3 + 56);
    if ( v7 )
    {
      CBaseObject::Release(v7);
      *(_QWORD *)(*((_QWORD *)this + 44) + v3 + 56) = 0LL;
    }
    v8 = *(CBaseObject **)(*((_QWORD *)this + 44) + v3 + 64);
    if ( v8 )
    {
      CBaseObject::Release(v8);
      *(_QWORD *)(*((_QWORD *)this + 44) + v3 + 64) = 0LL;
    }
    v9 = *(CBaseObject **)(*((_QWORD *)this + 44) + v3 + 72);
    if ( v9 )
    {
      CBaseObject::Release(v9);
      *(_QWORD *)(*((_QWORD *)this + 44) + v3 + 72) = 0LL;
    }
    v10 = *(CBaseObject **)(*((_QWORD *)this + 44) + v3 + 104);
    if ( v10 )
    {
      CBaseObject::Release(v10);
      *(_QWORD *)(*((_QWORD *)this + 44) + v3 + 104) = 0LL;
    }
  }
  *((_DWORD *)this + 94) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 352, 0x88u);
}
