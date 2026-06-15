/*
 * XREFs of ?Allocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@HH@Z @ 0x140011270
 * Callers:
 *     ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x140011030 (-Fork@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 * Callees:
 *     ?Allocate@CWin32Heap@ATL@@UEAAPEAX_K@Z @ 0x140011360 (-Allocate@CWin32Heap@ATL@@UEAAPEAX_K@Z.c)
 *     ??$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z @ 0x140011394 (--$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

struct ATL::CStringData *__fastcall ATL::CAtlStringMgr::Allocate(ATL::CAtlStringMgr *this, int a2, int a3)
{
  signed int v4; // edx
  signed int v5; // ebx
  unsigned __int64 v6; // r14
  void *(__fastcall *v7)(ATL::CWin32Heap *__hidden, unsigned __int64); // rbp
  struct ATL::CStringData *result; // rax
  unsigned __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  if ( a2 < 0 )
    return 0LL;
  if ( 0x7FFFFFFF - a2 < 1 )
    return 0LL;
  v4 = a2 + 1;
  v5 = (v4 + 7) & 0xFFFFFFF8;
  if ( v4 > v5 || (int)ATL::AtlMultiply<unsigned __int64>(&v9, v5, a3) < 0 || v9 > 0xFFFFFFFFFFFFFFE7uLL )
    return 0LL;
  v6 = v9 + 24;
  v7 = (void *(__fastcall *)(ATL::CWin32Heap *__hidden, unsigned __int64))***((_QWORD ***)this + 1);
  result = v7 == ATL::CWin32Heap::Allocate
         ? (struct ATL::CStringData *)ATL::CWin32Heap::Allocate(*((ATL::CWin32Heap **)this + 1), v6)
         : (struct ATL::CStringData *)v7(*((ATL::CWin32Heap **)this + 1), v6);
  if ( !result )
    return 0LL;
  *((_DWORD *)result + 2) = 0;
  *(_QWORD *)result = this;
  *((_DWORD *)result + 4) = 1;
  *((_DWORD *)result + 3) = v5 - 1;
  return result;
}
