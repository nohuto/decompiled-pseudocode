/*
 * XREFs of ?CreateAndReferenceMsgData@PointerList@@YA_KGKKIH@Z @ 0x1C01FC3D0
 * Callers:
 *     ?TryCoalesceQFrame@@YAXPEAUtagPOINTERINPUTFRAME@@PEBU1@PEBUtagPOINTERQFRAME@@@Z @ 0x1C0230A6C (-TryCoalesceQFrame@@YAXPEAUtagPOINTERINPUTFRAME@@PEBU1@PEBUtagPOINTERQFRAME@@@Z.c)
 * Callees:
 *     ?AssignPointerCaptureData@@YAXPEAUtagINPUTPOINTERNODE@@PEAUtagPOINTERMSGDATA@@@Z @ 0x1C01FC29C (-AssignPointerCaptureData@@YAXPEAUtagINPUTPOINTERNODE@@PEAUtagPOINTERMSGDATA@@@Z.c)
 *     ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01FC678 (-FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z.c)
 *     ?ReferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01FCB64 (-ReferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

_QWORD *__fastcall PointerList::CreateAndReferenceMsgData(PointerList *this, int a2, int a3, unsigned int a4, char a5)
{
  __int16 v8; // bp
  int v9; // edi
  struct tagINPUTPOINTERNODE *NodeById; // rsi
  __int64 v12; // rax
  _QWORD *v13; // rbx
  unsigned int v14; // edx
  __int64 *v15; // rsi
  __int64 v16; // rax

  v8 = (__int16)this;
  v9 = 0;
  NodeById = FindNodeById((unsigned __int16)this, 0, 0);
  if ( !NodeById )
    return 0LL;
  v12 = Win32AllocPoolZInit(56LL, 1685091157LL);
  v13 = (_QWORD *)v12;
  if ( !v12 )
    return 0LL;
  *(_WORD *)(v12 + 16) = v8;
  LOBYTE(v9) = (a4 & 0x40004) == 0;
  *(_DWORD *)(v12 + 28) = a2;
  *(_DWORD *)(v12 + 32) = a3;
  *(_DWORD *)(v12 + 36) ^= (v9 ^ *(_DWORD *)(v12 + 36)) & 1;
  v14 = *(_DWORD *)(v12 + 36) & 0xFFFFFFF9 | (2 * (HIWORD(a4) & 1 | (2 * (a5 & 1))));
  *(_DWORD *)(v12 + 36) = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(8 * ((a4 & 0x2000) != 0))) & 8;
  AssignPointerCaptureData(NodeById, (struct tagPOINTERMSGDATA *)v12);
  v15 = (__int64 *)((char *)NodeById + 112);
  v16 = *v15;
  *v13 = *v15;
  v13[1] = v15;
  if ( *(__int64 **)(v16 + 8) != v15 )
    __fastfail(3u);
  *(_QWORD *)(v16 + 8) = v13;
  *v15 = (__int64)v13;
  PointerList::ReferenceMsgData(v13, 1LL);
  return v13;
}
