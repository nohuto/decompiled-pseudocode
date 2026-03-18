/*
 * XREFs of ?GetSetBitmapColorSource@CacheEntryList@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorSource@@AEAPEAV4@PEAPEAV4@@Z @ 0x1800A3B84
 * Callers:
 *     ?ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@4@AEAPEAV4@3@Z @ 0x1800817E0 (-ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapCo.c)
 *     ?GetSetBitmapColorSource@FormatCacheEntry@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorSource@@AEAPEAV4@PEAPEAV4@@Z @ 0x1800A2914 (-GetSetBitmapColorSource@FormatCacheEntry@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColo.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x1800A3700 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ?CheckSizeLayoutMatch@CacheEntryList@CHwBitmapCache@@CA?AW4Enum@SizeLayoutMatch@12@AEBUCacheSizeLayoutParameters@CHwBitmapColorSource@@0@Z @ 0x1800A3D78 (-CheckSizeLayoutMatch@CacheEntryList@CHwBitmapCache@@CA-AW4Enum@SizeLayoutMatch@12@AEBUCacheSize.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?AddToReusableRealizationSourceList@CHwBitmapColorSource@@QEAAXAEAPEAV1@@Z @ 0x18017E1C8 (-AddToReusableRealizationSourceList@CHwBitmapColorSource@@QEAAXAEAPEAV1@@Z.c)
 */

