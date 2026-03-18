/*
 * XREFs of ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180035810
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x18003C450 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 *     ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18007350C (-Present@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 * Callees:
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800137B0 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x180013808 (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x1800376DC (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18007BBC0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?Flush@CD3DDeviceLevel1@@QEAAXXZ @ 0x18007E7E8 (-Flush@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ??_ECD3DDeviceLevel1@@MEAAPEAXI@Z @ 0x180080990 (--_ECD3DDeviceLevel1@@MEAAPEAXI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x18009F204 (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     ??_GCD3DResourceSourceReference@@QEAAPEAXI@Z @ 0x1800AD608 (--_GCD3DResourceSourceReference@@QEAAPEAXI@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800B59AC (-GetCurrentFrameId@@YA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x1801130A8 (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 *     ?HandleAdapterUnexpectedError@CD3DRegistryDatabase@@SAJU_LUID@@@Z @ 0x18017B4F8 (-HandleAdapterUnexpectedError@CD3DRegistryDatabase@@SAJU_LUID@@@Z.c)
 */

__int64 __fastcall CD3DDeviceManager::HandleAdvanceFrame(CD3DDeviceManager *this, __int64 a2, char a3)
{
  int v3; // ebp
  char v4; // r13
  __int64 v6; // rdi
  char v7; // si
  __int64 v8; // r14
  __int64 v9; // rbx
  _QWORD *v10; // rsi
  __int64 v11; // rax
  signed int v12; // ebp
  __int64 v13; // r15
  signed int v14; // ebp
  __int64 v15; // rcx
  int v16; // eax
  __int64 *v17; // rcx
  _QWORD *v18; // rbp
  PSLIST_ENTRY v19; // r15
  int v20; // edx
  __int64 v21; // rbx
  unsigned int v22; // ebx
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rbp
  unsigned int v31; // esi
  __int64 v32; // r13
  __int64 v33; // rcx
  __int64 v34; // r13
  struct CD3DResource *v35; // r13
  __int64 *v36; // rdx
  __int64 **v37; // r8
  __int64 *v38; // rdx
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // r13
  CD3DResourceSourceReference *v42; // rcx
  CD3DResourceSourceReference **v43; // r8
  CD3DResourceSourceReference **v44; // rdx
  __int64 v45; // rax
  _QWORD v46[11]; // [rsp+30h] [rbp-58h] BYREF
  int v47; // [rsp+90h] [rbp+8h]
  unsigned int v49; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0;
  v47 = 0;
  v4 = a3;
  EnterCriticalSection(&stru_1801F0028);
  LODWORD(v6) = dword_1801F0110;
  if ( dword_1801F0110 )
  {
    do
    {
      v6 = (unsigned int)(v6 - 1);
      v7 = 0;
      v8 = 40 * v6;
      v9 = *(_QWORD *)(40 * v6 + qword_1801F00A0);
      if ( *(_QWORD *)(v9 + 1056) != a2 )
      {
        *(_BYTE *)(v9 + 1075) = 0;
        v10 = (_QWORD *)(v9 + 472);
        *(_QWORD *)(v9 + 1056) = a2;
        if ( v9 == -472 )
          v11 = 0LL;
        else
          v11 = v9;
        v12 = *(_DWORD *)(v9 + 496) - 1;
        v13 = *(_QWORD *)(v11 + 1056);
        if ( v12 >= 0 )
        {
          v32 = 8LL * v12;
          do
          {
            v33 = *(_QWORD *)(*v10 + v32);
            if ( (unsigned __int64)(v13 - *(_QWORD *)(v33 + 256)) >= 0x20 )
            {
              *(_BYTE *)(v33 + 264) = 0;
              CScratchRenderTargetBitmap::Release((CScratchRenderTargetBitmap *)v33);
              DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt((__int64 *)(v9 + 472), v12);
            }
            v32 -= 8LL;
            --v12;
          }
          while ( v12 >= 0 );
          v4 = a3;
        }
        v14 = *(_DWORD *)(v9 + 496) - 1;
        if ( v14 >= 0 )
        {
          v34 = 8LL * v14;
          do
          {
            if ( *(_DWORD *)(v9 + 496) <= 0x20u )
              break;
            v39 = *(_QWORD *)(*v10 + v34);
            if ( v13 != *(_QWORD *)(v39 + 256) )
            {
              *(_BYTE *)(v39 + 264) = 0;
              CScratchRenderTargetBitmap::Release((CScratchRenderTargetBitmap *)v39);
              DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt((__int64 *)(v9 + 472), v14);
            }
            v34 -= 8LL;
            --v14;
          }
          while ( v14 >= 0 );
          v4 = a3;
        }
        v15 = *(_QWORD *)(v9 + 528);
        v46[1] = *(_QWORD *)(v9 + 544);
        v46[0] = 0LL;
        v46[2] = a2;
        v16 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v15 + 32LL))(v15, v46, 1LL);
        if ( v16 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xFAFu);
        if ( v4 )
        {
          v30 = *(unsigned int *)(v9 + 1048);
          v31 = 0;
          if ( (_DWORD)v30 )
          {
            v40 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v9 + 528) + 56LL))(
                    *(_QWORD *)(v9 + 528),
                    *(_QWORD *)(v9 + 1024),
                    (unsigned int)v30);
            v31 = v40;
            if ( v40 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, 0x1133u);
            v41 = 0LL;
            do
            {
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v9 + 1024) + v41) + 16LL))(*(_QWORD *)(*(_QWORD *)(v9 + 1024) + v41));
              v41 += 8LL;
              --v30;
            }
            while ( v30 );
            v4 = a3;
            *(_DWORD *)(v9 + 1048) = 0;
            DynArrayImpl<0>::ShrinkToSize(v9 + 1024, 8LL);
          }
          if ( v31 == -2005270496 && !*(_BYTE *)(v9 + 1074) )
          {
            CD3DRegistryDatabase::HandleAdapterUnexpectedError(*(struct _LUID *)(v9 + 656));
            *(_BYTE *)(v9 + 1074) = 1;
          }
          if ( (unsigned int)TranslateDXGIorD3DErrorInContext(v31, 0LL, &v49) )
            v31 = v49;
          if ( v31 == -2003304307 )
            *(_DWORD *)(v9 + 824) = -2003304307;
        }
        v17 = (__int64 *)(v9 + 944);
        if ( (__int64 *)*v17 != v17 )
        {
          v36 = (__int64 *)(v9 + 928);
          v37 = *(__int64 ***)(v9 + 936);
          if ( *(_QWORD *)(*(_QWORD *)(v9 + 928) + 8LL) != v9 + 928 || *v37 != v36 )
            __fastfail(3u);
          if ( *(__int64 **)(*v17 + 8) != v17 || **(__int64 ***)(v9 + 952) != v17 )
            __fastfail(3u);
          *v37 = v17;
          *(_QWORD *)(v9 + 936) = *(_QWORD *)(v9 + 952);
          **(_QWORD **)(v9 + 952) = v36;
          *(_QWORD *)(v9 + 952) = v37;
          v38 = (__int64 *)*v17;
          if ( *(__int64 **)(*v17 + 8) != v17 || *v37 != v17 )
            __fastfail(3u);
          *v37 = v38;
          v38[1] = (__int64)v37;
          *(_QWORD *)(v9 + 952) = v9 + 944;
          *v17 = (__int64)v17;
        }
        v18 = *(_QWORD **)(v9 + 984);
        while ( v18 != (_QWORD *)(v9 + 984) )
        {
          v42 = (CD3DResourceSourceReference *)(v18 - 2);
          v18 = (_QWORD *)*v18;
          if ( (int)--*((_DWORD *)v42 + 2) <= 0 )
          {
            v43 = (CD3DResourceSourceReference **)*((_QWORD *)v42 + 2);
            v44 = (CD3DResourceSourceReference **)*((_QWORD *)v42 + 3);
            if ( v43[1] != (CD3DResourceSourceReference *)((char *)v42 + 16)
              || *v44 != (CD3DResourceSourceReference *)((char *)v42 + 16) )
            {
              __fastfail(3u);
            }
            *v44 = (CD3DResourceSourceReference *)v43;
            v43[1] = (CD3DResourceSourceReference *)v44;
            CD3DResourceSourceReference::`scalar deleting destructor'(v42, (unsigned int)v44);
          }
        }
        if ( *(_QWORD *)(v9 + 568) )
        {
          v19 = InterlockedFlushSList((PSLIST_HEADER)(v9 + 896));
          if ( v19 )
          {
            while ( 1 )
            {
              v35 = (struct CD3DResource *)&v19[-3];
              v19 = v19->Next;
              CD3DResourceManager::DestroyResource((CD3DResourceManager *)(v9 + 880), v35);
              if ( v35 )
                (*(void (__fastcall **)(struct CD3DResource *, __int64))(*(_QWORD *)v35 + 16LL))(v35, 1LL);
              if ( !v19 )
              {
                v19 = InterlockedFlushSList((PSLIST_HEADER)(v9 + 896));
                if ( !v19 )
                  break;
              }
            }
            v4 = a3;
          }
        }
        v3 = v47;
        v7 = 1;
      }
      if ( *(_BYTE *)(v9 + 1078) )
        CD3DDeviceLevel1::Flush((CD3DDeviceLevel1 *)v9);
      if ( v7 && (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(v9 + 568) + 312LL))(*(_QWORD *)(v9 + 568)) < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304307, 0x1E6u);
        if ( v3 >= 0 )
          v3 = -2003304307;
        v47 = v3;
      }
      v20 = dword_1801F00B8;
      v21 = *(_QWORD *)(v8 + qword_1801F00A0);
      if ( !*(_DWORD *)(v21 + 416)
        && (*(int *)(v21 + 824) < 0
         || !*(_DWORD *)(*(_QWORD *)(v21 + 8) + 16LL)
         && !*(_DWORD *)(v21 + 1000)
         && GetCurrentFrameId() >= *(_QWORD *)(v21 + 1064)) )
      {
        v24 = dword_1801F0110;
        v25 = (unsigned int)(v20 - 1);
        if ( (unsigned int)v6 >= dword_1801F0110 )
        {
          v45 = qword_1801F00A0;
          *(_OWORD *)(v8 + qword_1801F00A0) = *(_OWORD *)(qword_1801F00A0 + 40 * v25);
          *(_OWORD *)(v8 + v45 + 16) = *(_OWORD *)(v45 + 40 * v25 + 16);
          *(_QWORD *)(v8 + v45 + 32) = *(_QWORD *)(v45 + 40 * v25 + 32);
        }
        else
        {
          --dword_1801F0110;
          v26 = 5LL * (unsigned int)(v24 - 1);
          v27 = qword_1801F00A0;
          *(_OWORD *)(v8 + qword_1801F00A0) = *(_OWORD *)(qword_1801F00A0 + 8 * v26);
          *(_OWORD *)(v8 + v27 + 16) = *(_OWORD *)(v27 + 8 * v26 + 16);
          *(_QWORD *)(v8 + v27 + 32) = *(_QWORD *)(v27 + 8 * v26 + 32);
          v28 = 5LL * (unsigned int)dword_1801F0110;
          v29 = qword_1801F00A0;
          *(_OWORD *)(qword_1801F00A0 + 8 * v28) = *(_OWORD *)(qword_1801F00A0 + 40 * v25);
          *(_OWORD *)(v29 + 8 * v28 + 16) = *(_OWORD *)(v29 + 40 * v25 + 16);
          *(_QWORD *)(v29 + 8 * v28 + 32) = *(_QWORD *)(v29 + 40 * v25 + 32);
        }
        dword_1801F00B8 = v20 - 1;
        if ( v20 == 1 )
          DynArrayImpl<0>::ShrinkToSize(&qword_1801F00A0, 40LL);
        CD3DDeviceLevel1::`vector deleting destructor'((CD3DDeviceLevel1 *)v21, 1u);
        if ( qword_1801F0060 )
          CSurfaceManager::ResetTokenThread(qword_1801F0060);
      }
    }
    while ( (_DWORD)v6 );
  }
  v22 = dword_1801F00B8;
  if ( dword_1801F00B8 )
  {
    do
    {
      if ( v22 <= dword_1801F0110 )
        break;
      CD3DDeviceManager::DeleteUnusedDevice((CD3DDeviceManager *)&g_D3DDeviceManager, --v22);
    }
    while ( v22 );
  }
  LeaveCriticalSection(&stru_1801F0028);
  return (unsigned int)v3;
}
