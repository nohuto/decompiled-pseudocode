/*
 * XREFs of ndisOidPrePDQueryConfig @ 0x1C006D480
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     WPP_SF_qqqqq @ 0x1C003F4F0 (WPP_SF_qqqqq.c)
 *     WPP_SF_qdd @ 0x1C006CB58 (WPP_SF_qdd_ea_1C006CB58.c)
 *     WPP_SF_qqqqDd @ 0x1C006D10C (WPP_SF_qqqqDd.c)
 */

unsigned __int8 __fastcall ndisOidPrePDQueryConfig(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  unsigned __int8 v4; // bl
  __int64 v5; // r14
  KIRQL v6; // r12
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+30h] [rbp-28h]
  int v13; // [rsp+38h] [rbp-20h]

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  if ( (unsigned __int8)byte_1C0083724 >= 4u )
    WPP_SF_qqqqq(
      0x43u,
      &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids,
      v1,
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(a1 + 8),
      *(_QWORD *)(a1 + 24),
      v3);
  if ( *(_QWORD *)a1 )
  {
    v5 = *(_QWORD *)(v1 + 5488);
    if ( !*(_DWORD *)(v3 + 4) )
    {
      if ( (*(_DWORD *)(v3 + 88) & 0x4000) == 0 && (*(_BYTE *)(v3 + 1) < 2u || *(_WORD *)(v3 + 2) < 0xF8u)
        || (*(_DWORD *)(v3 + 244) & 1) == 0
        || *(_DWORD *)(v3 + 236)
        || *(_DWORD *)(v3 + 240) != -1 )
      {
        *(_DWORD *)(a1 + 40) = -1073741811;
        goto LABEL_21;
      }
      if ( v5 )
      {
        v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
        *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
        *(_DWORD *)(v1 + 1856) = 4002933;
        v7 = *(_DWORD *)(v5 + 32);
        if ( v7 )
        {
          if ( *(_DWORD *)(v3 + 48) >= v7 )
          {
            memmove(*(void **)(v3 + 40), *(const void **)(v5 + 24), *(unsigned int *)(v5 + 32));
            *(_DWORD *)(v3 + 52) = *(_DWORD *)(v5 + 32);
            if ( (unsigned __int8)byte_1C0083724 >= 4u )
            {
              v9 = *(_QWORD *)(v5 + 24);
              LODWORD(v11) = *(_DWORD *)(v9 + 16);
              WPP_SF_qdd(0x44u, v8, v1, *(unsigned __int8 *)(v9 + 8), v11);
            }
            *(_QWORD *)(v1 + 520) = 0LL;
            *(_DWORD *)(v1 + 1856) = 0;
            KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v6);
            *(_DWORD *)(a1 + 40) = 0;
          }
          else
          {
            *(_QWORD *)(v1 + 520) = 0LL;
            *(_DWORD *)(v1 + 1856) = 0;
            KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v6);
            *(_DWORD *)(v3 + 56) = *(_DWORD *)(v5 + 32);
            *(_DWORD *)(a1 + 40) = -1073676266;
          }
          goto LABEL_21;
        }
        *(_QWORD *)(v1 + 520) = 0LL;
        *(_DWORD *)(v1 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v6);
      }
    }
    *(_DWORD *)(a1 + 40) = -1073741637;
LABEL_21:
    v4 = 1;
  }
  if ( (unsigned __int8)byte_1C0083724 >= 4u )
  {
    v13 = *(_DWORD *)(a1 + 40);
    LODWORD(v12) = v4;
    WPP_SF_qqqqDd(
      0x45u,
      *(_QWORD *)(a1 + 8),
      v1,
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(a1 + 8),
      *(_QWORD *)(a1 + 24),
      v12,
      v13);
  }
  return v4;
}
