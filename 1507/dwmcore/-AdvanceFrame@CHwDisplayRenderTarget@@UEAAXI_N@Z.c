/*
 * XREFs of ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAXI_N@Z @ 0x180044DD0
 * Callers:
 *     ?AdvanceFrame@CHwndRenderTarget@@UEAAXI_N@Z @ 0x18004B510 (-AdvanceFrame@CHwndRenderTarget@@UEAAXI_N@Z.c)
 * Callees:
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x180015B8C (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     ?ReleaseCachedScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXXZ @ 0x180018E98 (-ReleaseCachedScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180042CF0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x180044168 (-ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?HandleAdapterUnexpectedError@CD3DRegistryDatabase@@SAJU_LUID@@@Z @ 0x18013AD0C (-HandleAdapterUnexpectedError@CD3DRegistryDatabase@@SAJU_LUID@@@Z.c)
 *     ??_GCD3DResourceSourceReference@@QEAAPEAXI@Z @ 0x18013AD74 (--_GCD3DResourceSourceReference@@QEAAPEAXI@Z.c)
 */

void __fastcall CHwDisplayRenderTarget::AdvanceFrame(CHwDisplayRenderTarget *this, int a2, char a3)
{
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 v8; // rbp
  __int64 v9; // r14
  int v10; // esi
  __int64 *v11; // rcx
  _QWORD *v12; // rbx
  PSLIST_ENTRY v13; // rdi
  struct CD3DResource ***v15; // rsi
  __int64 *v16; // rdx
  __int64 **v17; // r8
  __int64 *v18; // rdx
  int v19; // eax
  CD3DResourceSourceReference *v20; // rcx
  CD3DResourceSourceReference **v21; // r8
  CD3DResourceSourceReference **v22; // rdx
  int v23; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( (int)CHwDisplayRenderTarget::ValidateDeviceAndSwapChain((CHwDisplayRenderTarget *)((char *)this - 176)) >= 0 )
  {
    v7 = *((_QWORD *)this - 2);
    ++*(_DWORD *)(v7 + 512);
    *(_DWORD *)(v7 + 516) = GetCurrentThreadId();
    v8 = *((_QWORD *)this - 2);
    if ( *(_DWORD *)(v8 + 1064) != a2 )
    {
      *(_DWORD *)(v8 + 1064) = a2;
      *(_BYTE *)(v8 + 1068) = 0;
      if ( *(_QWORD *)(v8 + 792) && (unsigned int)(a2 - *(_DWORD *)(v8 + 812)) > 0x20 )
      {
        CD3DDeviceLevel1::ReleaseCachedScratchRenderTargetBitmap((CD3DDeviceLevel1 *)v8);
        *(_QWORD *)(v8 + 800) = 0LL;
        *(_BYTE *)(v8 + 808) = 0;
      }
      if ( a3 )
      {
        v9 = *(unsigned int *)(v8 + 1048);
        v10 = 0;
        if ( (_DWORD)v9 )
        {
          v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v8 + 520) + 56LL))(
                  *(_QWORD *)(v8 + 520),
                  *(_QWORD *)(v8 + 1024),
                  (unsigned int)v9);
          v10 = v19;
          if ( v19 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x10DAu);
          do
          {
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + *(_QWORD *)(v8 + 1024)) + 16LL))(*(_QWORD *)(v6 + *(_QWORD *)(v8 + 1024)));
            v6 += 8LL;
            --v9;
          }
          while ( v9 );
          *(_DWORD *)(v8 + 1048) = 0;
          DynArrayImpl<0>::ShrinkToSize((_QWORD *)(v8 + 1024), 8u);
        }
        if ( v10 == -2005270496 && !*(_BYTE *)(v8 + 834) )
        {
          CD3DRegistryDatabase::HandleAdapterUnexpectedError(*(struct _LUID *)(v8 + 584));
          *(_BYTE *)(v8 + 834) = 1;
        }
        if ( (unsigned int)TranslateDXGIorD3DErrorInContext(v10, 0, &v23) )
          v10 = v23;
        if ( v10 == -2003304307 )
          *(_DWORD *)(v8 + 836) = -2003304307;
      }
      v11 = (__int64 *)(v8 + 960);
      if ( (__int64 *)*v11 != v11 )
      {
        v16 = (__int64 *)(v8 + 944);
        v17 = *(__int64 ***)(v8 + 952);
        if ( *(_QWORD *)(*(_QWORD *)(v8 + 944) + 8LL) != v8 + 944 || *v17 != v16 )
          __fastfail(3u);
        if ( *(__int64 **)(*v11 + 8) != v11 || **(__int64 ***)(v8 + 968) != v11 )
          __fastfail(3u);
        *v17 = v11;
        *(_QWORD *)(v8 + 952) = *(_QWORD *)(v8 + 968);
        **(_QWORD **)(v8 + 968) = v16;
        *(_QWORD *)(v8 + 968) = v17;
        v18 = (__int64 *)*v11;
        if ( *(__int64 **)(*v11 + 8) != v11 || *v17 != v11 )
          __fastfail(3u);
        *v17 = v18;
        v18[1] = (__int64)v17;
        *(_QWORD *)(v8 + 968) = v8 + 960;
        *v11 = (__int64)v11;
      }
      v12 = *(_QWORD **)(v8 + 1000);
      while ( v12 != (_QWORD *)(v8 + 1000) )
      {
        v20 = (CD3DResourceSourceReference *)(v12 - 2);
        v12 = (_QWORD *)*v12;
        if ( (int)--*((_DWORD *)v20 + 2) <= 0 )
        {
          v21 = (CD3DResourceSourceReference **)*((_QWORD *)v20 + 2);
          v22 = (CD3DResourceSourceReference **)*((_QWORD *)v20 + 3);
          if ( v21[1] != (CD3DResourceSourceReference *)((char *)v20 + 16)
            || *v22 != (CD3DResourceSourceReference *)((char *)v20 + 16) )
          {
            __fastfail(3u);
          }
          *v22 = (CD3DResourceSourceReference *)v21;
          v21[1] = (CD3DResourceSourceReference *)v22;
          CD3DResourceSourceReference::`scalar deleting destructor'(v20, (unsigned int)v22);
        }
      }
      if ( *(_QWORD *)(v8 + 544) )
      {
        while ( 1 )
        {
          v13 = InterlockedFlushSList((PSLIST_HEADER)(v8 + 912));
          if ( !v13 )
            break;
          do
          {
            v15 = (struct CD3DResource ***)&v13[-3];
            v13 = v13->Next;
            CD3DResourceManager::DestroyResource((CD3DResourceManager *)(v8 + 896), v15);
            if ( v15 )
              ((void (__fastcall *)(struct CD3DResource ***, __int64))(*v15)[2])(v15, 1LL);
          }
          while ( v13 );
        }
      }
    }
    if ( (*(_DWORD *)(v7 + 512))-- == 1 )
      *(_DWORD *)(v7 + 516) = 0;
  }
}