void __fastcall CHwBitmapCache::CacheEntryList::GetSetBitmapColorSource(
        CHwBitmapCache::CacheEntryList *this,
        struct CHwBitmapColorSource::CacheParameters *a2,
        struct CHwBitmapColorSource **a3,
        struct CHwBitmapColorSource **a4)
{
  __int64 v4; // rbx
  char *v9; // rdx
  __int64 v10; // rbp
  int v11; // eax
  int v12; // r15d
  __int64 v13; // rbp
  CMILRefCountBase *v14; // rcx
  __int64 v15; // rax
  int v16; // ecx
  int v17; // edx
  struct CHwBitmapColorSource *v18; // rcx
  char *v19; // rax
  CMILRefCountBase *v20; // rcx
  _OWORD *v21; // rdx
  struct CHwBitmapColorSource *v22; // rcx
  CHwBitmapColorSource *v23; // rcx
  char *v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rbp
  char *v27; // rdx
  CMILRefCountBase *v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  _OWORD *v31; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( *((_DWORD *)this + 6) )
  {
    do
    {
      if ( a2 )
        v9 = (char *)a2 + 12;
      else
        v9 = 0LL;
      v10 = *(_QWORD *)this + 72 * v4;
      v11 = CHwBitmapCache::CacheEntryList::CheckSizeLayoutMatch(v10, v9);
      v12 = v11;
      if ( v11 > 0 )
      {
        if ( v11 >= 2 )
          goto LABEL_6;
        if ( a4 )
        {
          v23 = *(CHwBitmapColorSource **)(v10 + 64);
          if ( v23 )
            CHwBitmapColorSource::AddToReusableRealizationSourceList(v23, a4);
        }
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < *((_DWORD *)this + 6) );
    if ( v12 < 2 )
      goto LABEL_22;
LABEL_6:
    v13 = *(_QWORD *)this;
    if ( !*a3 )
    {
      v14 = *(CMILRefCountBase **)(v13 + 72 * v4 + 64);
      if ( !v14 )
        goto LABEL_13;
      if ( v12 == 2 )
      {
        if ( a2 )
          v24 = (char *)a2 + 12;
        else
          v24 = 0LL;
        *(_OWORD *)(v13 + 72 * v4) = *(_OWORD *)v24;
        *(_OWORD *)(v13 + 72 * v4 + 16) = *((_OWORD *)v24 + 1);
        *(_OWORD *)(v13 + 72 * v4 + 32) = *((_OWORD *)v24 + 2);
        *(_QWORD *)(v13 + 72 * v4 + 48) = *((_QWORD *)v24 + 6);
        *(_DWORD *)(v13 + 72 * v4 + 56) = *((_DWORD *)v24 + 14);
      }
      else
      {
        v15 = *((_QWORD *)v14 + 20);
        if ( v15 && *(_BYTE *)(v15 + 77) )
        {
          v16 = *((_DWORD *)a2 + 16);
          v17 = *((_DWORD *)a2 + 13);
          *(_OWORD *)((char *)a2 + 12) = *(_OWORD *)(v13 + 72 * v4);
          *(_OWORD *)((char *)a2 + 28) = *(_OWORD *)(v13 + 72 * v4 + 16);
          *(_OWORD *)((char *)a2 + 44) = *(_OWORD *)(v13 + 72 * v4 + 32);
          *(_QWORD *)((char *)a2 + 60) = *(_QWORD *)(v13 + 72 * v4 + 48);
          *((_DWORD *)a2 + 17) = *(_DWORD *)(v13 + 72 * v4 + 56);
          *((_DWORD *)a2 + 13) = v17;
          *((_DWORD *)a2 + 16) = v16;
          v18 = *(struct CHwBitmapColorSource **)(v13 + 72 * v4 + 64);
          *a3 = v18;
LABEL_12:
          (**(void (__fastcall ***)(struct CHwBitmapColorSource *))v18)(v18);
          goto LABEL_13;
        }
      }
      CMILRefCountBase::Release(v14);
      *(_QWORD *)(v13 + 72 * v4 + 64) = 0LL;
LABEL_13:
      if ( v12 == 2 )
      {
        while ( 1 )
        {
          v4 = (unsigned int)(v4 + 1);
          if ( (unsigned int)v4 >= *((_DWORD *)this + 6) )
            break;
          v25 = 9 * v4;
          v26 = *(_QWORD *)this + 72 * v4;
          if ( a2 )
            v27 = (char *)a2 + 12;
          else
            v27 = 0LL;
          if ( (unsigned int)CHwBitmapCache::CacheEntryList::CheckSizeLayoutMatch(*(_QWORD *)this + 72 * v4, v27) == 2 )
          {
            v28 = *(CMILRefCountBase **)(v26 + 64);
            if ( v28 )
              CMILRefCountBase::Release(v28);
            v29 = (unsigned int)(*((_DWORD *)this + 6) - 1);
            if ( (_DWORD)v4 != (_DWORD)v29 )
            {
              v30 = *(_QWORD *)this;
              LODWORD(v4) = v4 - 1;
              *(_OWORD *)(v30 + 8 * v25) = *(_OWORD *)(*(_QWORD *)this + 72 * v29);
              *(_OWORD *)(v30 + 8 * v25 + 16) = *(_OWORD *)(v30 + 72 * v29 + 16);
              *(_OWORD *)(v30 + 8 * v25 + 32) = *(_OWORD *)(v30 + 72 * v29 + 32);
              *(_OWORD *)(v30 + 8 * v25 + 48) = *(_OWORD *)(v30 + 72 * v29 + 48);
              *(_QWORD *)(v30 + 8 * v25 + 64) = *(_QWORD *)(v30 + 72 * v29 + 64);
            }
            *((_DWORD *)this + 6) = v29;
          }
        }
      }
      return;
    }
    if ( a2 )
      v19 = (char *)a2 + 12;
    else
      v19 = 0LL;
    v20 = *(CMILRefCountBase **)(v13 + 72 * v4 + 64);
    *(_OWORD *)(v13 + 72 * v4) = *(_OWORD *)v19;
    *(_OWORD *)(v13 + 72 * v4 + 16) = *((_OWORD *)v19 + 1);
    *(_OWORD *)(v13 + 72 * v4 + 32) = *((_OWORD *)v19 + 2);
    *(_QWORD *)(v13 + 72 * v4 + 48) = *((_QWORD *)v19 + 6);
    *(_DWORD *)(v13 + 72 * v4 + 56) = *((_DWORD *)v19 + 14);
    if ( v20 )
      CMILRefCountBase::Release(v20);
    v18 = *a3;
    *(_QWORD *)(v13 + 72 * v4 + 64) = *a3;
    if ( !v18 )
      goto LABEL_13;
    goto LABEL_12;
  }
LABEL_22:
  if ( (int)DynArrayImpl<1>::AddMultiple((__int64)this, 0x48u, 1, &v31) >= 0 )
  {
    if ( a2 )
      a2 = (struct CHwBitmapColorSource::CacheParameters *)((char *)a2 + 12);
    v21 = v31;
    v22 = *a3;
    *v31 = *(_OWORD *)a2;
    v21[1] = *((_OWORD *)a2 + 1);
    v21[2] = *((_OWORD *)a2 + 2);
    *((_QWORD *)v21 + 6) = *((_QWORD *)a2 + 6);
    *((_DWORD *)v21 + 14) = *((_DWORD *)a2 + 14);
    *((_QWORD *)v21 + 8) = v22;
    if ( v22 )
      (**(void (__fastcall ***)(struct CHwBitmapColorSource *))v22)(v22);
  }
}
