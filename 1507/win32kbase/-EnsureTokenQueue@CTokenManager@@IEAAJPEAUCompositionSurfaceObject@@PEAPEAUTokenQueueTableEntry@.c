/*
 * XREFs of ?EnsureTokenQueue@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@1@@Z @ 0x1C0046E18
 * Callers:
 *     ?EnsureTokenQueueForPresent@CTokenManager@@SAJPEAUCompositionSurfaceObject@@@Z @ 0x1C004579C (-EnsureTokenQueueForPresent@CTokenManager@@SAJPEAUCompositionSurfaceObject@@@Z.c)
 *     ?CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z @ 0x1C0046FD8 (-CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z.c)
 *     ?AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z @ 0x1C00A4468 (-AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z.c)
 * Callees:
 *     ?Create@CTokenQueue@@SAJPEBUCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1C0017E44 (-Create@CTokenQueue@@SAJPEBUCompositionSurfaceObject@@PEAPEAV1@@Z.c)
 *     ?AddRef@CompositionObject@@QEBAJXZ @ 0x1C0021C80 (-AddRef@CompositionObject@@QEBAJXZ.c)
 */

__int64 __fastcall CTokenManager::EnsureTokenQueue(
        CTokenManager *this,
        struct CompositionSurfaceObject *a2,
        CompositionObject ***a3)
{
  struct _RTL_GENERIC_TABLE *v3; // rbp
  int v5; // edi
  const struct CompositionSurfaceObject *v6; // rcx
  CompositionObject **inserted; // rbx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 v10; // [rsp+50h] [rbp+8h] BYREF
  struct CTokenQueue *v11; // [rsp+58h] [rbp+10h] BYREF

  v3 = (struct _RTL_GENERIC_TABLE *)((char *)this + 96);
  v9[0] = a2;
  v5 = 0;
  v9[1] = 0LL;
  inserted = (CompositionObject **)RtlInsertElementGenericTable(
                                     (PRTL_GENERIC_TABLE)((char *)this + 96),
                                     v9,
                                     0x10u,
                                     &v10);
  if ( inserted )
  {
    if ( v10 )
    {
      v5 = CTokenQueue::Create(v6, &v11);
      if ( v5 < 0 )
      {
        RtlDeleteElementGenericTable(v3, inserted);
        inserted = 0LL;
      }
      else
      {
        inserted[1] = v11;
        CompositionObject::AddRef(*inserted);
      }
    }
  }
  else
  {
    v5 = -1073741801;
  }
  if ( a3 )
    *a3 = inserted;
  return (unsigned int)v5;
}
