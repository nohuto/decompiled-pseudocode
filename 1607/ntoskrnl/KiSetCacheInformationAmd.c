/*
 * XREFs of KiSetCacheInformationAmd @ 0x1403DDA18
 * Callers:
 *     KiSetCacheInformation @ 0x1403D4B68 (KiSetCacheInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KiSetStandardizedCacheInformation @ 0x1403D4CD4 (KiSetStandardizedCacheInformation.c)
 *     KiGetL2L3AssociativityAmd @ 0x1403DD804 (KiGetL2L3AssociativityAmd.c)
 */

char KiSetCacheInformationAmd()
{
  struct _KPRCB *CurrentPrcb; // r9
  _CACHE_DESCRIPTOR *Cache; // rdi
  unsigned int v8; // r10d
  char v14; // r12
  int v15; // r14d
  unsigned __int16 v16; // r15
  unsigned int v17; // r8d
  unsigned int v18; // r11d
  unsigned int v19; // r11d
  __int64 v20; // rbx
  _QWORD *v21; // rsi
  unsigned int v31; // r8d
  _CACHE_DESCRIPTOR *v33; // [rsp+20h] [rbp-20h]

  CurrentPrcb = KeGetCurrentPrcb();
  _RAX = 2147483649LL;
  __asm { cpuid }
  CurrentPrcb->CacheCount = 0;
  if ( (_RCX & 0x400000) != 0 )
  {
    LOBYTE(_RAX) = KiSetStandardizedCacheInformation((__int64)CurrentPrcb, 0x8000001D);
  }
  else
  {
    Cache = CurrentPrcb->Cache;
    v8 = 0;
    v33 = CurrentPrcb->Cache;
    do
    {
      if ( v8 <= 1 )
      {
        _RAX = 2147483653LL;
        v14 = 1;
        __asm { cpuid }
        v31 = _RCX;
        if ( v8 )
        {
          v31 = _RDX;
          v15 = 1;
        }
        else
        {
          v15 = 2;
        }
        v16 = (unsigned __int8)v31;
        v19 = HIBYTE(v31) << 10;
        v17 = HIWORD(v31);
      }
      else if ( v8 == 2 )
      {
        _RAX = 2147483654LL;
        __asm { cpuid }
        v16 = (unsigned __int8)_RCX;
        v15 = 0;
        v14 = 2;
        LOBYTE(_RAX) = KiGetL2L3AssociativityAmd(BYTE1(_RCX) >> 4);
        LOBYTE(v17) = _RAX;
      }
      else
      {
        _RAX = 2147483654LL;
        __asm { cpuid }
        v14 = 3;
        v15 = 0;
        v16 = (unsigned __int8)_RDX;
        LOBYTE(_RAX) = KiGetL2L3AssociativityAmd(BYTE1(_RDX) >> 4);
        LOBYTE(v17) = _RAX;
        v19 = v18 >> 18 << 19;
        if ( !v19 )
          return _RAX;
        if ( CurrentPrcb->CpuType <= 21 )
        {
          v20 = 0LL;
          CurrentPrcb->CacheProcessorMask[3] = CurrentPrcb->GroupSetMember;
          LOBYTE(_RAX) = KeNumberProcessors_0;
          if ( (_DWORD)KeNumberProcessors_0 )
          {
            do
            {
              v21 = (_QWORD *)KiProcessorBlock[v20];
              if ( (_KNODE *)v21[200] == CurrentPrcb->ParentNode
                && ((CurrentPrcb->PackageProcessorSet.Bitmap[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v20] >> 6] >> (KiProcessorIndexToNumberMappingTable[v20] & 0x3F)) & 1) != 0 )
              {
                CurrentPrcb->CacheProcessorMask[3] |= v21[201];
                v21[3121] |= CurrentPrcb->GroupSetMember;
              }
              LOBYTE(_RAX) = KeNumberProcessors_0;
              v20 = (unsigned int)(v20 + 1);
            }
            while ( (unsigned int)v20 < (unsigned int)KeNumberProcessors_0 );
            Cache = v33;
          }
        }
      }
      Cache->Type = v15;
      Cache->Level = v14;
      Cache->Associativity = v17;
      Cache->LineSize = v16;
      Cache->Size = v19;
      ++Cache;
      ++CurrentPrcb->CacheCount;
      v33 = Cache;
      ++v8;
    }
    while ( v8 < 4 );
  }
  return _RAX;
}
