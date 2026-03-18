/*
 * XREFs of ?s_RenderThreadEndpointProc@CManipulationManager@@CAJPEAXPEBXH@Z @ 0x18016B6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?s_EndpointProc@CManipulationManager@@CAJAEBUMessageCallThreadInfo@1@PEAXPEBXH@Z @ 0x18016B5C4 (-s_EndpointProc@CManipulationManager@@CAJAEBUMessageCallThreadInfo@1@PEAXPEBXH@Z.c)
 */

__int64 __fastcall CManipulationManager::s_RenderThreadEndpointProc(char *a1, const void *a2, int a3)
{
  unsigned int v6; // ebx
  char *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  if ( a1 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 8LL))(a1);
  v6 = CManipulationManager::s_EndpointProc(
         (const struct CManipulationManager::MessageCallThreadInfo *)(a1 + 352),
         a1,
         a2,
         a3);
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v8);
  return v6;
}
