/*
 * XREFs of ?AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z @ 0x1C002994C
 * Callers:
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1C00295A0 (imp_WdfCommonBufferCreateWithConfig.c)
 *     imp_WdfCommonBufferCreate @ 0x1C0059580 (imp_WdfCommonBufferCreate.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C0059110 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qi @ 0x1C005E220 (WPP_IFR_SF_qi.c)
 *     WPP_IFR_SF_qii @ 0x1C005E2E4 (WPP_IFR_SF_qii.c)
 *     WPP_IFR_SF_qxx @ 0x1C005E3D0 (WPP_IFR_SF_qxx.c)
 */

__int64 __fastcall FxCommonBuffer::AllocateCommonBuffer(
        FxCommonBuffer *this,
        unsigned __int64 Length,
        __int64 a3,
        __int64 a4)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  __int64 *p_m_Alignment; // r14
  unsigned __int64 m_Alignment; // r8
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  unsigned int Major; // eax
  FxDmaEnabler *m_DmaEnabler; // rcx
  unsigned __int64 m_RawLength; // rdx
  _FX_DRIVER_GLOBALS *v12; // rbp
  char *m_BufferRawVA; // r9
  unsigned __int64 v14; // rdx
  _LARGE_INTEGER m_BufferRawLA; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  _LARGE_INTEGER v18; // rcx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  const void *v21; // rcx
  unsigned __int64 v22; // rcx
  const void *v23; // rbx
  const void *v24; // rbx
  const void *v25; // rbx
  const _GUID *traceGuid; // [rsp+20h] [rbp-38h]

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(m_Globals);
      return 3221225488LL;
    }
  }
  p_m_Alignment = (__int64 *)&this->m_Alignment;
  this->m_Length = Length;
  m_Alignment = this->m_Alignment;
  if ( m_Alignment <= 0xFFF
    && ((WdfBindInfo = m_Globals->WdfBindInfo, Major = WdfBindInfo->Version.Major, Major > 1)
     || Major == 1 && WdfBindInfo->Version.Minor >= 0xB) )
  {
    this->m_RawLength = Length;
  }
  else
  {
    if ( m_Alignment + Length < Length )
    {
      this->m_RawLength = -1LL;
      if ( this->m_ObjectSize )
        v25 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v25 = 0LL;
      WPP_IFR_SF_qii(m_Globals, 2u, m_Alignment, 0xAu, WPP_FxCommonBuffer_cpp_Traceguids, v25, Length, *p_m_Alignment);
      goto LABEL_36;
    }
    this->m_RawLength = m_Alignment + Length;
  }
  m_DmaEnabler = this->m_DmaEnabler;
  m_RawLength = this->m_RawLength;
  v12 = m_DmaEnabler->m_Globals;
  this->m_BufferRawVA = 0LL;
  this->m_BufferRawLA.QuadPart = 0LL;
  if ( m_RawLength > 0xFFFFFFFF )
  {
    if ( m_DmaEnabler->m_ObjectSize )
      v21 = (const void *)((unsigned __int64)m_DmaEnabler ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v21 = 0LL;
    WPP_IFR_SF_qi(v12, m_RawLength, m_Alignment, 0x1Au, WPP_FxDmaEnabler_cpp_Traceguids, v21, m_RawLength);
    FxVerifierDbgBreakPoint(v12);
  }
  else
  {
    LOBYTE(a4) = 1;
    this->m_BufferRawVA = m_DmaEnabler->m_SimplexAdapterInfo.AdapterObject->DmaOperations->AllocateCommonBuffer(
                            m_DmaEnabler->m_SimplexAdapterInfo.AdapterObject,
                            m_RawLength,
                            &this->m_BufferRawLA,
                            a4);
  }
  m_BufferRawVA = (char *)this->m_BufferRawVA;
  if ( !m_BufferRawVA )
  {
    this->m_Length = 0LL;
    result = 3221225626LL;
    this->m_RawLength = 0LL;
    this->m_BufferAlignedVA = 0LL;
    this->m_BufferAlignedLA.QuadPart = 0LL;
    return result;
  }
  v14 = *p_m_Alignment;
  m_BufferRawLA = this->m_BufferRawLA;
  v16 = *p_m_Alignment;
  this->m_BufferAlignedVA = (void *)(~*p_m_Alignment & (unsigned __int64)&m_BufferRawVA[*p_m_Alignment]);
  v17 = ~v16;
  v18.QuadPart = v17 & (m_BufferRawLA.QuadPart + v14);
  this->m_BufferAlignedLA = v18;
  if ( v14 <= 0xFFF )
    return 0LL;
  if ( v18.QuadPart < (unsigned __int64)m_BufferRawLA.QuadPart )
  {
    if ( this->m_ObjectSize )
      v24 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v24 = 0LL;
    WPP_IFR_SF_qxx(
      m_Globals,
      v14,
      m_BufferRawLA.LowPart,
      (unsigned __int16)m_BufferRawVA,
      traceGuid,
      v24,
      m_BufferRawLA.QuadPart,
      v17 & (m_BufferRawLA.QuadPart + v14));
  }
  else
  {
    v22 = v18.QuadPart - m_BufferRawLA.QuadPart;
    if ( v22 <= 0xFFFFFFFF )
    {
      this->m_BufferAlignedVA = &m_BufferRawVA[(unsigned int)v22];
      return 0LL;
    }
    if ( this->m_ObjectSize )
      v23 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v23 = 0LL;
    WPP_IFR_SF_qi(m_Globals, v14, m_BufferRawLA.LowPart, 0xCu, WPP_FxCommonBuffer_cpp_Traceguids, v23, v22);
  }
LABEL_36:
  FxVerifierDbgBreakPoint(m_Globals);
  return 3221225621LL;
}
