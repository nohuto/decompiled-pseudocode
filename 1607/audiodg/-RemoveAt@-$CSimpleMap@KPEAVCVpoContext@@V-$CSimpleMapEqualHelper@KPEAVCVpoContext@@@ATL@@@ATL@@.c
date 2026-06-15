/*
 * XREFs of ?RemoveAt@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAHH@Z @ 0x140032270
 * Callers:
 *     ??1CVpoContext@@IEAA@XZ @ 0x140031C14 (--1CVpoContext@@IEAA@XZ.c)
 * Callees:
 *     _recalloc @ 0x1400184E0 (_recalloc.c)
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x14002928C (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 */

__int64 __fastcall ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::RemoveAt(
        __int64 a1,
        int a2)
{
  __int64 v2; // rdi
  int v3; // edx
  errno_t v4; // eax
  errno_t v5; // eax
  void *v6; // rax
  void *v7; // rax
  __int64 result; // rax

  v2 = a2;
  if ( a2 < 0 )
    return 0LL;
  v3 = dword_140054F90;
  if ( (int)v2 >= dword_140054F90 )
    return 0LL;
  if ( (_DWORD)v2 != dword_140054F90 - 1 )
  {
    v4 = memmove_s(
           (char *)CVpoContext::s_mapVpoContext + 4 * v2,
           4LL * (dword_140054F90 - (int)v2),
           (char *)CVpoContext::s_mapVpoContext + 4 * v2 + 4,
           4LL * (dword_140054F90 - (int)v2 - 1));
    ATL::AtlCrtErrorCheck(v4);
    v5 = memmove_s(
           (char *)qword_140054F88 + 8 * v2,
           8LL * (dword_140054F90 - (int)v2),
           (char *)qword_140054F88 + 8 * v2 + 8,
           8LL * (dword_140054F90 - (int)v2 - 1));
    ATL::AtlCrtErrorCheck(v5);
    v3 = dword_140054F90;
  }
  v6 = _recalloc(CVpoContext::s_mapVpoContext, v3 - 1, 4uLL);
  if ( v6 || dword_140054F90 == 1 )
    CVpoContext::s_mapVpoContext = v6;
  v7 = _recalloc(qword_140054F88, dword_140054F90 - 1, 8uLL);
  if ( v7 || dword_140054F90 == 1 )
    qword_140054F88 = v7;
  result = 1LL;
  --dword_140054F90;
  return result;
}
