/*
 * XREFs of ?RemoveAt@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAHH@Z @ 0x1400014D4
 * Callers:
 *     ??1CVpoContext@@IEAA@XZ @ 0x140001458 (--1CVpoContext@@IEAA@XZ.c)
 * Callees:
 *     _recalloc @ 0x140018FD0 (_recalloc.c)
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x14002A5C4 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 */

__int64 __fastcall ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::RemoveAt(
        __int64 a1,
        int a2)
{
  __int64 v2; // rdi
  int v3; // edx
  void *v4; // rax
  void *v5; // rax
  __int64 result; // rax
  errno_t v7; // eax
  errno_t v8; // eax

  v2 = a2;
  if ( a2 < 0 )
    return 0LL;
  v3 = dword_140055E18;
  if ( (int)v2 >= dword_140055E18 )
    return 0LL;
  if ( (_DWORD)v2 != dword_140055E18 - 1 )
  {
    v7 = memmove_s(
           (char *)CVpoContext::s_mapVpoContext + 4 * v2,
           4LL * (dword_140055E18 - (int)v2),
           (char *)CVpoContext::s_mapVpoContext + 4 * v2 + 4,
           4LL * (dword_140055E18 - (int)v2 - 1));
    ATL::AtlCrtErrorCheck(v7);
    v8 = memmove_s(
           (char *)Block + 8 * v2,
           8LL * (dword_140055E18 - (int)v2),
           (char *)Block + 8 * v2 + 8,
           8LL * (dword_140055E18 - (int)v2 - 1));
    ATL::AtlCrtErrorCheck(v8);
    v3 = dword_140055E18;
  }
  v4 = _recalloc(CVpoContext::s_mapVpoContext, v3 - 1, 4uLL);
  if ( v4 || dword_140055E18 == 1 )
    CVpoContext::s_mapVpoContext = v4;
  v5 = _recalloc(Block, dword_140055E18 - 1, 8uLL);
  if ( v5 || dword_140055E18 == 1 )
    Block = v5;
  result = 1LL;
  --dword_140055E18;
  return result;
}
