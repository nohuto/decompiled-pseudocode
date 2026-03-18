/*
 * XREFs of ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z @ 0x180080F10
 * Callers:
 *     ?AdvanceFrame@CHwndRenderTarget@@UEAAX_K_N@Z @ 0x18007CBD0 (-AdvanceFrame@CHwndRenderTarget@@UEAAX_K_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ReleaseCachedScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXXZ @ 0x1800227F4 (-ReleaseCachedScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x180027F80 (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180074880 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x180081820 (-ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_GCD3DResourceSourceReference@@QEAAPEAXI@Z @ 0x1800B4EA0 (--_GCD3DResourceSourceReference@@QEAAPEAXI@Z.c)
 *     ?HandleAdapterUnexpectedError@CD3DRegistryDatabase@@SAJU_LUID@@@Z @ 0x18014AF0C (-HandleAdapterUnexpectedError@CD3DRegistryDatabase@@SAJU_LUID@@@Z.c)
 */

void __fastcall CHwDisplayRenderTarget::AdvanceFrame(CHwDisplayRenderTarget *this, __int64 a2, char a3)
{
  CHwDisplayRenderTarget *v3; // r13
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // r14
  int v11; // esi
  int v12; // eax
  __int64 v13; // r13
  __int64 *v14; // rcx
  __int64 *v15; // rdx
  __int64 **v16; // r8
  __int64 *v17; // rdx
  _QWORD *v18; // rbx
  CD3DResourceSourceReference *v19; // rcx
  CD3DResourceSourceReference **v20; // r8
  CD3DResourceSourceReference **v21; // rdx
  PSLIST_ENTRY v22; // rdi
  struct CD3DResource ***v23; // rsi
  __int64 v24; // rax
  _QWORD v26[11]; // [rsp+30h] [rbp-58h] BYREF
  CHwDisplayRenderTarget *v27; // [rsp+90h] [rbp+8h] BYREF
  __int64 v28; // [rsp+98h] [rbp+10h]

  v28 = a2;
  v27 = this;
  v3 = this;
  v5 = a2;
  if ( (int)CHwDisplayRenderTarget::ValidateDeviceAndSwapChain((CHwDisplayRenderTarget *)((char *)this - 176)) >= 0 )
  {
    v6 = *((_QWORD *)v3 - 2);
    ++*(_DWORD *)(v6 + 504);
    *(_DWORD *)(v6 + 508) = GetCurrentThreadId();
    v7 = *((_QWORD *)v3 - 2);
    if ( *(_QWORD *)(v7 + 1016) != v5 )
    {
      *(_QWORD *)(v7 + 1016) = v5;
      *(_BYTE *)(v7 + 1036) = 0;
      if ( *(_QWORD *)(v7 + 768) && (unsigned __int64)(v5 - *(_QWORD *)(v7 + 1024)) > 0x20 )
      {
        CD3DDeviceLevel1::ReleaseCachedScratchRenderTargetBitmap((CD3DDeviceLevel1 *)v7);
        *(_QWORD *)(v7 + 776) = 0LL;
        *(_BYTE *)(v7 + 1032) = 0;
      }
      v8 = *(_QWORD *)(v7 + 512);
      v26[1] = *(_QWORD *)(v7 + 528);
      v26[0] = 0LL;
      v26[2] = v5;
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v8 + 32LL))(v8, v26, 1LL);
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xFB9u);
      if ( a3 )
      {
        v10 = *(unsigned int *)(v7 + 1000);
        v11 = 0;
        if ( (_DWORD)v10 )
        {
          v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v7 + 512) + 56LL))(
                  *(_QWORD *)(v7 + 512),
                  *(_QWORD *)(v7 + 976),
                  (unsigned int)v10);
          v11 = v12;
          if ( v12 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x113Bu);
          v13 = 0LL;
          do
          {
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v13 + *(_QWORD *)(v7 + 976)) + 16LL))(*(_QWORD *)(v13 + *(_QWORD *)(v7 + 976)));
            v13 += 8LL;
            --v10;
          }
          while ( v10 );
          v3 = v27;
          *(_DWORD *)(v7 + 1000) = 0;
          DynArrayImpl<0>::ShrinkToSize((_QWORD *)(v7 + 976), 8u);
        }
        if ( v11 == -2005270496 && !*(_BYTE *)(v7 + 1035) )
        {
          CD3DRegistryDatabase::HandleAdapterUnexpectedError(*(struct _LUID *)(v7 + 592));
          *(_BYTE *)(v7 + 1035) = 1;
        }
        if ( (unsigned int)TranslateDXGIorD3DErrorInContext(v11, 0, &v27) )
          v11 = (int)v27;
        if ( v11 == -2003304307 )
          *(_DWORD *)(v7 + 800) = -2003304307;
      }
      v14 = (__int64 *)(v7 + 912);
      if ( (__int64 *)*v14 != v14 )
      {
        v15 = (__int64 *)(v7 + 896);
        v16 = *(__int64 ***)(v7 + 904);
        if ( *(_QWORD *)(*(_QWORD *)(v7 + 896) + 8LL) != v7 + 896 || *v16 != v15 )
          __fastfail(3u);
        if ( *(__int64 **)(*v14 + 8) != v14 || **(__int64 ***)(v7 + 920) != v14 )
          __fastfail(3u);
        *v16 = v14;
        *(_QWORD *)(v7 + 904) = *(_QWORD *)(v7 + 920);
        **(_QWORD **)(v7 + 920) = v15;
        *(_QWORD *)(v7 + 920) = v16;
        v17 = (__int64 *)*v14;
        if ( *(__int64 **)(*v14 + 8) != v14 || *v16 != v14 )
          __fastfail(3u);
        *v16 = v17;
        v17[1] = (__int64)v16;
        *(_QWORD *)(v7 + 920) = v7 + 912;
        *v14 = (__int64)v14;
      }
      v18 = *(_QWORD **)(v7 + 952);
      while ( v18 != (_QWORD *)(v7 + 952) )
      {
        v19 = (CD3DResourceSourceReference *)(v18 - 2);
        v18 = (_QWORD *)*v18;
        if ( (int)--*((_DWORD *)v19 + 2) <= 0 )
        {
          v20 = (CD3DResourceSourceReference **)*((_QWORD *)v19 + 2);
          v21 = (CD3DResourceSourceReference **)*((_QWORD *)v19 + 3);
          if ( v20[1] != (CD3DResourceSourceReference *)((char *)v19 + 16)
            || *v21 != (CD3DResourceSourceReference *)((char *)v19 + 16) )
          {
            __fastfail(3u);
          }
          *v21 = (CD3DResourceSourceReference *)v20;
          v20[1] = (CD3DResourceSourceReference *)v21;
          CD3DResourceSourceReference::`scalar deleting destructor'(v19, (unsigned int)v21);
        }
      }
      if ( *(_QWORD *)(v7 + 552) )
      {
        while ( 1 )
        {
          v22 = InterlockedFlushSList((PSLIST_HEADER)(v7 + 864));
          if ( !v22 )
            break;
          do
          {
            v23 = (struct CD3DResource ***)&v22[-3];
            v22 = v22->Next;
            CD3DResourceManager::DestroyResource((CD3DResourceManager *)(v7 + 848), v23);
            if ( v23 )
              ((void (__fastcall *)(struct CD3DResource ***, __int64))(*v23)[2])(v23, 1LL);
          }
          while ( v22 );
        }
      }
      v5 = v28;
    }
    v24 = *((_QWORD *)v3 + 2);
    if ( *(_BYTE *)(v24 + 299) && *(_BYTE *)(v24 + 300) )
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v3 + 4) + 240LL))(*((_QWORD *)v3 + 4), v5);
    if ( (*(_DWORD *)(v6 + 504))-- == 1 )
      *(_DWORD *)(v6 + 508) = 0;
  }
}
