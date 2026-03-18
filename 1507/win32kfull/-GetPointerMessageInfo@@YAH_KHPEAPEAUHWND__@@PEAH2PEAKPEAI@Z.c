/*
 * XREFs of ?GetPointerMessageInfo@@YAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z @ 0x1C01F864C
 * Callers:
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01E09A4 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01E1450 (xxxRetrievePointerInputMessage.c)
 * Callees:
 *     ?GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z @ 0x1C01FC440 (-GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z.c)
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022F19C (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C023090C (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
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
  int v15; // r8d
  int v16[2]; // [rsp+20h] [rbp-18h] BYREF
  struct tagWND *v17; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return 0LL;
  PointerList::GetPointerCapture((PointerList *)a1, a2, (int)v16, &v17, *(int **)v16);
  v11 = FindAndReferenceFrameById(a1[7]);
  if ( !v11 )
    return 0LL;
  v12 = *(int **)v16;
  v13 = *((_QWORD *)v11 + 9) + 216LL * a1[8];
  if ( *(_QWORD *)v16 )
  {
    v14 = **(HWND **)v16;
    v15 = (int)v17;
  }
  else
  {
    v14 = *(HWND *)(v13 + 80);
    v15 = *(_DWORD *)(v13 + 32);
  }
  *a3 = v14;
  if ( a4 )
    *a4 = v12 != 0LL;
  if ( a5 )
    *a5 = v15;
  if ( a6 )
    *a6 = *(_DWORD *)(v13 + 56);
  if ( a7 )
    *a7 = *(_DWORD *)(v13 + 68);
  UnreferenceFrameInt(v11);
  return 1LL;
}
