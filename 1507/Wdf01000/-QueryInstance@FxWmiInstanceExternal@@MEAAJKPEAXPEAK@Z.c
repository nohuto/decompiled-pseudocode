/*
 * XREFs of ?QueryInstance@FxWmiInstanceExternal@@MEAAJKPEAXPEAK@Z @ 0x1C0069430
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     memmove @ 0x1C0033080 (memmove.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qddq @ 0x1C0069A94 (WPP_IFR_SF_qddq.c)
 */

__int64 __fastcall FxWmiInstanceExternal::QueryInstance(
        FxWmiInstanceExternal *this,
        unsigned int OutBufferSize,
        unsigned __int8 *OutBuffer,
        unsigned int *BufferUsed)
{
  char *_a2; // rbx
  unsigned __int8 *v6; // r15
  unsigned int _a3; // ebp
  size_t _a4; // rcx
  unsigned int v10; // esi
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v12; // rcx
  int (__fastcall *m_Method)(WDFWMIINSTANCE__ *, unsigned int, void *, unsigned int *); // rax
  const void *v14; // rax
  __int64 v15; // rax
  int v16; // ecx
  const void *v17; // rax
  FxWmiProvider *m_Provider; // rcx
  unsigned int m_MinInstanceBufferSize; // r8d
  const void *v20; // rcx
  const void *v21; // rdx
  __int64 v22; // rax
  const void *v23; // rcx
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
      v23 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v23 = 0LL;
    WPP_IFR_SF_qq(
      this->m_Globals,
      2u,
      0xCu,
      0x17u,
      WPP_FxWmiInstance_cpp_Traceguids,
      v23,
      this->m_ExecuteMethodCallback.m_Method);
    v10 = 0;
LABEL_49:
    *BufferUsed = 0;
    return v10;
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
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( *(_BYTE *)(v15 + 318) )
      DbgBreakPoint();
    v10 = -1073741823;
    goto LABEL_49;
  }
  if ( (v10 & 0x80000000) != 0 )
  {
    if ( v10 == -1073741789 )
    {
      m_Provider = this->m_Provider;
      m_MinInstanceBufferSize = m_Provider->m_MinInstanceBufferSize;
      if ( m_MinInstanceBufferSize )
      {
        v20 = m_Provider->m_ObjectSize ? (const void *)((unsigned __int64)m_Provider ^ 0xFFFFFFFFFFFFFFF8uLL) : 0LL;
        v21 = this->m_ObjectSize ? (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL) : 0LL;
        WPP_IFR_SF_qddq(
          this->m_Globals,
          (unsigned __int8)v21,
          m_MinInstanceBufferSize,
          (unsigned __int16)BufferUsed,
          _a1,
          v21,
          -1073741789,
          m_MinInstanceBufferSize,
          v20);
        WPP_IFR_SF_(this->m_Globals, 2u, 0xCu, 0x16u, WPP_FxWmiInstance_cpp_Traceguids);
        Mx::MxDbgPrint(
          "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
        if ( *(_BYTE *)(v22 + 318) )
          DbgBreakPoint();
      }
    }
  }
  else
  {
    v16 = *BufferUsed;
    if ( *BufferUsed > _a3 )
    {
      if ( this->m_ObjectSize )
        v17 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v17 = 0LL;
      WPP_IFR_SF_qddd(this->m_Globals, OutBufferSize, 0xCu, 0x14u, WPP_FxWmiInstance_cpp_Traceguids, v17, _a3, v16, v10);
      goto LABEL_23;
    }
    if ( v6 == dummy && v16 )
      return (unsigned int)-1073741789;
  }
  return v10;
}
