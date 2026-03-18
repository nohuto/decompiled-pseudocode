/*
 * XREFs of ??1FxDpc@@UEAA@XZ @ 0x1C0068160
 * Callers:
 *     ??_GFxDpc@@UEAAPEAXI@Z @ 0x1C0068210 (--_GFxDpc@@UEAAPEAXI@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

void __fastcall FxDpc::~FxDpc(FxDpc *this, unsigned int a2, unsigned int a3)
{
  const void *_a1; // rax
  __int64 v5; // rax

  this->__vftable = (FxDpc_vtbl *)&FxDpc::`vftable';
  if ( this->m_Object )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_q(this->m_Globals, 2u, 0x12u, 0xAu, WPP_FxDpc_cpp_Traceguids, _a1);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( *(_BYTE *)(v5 + 318) )
      DbgBreakPoint();
  }
  FxNonPagedObject::~FxNonPagedObject(this, a2, a3);
}
