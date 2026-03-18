/*
 * XREFs of DxgkSqmAddToStream @ 0x1C00E7550
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C00256C4 (DpiMiracastTearDownAssociation.c)
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@1PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C007DB48 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@1PEAU_DXGKA.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C007E190 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0086EC0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION.c)
 *     ?SqmDpiInfoStream@@YAXPEBU_DPI_INFORMATION@@QEAXIPEBX@Z @ 0x1C00ACB04 (-SqmDpiInfoStream@@YAXPEBU_DPI_INFORMATION@@QEAXIPEBX@Z.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C014C6BC (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C014EBF4 (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 *     ?Sqm@DXGKSQM_ADAPTER@@QEAAXXZ @ 0x1C01500CC (-Sqm@DXGKSQM_ADAPTER@@QEAAXXZ.c)
 *     ?Sqm@DXGKSQM_GLOBAL@@QEAAXXZ @ 0x1C01503BC (-Sqm@DXGKSQM_GLOBAL@@QEAAXXZ.c)
 *     ?UpdateIndependentFlipSqmPaged@DXGPROCESS@@QEAAXPEAUINDEPENDENT_FLIP_SQM_INFO@@@Z @ 0x1C015061C (-UpdateIndependentFlipSqmPaged@DXGPROCESS@@QEAAXPEAUINDEPENDENT_FLIP_SQM_INFO@@@Z.c)
 *     ?Sqm@OUTPUTDUPL_SESSION_MGR@@AEAAXI@Z @ 0x1C01596C4 (-Sqm@OUTPUTDUPL_SESSION_MGR@@AEAAXI@Z.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C016DE70 (DpiMiracastHandleStartSessionDone.c)
 *     DpiPdoSqmProtectedSession @ 0x1C0175370 (DpiPdoSqmProtectedSession.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

void __fastcall DxgkSqmAddToStream(__int64 a1, unsigned int a2, __int64 a3)
{
  SIZE_T v4; // rcx
  unsigned int v5; // r10d
  __int64 v6; // r11
  PVOID v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  void *v12; // rbx
  _DWORD *v13; // rsi
  unsigned int j; // r14d
  size_t v15; // r8
  __int64 v16; // rcx
  const void *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int i; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v24[12]; // [rsp+34h] [rbp-CCh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  int *v26; // [rsp+50h] [rbp-B0h]
  __int64 v27; // [rsp+58h] [rbp-A8h]
  _BYTE *v28; // [rsp+60h] [rbp-A0h]
  __int64 v29; // [rsp+68h] [rbp-98h]
  unsigned int *v30; // [rsp+70h] [rbp-90h]
  __int64 v31; // [rsp+78h] [rbp-88h]
  unsigned int *p_i; // [rsp+80h] [rbp-80h]
  __int64 v33; // [rsp+88h] [rbp-78h]
  void *v34; // [rsp+90h] [rbp-70h]
  unsigned int v35; // [rsp+98h] [rbp-68h]
  int v36; // [rsp+9Ch] [rbp-64h]
  _BYTE *v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  size_t Size[64]; // [rsp+B0h] [rbp-50h]
  int v40; // [rsp+300h] [rbp+200h] BYREF
  unsigned int v41; // [rsp+308h] [rbp+208h] BYREF

  v41 = a2;
  v40 = a1;
  if ( `anonymous namespace'::Microsoft_Windows_DxgKrnlSqm )
  {
    if ( !a3 )
    {
      v18 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v18 + 24) = 611LL;
      WdLogEvent5_WdAssertion(v18);
      a2 = v41;
    }
    if ( a2 > 0x40 )
    {
      v19 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v19 + 24) = 612LL;
      WdLogEvent5_WdAssertion(v19);
      a2 = v41;
    }
    v4 = 0LL;
    v5 = 0;
    for ( i = 0; v5 < a2; i = v4 )
    {
      v6 = v5;
      if ( *(_DWORD *)(a3 + 16LL * v5) == 1 )
      {
        Size[v5] = 4LL;
      }
      else
      {
        if ( *(_DWORD *)(a3 + 16LL * v5) != 2 )
        {
          v21 = WdLogNewEntry5_WdAssertion(v4);
          *(_QWORD *)(v21 + 24) = 634LL;
          WdLogEvent5_WdAssertion(v21);
          return;
        }
        v20 = -1LL;
        do
          ++v20;
        while ( *(_WORD *)(*(_QWORD *)(a3 + 16LL * v5 + 8) + 2 * v20) );
        if ( v20 > 0x80 )
          v20 = 128LL;
        Size[v5] = 2 * v20 + 2;
      }
      ++v5;
      v4 = ((LODWORD(Size[v6]) + 15) & 0xFFFFFFF8) + (unsigned int)v4;
    }
    v7 = operator new[](v4, 0x4B677844u, PagedPool);
    v12 = v7;
    if ( v7 )
    {
      v13 = v7;
      for ( j = 0; j < v41; v13 = (_DWORD *)((char *)v13 + (unsigned int)v13[1]) )
      {
        v15 = Size[j];
        v16 = 16LL * j;
        *v13 = *(_DWORD *)(v16 + a3);
        v13[1] = (v15 + 15) & 0xFFFFFFF8;
        if ( *(_DWORD *)(v16 + a3) == 2 )
          v17 = *(const void **)(v16 + a3 + 8);
        else
          v17 = (const void *)(v16 + a3 + 8);
        memmove(v13 + 2, v17, v15);
        ++j;
      }
      UserData.Ptr = (ULONGLONG)&unk_1C002E680;
      *(_QWORD *)&UserData.Size = 16LL;
      v26 = &v40;
      v27 = 4LL;
      v28 = v24;
      v29 = 4LL;
      v30 = &v41;
      p_i = &i;
      v35 = i;
      v37 = v24;
      v31 = 4LL;
      v33 = 4LL;
      v34 = v12;
      v36 = 0;
      v38 = 4LL;
      EtwWrite(`anonymous namespace'::Microsoft_Windows_DxgKrnlSqm, &SQM_ADD_STREAMROW, 0LL, 7u, &UserData);
    }
    else
    {
      v22 = WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
      *(_QWORD *)(v22 + 24) = i;
      WdLogEvent5_WdLowResource(v22);
    }
    operator delete(v12);
  }
}
