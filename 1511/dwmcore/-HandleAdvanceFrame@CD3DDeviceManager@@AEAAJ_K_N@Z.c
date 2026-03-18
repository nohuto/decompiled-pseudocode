/*
 * XREFs of ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180071ED0
 * Callers:
 *     ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18007B3A4 (-Present@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x180095C70 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ReleaseCachedScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXXZ @ 0x1800227F4 (-ReleaseCachedScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x180027F80 (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     ?DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x18002829C (-DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ.c)
 *     ?AreActiveResources@CD3DResourceManager@@QEAA_NXZ @ 0x18002832C (-AreActiveResources@CD3DResourceManager@@QEAA_NXZ.c)
 *     ?RemoveDeviceFromTable@CD3DDeviceTable@@QEAAHPEAUID3D11Device1@@@Z @ 0x18006A88C (-RemoveDeviceFromTable@CD3DDeviceTable@@QEAAHPEAUID3D11Device1@@@Z.c)
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x180071AA8 (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180074880 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_GCD3DResourceSourceReference@@QEAAPEAXI@Z @ 0x1800B4EA0 (--_GCD3DResourceSourceReference@@QEAAPEAXI@Z.c)
 *     ?HandleAdapterUnexpectedError@CD3DRegistryDatabase@@SAJU_LUID@@@Z @ 0x18014AF0C (-HandleAdapterUnexpectedError@CD3DRegistryDatabase@@SAJU_LUID@@@Z.c)
 */

