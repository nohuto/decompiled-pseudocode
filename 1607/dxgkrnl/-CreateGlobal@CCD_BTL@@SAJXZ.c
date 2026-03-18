/*
 * XREFs of ?CreateGlobal@CCD_BTL@@SAJXZ @ 0x1C00F9DB8
 * Callers:
 *     DriverEntry @ 0x1C01B7018 (DriverEntry.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0CCD_BTL@@AEAA@XZ @ 0x1C00F9E08 (--0CCD_BTL@@AEAA@XZ.c)
 */

__int64 __fastcall CCD_BTL::CreateGlobal(__int64 a1)
{
  CCD_BTL *v1; // rax
  __int64 v2; // rcx
  __int64 v4; // rax
  __int64 v5; // rax

  if ( CCD_BTL::m_pGlobalBtl )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v4);
    return 3221225473LL;
  }
  else
  {
    v1 = (CCD_BTL *)operator new(0x88uLL, 0x63644356u, PagedPool);
    if ( v1 )
      v1 = CCD_BTL::CCD_BTL(v1);
    CCD_BTL::m_pGlobalBtl = v1;
    if ( v1 )
    {
      return 0LL;
    }
    else
    {
      v5 = WdLogNewEntry5_WdLowResource(v2);
      *(_QWORD *)(v5 + 24) = 136LL;
      WdLogEvent5_WdLowResource(v5);
      return 3221225495LL;
    }
  }
}
