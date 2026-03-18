/*
 * XREFs of SmpKeyedStoreCreate @ 0x1404D1574
 * Callers:
 *     SmProcessCreateNotification @ 0x14044F374 (SmProcessCreateNotification.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     SmpKeyedStoreEntryGet @ 0x1400926A8 (SmpKeyedStoreEntryGet.c)
 *     MiDeleteSubsection @ 0x1400E9408 (MiDeleteSubsection.c)
 *     SmAlloc @ 0x1400F85A0 (SmAlloc.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14010267C (SmKmStoreDeleteWhenEmpty.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     SmpDirtyStoreCreate @ 0x1404D1658 (SmpDirtyStoreCreate.c)
 */

__int64 __fastcall SmpKeyedStoreCreate(__int64 BugCheckParameter2, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rsi
  int v6; // edi
  _QWORD *v7; // rax
  int v8; // ebx
  __int64 v9; // rax
  __int64 v11; // rbx
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF
  int v13; // [rsp+58h] [rbp+20h] BYREF

  v12 = a3;
  v13 = -1;
  v5 = 0LL;
  if ( SmpKeyedStoreEntryGet(BugCheckParameter2, &v12, 0, 0) )
    return (unsigned int)-1073741791;
  v6 = SmpDirtyStoreCreate(a2, 512LL, 1LL, &v13);
  if ( v6 >= 0 )
  {
    v7 = SmAlloc(0x30uLL, 0x53506D73u);
    v5 = v7;
    if ( v7 )
    {
      memset(v7, 0, 0x30uLL);
      v8 = v13;
      v5[1] = v12;
      *((_WORD *)v5 + 8) = v8;
      v9 = SmpKeyedStoreEntryGet(BugCheckParameter2, v5 + 1, 1, 0);
      if ( (_QWORD *)v9 == v5 )
      {
        v8 = -1;
        v5 = 0LL;
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
  v8 = v13;
LABEL_6:
  if ( v8 != -1 )
  {
    v11 = 176LL * (v8 & 0x1F);
    SmKmStoreDeleteWhenEmpty(a2, *(_DWORD **)(v11 + a2), 1);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v11 + a2 + 8));
  }
  if ( v5 )
    MiDeleteSubsection((PPRIVILEGE_SET)v5);
  return (unsigned int)v6;
}