__int64 __fastcall CD3DDeviceManager::HandleAdvanceFrame(CD3DDeviceManager *this, __int64 a2, char a3)
{
  unsigned int v3; // r15d
  unsigned int v4; // ebp
  char v5; // r14
  __int64 v6; // rbx
  unsigned int v7; // r13d
  char v8; // si
  __int64 v9; // rbp
  bool v10; // zf
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // r14
  int v14; // eax
  __int64 v15; // rsi
  __int64 *v16; // rcx
  __int64 *v17; // rdx
  __int64 **v18; // r8
  __int64 *v19; // rdx
  _QWORD *v20; // rbx
  CD3DResourceSourceReference *v21; // rcx
  CD3DResourceSourceReference **v22; // r8
  CD3DResourceSourceReference **v23; // rdx
  PSLIST_ENTRY v24; // rbx
  struct CD3DResource ***v25; // rsi
  int v26; // edi
  __int64 v27; // r14
  __int64 v28; // rsi
  struct ID3D11Device1 *v29; // rbx
  _QWORD v31[13]; // [rsp+30h] [rbp-68h] BYREF
  int v32; // [rsp+A0h] [rbp+8h]
  unsigned int v35; // [rsp+B8h] [rbp+20h] BYREF

  v3 = 0;
  v4 = 0;
  v32 = 0;
  v5 = a3;
  v6 = a2;
  EnterCriticalSection(&stru_1801A3D88);
  v7 = 0;
  if ( dword_1801A3DF0 )
  {
    while ( 1 )
    {
      v8 = 0;
      v9 = *(_QWORD *)(32LL * v7 + xmmword_1801A3DD0);
      if ( *(_QWORD *)(v9 + 1016) != v6 )
      {
        v10 = *(_QWORD *)(v9 + 768) == 0LL;
        *(_QWORD *)(v9 + 1016) = v6;
        *(_BYTE *)(v9 + 1036) = 0;
        if ( !v10 && (unsigned __int64)(v6 - *(_QWORD *)(v9 + 1024)) > 0x20 )
        {
          CD3DDeviceLevel1::ReleaseCachedScratchRenderTargetBitmap((CD3DDeviceLevel1 *)v9);
          *(_QWORD *)(v9 + 776) = 0LL;
          *(_BYTE *)(v9 + 1032) = 0;
        }
        v11 = *(_QWORD *)(v9 + 512);
        v31[1] = *(_QWORD *)(v9 + 528);
        v31[2] = v6;
        v31[0] = 0LL;
        v12 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v11 + 32LL))(v11, v31, 1LL);
        if ( v12 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xFB9u);
        if ( v5 )
        {
          v13 = *(unsigned int *)(v9 + 1000);
          if ( (_DWORD)v13 )
          {
            v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v9 + 512) + 56LL))(
                    *(_QWORD *)(v9 + 512),
                    *(_QWORD *)(v9 + 976),
                    (unsigned int)v13);
            v3 = v14;
            if ( v14 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x113Bu);
            v15 = 0LL;
            do
            {
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v15 + *(_QWORD *)(v9 + 976)) + 16LL))(*(_QWORD *)(v15 + *(_QWORD *)(v9 + 976)));
              v15 += 8LL;
              --v13;
            }
            while ( v13 );
            *(_DWORD *)(v9 + 1000) = 0;
            DynArrayImpl<0>::ShrinkToSize(v9 + 976, 8LL);
          }
          if ( v3 == -2005270496 && !*(_BYTE *)(v9 + 1035) )
          {
            CD3DRegistryDatabase::HandleAdapterUnexpectedError(*(struct _LUID *)(v9 + 592));
            *(_BYTE *)(v9 + 1035) = 1;
          }
          if ( (unsigned int)TranslateDXGIorD3DErrorInContext(v3, 0LL, &v35) )
            v3 = v35;
          if ( v3 == -2003304307 )
            *(_DWORD *)(v9 + 800) = -2003304307;
        }
        v16 = (__int64 *)(v9 + 912);
        if ( (__int64 *)*v16 != v16 )
        {
          v17 = (__int64 *)(v9 + 896);
          v18 = *(__int64 ***)(v9 + 904);
          if ( *(_QWORD *)(*(_QWORD *)(v9 + 896) + 8LL) != v9 + 896 || *v18 != v17 )
            __fastfail(3u);
          if ( *(__int64 **)(*v16 + 8) != v16 || **(__int64 ***)(v9 + 920) != v16 )
            __fastfail(3u);
          *v18 = v16;
          *(_QWORD *)(v9 + 904) = *(_QWORD *)(v9 + 920);
          **(_QWORD **)(v9 + 920) = v17;
          *(_QWORD *)(v9 + 920) = v18;
          v19 = (__int64 *)*v16;
          if ( *(__int64 **)(*v16 + 8) != v16 || *v18 != v16 )
            __fastfail(3u);
          *v18 = v19;
          v19[1] = (__int64)v18;
          *(_QWORD *)(v9 + 920) = v9 + 912;
          *v16 = (__int64)v16;
        }
        v20 = *(_QWORD **)(v9 + 952);
        while ( v20 != (_QWORD *)(v9 + 952) )
        {
          v21 = (CD3DResourceSourceReference *)(v20 - 2);
          v20 = (_QWORD *)*v20;
          if ( (int)--*((_DWORD *)v21 + 2) <= 0 )
          {
            v22 = (CD3DResourceSourceReference **)*((_QWORD *)v21 + 2);
            v23 = (CD3DResourceSourceReference **)*((_QWORD *)v21 + 3);
            if ( v22[1] != (CD3DResourceSourceReference *)((char *)v21 + 16)
              || *v23 != (CD3DResourceSourceReference *)((char *)v21 + 16) )
            {
              __fastfail(3u);
            }
            *v23 = (CD3DResourceSourceReference *)v22;
            v22[1] = (CD3DResourceSourceReference *)v23;
            CD3DResourceSourceReference::`scalar deleting destructor'(v21, (unsigned int)v23);
          }
        }
        if ( *(_QWORD *)(v9 + 552) )
        {
          v24 = InterlockedFlushSList((PSLIST_HEADER)(v9 + 864));
          if ( v24 )
          {
            while ( 1 )
            {
              v25 = (struct CD3DResource ***)&v24[-3];
              v24 = v24->Next;
              CD3DResourceManager::DestroyResource((CD3DResourceManager *)(v9 + 848), v25);
              if ( v25 )
                ((void (__fastcall *)(struct CD3DResource ***, __int64))(*v25)[2])(v25, 1LL);
              if ( !v24 )
              {
                v24 = InterlockedFlushSList((PSLIST_HEADER)(v9 + 864));
                if ( !v24 )
                  break;
              }
            }
          }
        }
        v5 = a3;
        v8 = 1;
        v3 = 0;
      }
      if ( *(_BYTE *)(v9 + 1039) )
      {
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v9 + 560) + 888LL))(*(_QWORD *)(v9 + 560));
        *(_BYTE *)(v9 + 1039) = 0;
      }
      if ( v8 && (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(v9 + 552) + 312LL))(*(_QWORD *)(v9 + 552)) < 0 )
      {
        v4 = -2003304307;
        v32 = -2003304307;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304307, 0x1ABu);
      }
      else
      {
        v4 = v32;
      }
      if ( ++v7 >= dword_1801A3DF0 )
        break;
      v6 = a2;
    }
  }
  EnterCriticalSection(&stru_1801A3D88);
  v26 = dword_1801A3DE8;
  if ( dword_1801A3DE8 )
  {
    v27 = 32LL * (unsigned int)(dword_1801A3DE8 - 1);
    do
    {
      v28 = *(_QWORD *)(v27 + xmmword_1801A3DD0);
      if ( (*(_BYTE *)(*(_QWORD *)(v28 + 576) + 348LL) & 0x10) != 0 )
      {
        CD3DResourceManager::DestroyAndDeleteDelayedResources((CD3DResourceManager *)(v28 + 848));
        if ( !CD3DResourceManager::AreActiveResources((CD3DResourceManager **)(v28 + 848))
          && **(_QWORD **)(v28 + 8) == *(_QWORD *)(v28 + 8) )
        {
          v29 = *(struct ID3D11Device1 **)(v28 + 552);
          CD3DDeviceManager::DeleteUnusedDevice((CD3DDeviceManager *)&g_D3DDeviceManager, v26 - 1);
          CD3DDeviceTable::RemoveDeviceFromTable((CD3DDeviceTable *)&g_deviceTable, v29);
        }
      }
      v27 -= 32LL;
      --v26;
    }
    while ( v26 );
  }
  LeaveCriticalSection(&stru_1801A3D88);
  LeaveCriticalSection(&stru_1801A3D88);
  return v4;
}
