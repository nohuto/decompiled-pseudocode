/*
 * XREFs of ?ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z @ 0x1C00E009C
 * Callers:
 *     ndisOidPrePDCloseProvider @ 0x1C00E1260 (ndisOidPrePDCloseProvider.c)
 *     ndisOidPrePDOpenProvider @ 0x1C00E15A0 (ndisOidPrePDOpenProvider.c)
 * Callees:
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A6E04 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 */

struct NDIS_PD_CLIENT *__fastcall ndisFindPDClientViaClientDriverHandle(void *a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rdx
  KLockThisExclusive v5; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  KLockThisExclusive::KLockThisExclusive(&v5, (struct KPushLockBase *)(qword_1C0089668 + 8));
  v3 = *(_QWORD **)(qword_1C0089668 + 16);
  while ( v3 != (_QWORD *)(qword_1C0089668 + 16) )
  {
    v2 = v3 - 1;
    if ( (void *)v3[10] == a1 )
      break;
    v3 = (_QWORD *)*v3;
    v2 = 0LL;
  }
  KLockHolder::~KLockHolder(&v5);
  return (struct NDIS_PD_CLIENT *)v2;
}
