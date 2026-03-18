/*
 * XREFs of ObCompleteObjectDuplication @ 0x140480070
 * Callers:
 *     AlpcpExposeHandleAttribute @ 0x1404292E0 (AlpcpExposeHandleAttribute.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ObpFilterOperation @ 0x14007A018 (ObpFilterOperation.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1403E3928 (SeAuditingWithTokenForSubcategory.c)
 *     ObpIncrementHandleCountEx @ 0x14040BFB0 (ObpIncrementHandleCountEx.c)
 *     ExCreateHandleEx @ 0x140424F50 (ExCreateHandleEx.c)
 *     ObpDecrementHandleCount @ 0x140470084 (ObpDecrementHandleCount.c)
 *     ObReferenceProcessHandleTable @ 0x14047D304 (ObReferenceProcessHandleTable.c)
 *     ObpPreInterceptHandleDuplicate @ 0x140482A4C (ObpPreInterceptHandleDuplicate.c)
 *     ObpPostInterceptHandleDuplicate @ 0x14062F014 (ObpPostInterceptHandleDuplicate.c)
 *     SeAuditHandleDuplication @ 0x14064E610 (SeAuditHandleDuplication.c)
 *     EtwTraceDuplicateHandle @ 0x1406607E8 (EtwTraceDuplicateHandle.c)
 */

__int64 __fastcall ObCompleteObjectDuplication(__int64 *a1, ULONG_PTR a2, unsigned __int8 a3, __int64 *a4, int *a5)
{
  unsigned __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r9
  bool v12; // r12
  int v13; // esi
  __int64 v14; // r10
  __int64 v15; // r15
  __int64 v16; // rax
  int v17; // edx
  int v18; // r10d
  __int64 Handle; // r14
  int v20; // edx
  int *v21; // rcx
  int v22; // eax
  __int64 v24; // r9
  int v25; // eax
  int v26; // [rsp+20h] [rbp-40h]
  int v27; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+48h] [rbp-18h]
  _QWORD v29[2]; // [rsp+50h] [rbp-10h] BYREF
  int v30; // [rsp+A8h] [rbp+48h] BYREF

  *a4 = 0LL;
  v9 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)a2);
  v10 = v9;
  if ( v9 )
  {
    v11 = a1[2];
    v12 = v9 == ObpKernelHandleTable;
    v30 = *((_DWORD *)a1 + 6);
    v13 = ObpIncrementHandleCountEx(2u, (__int64)&v30, a2, v11, a3, *((_DWORD *)a1 + 8), 0LL);
    if ( v13 >= 0 )
    {
      v14 = a1[2];
      v15 = v14 - 48;
      v16 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v14 - 48 + 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v14 - 48) >> 8)];
      v29[1] = v29;
      v29[0] = v29;
      v28 = v16;
      if ( !ObpFilterOperation(v16) )
      {
LABEL_4:
        ObfReferenceObjectWithTag((PVOID)a1[2], 0x6E48624Fu);
        Handle = ExCreateHandleEx(v10, v15, v30, *((_DWORD *)a1 + 8), *((_DWORD *)a1 + 7));
        if ( Handle )
        {
          if ( (a1[4] & 4) != 0 && SeAuditingWithTokenForSubcategory(123, 0LL) )
            SeAuditHandleDuplication(a1[1], Handle, *a1, a2, v26);
        }
        else
        {
          ObfDereferenceObjectWithTag((PVOID)a1[2], 0x7544624Fu);
          ObpDecrementHandleCount((_KPROCESS *)a2, v15);
          v13 = -1073741670;
        }
        if ( v12 )
          Handle |= 0xFFFFFFFF80000000uLL;
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 736));
        if ( (_QWORD *)v29[0] != v29 )
        {
          LOBYTE(v20) = v12;
          ObpPostInterceptHandleDuplicate(a1[2], v20, v13, v30, (__int64)v29);
        }
        if ( v13 >= 0 )
        {
          v21 = a5;
          v22 = v30;
          *a4 = Handle;
          *v21 = v22;
        }
        if ( (xmmword_140382290 & 0x40) != 0 && v13 >= 0 )
          EtwTraceDuplicateHandle(a1[1], Handle, a1[2], *(_DWORD *)(*a1 + 744), *(_DWORD *)(a2 + 744), v28);
        return (unsigned int)v13;
      }
      v24 = *a1;
      LOBYTE(v17) = v12;
      v27 = v30;
      v13 = ObpPreInterceptHandleDuplicate(v18, v17, (unsigned int)&v27, v24, a2, (__int64)v29);
      if ( v13 >= 0 )
      {
        v25 = v30;
        if ( !v12 )
          v25 = v27;
        v30 = v25;
        goto LABEL_4;
      }
      ObpDecrementHandleCount((_KPROCESS *)a2, v15);
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 736));
    return (unsigned int)v13;
  }
  return 3221225738LL;
}
