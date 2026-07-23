/*
 * XREFs of PiPnpRtlObjectEventCreate @ 0x1404E4568
 * Callers:
 *     PiPnpRtlCacheObjectBaseKey @ 0x1404E2934 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404E769C (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14062EA84 (PiPnpRtlEnsureObjectCached.c)
 * Callees:
 *     RtlLookupElementGenericTableFullAvl @ 0x1400C1D30 (RtlLookupElementGenericTableFullAvl.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x1400C2150 (RtlInsertElementGenericTableFullAvl.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PiDmObjectRelease @ 0x1404E1F50 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x1404E1F90 (PiDmGetObject.c)
 *     PiDmInitializeComparisonObject @ 0x1404E20C8 (PiDmInitializeComparisonObject.c)
 *     PiPnpRtlObjectEventRelease @ 0x1404E4DC8 (PiPnpRtlObjectEventRelease.c)
 */

__int64 __fastcall PiPnpRtlObjectEventCreate(wchar_t *a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  unsigned int *v5; // rdi
  NTSTATUS v9; // ebx
  _QWORD *v10; // rax
  int Object; // eax
  PVOID PoolWithTag; // rax
  _DWORD *v13; // rdi
  PVOID v14; // rax
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  TABLE_SEARCH_RESULT SearchResult; // [rsp+38h] [rbp-C8h] BYREF
  PVOID v18; // [rsp+40h] [rbp-C0h] BYREF
  PVOID NodeOrParent; // [rsp+48h] [rbp-B8h] BYREF
  char *Buffer; // [rsp+50h] [rbp-B0h] BYREF
  char v21; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE *v22; // [rsp+68h] [rbp-98h]
  _BYTE v23[112]; // [rsp+B0h] [rbp-50h] BYREF

  NodeOrParent = 0LL;
  Buffer = &v21;
  v5 = 0LL;
  *a4 = 0LL;
  P = 0LL;
  v9 = PiDmInitializeComparisonObject(a1, a2, (__int64)v23);
  if ( v9 >= 0 )
  {
    v22 = v23;
    v10 = RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)(a3 + 24), &Buffer, &NodeOrParent, &SearchResult);
    if ( v10 )
      v10 = (_QWORD *)*v10;
    if ( v10 )
      goto LABEL_10;
    Object = PiDmGetObject(a2, (__int64)a1, &P);
    v9 = Object;
    if ( Object == -1073741772 )
    {
      v5 = (unsigned int *)P;
      v9 = 0;
      goto LABEL_18;
    }
    if ( Object >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xF0uLL, 0x41706E50u);
      v18 = PoolWithTag;
      v13 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x50uLL);
        v14 = P;
        *v13 = 1;
        v13[18] = 5;
        *((_QWORD *)v13 + 1) = v14;
        v5 = 0LL;
        if ( RtlInsertElementGenericTableFullAvl((PRTL_AVL_TABLE)(a3 + 24), &v18, 8u, 0LL, NodeOrParent, SearchResult) )
        {
          v10 = v18;
LABEL_10:
          *a4 = v10;
          return (unsigned int)v9;
        }
        v9 = -1073741670;
        if ( v18 )
          PiPnpRtlObjectEventRelease(v18);
        goto LABEL_17;
      }
      v9 = -1073741670;
    }
    v5 = (unsigned int *)P;
  }
LABEL_17:
  *a4 = 0LL;
LABEL_18:
  if ( v5 )
    PiDmObjectRelease(v5);
  return (unsigned int)v9;
}
