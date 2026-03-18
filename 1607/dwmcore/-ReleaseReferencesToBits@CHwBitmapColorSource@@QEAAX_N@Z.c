/*
 * XREFs of ?ReleaseReferencesToBits@CHwBitmapColorSource@@QEAAX_N@Z @ 0x18017E76C
 * Callers:
 *     ?KeepOnlyFullValidRealizations@CacheEntryList@CHwBitmapCache@@QEAA_NXZ @ 0x18017C2E0 (-KeepOnlyFullValidRealizations@CacheEntryList@CHwBitmapCache@@QEAA_NXZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

void __fastcall CHwBitmapColorSource::ReleaseReferencesToBits(CHwBitmapColorSource *this, char a2)
{
  CMILRefCountBase *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r9
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // rdx
  _QWORD *v10; // r8

  v4 = (CMILRefCountBase *)*((_QWORD *)this + 33);
  if ( v4 )
  {
    CMILRefCountBase::Release(v4);
    *((_QWORD *)this + 33) = 0LL;
  }
  v5 = *((_QWORD *)this + 20);
  if ( a2 )
  {
    if ( v5 )
    {
      CMILPoolResource::Release((CMILPoolResource *)v5);
      *((_QWORD *)this + 20) = 0LL;
    }
  }
  else
  {
    v6 = *(_QWORD *)(v5 + 16);
    if ( *(_BYTE *)(v5 + 68) )
    {
      v7 = (_QWORD *)(v5 + 32);
      v8 = *(_QWORD *)(v5 + 32);
      v9 = *(_QWORD **)(v5 + 40);
      if ( *(_QWORD *)(v8 + 8) != v5 + 32 || (_QWORD *)*v9 != v7 )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      v10 = *(_QWORD **)(v6 + 40);
      if ( *v10 != v6 + 32 )
        __fastfail(3u);
      *v7 = v6 + 32;
      *(_QWORD *)(v5 + 40) = v10;
      *v10 = v7;
      *(_QWORD *)(v6 + 40) = v7;
      *(_BYTE *)(v5 + 68) = 0;
    }
  }
}
