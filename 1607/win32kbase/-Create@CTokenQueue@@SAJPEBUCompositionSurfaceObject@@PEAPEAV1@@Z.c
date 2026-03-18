/*
 * XREFs of ?Create@CTokenQueue@@SAJPEBUCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1C007F844
 * Callers:
 *     ?EnsureTokenQueue@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@1@@Z @ 0x1C0019BB4 (-EnsureTokenQueue@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 */

__int64 __fastcall CTokenQueue::Create(const struct CompositionSurfaceObject *a1, struct CTokenQueue **a2)
{
  unsigned int v3; // ebx
  struct CTokenQueue *v4; // rax

  v3 = -1073741801;
  v4 = (struct CTokenQueue *)Win32AllocPool();
  if ( v4 )
  {
    *((_QWORD *)v4 + 1) = v4;
    *(_QWORD *)v4 = v4;
  }
  else
  {
    v4 = 0LL;
  }
  *a2 = v4;
  if ( v4 )
    return 0;
  return v3;
}
