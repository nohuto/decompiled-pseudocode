/*
 * XREFs of ?ProcessUpdateTable@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TABLETRANSFEREFFECT_UPDATETABLE@@PEBXI@Z @ 0x1800F638C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 */

__int64 __fastcall CTableTransferEffect::ProcessUpdateTable(
        CTableTransferEffect *this,
        struct CResourceTable *a2,
        const struct MILCMD_TABLETRANSFEREFFECT_UPDATETABLE *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned int v5; // edi
  char *v9; // rcx
  __int64 v10; // r8
  char *v11; // rbx
  unsigned int v12; // eax
  unsigned int v13; // ebp
  int v14; // ebx
  int v15; // eax

  v5 = 0;
  if ( a4 )
  {
    if ( !*((_DWORD *)a3 + 2) )
    {
      v9 = (char *)this + 40 * *((unsigned int *)a3 + 3) + 216;
      *((_DWORD *)v9 + 6) = 0;
      DynArrayImpl<0>::ShrinkToSize(v9, 4u);
    }
    v10 = a5 >> 2;
    v11 = (char *)this + 40 * *((unsigned int *)a3 + 3);
    v12 = *((_DWORD *)v11 + 60);
    v13 = v12 + v10;
    if ( v12 + (unsigned int)v10 < v12 )
    {
      v14 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v5 = -2147024362;
LABEL_11:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x2Au);
      return v5;
    }
    if ( v13 > *((_DWORD *)v11 + 59) )
    {
      v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(v11 + 216), 4, v10, a4);
      v14 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xC0u);
      v5 = v14;
      if ( v14 < 0 )
        goto LABEL_11;
    }
    else
    {
      memcpy_0((void *)(*((_QWORD *)v11 + 27) + 4LL * *((unsigned int *)v11 + 60)), a4, 4 * v10);
      *((_DWORD *)v11 + 60) = v13;
    }
  }
  return v5;
}
