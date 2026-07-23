/*
 * XREFs of SdbpCheckAllAttributes @ 0x1406C4B68
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x1406C22E4 (SdbpCheckMatchingFiles.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     SdbReadDWORDTag @ 0x1404CCBB0 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x1404E7954 (SdbFindFirstTag.c)
 *     AslFree @ 0x140514714 (AslFree.c)
 *     AslAlloc @ 0x1405148D4 (AslAlloc.c)
 *     SdbReadQWORDTag @ 0x140574150 (SdbReadQWORDTag.c)
 *     SdbGetStringTagPtr @ 0x140574250 (SdbGetStringTagPtr.c)
 *     SdbpCheckAttribute @ 0x1406C4E30 (SdbpCheckAttribute.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 *     AslFileAllocAndGetAttributes @ 0x1406C6BBC (AslFileAllocAndGetAttributes.c)
 */

__int64 __fastcall SdbpCheckAllAttributes(int *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned int Attributes; // ebx
  unsigned int v7; // r15d
  __int64 v8; // r14
  int v9; // edi
  _DWORD *v10; // rbp
  int v11; // r13d
  int *v12; // r12
  __int16 v13; // bx
  unsigned int FirstTag; // eax
  __int64 v15; // rcx
  int v16; // ecx
  __int64 *p_DWORDTag; // r15
  unsigned int v18; // r14d
  __int64 StringTagPtr; // rax
  __int64 v20; // rcx
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
  if ( !a5 )
    return Attributes;
  if ( *(_DWORD *)(a5 + 592) )
  {
    if ( !*(_QWORD *)(a5 + 544) )
      return Attributes;
  }
  else if ( !*(_QWORD *)(a5 + 520) )
  {
    return Attributes;
  }
  v10 = AslAlloc((__int64)a1, 0x420uLL);
  if ( !v10 )
    return (unsigned int)-1073741801;
  v11 = 0;
  v12 = (int *)&unk_1402F9A34;
  while ( 1 )
  {
    v13 = *((_WORD *)v12 - 2);
    v33 = v13;
    FirstTag = SdbFindFirstTag(v8, v7, v13);
    v15 = 0LL;
    if ( !FirstTag )
      goto LABEL_25;
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
        v18 = 2 * v20 + 2;
        break;
    }
    Attributes = AslFileAllocAndGetAttributes(v10, a5, 1LL << *v12);
    if ( (Attributes & 0x80000000) != 0 )
      break;
    v15 = (__int64)&v10[8 * *v12];
    if ( (*(_DWORD *)(v15 + 24) & 1) == 0 )
    {
      Attributes = 0;
      goto LABEL_27;
    }
    if ( !(unsigned int)SdbpCheckAttribute((unsigned int)&v26, v33, (_DWORD)p_DWORDTag, v18, (__int64)&v10[8 * *v12]) )
    {
      Attributes = -1073741595;
      AslLogCallPrintf(1, (unsigned int)"SdbpCheckAllAttributes", 748, (unsigned int)"SdbpCheckAttribute failed [%x]");
      goto LABEL_27;
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
LABEL_26:
      Attributes = 0;
      *a1 = v9;
      goto LABEL_27;
    }
    v8 = a3;
    v7 = a4;
LABEL_25:
    ++v11;
    v12 += 2;
    if ( (unsigned __int64)v11 >= 0x22 )
      goto LABEL_26;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbpCheckAllAttributes", 725, (unsigned int)"Failed to get attribute %d [%x]");
LABEL_27:
  v22 = v10 + 6;
  v23 = 33LL;
  do
  {
    if ( (*v22 & 1) != 0 && *(v22 - 6) == 4 && (*v22 & 4) != 0 )
      AslFree(v15, *((void **)v22 - 1));
    v22 += 8;
    --v23;
  }
  while ( v23 );
  memset(v10, 0, 0x420uLL);
  AslFree(v24, v10);
  return Attributes;
}
