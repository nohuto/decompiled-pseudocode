/*
 * XREFs of ObCompleteObjectDuplication @ 0x14053E31C
 * Callers:
 *     AlpcpExposeHandleAttribute @ 0x14047CDC0 (AlpcpExposeHandleAttribute.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceProcessHandleTable @ 0x1404249F8 (ObReferenceProcessHandleTable.c)
 *     ExCreateHandleEx @ 0x140424CD0 (ExCreateHandleEx.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14046E1A4 (SeAuditingWithTokenForSubcategory.c)
 *     ObpIncrementHandleCountEx @ 0x1404952B0 (ObpIncrementHandleCountEx.c)
 *     ObpDecrementHandleCount @ 0x1404D3564 (ObpDecrementHandleCount.c)
 *     ObpPreInterceptHandleDuplicate @ 0x14053E504 (ObpPreInterceptHandleDuplicate.c)
 *     ObpPostInterceptHandleDuplicate @ 0x1406ACE74 (ObpPostInterceptHandleDuplicate.c)
 *     SeAuditHandleDuplication @ 0x1406D1A54 (SeAuditHandleDuplication.c)
 *     EtwTraceDuplicateHandle @ 0x1406E379C (EtwTraceDuplicateHandle.c)
 */

__int64 __fastcall ObCompleteObjectDuplication(__int64 *a1, ULONG_PTR a2, unsigned __int8 a3, __int64 *a4, int *a5)
{
  unsigned __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r9
  bool v12; // r12
  int v13; // edx
  int v14; // edi
  __int64 v15; // r10
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 Handle; // r14
  unsigned __int64 v19; // rax
  int v20; // edx
  int *v21; // rcx
  int v22; // eax
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  unsigned __int64 v28; // rtt
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // [rsp+40h] [rbp-20h] BYREF
  __int64 v32; // [rsp+48h] [rbp-18h]
  _QWORD v33[2]; // [rsp+50h] [rbp-10h] BYREF
  int v34; // [rsp+A8h] [rbp+48h] BYREF

  *a4 = 0LL;
  v9 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)a2);
  v10 = v9;
  if ( v9 )
  {
    v11 = a1[2];
    v12 = v9 == ObpKernelHandleTable;
    v34 = *((_DWORD *)a1 + 6);
    v14 = ObpIncrementHandleCountEx(2u, (__int64)&v34, a2, v11, a3, *((_DWORD *)a1 + 8), 0LL);
    if ( v14 >= 0 )
    {
      v15 = a1[2];
      v16 = v15 - 48;
      v17 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v15 - 48 + 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v15 - 48) >> 8)];
      v33[1] = v33;
      v33[0] = v33;
      v32 = v17;
      if ( (*(_BYTE *)(v17 + 66) & 0x40) == 0 || *(_QWORD *)(v17 + 200) == v17 + 200 )
      {
LABEL_4:
        ObfReferenceObjectWithTag((PVOID)a1[2], 0x6E48624Fu);
        Handle = ExCreateHandleEx(v10, v16, v34, *((_DWORD *)a1 + 8), *((_DWORD *)a1 + 7));
        if ( Handle )
        {
          if ( (a1[4] & 4) != 0 && SeAuditingWithTokenForSubcategory(123, 0LL) )
            SeAuditHandleDuplication(a1[1], Handle, *a1, a2);
        }
        else
        {
          ObfDereferenceObjectWithTag((PVOID)a1[2], 0x7544624Fu);
          ObpDecrementHandleCount((_KPROCESS *)a2, v16, v29, v30);
          v14 = -1073741670;
        }
        if ( v12 )
          Handle |= 0xFFFFFFFF80000000uLL;
        _m_prefetchw((const void *)(a2 + 736));
        v19 = *(_QWORD *)(a2 + 736) & 0xFFFFFFFFFFFFFFFEuLL;
        v20 = v19 - 2;
        if ( v19 != _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 736), v19 - 2, v19) )
          ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(a2 + 736));
        if ( (_QWORD *)v33[0] != v33 )
        {
          LOBYTE(v20) = v12;
          ObpPostInterceptHandleDuplicate(a1[2], v20, v14, v34, (__int64)v33);
        }
        if ( v14 >= 0 )
        {
          v21 = a5;
          v22 = v34;
          *a4 = Handle;
          *v21 = v22;
        }
        if ( (xmmword_1403D1290 & 0x40) != 0 && v14 >= 0 )
          EtwTraceDuplicateHandle(a1[1], Handle, a1[2], *(_DWORD *)(*a1 + 744), *(_DWORD *)(a2 + 744), v32);
        return (unsigned int)v14;
      }
      v24 = *a1;
      LOBYTE(v13) = v12;
      v31 = v34;
      v14 = ObpPreInterceptHandleDuplicate(v15, v13, (unsigned int)&v31, v24, a2, (__int64)v33);
      if ( v14 >= 0 )
      {
        v27 = v34;
        if ( !v12 )
          v27 = v31;
        v34 = v27;
        goto LABEL_4;
      }
      ObpDecrementHandleCount((_KPROCESS *)a2, v16, v25, v26);
    }
    _m_prefetchw((const void *)(a2 + 736));
    v28 = *(_QWORD *)(a2 + 736) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v28 != _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 736), v28 - 2, v28) )
      ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(a2 + 736));
    return (unsigned int)v14;
  }
  return 3221225738LL;
}
