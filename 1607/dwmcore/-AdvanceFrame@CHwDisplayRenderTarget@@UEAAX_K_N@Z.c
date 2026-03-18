/*
 * XREFs of ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z @ 0x18008F2C0
 * Callers:
 *     ?AdvanceFrame@CHwndRenderTarget@@UEAAX_K_N@Z @ 0x180074990 (-AdvanceFrame@CHwndRenderTarget@@UEAAX_K_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18007BBC0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x18008F84C (-ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x18009F204 (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     ??_ECD3DVidMemOnlyTexture@@MEAAPEAXI@Z @ 0x1800A67D0 (--_ECD3DVidMemOnlyTexture@@MEAAPEAXI@Z.c)
 *     ??_GCD3DResourceSourceReference@@QEAAPEAXI@Z @ 0x1800AD608 (--_GCD3DResourceSourceReference@@QEAAPEAXI@Z.c)
 *     ?AgeRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x1800AEFEC (-AgeRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?HandleAdapterUnexpectedError@CD3DRegistryDatabase@@SAJU_LUID@@@Z @ 0x18017B4F8 (-HandleAdapterUnexpectedError@CD3DRegistryDatabase@@SAJU_LUID@@@Z.c)
 */

void __fastcall CHwDisplayRenderTarget::AdvanceFrame(CHwDisplayRenderTarget *this, __int64 a2, char a3)
{
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rsi
  int v11; // edi
  union _SLIST_HEADER *v12; // rsi
  __int64 *v13; // rcx
  _QWORD *v14; // rdi
  PSLIST_ENTRY v15; // rbx
  __int64 v16; // rax
  struct CD3DResource *v17; // rdi
  void *(__fastcall *v18)(CD3DVidMemOnlyTexture *__hidden, unsigned int); // rax
  __int64 *v19; // rdx
  __int64 **v20; // r8
  __int64 *v21; // rdx
  int v22; // eax
  CD3DResourceSourceReference *v23; // rcx
  CD3DResourceSourceReference **v24; // r8
  CD3DResourceSourceReference **v25; // rdx
  _QWORD v26[4]; // [rsp+30h] [rbp-48h] BYREF
  int v27; // [rsp+80h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( (int)CHwDisplayRenderTarget::ValidateDeviceAndSwapChain((CHwDisplayRenderTarget *)((char *)this - 176)) >= 0 )
  {
    v7 = *((_QWORD *)this + 1);
    if ( *(_QWORD *)(v7 + 1056) != a2 )
    {
      *(_QWORD *)(v7 + 1056) = a2;
      *(_BYTE *)(v7 + 1075) = 0;
      CRenderTargetBitmapCache::AgeRenderTargetBitmaps((CRenderTargetBitmapCache *)(v7 + 472));
      v8 = *(_QWORD *)(v7 + 528);
      v26[1] = *(_QWORD *)(v7 + 544);
      v26[0] = 0LL;
      v26[2] = a2;
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v8 + 32LL))(v8, v26, 1LL);
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xFAFu);
      if ( a3 )
      {
        v10 = *(unsigned int *)(v7 + 1048);
        v11 = 0;
        if ( (_DWORD)v10 )
        {
          v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v7 + 528) + 56LL))(
                  *(_QWORD *)(v7 + 528),
                  *(_QWORD *)(v7 + 1024),
                  (unsigned int)v10);
          v11 = v22;
          if ( v22 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x1133u);
          do
          {
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + *(_QWORD *)(v7 + 1024)) + 16LL))(*(_QWORD *)(v6 + *(_QWORD *)(v7 + 1024)));
            v6 += 8LL;
            --v10;
          }
          while ( v10 );
          *(_DWORD *)(v7 + 1048) = 0;
          DynArrayImpl<0>::ShrinkToSize(v7 + 1024, 8LL);
        }
        if ( v11 == -2005270496 && !*(_BYTE *)(v7 + 1074) )
        {
          CD3DRegistryDatabase::HandleAdapterUnexpectedError(*(struct _LUID *)(v7 + 656));
          *(_BYTE *)(v7 + 1074) = 1;
        }
        if ( (unsigned int)TranslateDXGIorD3DErrorInContext(v11, 0, &v27) )
          v11 = v27;
        if ( v11 == -2003304307 )
          *(_DWORD *)(v7 + 824) = -2003304307;
      }
      v12 = (union _SLIST_HEADER *)(v7 + 880);
      v13 = (__int64 *)(v7 + 944);
      if ( (__int64 *)*v13 != v13 )
      {
        v19 = (__int64 *)(v7 + 928);
        v20 = *(__int64 ***)(v7 + 936);
        if ( *(_QWORD *)(*(_QWORD *)(v7 + 928) + 8LL) != v7 + 928 || *v20 != v19 )
          __fastfail(3u);
        if ( *(__int64 **)(*v13 + 8) != v13 || **(__int64 ***)(v7 + 952) != v13 )
          __fastfail(3u);
        *v20 = v13;
        *(_QWORD *)(v7 + 936) = *(_QWORD *)(v7 + 952);
        **(_QWORD **)(v7 + 952) = v19;
        *(_QWORD *)(v7 + 952) = v20;
        v21 = (__int64 *)*v13;
        if ( *(__int64 **)(*v13 + 8) != v13 || *v20 != v13 )
          __fastfail(3u);
        *v20 = v21;
        v21[1] = (__int64)v20;
        *(_QWORD *)(v7 + 952) = v7 + 944;
        *v13 = (__int64)v13;
      }
      v14 = *(_QWORD **)(v7 + 984);
      while ( v14 != (_QWORD *)(v7 + 984) )
      {
        v23 = (CD3DResourceSourceReference *)(v14 - 2);
        v14 = (_QWORD *)*v14;
        if ( (int)--*((_DWORD *)v23 + 2) <= 0 )
        {
          v24 = (CD3DResourceSourceReference **)*((_QWORD *)v23 + 2);
          v25 = (CD3DResourceSourceReference **)*((_QWORD *)v23 + 3);
          if ( v24[1] != (CD3DResourceSourceReference *)((char *)v23 + 16)
            || *v25 != (CD3DResourceSourceReference *)((char *)v23 + 16) )
          {
            __fastfail(3u);
          }
          *v25 = (CD3DResourceSourceReference *)v24;
          v24[1] = (CD3DResourceSourceReference *)v25;
          CD3DResourceSourceReference::`scalar deleting destructor'(v23, (unsigned int)v25);
        }
      }
      if ( *(_QWORD *)(v7 + 568) )
      {
        while ( 1 )
        {
          v15 = InterlockedFlushSList(v12 + 1);
          if ( !v15 )
            break;
          do
          {
            v17 = (struct CD3DResource *)&v15[-3];
            v15 = v15->Next;
            CD3DResourceManager::DestroyResource((CD3DResourceManager *)v12, v17);
            if ( v17 )
            {
              v18 = *(void *(__fastcall **)(CD3DVidMemOnlyTexture *__hidden, unsigned int))(*(_QWORD *)v17 + 16LL);
              if ( v18 == CD3DVidMemOnlyTexture::`vector deleting destructor' )
                CD3DVidMemOnlyTexture::`vector deleting destructor'(v17, 1u);
              else
                v18(v17, 1u);
            }
          }
          while ( v15 );
        }
      }
    }
    v16 = *((_QWORD *)this + 3);
    if ( *(_BYTE *)(v16 + 299) )
    {
      if ( *(_BYTE *)(v16 + 300) )
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 5) + 240LL))(*((_QWORD *)this + 5), a2);
    }
  }
}
