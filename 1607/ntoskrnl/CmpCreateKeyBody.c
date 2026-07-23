/*
 * XREFs of CmpCreateKeyBody @ 0x1404912B8
 * Callers:
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x1400870D0 (PsGetCurrentThreadProcessId.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14010BF00 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpTransReferenceTransaction @ 0x1403FDF98 (CmpTransReferenceTransaction.c)
 *     CmpTransDereferenceTransaction @ 0x1403FDFE8 (CmpTransDereferenceTransaction.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x140403838 (CmpReferenceKeyControlBlockUnsafe.c)
 *     ObCreateObjectEx @ 0x14041C830 (ObCreateObjectEx.c)
 *     EnlistKeyBodyWithKCB @ 0x140491474 (EnlistKeyBodyWithKCB.c)
 */

__int64 __fastcall CmpCreateKeyBody(__int64 a1, char a2, __int64 a3, __int64 a4, char a5, _QWORD *a6, _BYTE *a7)
{
  __int64 v8; // rbx
  __int64 v9; // r15
  char v13; // r14
  int v14; // edi
  _WORD *v15; // rdi
  int v16; // ecx
  __int64 v18; // rax
  __int64 v19; // [rsp+20h] [rbp-68h]
  __int16 v20; // [rsp+50h] [rbp-38h] BYREF
  void *v21; // [rsp+58h] [rbp-30h] BYREF

  v8 = 0LL;
  v21 = 0LL;
  v9 = 0LL;
  if ( !CmpReferenceKeyControlBlockUnsafe((volatile signed __int32 *)a1) )
    return (unsigned int)-1073741670;
  v13 = 1;
  if ( a4 )
  {
    if ( *(_QWORD *)(a4 + 56) )
    {
      v8 = *(_QWORD *)(a4 + 56);
      v14 = CmpTransReferenceTransaction(v8);
      if ( v14 < 0 )
      {
LABEL_20:
        CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)a1);
        return (unsigned int)v14;
      }
    }
    else
    {
      v9 = a4 + 88;
    }
  }
  v20 = 1;
  v14 = ObCreateObjectEx(a2, CmKeyObjectType, 0LL, a2, v19, 88, 0, 0, &v21, &v20);
  if ( v14 >= 0 )
  {
    v15 = v21;
    memset(v21, 0, 0x58uLL);
    v15[25] = *(_WORD *)(a3 + 20);
    *((_QWORD *)v15 + 1) = a1;
    *((_QWORD *)v15 + 3) = PsGetCurrentThreadProcessId();
    v15[2] = 0;
    if ( (*(_BYTE *)(a1 + 178) & 0x40) != 0 )
    {
      v18 = *(int *)(a1 + 88);
      *(_DWORD *)v15 = v18;
      *(_QWORD *)(a3 + 56) = v18;
    }
    else
    {
      *(_DWORD *)v15 = 1803104306;
    }
    if ( a4 )
    {
      *((_QWORD *)v15 + 7) = v8;
      v8 = 0LL;
      *((_QWORD *)v15 + 8) = v9;
    }
    *((_QWORD *)v15 + 10) = v15 + 36;
    *((_QWORD *)v15 + 9) = v15 + 36;
    if ( (*(_BYTE *)(a1 + 178) & 0x40) == 0 )
      EnlistKeyBodyWithKCB(v15, (unsigned int)(a5 != 0) + 1);
    v13 = 0;
    v16 = (*(unsigned __int8 *)(a1 + 178) >> 6) & 1;
    *a6 = v15;
    v14 = 0;
    *a7 = v16;
  }
  if ( v8 )
    CmpTransDereferenceTransaction(v8);
  if ( v13 )
    goto LABEL_20;
  return (unsigned int)v14;
}
