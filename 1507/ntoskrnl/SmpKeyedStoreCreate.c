/*
 * XREFs of SmpKeyedStoreCreate @ 0x1404F9F74
 * Callers:
 *     SmProcessCreateNotification @ 0x140469E2C (SmProcessCreateNotification.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     SmAlloc @ 0x1400D9FF4 (SmAlloc.c)
 *     SmpKeyedStoreEntryGet @ 0x1400F0084 (SmpKeyedStoreEntryGet.c)
 *     ExFreePoolEx @ 0x140123144 (ExFreePoolEx.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14012A8A0 (SmKmStoreDeleteWhenEmpty.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SmpDirtyStoreCreate @ 0x1404F9E70 (SmpDirtyStoreCreate.c)
 */

__int64 __fastcall SmpKeyedStoreCreate(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rsi
  int v6; // edi
  _QWORD *v7; // rax
  int v8; // ebx
  __int64 v9; // rax
  __int64 v11; // rbx
  struct _EX_RUNDOWN_REF *v12; // rcx
  unsigned __int64 v13; // rtt
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF
  int v15; // [rsp+58h] [rbp+20h] BYREF

  v14 = a3;
  v15 = -1;
  v5 = 0LL;
  if ( SmpKeyedStoreEntryGet(BugCheckParameter2, &v14, 0, 0LL) )
    return (unsigned int)-1073741791;
  v6 = SmpDirtyStoreCreate(a2, 0x200u, 1, &v15);
  if ( v6 >= 0 )
  {
    v7 = SmAlloc(0x30uLL, 0x53506D73u);
    v5 = v7;
    if ( v7 )
    {
      memset(v7, 0, 0x30uLL);
      v8 = v15;
      v5[1] = v14;
      *((_WORD *)v5 + 8) = v8;
      v9 = SmpKeyedStoreEntryGet(BugCheckParameter2, v5 + 1, 1, 0LL);
      if ( (_QWORD *)v9 == v5 )
      {
        v8 = -1;
        v5 = 0LL;
        v15 = -1;
        v6 = 0;
      }
      else
      {
        v6 = v9 != 0 ? -1073741791 : -1073741670;
      }
      goto LABEL_6;
    }
    v6 = -1073741670;
  }
  v8 = v15;
LABEL_6:
  if ( v8 != -1 )
  {
    v11 = 176LL * (v8 & 0x1F);
    SmKmStoreDeleteWhenEmpty(a2, *(_DWORD **)(v11 + a2), 1);
    v12 = (struct _EX_RUNDOWN_REF *)(v11 + a2 + 8);
    _m_prefetchw(v12);
    v13 = v12->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v13 != _InterlockedCompareExchange64((volatile signed __int64 *)v12, v13 - 2, v13) )
      ExfReleaseRundownProtection(v12);
  }
  if ( v5 )
    ExFreePoolEx((PPRIVILEGE_SET)v5);
  return (unsigned int)v6;
}
