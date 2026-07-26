/*
 * XREFs of NdisFreeSharedMemory @ 0x1C0046080
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ndisDereferenceDmaAdapter @ 0x1C005BD10 (ndisDereferenceDmaAdapter.c)
 */

void __stdcall NdisFreeSharedMemory(NDIS_HANDLE NdisHandle, NDIS_HANDLE AllocationHandle)
{
  NDIS_HANDLE v4; // rbp
  int v5; // ecx
  _QWORD *v6; // rsi
  __int64 v7; // rcx
  KIRQL v8; // r9
  _QWORD *v9; // rdx
  NDIS_HANDLE *v10; // rcx
  NDIS_HANDLE *v11; // rdx
  NDIS_HANDLE *v12; // rcx
  NDIS_HANDLE *v13; // r8
  NDIS_HANDLE *v14; // rdx

  v4 = 0LL;
  if ( (unsigned __int8)byte_1C008531C >= 4u )
    WPP_SF_q(0x17u, &WPP_e661d27027f753e153c509da19b80f2a_Traceguids, (__int64)AllocationHandle);
  if ( NdisHandle )
  {
    if ( *(_BYTE *)NdisHandle == 18 )
    {
      v4 = NdisHandle;
      NdisHandle = (NDIS_HANDLE)*((_QWORD *)NdisHandle + 2);
    }
    else if ( *(_BYTE *)NdisHandle != 17 )
    {
      goto LABEL_28;
    }
    if ( AllocationHandle )
    {
      v5 = *((_DWORD *)AllocationHandle + 12);
      if ( (v5 & 0xF) == 1 )
      {
        v6 = (_QWORD *)*((_QWORD *)NdisHandle + 63);
        if ( !v6 )
          goto LABEL_28;
        v7 = v6[3];
        if ( !v7 )
          goto LABEL_28;
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, char))(*(_QWORD *)(v7 + 8) + 24LL))(
          v7,
          *((unsigned int *)AllocationHandle + 36),
          *((_QWORD *)AllocationHandle + 13),
          *((_QWORD *)AllocationHandle + 19),
          1);
        ndisDereferenceDmaAdapter(v6);
        goto LABEL_19;
      }
      if ( (v5 & 0xF) == 2 )
      {
        MmFreeContiguousMemorySpecifyCache(
          *((PVOID *)AllocationHandle + 19),
          *((unsigned int *)AllocationHandle + 36),
          MmCached);
        goto LABEL_19;
      }
      if ( (v5 & 4) != 0 )
      {
        if ( v4 )
          goto LABEL_19;
      }
      else if ( (v5 & 8) == 0 )
      {
        goto LABEL_28;
      }
      (*((void (__fastcall **)(_QWORD, _QWORD))AllocationHandle + 10))(
        *((_QWORD *)AllocationHandle + 11),
        *((_QWORD *)AllocationHandle + 12));
LABEL_19:
      v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisHandle + 12);
      *((_QWORD *)NdisHandle + 65) = KeGetCurrentThread();
      *((_DWORD *)NdisHandle + 464) = 1836944;
      v9 = *(_QWORD **)AllocationHandle;
      v10 = (NDIS_HANDLE *)*((_QWORD *)AllocationHandle + 1);
      if ( *(NDIS_HANDLE *)(*(_QWORD *)AllocationHandle + 8LL) != AllocationHandle || *v10 != AllocationHandle )
        __fastfail(3u);
      *v10 = v9;
      v9[1] = v10;
      if ( v4 )
      {
        v11 = (NDIS_HANDLE *)*((_QWORD *)AllocationHandle + 2);
        v12 = (NDIS_HANDLE *)*((_QWORD *)AllocationHandle + 3);
        if ( v11[1] != (char *)AllocationHandle + 16 || *v12 != (char *)AllocationHandle + 16 )
          __fastfail(3u);
        *v12 = v11;
        v11[1] = v12;
      }
      v13 = (NDIS_HANDLE *)*((_QWORD *)AllocationHandle + 4);
      v14 = (NDIS_HANDLE *)*((_QWORD *)AllocationHandle + 5);
      if ( v13[1] != (char *)AllocationHandle + 32 || *v14 != (char *)AllocationHandle + 32 )
        __fastfail(3u);
      *v14 = v13;
      v13[1] = v14;
      *((_QWORD *)NdisHandle + 65) = 0LL;
      *((_DWORD *)NdisHandle + 464) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)NdisHandle + 12, v8);
      ExFreePoolWithTag(AllocationHandle, 0);
    }
  }
LABEL_28:
  if ( (unsigned __int8)byte_1C008531C >= 4u )
    WPP_SF_(0x18u, &WPP_e661d27027f753e153c509da19b80f2a_Traceguids);
}
