/*
 * XREFs of ?CreateGlobal@CCD_BTL@@SAJXZ @ 0x1C00D7774
 * Callers:
 *     DriverEntry @ 0x1C0188018 (DriverEntry.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0CCD_BTL@@AEAA@XZ @ 0x1C00D77C4 (--0CCD_BTL@@AEAA@XZ.c)
 */

__int64 __fastcall CCD_BTL::CreateGlobal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  CCD_BTL *v4; // rax
  __int64 v5; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  if ( CCD_BTL::m_pGlobalBtl )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
    return 3221225473LL;
  }
  else
  {
    v4 = (CCD_BTL *)operator new[](0x88uLL, 0x63644356u, PagedPool);
    if ( v4 )
      v4 = CCD_BTL::CCD_BTL(v4);
    CCD_BTL::m_pGlobalBtl = v4;
    if ( v4 )
    {
      return 0LL;
    }
    else
    {
      v8 = WdLogNewEntry5_WdLowResource(v5);
      *(_QWORD *)(v8 + 24) = 136LL;
      WdLogEvent5_WdLowResource(v8);
      return 3221225495LL;
    }
  }
}
