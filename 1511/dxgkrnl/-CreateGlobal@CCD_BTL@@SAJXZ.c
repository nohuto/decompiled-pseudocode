/*
 * XREFs of ?CreateGlobal@CCD_BTL@@SAJXZ @ 0x1C00CD5C0
 * Callers:
 *     DriverEntry @ 0x1C018D79C (DriverEntry.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0CCD_BTL@@AEAA@XZ @ 0x1C00CD610 (--0CCD_BTL@@AEAA@XZ.c)
 */

__int64 __fastcall CCD_BTL::CreateGlobal(__int64 a1)
{
  CCD_BTL *v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // rax
  __int64 v8; // rax

  if ( CCD_BTL::m_pGlobalBtl )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v7);
    return 3221225473LL;
  }
  else
  {
    v1 = (CCD_BTL *)operator new[](0x88uLL, 0x63644356u, PagedPool);
    if ( v1 )
      v1 = CCD_BTL::CCD_BTL(v1);
    CCD_BTL::m_pGlobalBtl = v1;
    if ( v1 )
    {
      return 0LL;
    }
    else
    {
      v8 = WdLogNewEntry5_WdLowResource(v3, v2, v4, v5);
      *(_QWORD *)(v8 + 24) = 136LL;
      WdLogEvent5_WdLowResource(v8);
      return 3221225495LL;
    }
  }
}
