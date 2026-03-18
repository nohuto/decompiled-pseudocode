/*
 * XREFs of ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEBUtagPOINTERINPUTFRAME@@PEAUtagMSG@@@Z @ 0x1C01EEB80
 * Callers:
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01F1384 (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 * Callees:
 *     DelQEntry @ 0x1C0057FA0 (DelQEntry.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01D7CD8 (xxxRetrievePointerInputMessage.c)
 */

__int64 __fastcall DiscardPointerMessage(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void *a5)
{
  unsigned int v8; // esi
  char *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  int v13; // [rsp+78h] [rbp+Fh] BYREF
  _BYTE v14[8]; // [rsp+80h] [rbp+17h] BYREF
  __int64 v15; // [rsp+88h] [rbp+1Fh] BYREF
  __int64 v16; // [rsp+90h] [rbp+27h] BYREF
  __int64 v17; // [rsp+98h] [rbp+2Fh] BYREF
  struct tagQMSG *v18; // [rsp+A0h] [rbp+37h] BYREF
  __int64 v19; // [rsp+D0h] [rbp+67h] BYREF
  int v20; // [rsp+E0h] [rbp+77h] BYREF
  int v21; // [rsp+E4h] [rbp+7Bh]

  v21 = HIDWORD(a4);
  v20 = 1;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v14);
  v8 = xxxRetrievePointerInputMessage(
         a1,
         a3,
         *(unsigned int *)(a2 + 24),
         *(unsigned int *)(a2 + 24),
         0,
         1,
         &v20,
         (struct tagQMSG *)a2,
         &v15,
         (unsigned int *)&v19,
         (unsigned __int64 *)&v16,
         (unsigned __int64 *)&v17,
         &v13,
         &v18);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v14);
  v9 = (char *)a5;
  if ( a5 && v8 == 1 )
  {
    memset(a5, 0, 0x30uLL);
    v10 = v15;
    if ( v15 )
      v10 = *(_QWORD *)v15;
    *(_QWORD *)v9 = v10;
    *((_DWORD *)v9 + 2) = v19;
    *((_QWORD *)v9 + 2) = v16;
    *((_QWORD *)v9 + 3) = v17;
    *((_DWORD *)v9 + 8) = *(_DWORD *)(a2 + 48);
    *(_QWORD *)(v9 + 36) = *(_QWORD *)(a2 + 52);
  }
  if ( v8 != 2 )
  {
    v11 = *(_QWORD *)(a1 + 384);
    if ( *(_QWORD *)(v11 + 48) == a2 )
      *(_QWORD *)(v11 + 48) = 0LL;
    DelQEntry(*(_QWORD **)(a1 + 384), a2);
  }
  return v8;
}
