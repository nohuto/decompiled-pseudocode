/*
 * XREFs of SmpKeyedStoreCreate @ 0x1403E4B74
 * Callers:
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 * Callees:
 *     SmAlloc @ 0x1400022D0 (SmAlloc.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x140002FD0 (SmKmStoreDeleteWhenEmpty.c)
 *     SmKmStoreDereference @ 0x1400030FC (SmKmStoreDereference.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140003390 (SmKmStoreRefFromStoreIndex.c)
 *     MiDeleteSubsection @ 0x1400A6E14 (MiDeleteSubsection.c)
 *     SmpKeyedStoreEntryGet @ 0x1400C715C (SmpKeyedStoreEntryGet.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SmpDirtyStoreCreate @ 0x1403E4C3C (SmpDirtyStoreCreate.c)
 */

__int64 __fastcall SmpKeyedStoreCreate(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rdi
  int v7; // ebx
  _QWORD *v8; // rax
  int v9; // esi
  _DWORD **v11; // rax
  __int64 v12; // rcx
  int v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = -1;
  v6 = 0LL;
  v7 = SmpDirtyStoreCreate(a2, 512LL, 1LL, &v13);
  if ( v7 < 0 )
    goto LABEL_11;
  v8 = SmAlloc(0x30uLL, 0x53506D73u);
  v6 = v8;
  if ( !v8 )
  {
    v7 = -1073741670;
LABEL_11:
    v9 = v13;
    goto LABEL_5;
  }
  memset(v8, 0, 0x30uLL);
  v6[1] = a3;
  v9 = v13;
  *((_WORD *)v6 + 8) = v13;
  if ( SmpKeyedStoreEntryGet(BugCheckParameter2, v6 + 1, 1, 0) )
  {
    v9 = -1;
    v6 = 0LL;
    v7 = 0;
  }
  else
  {
    v7 = -1073741670;
  }
LABEL_5:
  if ( v9 != -1 )
  {
    v11 = (_DWORD **)SmKmStoreRefFromStoreIndex(a2, v9 & 0x3FF);
    SmKmStoreDeleteWhenEmpty(v12, *v11);
    SmKmStoreDereference(a2, v9);
  }
  if ( v6 )
    MiDeleteSubsection((PPRIVILEGE_SET)v6);
  return (unsigned int)v7;
}
