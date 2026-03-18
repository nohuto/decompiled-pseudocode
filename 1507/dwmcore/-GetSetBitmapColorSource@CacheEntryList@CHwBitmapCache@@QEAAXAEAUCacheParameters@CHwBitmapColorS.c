/*
 * XREFs of ?GetSetBitmapColorSource@CacheEntryList@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorSource@@AEAPEAV4@PEAPEAV4@@Z @ 0x180018BE4
 * Callers:
 *     ?ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@4@AEAPEAV4@3@Z @ 0x180018670 (-ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapCo.c)
 *     ?GetSetBitmapColorSource@FormatCacheEntry@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorSource@@AEAPEAV4@PEAPEAV4@@Z @ 0x180051F24 (-GetSetBitmapColorSource@FormatCacheEntry@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColo.c)
 * Callees:
 *     ?CheckSizeLayoutMatch@CacheEntryList@CHwBitmapCache@@CA?AW4Enum@SizeLayoutMatch@12@AEBUCacheSizeLayoutParameters@CHwBitmapColorSource@@0@Z @ 0x180018DEC (-CheckSizeLayoutMatch@CacheEntryList@CHwBitmapCache@@CA-AW4Enum@SizeLayoutMatch@12@AEBUCacheSize.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x180051B14 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?AddToReusableRealizationSourceList@CHwBitmapColorSource@@QEAAXAEAPEAV1@@Z @ 0x18013D23C (-AddToReusableRealizationSourceList@CHwBitmapColorSource@@QEAAXAEAPEAV1@@Z.c)
 */

void __fastcall CHwBitmapCache::CacheEntryList::GetSetBitmapColorSource(
        CHwBitmapCache::CacheEntryList *this,
        struct CHwBitmapColorSource::CacheParameters *a2,
        struct CHwBitmapColorSource **a3,
        struct CHwBitmapColorSource **a4)
{
  __int64 v4; // rsi
  char *v9; // rdx
  __int64 v10; // rdi
  int v11; // eax
  int v12; // r12d
  __int64 v13; // rdi
  CMILRefCountBase *v14; // rcx
  __int64 v15; // rax
  int v16; // ecx
  int v17; // edx
  struct CHwBitmapColorSource *v18; // rdi
  char *v19; // rax
  CMILRefCountBase *v20; // rcx
  void (__fastcall ***v21)(_QWORD); // r15
  _OWORD *v22; // rdx
  void (__fastcall ***v23)(_QWORD); // rdi
  CHwBitmapColorSource *v24; // rcx
  char *v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rdi
  char *v28; // rdx
  CMILRefCountBase *v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  _OWORD *v32; // [rsp+50h] [rbp+8h] BYREF

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
          v24 = *(CHwBitmapColorSource **)(v10 + 64);
          if ( v24 )
            CHwBitmapColorSource::AddToReusableRealizationSourceList(v24, a4);
        }
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < *((_DWORD *)this + 6) );
    if ( v12 < 2 )
      goto LABEL_21;
