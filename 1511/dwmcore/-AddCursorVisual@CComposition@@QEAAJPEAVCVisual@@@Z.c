/*
 * XREFs of ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180100AB8
 * Callers:
 *     ?Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETCURSOR@@@Z @ 0x18000655C (-Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PART.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_GCCursorVisual@@QEAAPEAXI@Z @ 0x1801009F4 (--_GCCursorVisual@@QEAAPEAXI@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z @ 0x180105A70 (-RemoveAt@-$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z.c)
 *     ?Create@CCursorVisual@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18010ACF4 (-Create@CCursorVisual@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CComposition::AddCursorVisual(CComposition *this, struct CVisual *a2)
{
  int v2; // ebx
  unsigned int v3; // edi
  _QWORD *v6; // r12
  __int64 v7; // rbp
  struct CResource ***v8; // r15
  struct CVisual **v9; // rax
  int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // edx
  int v13; // ebx
  int v15; // eax
  CCursorVisual *v16; // [rsp+60h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 222);
  v3 = 0;
  v16 = 0LL;
  if ( v2 > 0 )
  {
    v6 = (_QWORD *)((char *)this + 864);
    v7 = (unsigned int)(v2 - 1);
    do
    {
      v8 = *(struct CResource ****)(*v6 + 8 * v7);
      v9 = v8[1];
      if ( *v9 )
      {
        if ( *v9 == a2 )
          goto LABEL_15;
      }
      else
      {
        DynArray<CWARPCallbackRenderer *,0>::RemoveAt(v6, (unsigned int)v7);
        CCursorVisual::`scalar deleting destructor'(v8);
      }
      --v2;
      v7 = (unsigned int)(v7 - 1);
    }
    while ( v2 > 0 );
  }
  v10 = CCursorVisual::Create(this, a2, &v16);
  v3 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1376u);
    goto LABEL_15;
  }
  v11 = *((_DWORD *)this + 222);
  v12 = v11 + 1;
  if ( v11 + 1 >= v11 )
  {
    v3 = 0;
    if ( v12 > *((_DWORD *)this + 221) )
    {
      v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 864, 8, 1, &v16);
      v13 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xC0u);
      v3 = v13;
      if ( v13 < 0 )
        goto LABEL_21;
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 108) + 8LL * *((unsigned int *)this + 222)) = v16;
      *((_DWORD *)this + 222) = v12;
    }
    v16 = 0LL;
    goto LABEL_15;
  }
  v13 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  v3 = -2147024362;
LABEL_21:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1378u);
LABEL_15:
  if ( v16 )
    CCursorVisual::`scalar deleting destructor'((struct CResource ***)v16);
  return v3;
}
