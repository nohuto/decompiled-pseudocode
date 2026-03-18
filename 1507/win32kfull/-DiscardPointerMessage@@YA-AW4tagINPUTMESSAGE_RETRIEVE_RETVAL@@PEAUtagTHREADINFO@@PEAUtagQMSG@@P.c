/*
 * XREFs of ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEBUtagPOINTERINPUTFRAME@@PEAUtagMSG@@@Z @ 0x1C01F74EC
 * Callers:
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01F9CDC (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 * Callees:
 *     DelQEntry @ 0x1C008C604 (DelQEntry.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01E1450 (xxxRetrievePointerInputMessage.c)
 */

__int64 __fastcall DiscardPointerMessage(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void *a5)
{
  unsigned int v8; // esi
  __int64 v9; // r9
  char *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  int v14; // [rsp+78h] [rbp+Fh] BYREF
  _BYTE v15[8]; // [rsp+80h] [rbp+17h] BYREF
  __int64 v16; // [rsp+88h] [rbp+1Fh] BYREF
  __int64 v17; // [rsp+90h] [rbp+27h] BYREF
  __int64 v18; // [rsp+98h] [rbp+2Fh] BYREF
  struct tagQMSG *v19; // [rsp+A0h] [rbp+37h] BYREF
  __int64 v20; // [rsp+D0h] [rbp+67h] BYREF
  int v21; // [rsp+E0h] [rbp+77h] BYREF
  int v22; // [rsp+E4h] [rbp+7Bh]

  v22 = HIDWORD(a4);
  v21 = 1;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v15);
  v8 = xxxRetrievePointerInputMessage(
         a1,
         a3,
         *(_DWORD *)(a2 + 24),
         *(_DWORD *)(a2 + 24),
         0,
         1,
         &v21,
         (struct tagQMSG *)a2,
         &v16,
         (unsigned int *)&v20,
         (unsigned __int64 *)&v17,
         (unsigned __int64 *)&v18,
         &v14,
         &v19);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v15);
  v10 = (char *)a5;
  if ( a5 && v8 == 1 )
  {
    memset(a5, 0, 0x30uLL);
    v11 = v16;
    if ( v16 )
      v11 = *(_QWORD *)v16;
    *(_QWORD *)v10 = v11;
    *((_DWORD *)v10 + 2) = v20;
    *((_QWORD *)v10 + 2) = v17;
    *((_QWORD *)v10 + 3) = v18;
    *((_DWORD *)v10 + 8) = *(_DWORD *)(a2 + 48);
    *(_QWORD *)(v10 + 36) = *(_QWORD *)(a2 + 52);
  }
  if ( v8 != 2 )
  {
    v12 = *(_QWORD *)(a1 + 392);
    if ( *(_QWORD *)(v12 + 40) == a2 )
      *(_QWORD *)(v12 + 40) = 0LL;
    DelQEntry(*(_QWORD *)(a1 + 392), (__int64 *)a2, 1LL, v9);
  }
  return v8;
}
