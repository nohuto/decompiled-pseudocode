/*
 * XREFs of ?DuplicateSurfacesForCreate@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C0165F60
 * Callers:
 *     DxgkCreateSwapChain @ 0x1C01679D0 (DxgkCreateSwapChain.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     Template_pqp @ 0x1C00229B0 (Template_pqp.c)
 *     ?DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C0165DDC (-DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::DuplicateSurfacesForCreate(DXGSWAPCHAIN *this, struct _D3DKMT_CREATESWAPCHAIN *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // r15
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  PVOID v11; // rbx
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 CurrentProcess; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // rax
  struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *v22; // rdx
  PVOID *Object; // [rsp+20h] [rbp-30h]
  int v25; // [rsp+38h] [rbp-18h]
  _BYTE v26[16]; // [rsp+40h] [rbp-10h] BYREF
  HANDLE v27; // [rsp+80h] [rbp+30h] BYREF
  PVOID v28; // [rsp+90h] [rbp+40h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
  LODWORD(v4) = 0;
  v5 = 0LL;
  if ( *((_DWORD *)this + 16) )
  {
    while ( 1 )
    {
      v6 = (unsigned int)v5;
      v27 = a2->pNtSurfaceHandles[v5];
      v7 = ObReferenceObjectByHandle(v27, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &v28, 0LL);
      v4 = v7;
      if ( v7 < 0 )
        break;
      v11 = v28;
      if ( v28 )
      {
        v12 = *((_QWORD *)v28 + 2);
        if ( v12 )
        {
          v13 = (_QWORD *)(v12 + 120);
          v14 = 0LL;
          if ( (_QWORD *)*v13 != v13 )
            v14 = *(_QWORD *)(*v13 - 40LL);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
          {
            LODWORD(Object) = v5;
            Template_pqp(v14, v8, v10, this, Object, v14);
          }
        }
      }
      ObfDereferenceObject(v11);
      CurrentProcess = PsGetCurrentProcess(v15);
      v18 = PsGetCurrentProcess(v17);
      LOBYTE(v25) = 1;
      v19 = ObDuplicateObject(v18, v27, CurrentProcess, &v27, 0, 0, 6, v25);
      v4 = v19;
      if ( v19 < 0 )
        break;
      v5 = (unsigned int)(v5 + 1);
      v20 = 56 * v6;
      *(_QWORD *)(56 * v6 + 16 * (!a2->bProducer + 2LL) + *((_QWORD *)this + 9)) = v27;
      *(_DWORD *)(v20 + *((_QWORD *)this + 9) + 4) = 0;
      *(_DWORD *)(v20 + *((_QWORD *)this + 9)) = 0;
      if ( (unsigned int)v5 >= *((_DWORD *)this + 16) )
        goto LABEL_13;
    }
    v21 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v21 + 24) = v27;
    *(_QWORD *)(v21 + 32) = v4;
    WdLogEvent5_WdError(v21);
LABEL_13:
    if ( (int)v4 < 0 )
    {
      v22 = (DXGSWAPCHAIN *)((char *)this + 152);
      if ( !a2->bProducer )
        v22 = (DXGSWAPCHAIN *)((char *)this + 96);
      DXGSWAPCHAIN::DestroyLocalClient(this, v22);
    }
  }
  if ( v26[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26);
  return (unsigned int)v4;
}
