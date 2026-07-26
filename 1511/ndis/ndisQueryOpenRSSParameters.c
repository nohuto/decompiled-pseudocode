/*
 * XREFs of ndisQueryOpenRSSParameters @ 0x1C00448F8
 * Callers:
 *     ndisOidPreRSSParameters @ 0x1C00AAB00 (ndisOidPreRSSParameters.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisQueryOpenRSSParameters(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // esi
  KIRQL v6; // r15
  __int64 v7; // rdx
  unsigned int v8; // edi

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qq(0x86u, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v2, a2);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
  *(_QWORD *)(v2 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v2 + 1856) = 2304752;
  if ( *(_WORD *)(v2 + 2730) )
  {
    v7 = *(_QWORD *)(a1 + 488);
    if ( v7 )
    {
      v8 = *(_DWORD *)(v7 + 16) + *(unsigned __int16 *)(v7 + 12);
      if ( v8 <= *(_DWORD *)(v7 + 24) + (unsigned int)*(unsigned __int16 *)(v7 + 20) )
        v8 = *(_DWORD *)(v7 + 24) + *(unsigned __int16 *)(v7 + 20);
      if ( *(_BYTE *)(v7 + 1) >= 2u && v8 <= *(_DWORD *)(v7 + 28) + *(_DWORD *)(v7 + 32) * *(_DWORD *)(v7 + 36) )
        v8 = *(_DWORD *)(v7 + 28) + *(_DWORD *)(v7 + 32) * *(_DWORD *)(v7 + 36);
      if ( *(_DWORD *)(a2 + 48) >= v8 )
      {
        memmove(*(void **)(a2 + 40), (const void *)v7, v8);
        *(_DWORD *)(a2 + 52) = v8;
      }
      else
      {
        *(_DWORD *)(a2 + 56) = v8;
        v3 = -1073676268;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 52) = 0;
    }
    *(_QWORD *)(v2 + 520) = 0LL;
    *(_DWORD *)(v2 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v6);
  }
  else
  {
    *(_QWORD *)(v2 + 520) = 0LL;
    *(_DWORD *)(v2 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v6);
    v3 = -1073741637;
    *(_DWORD *)(a2 + 52) = 0;
  }
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qD(0x87u, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v2, v3);
  return v3;
}
