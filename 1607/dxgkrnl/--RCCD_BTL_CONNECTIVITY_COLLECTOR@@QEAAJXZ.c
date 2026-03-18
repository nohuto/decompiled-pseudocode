/*
 * XREFs of ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C00B6CAC
 * Callers:
 *     ?RetrieveConnectivitySetId@CCD_BTL@@QEAAJPEAVCCD_SET_STRING_ID@@@Z @ 0x1C00B6B84 (-RetrieveConnectivitySetId@CCD_BTL@@QEAAJPEAVCCD_SET_STRING_ID@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C008DE4C (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C008E13C (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C008E470 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00A3D30 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall CCD_BTL_CONNECTIVITY_COLLECTOR::operator()(_DWORD **a1)
{
  unsigned __int64 v2; // rsi
  SIZE_T v3; // rax
  _DWORD *v4; // rax
  __int64 v5; // rcx
  struct DXGGLOBAL *Global; // rax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // edi
  const struct _UNICODE_STRING *v12; // rdx
  CCD_SET_STRING_ID *v13; // rax
  __int64 result; // rax
  __int64 v15; // rax
  _BYTE v16[64]; // [rsp+20h] [rbp-48h] BYREF

  v2 = 0LL;
  do
  {
    v2 += 2048LL;
    operator delete(a1[2]);
    if ( v2 >= 0x4000 )
      return 3221225473LL;
    v3 = 2 * (v2 >> 1);
    if ( !is_mul_ok(v2 >> 1, 2uLL) )
      v3 = -1LL;
    v4 = operator new(v3, 0x63644356u, PagedPool);
    a1[2] = v4;
    if ( !v4 )
    {
      v15 = WdLogNewEntry5_WdLowResource(v5);
      *(_QWORD *)(v15 + 24) = v2;
      *(_QWORD *)(v15 + 32) = a1;
      WdLogEvent5_WdLowResource(v15);
      return 3221225495LL;
    }
    *((_WORD *)a1 + 4) = 0;
    *((_WORD *)a1 + 5) = v2;
    Global = DXGGLOBAL::GetGlobal(v5);
    v7 = DXGGLOBAL::IterateAdaptersWithCallback(
           (__int64)Global,
           (__int64 (__fastcall *)(_QWORD *, __int64))BtlPreAcquireSharedAccess__CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_1_,
           (__int64)a1,
           1);
    v11 = v7;
  }
  while ( v7 == -1073741789 );
  if ( v7 >= 0 )
  {
    v12 = (const struct _UNICODE_STRING *)(a1 + 1);
    if ( *((_WORD *)a1 + 4) )
    {
      v13 = CCD_SET_STRING_ID::CCD_SET_STRING_ID((CCD_SET_STRING_ID *)v16, v12);
      CCD_SET_STRING_ID::operator=((CCD_SET_STRING_ID *)*a1, (__int64)v13);
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v16);
      v11 = **a1;
    }
    else
    {
      v11 = -1073741823;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v12, v9, v10) + 24) = a1;
    }
  }
  operator delete(a1[2]);
  result = v11;
  a1[2] = 0LL;
  return result;
}
