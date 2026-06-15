/*
 * XREFs of ??0CComAutoCriticalSection@ATL@@QEAA@XZ @ 0x18004355C
 * Callers:
 *     ??0CPolicyConfig@@QEAA@XZ @ 0x18004320C (--0CPolicyConfig@@QEAA@XZ.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180038F7C (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     memset_0 @ 0x180047978 (memset_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct _RTL_CRITICAL_SECTION *__fastcall ATL::CComAutoCriticalSection::CComAutoCriticalSection(
        struct _RTL_CRITICAL_SECTION *this)
{
  int v2; // eax

  memset_0(this, 0, sizeof(struct _RTL_CRITICAL_SECTION));
  v2 = ATL::CComCriticalSection::Init(this);
  if ( v2 < 0 )
    ATL::AtlThrowImpl(v2);
  return this;
}
