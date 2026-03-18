/*
 * XREFs of ?QueryInstance@FxWmiInstanceExternal@@MEAAJKPEAXPEAK@Z @ 0x1C0073720
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_ @ 0x1C0019F44 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     memmove @ 0x1C0040140 (memmove.c)
 *     WPP_IFR_SF_qddd @ 0x1C00684F0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qddq @ 0x1C0073D34 (WPP_IFR_SF_qddq.c)
 */

__int64 __fastcall FxWmiInstanceExternal::QueryInstance(
        FxWmiInstanceExternal *this,
        unsigned int OutBufferSize,
        void *OutBuffer,
        unsigned int *BufferUsed)
{
  char *v4; // rdi
  unsigned __int16 v6; // r9
  unsigned int _a4; // r11d
  unsigned int v9; // ebp
  unsigned __int16 v10; // ax
  const void *_a2; // rcx
  unsigned __int16 m_ObjectSize; // ax
  int (__fastcall *m_Method)(WDFWMIINSTANCE__ *, unsigned int, void *, unsigned int *); // rax
  unsigned __int8 *v14; // rbx
  unsigned int _a3; // r15d
  unsigned __int16 v16; // dx
  unsigned __int64 v17; // rcx
  unsigned __int16 v18; // ax
  _FX_DRIVER_GLOBALS **p_m_Globals; // rbx
  const void *v20; // rsi
  int v21; // ecx
  unsigned __int16 v22; // ax
  const void *v23; // rsi
  FxWmiProvider *m_Provider; // rcx
  int m_MinInstanceBufferSize; // edx
  unsigned __int16 v26; // ax
  _FX_DRIVER_GLOBALS **v27; // rbx
  const void *v28; // rcx
  bool v29; // zf
  unsigned __int16 v30; // ax
  const void *v31; // rsi
  unsigned __int16 v32; // ax
  const void *v33; // rcx
  const _GUID *_a1; // [rsp+20h] [rbp-58h]
  unsigned __int8 dummy[16]; // [rsp+50h] [rbp-28h] BYREF

  v4 = 0LL;
  v6 = (unsigned __int16)OutBuffer;
  if ( this->m_UseContextForQuery )
  {
    *BufferUsed = this->m_ContextLength;
    _a4 = this->m_ContextLength;
    if ( OutBufferSize >= _a4 )
    {
      m_ObjectSize = this->m_ObjectSize;
      v9 = 0;
      if ( m_ObjectSize )
        v4 = (char *)this + m_ObjectSize;
      memmove(OutBuffer, v4 + 48, this->m_ContextLength);
    }
    else
    {
      v9 = -1073741789;
      v10 = this->m_ObjectSize;
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v10 )
        _a2 = 0LL;
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
    return v9;
  }
  if ( !this->m_QueryInstanceCallback.m_Method )
  {
    v32 = this->m_ObjectSize;
    v33 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v32 )
      v33 = 0LL;
    WPP_IFR_SF_qq(
      this->m_Globals,
      2u,
      0xCu,
      0x17u,
      WPP_FxWmiInstance_cpp_Traceguids,
      v33,
      this->m_ExecuteMethodCallback.m_Method);
    v9 = 0;
    goto LABEL_40;
  }
  m_Method = this->m_QueryInstanceCallback.m_Method;
  v14 = dummy;
  _a3 = 1;
  if ( OutBufferSize )
  {
    _a3 = OutBufferSize;
    v14 = (unsigned __int8 *)OutBuffer;
  }
  v16 = this->m_ObjectSize;
  if ( m_Method )
  {
    v17 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v16 )
      v17 = 0LL;
    v9 = m_Method((WDFWMIINSTANCE__ *)v17, _a3, v14, BufferUsed);
  }
  else
  {
    v9 = -1073741823;
  }
  if ( v9 == 259 )
  {
    v18 = this->m_ObjectSize;
    p_m_Globals = &this->m_Globals;
    v20 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v18 )
      v20 = 0LL;
    WPP_IFR_SF_qd(*p_m_Globals, 2u, 0xCu, 0x13u, WPP_FxWmiInstance_cpp_Traceguids, v20, 259);
LABEL_21:
    FxVerifierDbgBreakPoint(*p_m_Globals);
    v9 = -1073741823;
LABEL_40:
    *BufferUsed = 0;
    return v9;
  }
  if ( (v9 & 0x80000000) != 0 )
  {
    if ( v9 == -1073741789 )
    {
      m_Provider = this->m_Provider;
      m_MinInstanceBufferSize = m_Provider->m_MinInstanceBufferSize;
      if ( m_MinInstanceBufferSize )
      {
        v26 = m_Provider->m_ObjectSize;
        v27 = &this->m_Globals;
        v28 = (const void *)((unsigned __int64)m_Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
        v29 = v26 == 0;
        v30 = this->m_ObjectSize;
        if ( v29 )
          v28 = 0LL;
        v31 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v30 )
          v31 = 0LL;
        WPP_IFR_SF_qddq(
          *v27,
          m_MinInstanceBufferSize,
          (unsigned int)OutBuffer,
          v6,
          _a1,
          v31,
          -1073741789,
          m_MinInstanceBufferSize,
          v28);
        WPP_IFR_SF_(*v27, 2u, 0xCu, 0x16u, WPP_FxWmiInstance_cpp_Traceguids);
        FxVerifierDbgBreakPoint(*v27);
      }
    }
  }
  else
  {
    v21 = *BufferUsed;
    if ( *BufferUsed > _a3 )
    {
      v22 = this->m_ObjectSize;
      p_m_Globals = &this->m_Globals;
      v23 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v22 )
        v23 = 0LL;
      WPP_IFR_SF_qddd(*p_m_Globals, v16, 0xCu, 0x14u, WPP_FxWmiInstance_cpp_Traceguids, v23, _a3, v21, v9);
      goto LABEL_21;
    }
    if ( v14 == dummy && v21 )
      return (unsigned int)-1073741789;
  }
  return v9;
}
