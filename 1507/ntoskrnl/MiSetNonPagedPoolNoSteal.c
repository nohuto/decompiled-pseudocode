/*
 * XREFs of MiSetNonPagedPoolNoSteal @ 0x1400E01E0
 * Callers:
 *     MiGetPhysicalAddress @ 0x1400DF980 (MiGetPhysicalAddress.c)
 *     MmBuildMdlForNonPagedPool @ 0x1400DFCC0 (MmBuildMdlForNonPagedPool.c)
 * Callees:
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 */

__int64 __fastcall MiSetNonPagedPoolNoSteal(signed __int64 *a1)
{
  signed __int64 v1; // rdx
  __int64 result; // rax
  volatile signed __int64 *v3; // r8
  __int64 v4; // r9
  bool v5; // zf

  v1 = *a1;
  result = (__int64)(a1 + 0x12090482600LL);
  v3 = a1;
  if ( (unsigned __int64)(a1 + 0x12090482600LL) <= 0x7F8 )
  {
    result = MiPteHasShadow(a1, v1);
    if ( (_DWORD)result )
    {
      if ( (v1 & 1) != 0 && ((v1 & 0x20) == 0 || (v1 & 0x42) == 0) )
      {
        result = (__int64)KeGetCurrentThread();
        v4 = *(_QWORD *)(*(_QWORD *)(result + 184) + 1520LL);
        if ( v4 )
        {
          result = *(_QWORD *)(v4 + 8 * (((unsigned __int64)v3 >> 3) & 0x1FF));
          if ( (result & 0x20) != 0 )
            v1 |= 0x20uLL;
          if ( (result & 0x42) != 0 )
            v1 |= 0x42uLL;
        }
      }
    }
  }
  if ( (v1 & 0x200) == 0 )
  {
    do
    {
      result = _InterlockedCompareExchange64(v3, v1 | 0x220, v1);
      v5 = v1 == result;
      v1 = result;
    }
    while ( !v5 && (result & 0x200) == 0 );
  }
  return result;
}
