/*
 * XREFs of ?QueryInstance@FxWmiInstanceExternal@@MEAAJKPEAXPEAK@Z @ 0x1C00615D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_ @ 0x1C00211D8 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     memmove @ 0x1C0036900 (memmove.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1C0057BD0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qddq @ 0x1C0061BA4 (WPP_IFR_SF_qddq.c)
 */

__int64 __fastcall FxWmiInstanceExternal::QueryInstance(
        FxWmiInstanceExternal *this,
        unsigned int OutBufferSize,
        unsigned __int8 *OutBuffer,
        unsigned int *BufferUsed)
{
  char *_a2; // rbx
  unsigned __int8 *v6; // r14
  unsigned int _a3; // ebp
  size_t _a4; // rcx
  unsigned int v10; // esi
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v12; // rcx
  int (__fastcall *m_Method)(WDFWMIINSTANCE__ *, unsigned int, void *, unsigned int *); // rax
  const void *v14; // rax
  int v15; // ecx
  const void *v16; // rax
  FxWmiProvider *m_Provider; // rcx
  int m_MinInstanceBufferSize; // edx
  const void *v19; // rcx
  const void *v20; // rcx
  const _GUID *_a1; // [rsp+20h] [rbp-58h]
  unsigned __int8 dummy[16]; // [rsp+50h] [rbp-28h] BYREF

  _a2 = 0LL;
  v6 = OutBuffer;
  _a3 = OutBufferSize;
  if ( this->m_UseContextForQuery )
  {
    *BufferUsed = this->m_ContextLength;
    _a4 = this->m_ContextLength;
    if ( OutBufferSize >= (unsigned int)_a4 )
    {
      m_ObjectSize = this->m_ObjectSize;
      v10 = 0;
      if ( m_ObjectSize )
        _a2 = (char *)this + m_ObjectSize;
      memmove(OutBuffer, _a2 + 48, _a4);
    }
    else
    {
      v10 = -1073741789;
      if ( this->m_ObjectSize )
        _a2 = (char *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qddd(
        this->m_Globals,
        OutBufferSize,
        0x12u,
        0x12u,
        WPP_FxWmiInstance_cpp_Traceguids,
        _a2,
        OutBufferSize,
        _a4,
        -1073741789);
    }
    return v10;
  }
  if ( !this->m_QueryInstanceCallback.m_Method )
  {
    if ( this->m_ObjectSize )
      v20 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v20 = 0LL;
    WPP_IFR_SF_qq(
      this->m_Globals,
      2u,
      0xCu,
      0x17u,
      WPP_FxWmiInstance_cpp_Traceguids,
      v20,
      this->m_ExecuteMethodCallback.m_Method);
    v10 = 0;
    goto LABEL_45;
  }
  if ( !OutBufferSize )
  {
    v6 = dummy;
    _a3 = 1;
  }
  if ( this->m_ObjectSize )
    v12 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v12 = 0LL;
  m_Method = this->m_QueryInstanceCallback.m_Method;
  if ( m_Method )
    v10 = ((__int64 (__fastcall *)(unsigned __int64, _QWORD, unsigned __int8 *))m_Method)(v12, _a3, v6);
  else
    v10 = -1073741823;
  if ( v10 == 259 )
  {
    if ( this->m_ObjectSize )
      v14 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v14 = 0LL;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x13u, WPP_FxWmiInstance_cpp_Traceguids, v14, 259);
LABEL_23:
    FxVerifierDbgBreakPoint(this->m_Globals);
    v10 = -1073741823;
LABEL_45:
    *BufferUsed = 0;
    return v10;
  }
  if ( (v10 & 0x80000000) != 0 )
  {
    if ( v10 == -1073741789 )
    {
      m_Provider = this->m_Provider;
      m_MinInstanceBufferSize = m_Provider->m_MinInstanceBufferSize;
      if ( m_MinInstanceBufferSize )
      {
        if ( m_Provider->m_ObjectSize )
          v19 = (const void *)((unsigned __int64)m_Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v19 = 0LL;
        if ( this->m_ObjectSize )
          _a2 = (char *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        WPP_IFR_SF_qddq(
          this->m_Globals,
          m_MinInstanceBufferSize,
          (unsigned int)OutBuffer,
          (unsigned __int16)BufferUsed,
          _a1,
          _a2,
          -1073741789,
          m_MinInstanceBufferSize,
          v19);
        WPP_IFR_SF_(this->m_Globals, 2u, 0xCu, 0x16u, WPP_FxWmiInstance_cpp_Traceguids);
        FxVerifierDbgBreakPoint(this->m_Globals);
      }
    }
  }
  else
  {
    v15 = *BufferUsed;
    if ( *BufferUsed > _a3 )
    {
      if ( this->m_ObjectSize )
        v16 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v16 = 0LL;
      WPP_IFR_SF_qddd(this->m_Globals, OutBufferSize, 0xCu, 0x14u, WPP_FxWmiInstance_cpp_Traceguids, v16, _a3, v15, v10);
      goto LABEL_23;
    }
    if ( v6 == dummy && v15 )
      return (unsigned int)-1073741789;
  }
  return v10;
}
