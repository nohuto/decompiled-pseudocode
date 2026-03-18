/*
 * XREFs of ?EnsureTokenQueue@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@1@@Z @ 0x1C003C91C
 * Callers:
 *     ?EnsureTokenQueueForPresent@CTokenManager@@SAJPEAUCompositionSurfaceObject@@@Z @ 0x1C0039614 (-EnsureTokenQueueForPresent@CTokenManager@@SAJPEAUCompositionSurfaceObject@@@Z.c)
 *     ?AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z @ 0x1C003CB68 (-AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z.c)
 * Callees:
 *     ?AddRef@CompositionObject@@QEBAJXZ @ 0x1C0045F60 (-AddRef@CompositionObject@@QEBAJXZ.c)
 *     ?Create@CTokenQueue@@SAJPEBUCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1C007BB00 (-Create@CTokenQueue@@SAJPEBUCompositionSurfaceObject@@PEAPEAV1@@Z.c)
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

  v3 = (struct _RTL_GENERIC_TABLE *)((char *)this + 128);
  v9[0] = a2;
  v5 = 0;
  v9[1] = 0LL;
  inserted = (CompositionObject **)RtlInsertElementGenericTable(
                                     (PRTL_GENERIC_TABLE)((char *)this + 128),
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
