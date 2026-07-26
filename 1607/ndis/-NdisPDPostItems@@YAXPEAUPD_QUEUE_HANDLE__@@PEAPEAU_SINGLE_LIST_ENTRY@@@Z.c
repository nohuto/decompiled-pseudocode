/*
 * XREFs of ?NdisPDPostItems@@YAXPEAUPD_QUEUE_HANDLE__@@PEAPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C00703D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

void __fastcall NdisPDPostItems(struct PD_QUEUE_HANDLE__ *a1, struct _SINGLE_LIST_ENTRY **a2)
{
  unsigned int v2; // r8d
  struct _SINGLE_LIST_ENTRY *v4; // rdi
  int v6; // edx
  int i; // ecx
  __int64 v8; // rax

  v2 = *((_DWORD *)a1 + 16);
  v4 = *a2;
  v6 = *((_DWORD *)a1 + 13);
  for ( i = v6 & (*((_DWORD *)a1 + 15) - v2 - 1); v4 && i; --i )
  {
    v8 = v2;
    v2 = v6 & (v2 + 1);
    *((_QWORD *)a1 + v8 + 24) = v4;
    v4 = v4->Next;
  }
  *((_DWORD *)a1 + 16) = v2;
  if ( *((_QWORD *)a1 + 5) && _InterlockedCompareExchange((volatile signed __int32 *)a1 + 14, 0, 1) == 1 )
  {
    if ( (unsigned __int8)byte_1C00895E4 >= 5u )
      WPP_SF_q(0x62u, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, (__int64)a1);
    KeSetEvent(*((PRKEVENT *)a1 + 5), 2, 0);
  }
  *a2 = v4;
}
