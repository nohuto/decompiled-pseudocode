/*
 * XREFs of ndisOidPreOffloadCaps @ 0x1C0042380
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qqDD @ 0x1C0037774 (WPP_SF_qqDD.c)
 *     WPP_SF_qqq @ 0x1C00377D0 (WPP_SF_qqq.c)
 *     ndisQueryFilterOffloadCaps @ 0x1C004307C (ndisQueryFilterOffloadCaps.c)
 *     ndisQueryMiniportOffloadCaps @ 0x1C0043144 (ndisQueryMiniportOffloadCaps.c)
 */

unsigned __int8 __fastcall ndisOidPreOffloadCaps(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  __int64 v4; // r15
  __int64 v5; // r14
  unsigned __int8 v6; // bl
  KIRQL v7; // al
  char v8; // bl
  __int64 v10; // [rsp+20h] [rbp-28h]
  int v11; // [rsp+28h] [rbp-20h]

  v1 = *a1;
  v3 = a1[4];
  v4 = a1[3];
  v5 = a1[2];
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qqq(0xD3u, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, v1, v4, v3);
  *((_DWORD *)a1 + 10) = -1073741637;
  v6 = 1;
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) == 0 )
  {
    if ( a1[2] )
    {
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(v5 + 32) + 96LL));
      *(_QWORD *)(*(_QWORD *)(v5 + 32) + 520LL) = KeGetCurrentThread();
      *(_DWORD *)(*(_QWORD *)(v5 + 32) + 1856LL) = 2310278;
      v8 = *(_BYTE *)(v5 + 60);
      *(_QWORD *)(*(_QWORD *)(v5 + 32) + 520LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)(v5 + 32) + 1856LL) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v5 + 32) + 96LL), v7);
      if ( (v8 & 1) != 0 )
      {
        *((_DWORD *)a1 + 10) = ndisQueryFilterOffloadCaps(v5, v3);
        v6 = 1;
      }
      else
      {
        v6 = 0;
        *((_DWORD *)a1 + 10) = 0;
      }
    }
    if ( *a1 )
    {
      *((_DWORD *)a1 + 10) = ndisQueryMiniportOffloadCaps(v1, v3);
      v6 = 1;
    }
  }
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
  {
    v11 = *((_DWORD *)a1 + 10);
    LODWORD(v10) = v6;
    WPP_SF_qqDD(0xD4u, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, v1, v4, v10, v11);
  }
  return v6;
}
