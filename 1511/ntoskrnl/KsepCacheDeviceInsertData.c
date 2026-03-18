/*
 * XREFs of KsepCacheDeviceInsertData @ 0x14054F040
 * Callers:
 *     KsepDbCacheReadDevice @ 0x1404FA314 (KsepDbCacheReadDevice.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1400028CC (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x1400028EC (KsepPoolAllocatePaged.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     KsepStringFree @ 0x1403B8B6C (KsepStringFree.c)
 *     KsepStringDuplicate @ 0x1404F1B98 (KsepStringDuplicate.c)
 */

__int64 __fastcall KsepCacheDeviceInsertData(__int64 a1, _WORD *a2, const void *a3, int a4, unsigned int Size)
{
  PVOID Paged; // rax
  void *v10; // rbx
  int v11; // edi
  PVOID v12; // rax
  _QWORD *v13; // rcx

  Paged = KsepPoolAllocatePaged(0x30uLL);
  v10 = Paged;
  if ( Paged )
  {
    v11 = KsepStringDuplicate((__int64)Paged + 16, a2);
    if ( v11 >= 0 )
    {
      v12 = KsepPoolAllocatePaged(Size);
      *((_QWORD *)v10 + 5) = v12;
      if ( v12 )
      {
        memmove(v12, a3, Size);
        *((_DWORD *)v10 + 9) = a4;
        *((_DWORD *)v10 + 8) = Size;
        v13 = *(_QWORD **)(a1 + 64);
        *(_QWORD *)v10 = a1 + 56;
        *((_QWORD *)v10 + 1) = v13;
        if ( *v13 != a1 + 56 )
          __fastfail(3u);
        *v13 = v10;
        *(_QWORD *)(a1 + 64) = v10;
        v10 = 0LL;
        v11 = 0;
      }
      else
      {
        v11 = -1073741801;
      }
    }
    if ( v10 )
    {
      KsepStringFree((_QWORD *)v10 + 2);
      KsepPoolFreePaged(*((void **)v10 + 5));
      KsepPoolFreePaged(v10);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v11;
}
