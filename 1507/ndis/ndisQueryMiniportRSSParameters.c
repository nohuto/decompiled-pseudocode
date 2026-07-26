/*
 * XREFs of ndisQueryMiniportRSSParameters @ 0x1C0043208
 * Callers:
 *     ndisOidPreRSSParameters @ 0x1C00B0AC0 (ndisOidPreRSSParameters.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     memmove @ 0x1C0023700 (memmove.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisQueryMiniportRSSParameters(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  KIRQL v5; // r15
  __int64 v6; // rdx
  unsigned int v7; // edi

  v3 = 0;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(0x84u, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1, a2);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2304622;
  if ( *(_WORD *)(a1 + 2730) )
  {
    v6 = *(_QWORD *)(a1 + 552);
    if ( v6 )
    {
      v7 = *(_DWORD *)(v6 + 16) + *(unsigned __int16 *)(v6 + 12);
      if ( v7 <= *(_DWORD *)(v6 + 24) + (unsigned int)*(unsigned __int16 *)(v6 + 20) )
        v7 = *(_DWORD *)(v6 + 24) + *(unsigned __int16 *)(v6 + 20);
      if ( *(_BYTE *)(v6 + 1) >= 2u && v7 <= *(_DWORD *)(v6 + 28) + *(_DWORD *)(v6 + 32) * *(_DWORD *)(v6 + 36) )
        v7 = *(_DWORD *)(v6 + 28) + *(_DWORD *)(v6 + 32) * *(_DWORD *)(v6 + 36);
      if ( *(_DWORD *)(a2 + 48) >= v7 )
      {
        memmove(*(void **)(a2 + 40), (const void *)v6, v7);
        *(_DWORD *)(a2 + 52) = v7;
      }
      else
      {
        *(_DWORD *)(a2 + 56) = v7;
        v3 = -1073676268;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 52) = 0;
    }
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v5);
  }
  else
  {
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v5);
    v3 = -1073741637;
    *(_DWORD *)(a2 + 52) = 0;
  }
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qD(0x85u, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1, v3);
  return v3;
}
