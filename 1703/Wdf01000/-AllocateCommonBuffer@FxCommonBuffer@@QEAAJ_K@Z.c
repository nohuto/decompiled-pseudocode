/*
 * XREFs of ?AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z @ 0x1C0035C68
 * Callers:
 *     imp_WdfCommonBufferCreateWithConfig @ 0x1C00358B0 (imp_WdfCommonBufferCreateWithConfig.c)
 *     imp_WdfCommonBufferCreate @ 0x1C0069D10 (imp_WdfCommonBufferCreate.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C0067DA0 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qi @ 0x1C006A78C (WPP_IFR_SF_qi.c)
 *     WPP_IFR_SF_qii @ 0x1C006A854 (WPP_IFR_SF_qii.c)
 *     WPP_IFR_SF_qxx @ 0x1C006F598 (WPP_IFR_SF_qxx.c)
 */

__int64 __fastcall FxCommonBuffer::AllocateCommonBuffer(
        FxCommonBuffer *this,
        unsigned __int64 Length,
        __int64 a3,
        __int64 a4)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  __int64 *p_m_Alignment; // r14
  unsigned __int64 m_Alignment; // r8
  unsigned int v8; // edi
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  unsigned int Major; // eax
  FxDmaEnabler *m_DmaEnabler; // rcx
  unsigned __int64 m_RawLength; // rdx
  _FX_DRIVER_GLOBALS *v13; // rbp
  char *m_BufferRawVA; // r9
  unsigned __int64 v15; // rdx
  _LARGE_INTEGER m_BufferRawLA; // r8
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  unsigned __int64 v21; // rax
  unsigned __int16 m_ObjectSize; // ax
  const void *v23; // rbx
  unsigned __int16 v24; // ax
  const void *v25; // rcx
  unsigned __int64 v26; // rcx
  unsigned __int16 v27; // ax
  const void *v28; // rbx
  unsigned __int16 v29; // ax
  const void *v30; // rbx
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
  v8 = 0;
  if ( m_Alignment <= 0xFFF
    && ((WdfBindInfo = m_Globals->WdfBindInfo, Major = WdfBindInfo->Version.Major, Major > 1)
     || Major == 1 && WdfBindInfo->Version.Minor >= 0xB) )
  {
    this->m_RawLength = Length;
  }
  else
  {
    v21 = -1LL;
    if ( m_Alignment + Length >= Length )
      v21 = m_Alignment + Length;
    v8 = m_Alignment + Length < Length ? 0xC0000095 : 0;
    this->m_RawLength = v21;
    if ( m_Alignment + Length < Length )
    {
      m_ObjectSize = this->m_ObjectSize;
      v23 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        v23 = 0LL;
      WPP_IFR_SF_qii(m_Globals, 2u, m_Alignment, 0xAu, WPP_FxCommonBuffer_cpp_Traceguids, v23, Length, *p_m_Alignment);
      goto LABEL_33;
    }
  }
  m_DmaEnabler = this->m_DmaEnabler;
  m_RawLength = this->m_RawLength;
  v13 = m_DmaEnabler->m_Globals;
  this->m_BufferRawVA = 0LL;
  this->m_BufferRawLA.QuadPart = 0LL;
  if ( m_RawLength > 0xFFFFFFFF )
  {
    v24 = m_DmaEnabler->m_ObjectSize;
    v25 = (const void *)((unsigned __int64)m_DmaEnabler ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v24 )
      v25 = 0LL;
    WPP_IFR_SF_qi(v13, m_RawLength, m_Alignment, 0x1Cu, WPP_FxDmaEnabler_cpp_Traceguids, v25, m_RawLength);
    FxVerifierDbgBreakPoint(v13);
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
  if ( m_BufferRawVA )
  {
    v15 = *p_m_Alignment;
    m_BufferRawLA = this->m_BufferRawLA;
    v17 = *p_m_Alignment;
    this->m_BufferAlignedVA = (void *)(~*p_m_Alignment & (unsigned __int64)&m_BufferRawVA[*p_m_Alignment]);
    v18 = ~v17 & (m_BufferRawLA.QuadPart + v15);
    this->m_BufferAlignedLA.QuadPart = v18;
    if ( v15 <= 0xFFF )
      return v8;
    if ( v18 < m_BufferRawLA.QuadPart )
    {
      v29 = this->m_ObjectSize;
      v30 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v29 )
        v30 = 0LL;
      WPP_IFR_SF_qxx(
        m_Globals,
        v15,
        m_BufferRawLA.LowPart,
        (unsigned __int16)m_BufferRawVA,
        traceGuid,
        v30,
        m_BufferRawLA.QuadPart,
        v18);
    }
    else
    {
      v26 = v18 - m_BufferRawLA.QuadPart;
      if ( v26 <= 0xFFFFFFFF )
      {
        v8 = 0;
        this->m_BufferAlignedVA = &m_BufferRawVA[(unsigned int)v26];
        return v8;
      }
      v27 = this->m_ObjectSize;
      v28 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v27 )
        v28 = 0LL;
      WPP_IFR_SF_qi(m_Globals, v15, m_BufferRawLA.LowPart, 0xCu, WPP_FxCommonBuffer_cpp_Traceguids, v28, v26);
    }
    v8 = -1073741675;
LABEL_33:
    FxVerifierDbgBreakPoint(m_Globals);
    return v8;
  }
  this->m_Length = 0LL;
  result = 3221225626LL;
  this->m_RawLength = 0LL;
  this->m_BufferAlignedVA = 0LL;
  this->m_BufferAlignedLA.QuadPart = 0LL;
  return result;
}
