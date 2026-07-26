/*
 * XREFs of ndisOidPreSetPortAuthentication @ 0x1C0044090
 * Callers:
 *     <none>
 * Callees:
 *     NdisMIndicateStatusEx @ 0x1C0019810 (NdisMIndicateStatusEx.c)
 *     ndisIfSetInterfaceState @ 0x1C001DA38 (ndisIfSetInterfaceState.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 */

char __fastcall ndisOidPreSetPortAuthentication(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  char v3; // r15
  _DWORD *v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rdx
  KIRQL v8; // cl
  int v9; // eax
  KIRQL v10; // cl
  int v11; // eax
  KIRQL v13; // [rsp+28h] [rbp-89h]
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+38h] [rbp-79h] BYREF
  _DWORD v15[2]; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v16; // [rsp+B0h] [rbp-1h]
  __int64 v17; // [rsp+B8h] [rbp+7h]
  int v18; // [rsp+C0h] [rbp+Fh]
  int v19; // [rsp+C4h] [rbp+13h]
  int v20; // [rsp+C8h] [rbp+17h]
  int v21; // [rsp+CCh] [rbp+1Bh]
  int v22; // [rsp+D0h] [rbp+1Fh]

  v1 = *(_QWORD *)a1;
  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qD(0xBBu, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v1, *(_DWORD *)(v2 + 8));
  if ( *(_QWORD *)a1 )
  {
    if ( (*(_DWORD *)(v2 + 4) & 0xFFFFFFFD) != 0 )
    {
      if ( *(_DWORD *)(v2 + 48) >= 0x14u )
      {
        v5 = *(_DWORD **)(v2 + 40);
        if ( *(_DWORD *)(v2 + 8) )
          goto LABEL_17;
        if ( (*(_DWORD *)(v1 + 124) & 0x8000000) != 0 )
        {
          v6 = *(_QWORD *)(v1 + 16);
          v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 96));
          v13 = v8;
          *(_QWORD *)(v6 + 520) = KeGetCurrentThread();
          v9 = *(_DWORD *)(v6 + 124);
          *(_DWORD *)(v6 + 1856) = 2307267;
          if ( (v9 & 0x80u) == 0 )
          {
            *(_DWORD *)(v6 + 3368) = v5[1];
            LOBYTE(v7) = 1;
            *(_DWORD *)(v6 + 3372) = v5[2];
            *(_DWORD *)(v6 + 3376) = v5[3];
            *(_DWORD *)(v6 + 3380) = v5[4];
            ndisIfSetInterfaceState((const struct _TlgProvider_t *)v6, v7, v8);
            v8 = v13;
          }
          *(_QWORD *)(v6 + 520) = 0LL;
          *(_DWORD *)(v6 + 1856) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), v8);
        }
        v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
        *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
        v11 = *(_DWORD *)(v1 + 124);
        *(_DWORD *)(v1 + 1856) = 2307283;
        if ( (v11 & 0x80u) != 0 )
        {
          *(_QWORD *)(v1 + 520) = 0LL;
          *(_DWORD *)(v1 + 1856) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v10);
          goto LABEL_17;
        }
        *(_DWORD *)(v1 + 3368) = v5[1];
        *(_DWORD *)(v1 + 3372) = v5[2];
        *(_DWORD *)(v1 + 3376) = v5[3];
        *(_DWORD *)(v1 + 3380) = v5[4];
        v15[0] = 3146112;
        v15[1] = *(_DWORD *)(v1 + 480);
        v16 = *(_QWORD *)(v1 + 792);
        v17 = *(_QWORD *)(v1 + 800);
        v18 = *(_DWORD *)(*(_QWORD *)(v1 + 4096) + 532LL);
        v19 = *(_DWORD *)(v1 + 3368);
        v20 = *(_DWORD *)(v1 + 3372);
        v21 = *(_DWORD *)(v1 + 3376);
        v22 = *(_DWORD *)(v1 + 3380);
        *(_QWORD *)(v1 + 520) = 0LL;
        *(_DWORD *)(v1 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v10);
        memset(&StatusIndication, 0, sizeof(StatusIndication));
        StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
        StatusIndication.StatusBuffer = v15;
        StatusIndication.SourceHandle = (void *)v1;
        StatusIndication.StatusCode = 1073807394;
        StatusIndication.StatusBufferSize = 48;
        NdisMIndicateStatusEx((NDIS_HANDLE)v1, &StatusIndication);
        *(_QWORD *)(v2 + 52) = 20LL;
        *(_DWORD *)(a1 + 40) = 0;
      }
      else
      {
        *(_DWORD *)(v2 + 52) = 0;
        *(_DWORD *)(v2 + 56) = 20;
        *(_DWORD *)(a1 + 40) = -1073676268;
      }
    }
    else
    {
      *(_DWORD *)(v2 + 52) = 0;
      *(_DWORD *)(v2 + 56) = 20;
      *(_DWORD *)(a1 + 40) = -1073741637;
    }
    v3 = 1;
  }
LABEL_17:
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qD(0xBCu, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v1, *(_DWORD *)(v2 + 8));
  return v3;
}
