/*
 * XREFs of ?Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETCURSOR@@@Z @ 0x18000655C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??_GCCursorVisual@@QEAAPEAXI@Z @ 0x1801009F4 (--_GCCursorVisual@@QEAAPEAXI@Z.c)
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180100AB8 (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z @ 0x180105A70 (-RemoveAt@-$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CComposition::Partition_SetCursor(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_SETCURSOR *a4)
{
  struct CVisual *Resource; // rax
  struct CVisual *v7; // rsi
  int v8; // ebx
  int v10; // eax
  _QWORD *v11; // r14
  __int64 v12; // rdi
  CCursorVisual *v13; // rbp
  struct CVisual **v14; // rax
  unsigned int v15; // edx

  Resource = (struct CVisual *)CResourceTable::GetResource(a3, *((unsigned int *)a4 + 1), 31LL);
  v7 = Resource;
  if ( Resource )
  {
    if ( *((_DWORD *)a4 + 2) )
    {
      v10 = CComposition::AddCursorVisual(this, Resource);
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x987u);
    }
    else
    {
      v8 = *((_DWORD *)this + 222);
      if ( v8 > 0 )
      {
        v11 = (_QWORD *)((char *)this + 864);
        v12 = (unsigned int)(v8 - 1);
        do
        {
          v13 = *(CCursorVisual **)(*v11 + 8 * v12);
          v14 = (struct CVisual **)*((_QWORD *)v13 + 1);
          if ( !*v14 || *v14 == v7 )
          {
            DynArray<CWARPCallbackRenderer *,0>::RemoveAt(v11, (unsigned int)v12);
            CCursorVisual::`scalar deleting destructor'(v13, v15);
          }
          --v8;
          v12 = (unsigned int)(v12 - 1);
        }
        while ( v8 > 0 );
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x982u);
  }
  return 0LL;
}
