/*
 * XREFs of ?ndisNsiGetIfNameForIfIndex@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000F830
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

__int64 __fastcall ndisNsiGetIfNameForIfIndex(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  unsigned int v2; // edi
  int v3; // esi
  KIRQL v4; // r8
  struct _LIST_ENTRY *i; // rax

  v2 = 0;
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_q(90LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1);
  if ( *((_DWORD *)a1 + 6) == 4
    && *((_DWORD *)a1 + 8) == 2
    && *((_QWORD *)a1 + 5)
    && *((_DWORD *)a1 + 12) == 8
    && !*((_DWORD *)a1 + 13)
    && !*((_DWORD *)a1 + 14) )
  {
    v3 = **((_DWORD **)a1 + 2);
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    for ( i = ndisIfList.Flink; ; i = i->Flink )
    {
      if ( i == &ndisIfList )
        goto LABEL_13;
      if ( HIDWORD(i[-77].Flink) == v3 )
        break;
    }
    if ( i == (struct _LIST_ENTRY *)1232 )
    {
LABEL_13:
      v2 = -1073741772;
      goto LABEL_16;
    }
    **((_QWORD **)a1 + 5) = i[5].Flink;
LABEL_16:
    KeReleaseSpinLock(&ndisIfListLock, v4);
  }
  else
  {
    v2 = -1073741811;
  }
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_qD(91LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1, v2);
  return v2;
}
