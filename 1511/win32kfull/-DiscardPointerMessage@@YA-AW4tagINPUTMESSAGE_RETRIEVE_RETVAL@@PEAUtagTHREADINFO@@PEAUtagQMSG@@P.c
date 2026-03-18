/*
 * XREFs of ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEBUtagPOINTERINPUTFRAME@@PEAUtagMSG@@@Z @ 0x1C01F79B0
 * Callers:
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01FA180 (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     DelQEntry @ 0x1C0064CC4 (DelQEntry.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01E1A60 (xxxRetrievePointerInputMessage.c)
 */

__int64 __fastcall DiscardPointerMessage(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void *a5)
{
  __int64 v8; // rsi
  unsigned int v9; // edi
  char *v10; // rbx
  int v12; // [rsp+70h] [rbp-1h] BYREF
  _BYTE v13[8]; // [rsp+78h] [rbp+7h] BYREF
  __int64 v14; // [rsp+80h] [rbp+Fh] BYREF
  __int64 v15; // [rsp+88h] [rbp+17h] BYREF
  __int64 v16; // [rsp+90h] [rbp+1Fh] BYREF
  struct tagQMSG *v17; // [rsp+98h] [rbp+27h] BYREF
  __int64 v18; // [rsp+D8h] [rbp+67h] BYREF
  int v19; // [rsp+E8h] [rbp+77h] BYREF
  int v20; // [rsp+ECh] [rbp+7Bh]

  v20 = HIDWORD(a4);
  v19 = 1;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v13);
  v8 = 0LL;
  v9 = xxxRetrievePointerInputMessage(
         a1,
         a3,
         *(_DWORD *)(a2 + 24),
         *(_DWORD *)(a2 + 24),
         0,
         1,
         &v19,
         (struct tagQMSG *)a2,
         &v14,
         (unsigned int *)&v18,
         (unsigned __int64 *)&v15,
         (unsigned __int64 *)&v16,
         &v12,
         &v17);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v13);
  v10 = (char *)a5;
  if ( a5 && v9 == 1 )
  {
    memset(a5, 0, 0x30uLL);
    if ( v14 )
      v8 = *(_QWORD *)v14;
    *((_DWORD *)v10 + 2) = v18;
    *((_QWORD *)v10 + 2) = v15;
    *((_QWORD *)v10 + 3) = v16;
    *(_QWORD *)v10 = v8;
    *((_DWORD *)v10 + 8) = *(_DWORD *)(a2 + 48);
    *(_QWORD *)(v10 + 36) = *(_QWORD *)(a2 + 52);
  }
  if ( v9 != 2 )
    DelQEntry(*(_QWORD *)(a1 + 384), (__int64 *)a2, 1);
  return v9;
}
