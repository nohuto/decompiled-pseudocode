/*
 * XREFs of ?ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z @ 0x1C00DA1DC
 * Callers:
 *     ndisOidPrePDCloseProvider @ 0x1C00DB3A0 (ndisOidPrePDCloseProvider.c)
 *     ndisOidPrePDOpenProvider @ 0x1C00DB6E0 (ndisOidPrePDOpenProvider.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A5350 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A5884 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 */

struct NDIS_PD_CLIENT *__fastcall ndisFindPDClientViaClientDriverHandle(void *a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rdx
  KLockHolder v5; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v5, (struct KPushLockBase *)(qword_1C00837E0 + 8));
  v3 = *(_QWORD **)(qword_1C00837E0 + 16);
  while ( v3 != (_QWORD *)(qword_1C00837E0 + 16) )
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
