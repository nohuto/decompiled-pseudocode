/*
 * XREFs of SdbpCheckAllAttributes @ 0x140704904
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x1405AB79C (SdbpCheckMatchingFiles.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     SdbReadDWORDTag @ 0x1405778E0 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x140577C74 (SdbFindFirstTag.c)
 *     AslFree @ 0x1405783C4 (AslFree.c)
 *     AslAlloc @ 0x1405783E4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 *     SdbGetStringTagPtr @ 0x1405ABAB8 (SdbGetStringTagPtr.c)
 *     SdbReadQWORDTag @ 0x1405C6BBC (SdbReadQWORDTag.c)
 *     SdbpCheckAttribute @ 0x140704BAC (SdbpCheckAttribute.c)
 *     AslFileAllocAndGetAttributes @ 0x140705C78 (AslFileAllocAndGetAttributes.c)
 */

__int64 __fastcall SdbpCheckAllAttributes(int *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  int Attributes; // ebx
  unsigned int v7; // r14d
  __int64 v8; // rsi
  int v9; // edi
  _DWORD *v10; // rbp
  int v11; // r12d
  int *v12; // r15
  __int16 v13; // bx
  unsigned int FirstTag; // eax
  __int64 v15; // rcx
  int v16; // ecx
  __int64 *p_DWORDTag; // r14
  unsigned int v18; // esi
  __int64 StringTagPtr; // rax
  __int64 v20; // rsi
  void (__fastcall *v21)(_QWORD, __int64 *, _QWORD, _QWORD); // rax
  _DWORD *v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rcx
  unsigned int v26; // [rsp+30h] [rbp-58h] BYREF
  int DWORDTag; // [rsp+34h] [rbp-54h] BYREF
  __int64 QWORDTag; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int16 v33; // [rsp+B0h] [rbp+28h]

  Attributes = 0;
  *a1 = 0;
  v7 = a4;
  v8 = a3;
  v9 = 1;
  v26 = 1;
  if ( !a5 || !*(_QWORD *)(a5 + 520) )
    return (unsigned int)Attributes;
  v10 = AslAlloc((__int64)a1, 0x400uLL);
  if ( !v10 )
    return (unsigned int)-1073741801;
  v11 = 0;
  v12 = (int *)&unk_140323294;
  while ( 1 )
  {
    v13 = *((_WORD *)v12 - 2);
    v33 = v13;
    FirstTag = SdbFindFirstTag(v8, v7, v13);
    v15 = 0LL;
    if ( !FirstTag )
      goto LABEL_22;
    v16 = v13 & 0xF000;
    p_DWORDTag = 0LL;
    v18 = 0;
    switch ( v16 )
    {
      case 16384:
        DWORDTag = SdbReadDWORDTag(a3, FirstTag, 0);
        p_DWORDTag = (__int64 *)&DWORDTag;
        v18 = 4;
        break;
      case 20480:
        QWORDTag = SdbReadQWORDTag(a3, FirstTag, 0LL);
        p_DWORDTag = &QWORDTag;
        v18 = 8;
        break;
      case 24576:
        StringTagPtr = SdbGetStringTagPtr(a3, FirstTag);
        p_DWORDTag = (__int64 *)StringTagPtr;
        v20 = -1LL;
        do
          ++v20;
        while ( *(_WORD *)(StringTagPtr + 2 * v20) );
        v18 = 2 * v20;
        break;
    }
    Attributes = AslFileAllocAndGetAttributes(v10, a5, 1LL << *v12);
    if ( Attributes < 0 )
      break;
    v15 = (__int64)&v10[8 * *v12];
    if ( (*(_DWORD *)(v15 + 24) & 1) == 0 )
    {
      Attributes = 0;
      goto LABEL_24;
    }
    if ( !(unsigned int)SdbpCheckAttribute((unsigned int)&v26, v33, (_DWORD)p_DWORDTag, v18, (__int64)&v10[8 * *v12]) )
    {
      Attributes = -1073741595;
      AslLogCallPrintf(1LL);
      goto LABEL_24;
    }
    v15 = 0LL;
    v9 = v26;
    v21 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD))(a2 + 968);
    if ( v21 )
    {
      v21(v33, p_DWORDTag, v18, v26);
      v15 = 0LL;
    }
    if ( !v9 )
    {
LABEL_23:
      Attributes = 0;
      *a1 = v9;
      goto LABEL_24;
    }
    v8 = a3;
    v7 = a4;
LABEL_22:
    ++v11;
    v12 += 2;
    if ( (unsigned __int64)v11 >= 0x21 )
      goto LABEL_23;
  }
  AslLogCallPrintf(1LL);
LABEL_24:
  v22 = v10 + 6;
  v23 = 32LL;
  do
  {
    if ( (*v22 & 1) != 0 && *(v22 - 6) == 4 && (*v22 & 4) != 0 )
      AslFree(v15, *((void **)v22 - 1));
    v22 += 8;
    --v23;
  }
  while ( v23 );
  memset(v10, 0, 0x400uLL);
  AslFree(v24, v10);
  return (unsigned int)Attributes;
}
