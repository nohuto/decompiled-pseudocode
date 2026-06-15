/*
 * XREFs of ?Reallocate@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x14002A968
 * Callers:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x140002C28 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x14002AB20 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::Reallocate(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax

  if ( *(_DWORD *)(*a1 - 12) >= (int)a2 || (int)a2 <= 0 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(a1, a2);
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(*a1 - 24) + 16LL))(
         *(_QWORD *)(*a1 - 24),
         *a1 - 24,
         (unsigned int)a2,
         2LL);
  if ( !v3 )
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v5, v4);
  result = v3 + 24;
  *a1 = result;
  return result;
}
