/*
 * XREFs of ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x18003AF04
 * Callers:
 *     ?Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETCURSOR@@@Z @ 0x18003BD64 (-Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PART.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCCursorVisual@@$0A@@@QEAAJI@Z @ 0x1800B70B0 (-RemoveAt@-$DynArray@PEAVCCursorVisual@@$0A@@@QEAAJI@Z.c)
 *     ?Create@CCursorVisual@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x1800B70E8 (-Create@CCursorVisual@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ??_GCCursorVisual@@QEAAPEAXI@Z @ 0x1800B71EC (--_GCCursorVisual@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CComposition::AddCursorVisual(CComposition *this, struct CVisual *a2)
{
  int v2; // edi
  unsigned int v3; // ebx
  _QWORD *v6; // r14
  __int64 v7; // rdx
  CCursorVisual *v8; // r15
  struct CVisual **v9; // rax
  unsigned int v10; // edx
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v15; // eax
  struct CCursorVisual *v16; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 224);
  v3 = 0;
  v16 = 0LL;
  if ( v2 > 0 )
  {
    v6 = (_QWORD *)((char *)this + 872);
    do
    {
      v7 = (unsigned int)(v2 - 1);
      v8 = *(CCursorVisual **)(*v6 + 8 * v7);
      v9 = (struct CVisual **)*((_QWORD *)v8 + 1);
      if ( *v9 )
      {
        if ( *v9 == a2 )
          goto LABEL_20;
      }
      else
      {
        DynArray<CCursorVisual *,0>::RemoveAt(v6, v7);
        CCursorVisual::`scalar deleting destructor'(v8, v10);
      }
      --v2;
    }
    while ( v2 > 0 );
  }
  v11 = CCursorVisual::Create(this, a2, &v16);
  v3 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1190u);
  }
  else
  {
    v12 = *((_DWORD *)this + 224);
    v13 = v12 + 1;
    if ( v12 + 1 < v12 )
    {
      v3 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      v3 = 0;
      if ( v13 <= *((_DWORD *)this + 223) )
      {
        *(_QWORD *)(*((_QWORD *)this + 109) + 8LL * v12) = v16;
        *((_DWORD *)this + 224) = v13;
        return v3;
      }
      v15 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 872, 8LL, 1LL, &v16);
      v3 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xC0u);
    }
    if ( (v3 & 0x80000000) == 0 )
      return v3;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x1192u);
  }
LABEL_20:
  if ( v16 )
    CCursorVisual::`scalar deleting destructor'(v16, v7);
  return v3;
}
