/*
 * XREFs of ?Reallocate@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@PEAU32@HH@Z @ 0x140034C60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ??$AtlMultiply@K@ATL@@YAJPEAKKK@Z @ 0x140034BA8 (--$AtlMultiply@K@ATL@@YAJPEAKKK@Z.c)
 */

struct ATL::CStringData *__fastcall ATL::CAtlStringMgr::Reallocate(
        ATL::CAtlStringMgr *this,
        struct ATL::CStringData *a2,
        int a3,
        unsigned int a4)
{
  signed int v6; // r8d
  signed int v7; // ebp
  struct ATL::CStringData *result; // rax
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF

  if ( a3 < 0 )
    return 0LL;
  if ( 0x7FFFFFFF - a3 < 1 )
    return 0LL;
  v6 = a3 + 1;
  v7 = (v6 + 7) & 0xFFFFFFF8;
  if ( v6 > v7 )
    return 0LL;
  if ( (int)ATL::AtlMultiply<unsigned long>(&v9, v7, a4) < 0 )
    return 0LL;
  if ( v9 > 0xFFFFFFE7 )
    return 0LL;
  result = (struct ATL::CStringData *)(*(__int64 (__fastcall **)(_QWORD, struct ATL::CStringData *, _QWORD))(**((_QWORD **)this + 1) + 16LL))(
                                        *((_QWORD *)this + 1),
                                        a2,
                                        v9 + 24);
  if ( !result )
    return 0LL;
  *((_DWORD *)result + 3) = v7 - 1;
  return result;
}
