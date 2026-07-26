/*
 * XREFs of ndisOidPostRcvFilterClearFilter @ 0x1C003D050
 * Callers:
 *     <none>
 * Callees:
 *     ndisClearReceiveFilter @ 0x1C003C9C4 (ndisClearReceiveFilter.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004F098 (ndisBugCheckEx.c)
 */

void __fastcall ndisOidPostRcvFilterClearFilter(__int64 a1)
{
  __int64 v1; // rsi
  ULONG_PTR v3; // rbx
  __int64 v4; // r9
  KIRQL v5; // dl

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    v4 = *(unsigned int *)(a1 + 40);
    if ( !(_DWORD)v4 || (_DWORD)v4 == 65539 && (*(_DWORD *)(v3 + 120) & 4) != 0 )
    {
      ndisClearReceiveFilter(*(_QWORD *)a1, *(_DWORD *)(*(_QWORD *)(v1 + 40) + 12LL));
      *(_DWORD *)(a1 + 40) = 0;
    }
    else
    {
      if ( (unsigned __int8)byte_1C00895D2 >= 2u )
        WPP_SF_qD(24LL, &WPP_e0b1f8b808d7390f894176100c6a8720_Traceguids, v3, v4);
      v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
      *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v3 + 1856) = 2689964;
      if ( (*(_BYTE *)(v1 + 90) & 1) != 0
        && (*(_DWORD *)(v3 + 124) & 0x1000000) == 0
        && (*(_BYTE *)(*(_QWORD *)(v3 + 3816) + 26LL) & 1) == 0 )
      {
        DbgPrintEx(
          0x78u,
          0,
          " ***NDIS*** : Miniport %Z - %s\n",
          *(_QWORD *)(v3 + 3912),
          "Miniport has failed OID_RECEIVE_FILTER_CLEAR_FILTER");
        ndisBugCheckEx(0x1CuLL, v3, *(unsigned int *)(v1 + 32), *(int *)(a1 + 40));
      }
      *(_QWORD *)(v3 + 520) = 0LL;
      *(_DWORD *)(v3 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v5);
    }
  }
}
