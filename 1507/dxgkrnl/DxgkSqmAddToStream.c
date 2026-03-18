/*
 * XREFs of DxgkSqmAddToStream @ 0x1C00DA220
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C0025B74 (DpiMiracastTearDownAssociation.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C006B8B0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0074DF0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION.c)
 *     ?SqmDpiInfoStream@@YAXPEBU_DPI_INFORMATION@@QEAXIPEBX@Z @ 0x1C00ABE40 (-SqmDpiInfoStream@@YAXPEBU_DPI_INFORMATION@@QEAXIPEBX@Z.c)
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@1PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B7E90 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@1PEAU_DXGKA.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01489E4 (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C014A904 (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 *     ?Sqm@DXGKSQM_ADAPTER@@QEAAXXZ @ 0x1C014B37C (-Sqm@DXGKSQM_ADAPTER@@QEAAXXZ.c)
 *     ?Sqm@DXGKSQM_GLOBAL@@QEAAXXZ @ 0x1C014B66C (-Sqm@DXGKSQM_GLOBAL@@QEAAXXZ.c)
 *     ?UpdateIndependentFlipSqmPaged@DXGPROCESS@@QEAAXPEAUINDEPENDENT_FLIP_SQM_INFO@@@Z @ 0x1C014B8CC (-UpdateIndependentFlipSqmPaged@DXGPROCESS@@QEAAXPEAUINDEPENDENT_FLIP_SQM_INFO@@@Z.c)
 *     ?Sqm@OUTPUTDUPL_SESSION_MGR@@AEAAXI@Z @ 0x1C01553E0 (-Sqm@OUTPUTDUPL_SESSION_MGR@@AEAAXI@Z.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C01696F0 (DpiMiracastHandleStartSessionDone.c)
 *     DpiPdoSqmProtectedSession @ 0x1C0170AF0 (DpiPdoSqmProtectedSession.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

void __fastcall DxgkSqmAddToStream(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  SIZE_T v5; // rcx
  unsigned int v6; // r10d
  __int64 v7; // r11
  PVOID v8; // rax
  __int64 v9; // rcx
  void *v10; // rbx
  _DWORD *v11; // rsi
  unsigned int j; // r14d
  size_t v13; // r8
  __int64 v14; // rcx
  const void *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int i; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v22[12]; // [rsp+34h] [rbp-CCh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  int *v24; // [rsp+50h] [rbp-B0h]
  __int64 v25; // [rsp+58h] [rbp-A8h]
  _BYTE *v26; // [rsp+60h] [rbp-A0h]
  __int64 v27; // [rsp+68h] [rbp-98h]
  unsigned int *v28; // [rsp+70h] [rbp-90h]
  __int64 v29; // [rsp+78h] [rbp-88h]
  unsigned int *p_i; // [rsp+80h] [rbp-80h]
  __int64 v31; // [rsp+88h] [rbp-78h]
  void *v32; // [rsp+90h] [rbp-70h]
  unsigned int v33; // [rsp+98h] [rbp-68h]
  int v34; // [rsp+9Ch] [rbp-64h]
  _BYTE *v35; // [rsp+A0h] [rbp-60h]
  __int64 v36; // [rsp+A8h] [rbp-58h]
  size_t Size[64]; // [rsp+B0h] [rbp-50h]
  int v38; // [rsp+300h] [rbp+200h] BYREF
  unsigned int v39; // [rsp+308h] [rbp+208h] BYREF

  v39 = a2;
  v38 = a1;
  if ( `anonymous namespace'::Microsoft_Windows_DxgKrnlSqm )
  {
    if ( !a3 )
    {
      v16 = WdLogNewEntry5_WdAssertion(a1, a2, 0LL, a4);
      *(_QWORD *)(v16 + 24) = 611LL;
      WdLogEvent5_WdAssertion(v16);
      a2 = v39;
    }
    if ( (unsigned int)a2 > 0x40 )
    {
      v17 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      *(_QWORD *)(v17 + 24) = 612LL;
      WdLogEvent5_WdAssertion(v17);
      a2 = v39;
    }
    v5 = 0LL;
    v6 = 0;
    for ( i = 0; v6 < (unsigned int)a2; i = v5 )
    {
      v7 = v6;
      if ( *(_DWORD *)(a3 + 16LL * v6) == 1 )
      {
        Size[v6] = 4LL;
      }
      else
      {
        if ( *(_DWORD *)(a3 + 16LL * v6) != 2 )
        {
          v19 = WdLogNewEntry5_WdAssertion(v5, a2, 2LL * v6, (unsigned int)(*(_DWORD *)(a3 + 16LL * v6) - 1));
          *(_QWORD *)(v19 + 24) = 634LL;
          WdLogEvent5_WdAssertion(v19);
          return;
        }
        v18 = -1LL;
        do
          ++v18;
        while ( *(_WORD *)(*(_QWORD *)(a3 + 16LL * v6 + 8) + 2 * v18) );
        if ( v18 > 0x80 )
          v18 = 128LL;
        Size[v6] = 2 * v18 + 2;
      }
      ++v6;
      v5 = ((LODWORD(Size[v7]) + 15) & 0xFFFFFFF8) + (unsigned int)v5;
    }
    v8 = operator new[](v5, 0x4B677844u, PagedPool);
    v10 = v8;
    if ( v8 )
    {
      v11 = v8;
      for ( j = 0; j < v39; v11 = (_DWORD *)((char *)v11 + (unsigned int)v11[1]) )
      {
        v13 = Size[j];
        v14 = 16LL * j;
        *v11 = *(_DWORD *)(v14 + a3);
        v11[1] = (v13 + 15) & 0xFFFFFFF8;
        if ( *(_DWORD *)(v14 + a3) == 2 )
          v15 = *(const void **)(v14 + a3 + 8);
        else
          v15 = (const void *)(v14 + a3 + 8);
        memmove(v11 + 2, v15, v13);
        ++j;
      }
      UserData.Ptr = (ULONGLONG)&unk_1C002E7F0;
      *(_QWORD *)&UserData.Size = 16LL;
      v24 = &v38;
      v25 = 4LL;
      v26 = v22;
      v27 = 4LL;
      v28 = &v39;
      p_i = &i;
      v33 = i;
      v35 = v22;
      v29 = 4LL;
      v31 = 4LL;
      v32 = v10;
      v34 = 0;
      v36 = 4LL;
      EtwWrite(`anonymous namespace'::Microsoft_Windows_DxgKrnlSqm, &SQM_ADD_STREAMROW, 0LL, 7u, &UserData);
    }
    else
    {
      v20 = WdLogNewEntry5_WdLowResource(v9);
      *(_QWORD *)(v20 + 24) = i;
      WdLogEvent5_WdLowResource(v20);
    }
    operator delete(v10);
  }
}
