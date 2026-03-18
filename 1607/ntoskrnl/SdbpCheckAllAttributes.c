/*
 * XREFs of SdbpCheckAllAttributes @ 0x1406C4A30
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x1406C21AC (SdbpCheckMatchingFiles.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 *     AslFree @ 0x14048538C (AslFree.c)
 *     AslAlloc @ 0x14048554C (AslAlloc.c)
 *     SdbReadDWORDTag @ 0x1404EA9AC (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x1405049C4 (SdbFindFirstTag.c)
 *     SdbReadQWORDTag @ 0x140573C10 (SdbReadQWORDTag.c)
 *     SdbGetStringTagPtr @ 0x140573D10 (SdbGetStringTagPtr.c)
 *     SdbpCheckAttribute @ 0x1406C4CF8 (SdbpCheckAttribute.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 *     AslFileAllocAndGetAttributes @ 0x1406C6A84 (AslFileAllocAndGetAttributes.c)
 */

__int64 __fastcall SdbpCheckAllAttributes(int *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned int v6; // ebx
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
  int Attributes; // eax
  void (__fastcall *v22)(_QWORD, __int64 *, _QWORD, _QWORD); // rax
  _DWORD *v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v27; // [rsp+20h] [rbp-68h]
  unsigned int v28; // [rsp+30h] [rbp-58h] BYREF
  int DWORDTag; // [rsp+34h] [rbp-54h] BYREF
  __int64 QWORDTag; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int16 v35; // [rsp+B0h] [rbp+28h]

  v6 = 0;
  *a1 = 0;
  v7 = a4;
  v8 = a3;
  v9 = 1;
  v28 = 1;
  if ( !a5 )
    return v6;
  if ( *(_DWORD *)(a5 + 592) )
  {
    if ( !*(_QWORD *)(a5 + 544) )
      return v6;
  }
  else if ( !*(_QWORD *)(a5 + 520) )
  {
    return v6;
  }
  v10 = AslAlloc((__int64)a1, 0x420uLL);
  if ( !v10 )
    return (unsigned int)-1073741801;
  v11 = 0;
  v12 = dword_1402F9A34;
  while ( 1 )
  {
    v13 = *((_WORD *)v12 - 2);
    v35 = v13;
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
    v6 = Attributes;
    if ( Attributes < 0 )
      break;
    v15 = (__int64)&v10[8 * *v12];
    if ( (*(_DWORD *)(v15 + 24) & 1) == 0 )
    {
      v6 = 0;
      goto LABEL_27;
    }
    if ( !(unsigned int)SdbpCheckAttribute((unsigned int)&v28, v35, (_DWORD)p_DWORDTag, v18, (__int64)&v10[8 * *v12]) )
    {
      v6 = -1073741595;
      LODWORD(v27) = -1073741595;
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpCheckAllAttributes",
        748,
        (unsigned int)"SdbpCheckAttribute failed [%x]",
        v27);
      goto LABEL_27;
    }
    v15 = 0LL;
    v9 = v28;
    v22 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD))(a2 + 968);
    if ( v22 )
    {
      v22(v35, p_DWORDTag, v18, v28);
      v15 = 0LL;
    }
    if ( !v9 )
    {
LABEL_26:
      v6 = 0;
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
  LODWORD(v27) = dword_1402F9A34[2 * v11];
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbpCheckAllAttributes",
    725,
    (unsigned int)"Failed to get attribute %d [%x]",
    v27,
    Attributes);
LABEL_27:
  v23 = v10 + 6;
  v24 = 33LL;
  do
  {
    if ( (*v23 & 1) != 0 && *(v23 - 6) == 4 && (*v23 & 4) != 0 )
      AslFree(v15, *((void **)v23 - 1));
    v23 += 8;
    --v24;
  }
  while ( v24 );
  memset(v10, 0, 0x420uLL);
  AslFree(v25, v10);
  return v6;
}