LABEL_6:
    v13 = *(_QWORD *)this;
    if ( *a3 )
    {
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
      v21 = (void (__fastcall ***)(_QWORD))*a3;
      *(_QWORD *)(v13 + 72 * v4 + 64) = v21;
      if ( v21 )
        (**v21)(v21);
      goto LABEL_12;
    }
    v14 = *(CMILRefCountBase **)(v13 + 72 * v4 + 64);
    if ( v14 )
    {
      if ( v12 == 2 )
      {
        if ( a2 )
          v25 = (char *)a2 + 12;
        else
          v25 = 0LL;
        *(_OWORD *)(v13 + 72 * v4) = *(_OWORD *)v25;
        *(_OWORD *)(v13 + 72 * v4 + 16) = *((_OWORD *)v25 + 1);
        *(_OWORD *)(v13 + 72 * v4 + 32) = *((_OWORD *)v25 + 2);
        *(_QWORD *)(v13 + 72 * v4 + 48) = *((_QWORD *)v25 + 6);
        *(_DWORD *)(v13 + 72 * v4 + 56) = *((_DWORD *)v25 + 14);
      }
      else
      {
        v15 = *((_QWORD *)v14 + 20);
        if ( v15 && *(_BYTE *)(v15 + 76) )
        {
          v16 = *((_DWORD *)a2 + 16);
          v17 = *((_DWORD *)a2 + 13);
          *(_OWORD *)((char *)a2 + 12) = *(_OWORD *)(v13 + 72 * v4);
          *(_OWORD *)((char *)a2 + 28) = *(_OWORD *)(v13 + 72 * v4 + 16);
          *(_OWORD *)((char *)a2 + 44) = *(_OWORD *)(v13 + 72 * v4 + 32);
          *(_QWORD *)((char *)a2 + 60) = *(_QWORD *)(v13 + 72 * v4 + 48);
          *((_DWORD *)a2 + 17) = *(_DWORD *)(v13 + 72 * v4 + 56);
          *((_DWORD *)a2 + 16) = v16;
          *((_DWORD *)a2 + 13) = v17;
          v18 = *(struct CHwBitmapColorSource **)(v13 + 72 * v4 + 64);
          *a3 = v18;
          (**(void (__fastcall ***)(struct CHwBitmapColorSource *))v18)(v18);
          goto LABEL_12;
        }
      }
      CMILRefCountBase::Release(v14);
      *(_QWORD *)(v13 + 72 * v4 + 64) = 0LL;
    }
LABEL_12:
    if ( v12 == 2 )
    {
      while ( 1 )
      {
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= *((_DWORD *)this + 6) )
          break;
        v26 = 9 * v4;
        v27 = *(_QWORD *)this + 72 * v4;
        if ( a2 )
          v28 = (char *)a2 + 12;
        else
          v28 = 0LL;
        if ( (unsigned int)CHwBitmapCache::CacheEntryList::CheckSizeLayoutMatch(*(_QWORD *)this + 72 * v4, v28) == 2 )
        {
          v29 = *(CMILRefCountBase **)(v27 + 64);
          if ( v29 )
            CMILRefCountBase::Release(v29);
          v30 = (unsigned int)(*((_DWORD *)this + 6) - 1);
          if ( (_DWORD)v4 != (_DWORD)v30 )
          {
            v31 = *(_QWORD *)this;
            LODWORD(v4) = v4 - 1;
            *(_OWORD *)(v31 + 8 * v26) = *(_OWORD *)(*(_QWORD *)this + 72 * v30);
            *(_OWORD *)(v31 + 8 * v26 + 16) = *(_OWORD *)(v31 + 72 * v30 + 16);
            *(_OWORD *)(v31 + 8 * v26 + 32) = *(_OWORD *)(v31 + 72 * v30 + 32);
            *(_OWORD *)(v31 + 8 * v26 + 48) = *(_OWORD *)(v31 + 72 * v30 + 48);
            *(_QWORD *)(v31 + 8 * v26 + 64) = *(_QWORD *)(v31 + 72 * v30 + 64);
          }
          *((_DWORD *)this + 6) = v30;
        }
      }
    }
    return;
  }
LABEL_21:
  if ( (int)DynArrayImpl<1>::AddMultiple(this, 72LL, 1LL, &v32) >= 0 )
  {
    if ( a2 )
      a2 = (struct CHwBitmapColorSource::CacheParameters *)((char *)a2 + 12);
    v22 = v32;
    v23 = (void (__fastcall ***)(_QWORD))*a3;
    *v32 = *(_OWORD *)a2;
    v22[1] = *((_OWORD *)a2 + 1);
    v22[2] = *((_OWORD *)a2 + 2);
    *((_QWORD *)v22 + 6) = *((_QWORD *)a2 + 6);
    *((_DWORD *)v22 + 14) = *((_DWORD *)a2 + 14);
    *((_QWORD *)v22 + 8) = v23;
    if ( v23 )
      (**v23)(v23);
  }
}
