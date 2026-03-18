/*
 * XREFs of ?GetPointerMessageInfo@@YAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z @ 0x1C01EFCE8
 * Callers:
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01D730C (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01D7CD8 (xxxRetrievePointerInputMessage.c)
 * Callees:
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01C0A3C (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C1E84 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z @ 0x1C01F3B80 (-GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z.c)
 */

__int64 __fastcall GetPointerMessageInfo(
        unsigned int *a1,
        unsigned __int64 a2,
        HWND *a3,
        int *a4,
        int *a5,
        unsigned int *a6,
        unsigned int *a7)
{
  struct tagPOINTERINPUTFRAME *v11; // r9
  int *v12; // rdx
  __int64 v13; // rcx
  HWND v14; // rax
  __int64 v15; // r8
  unsigned int *v16; // rdx
  int v17[2]; // [rsp+20h] [rbp-18h] BYREF
  struct tagWND *v18; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return 0LL;
  PointerList::GetPointerCapture((PointerList *)a1, a2, (int)v17, &v18, *(int **)v17);
  v11 = FindAndReferenceFrameById(a1[7]);
  if ( !v11 )
    return 0LL;
  v12 = *(int **)v17;
  v13 = *((_QWORD *)v11 + 11) + 216LL * a1[8];
  if ( *(_QWORD *)v17 )
  {
    v14 = **(HWND **)v17;
    v15 = (unsigned int)v18;
  }
  else
  {
    v14 = *(HWND *)(v13 + 80);
    v15 = *(unsigned int *)(v13 + 32);
  }
  *a3 = v14;
  if ( a4 )
    *a4 = v12 != 0LL;
  if ( a5 )
    *a5 = v15;
  if ( a6 )
    *a6 = *(_DWORD *)(v13 + 56);
  v16 = a7;
  if ( a7 )
    *a7 = *(_DWORD *)(v13 + 68);
  UnreferenceFrameInt(v11, (__int64)v16, v15);
  return 1LL;
}
