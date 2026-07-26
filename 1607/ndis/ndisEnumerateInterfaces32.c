/*
 * XREFs of ndisEnumerateInterfaces32 @ 0x1C00F2580
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C00EBC18 (ndisHandlePnPRequest.c)
 * Callees:
 *     ndisIsCompartmentAccessibleByClient @ 0x1C000D2AC (ndisIsCompartmentAccessibleByClient.c)
 *     ndisGetNsiClientInfo @ 0x1C000D2C0 (ndisGetNsiClientInfo.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     memset @ 0x1C0027500 (memset.c)
 */

__int64 __fastcall ndisEnumerateInterfaces32(char *a1, size_t Size, _DWORD *a3)
{
  size_t v4; // r14
  _DWORD *v5; // r13
  unsigned int v6; // ebx
  size_t v7; // r15
  KIRQL v8; // al
  struct _NDIS_M_DRIVER_BLOCK *v9; // rbp
  char *v10; // r15
  unsigned int v11; // r13d
  KSPIN_LOCK *p_SpinLock; // r12
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rdi
  char *v14; // r12
  unsigned int v15; // edx
  __int64 Length; // rax
  char *v17; // r12
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  KIRQL v21; // [rsp+20h] [rbp-78h]
  char *v22; // [rsp+28h] [rbp-70h]
  _BYTE v24[24]; // [rsp+38h] [rbp-60h] BYREF

  v4 = (unsigned int)Size;
  v5 = a3;
  v6 = 0;
  ndisGetNsiClientInfo((__int64)v24);
  *v5 = 0;
  if ( (unsigned int)v4 >= 0x20 )
  {
    v7 = v4;
    memset(a1, 0, v4);
    v22 = &a1[v4];
    v8 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v9 = ndisMiniDriverList;
    v21 = v8;
    if ( ndisMiniDriverList )
    {
      v10 = a1 + 16;
      v11 = v4 - 32;
      do
      {
        p_SpinLock = &v9->Ref.SpinLock;
        KeAcquireSpinLockAtDpcLevel(&v9->Ref.SpinLock);
        MiniportQueue = v9->MiniportQueue;
        if ( MiniportQueue )
        {
          v14 = v22;
          do
          {
            if ( MiniportQueue->PnPDeviceState == NdisPnPDeviceStarted
              && ndisIsCompartmentAccessibleByClient((__int64)MiniportQueue->IfBlock->Compartment, (__int64)v24, 0) )
            {
              ++*((_DWORD *)a1 + 1);
              v15 = MiniportQueue->pAdapterInstanceName->Length + MiniportQueue->MiniportName.Length + 16;
              *((_DWORD *)a1 + 2) += v15;
              if ( v11 >= v15 )
              {
                ++*(_DWORD *)a1;
                v11 -= v15;
                Length = MiniportQueue->MiniportName.Length;
                v17 = &v14[-Length];
                *(_WORD *)v10 = Length;
                *((_WORD *)v10 + 1) = Length;
                memmove(v17, MiniportQueue->MiniportName.Buffer, (unsigned int)Length);
                *((_DWORD *)v10 + 1) = (_DWORD)v17 - (_DWORD)a1;
                v18 = MiniportQueue->pAdapterInstanceName->Length;
                *((_WORD *)v10 + 4) = v18;
                v14 = &v17[-v18];
                *((_WORD *)v10 + 5) = v18;
                memmove(v14, MiniportQueue->pAdapterInstanceName->Buffer, (unsigned int)v18);
                *((_DWORD *)v10 + 3) = (_DWORD)v14 - (_DWORD)a1;
                v10 += 16;
              }
            }
            MiniportQueue = MiniportQueue->NextMiniport;
          }
          while ( MiniportQueue );
          v22 = v14;
          p_SpinLock = &v9->Ref.SpinLock;
        }
        KeReleaseSpinLockFromDpcLevel(p_SpinLock);
        v9 = v9->NextDriver;
      }
      while ( v9 );
      v5 = a3;
      v7 = v4;
      v8 = v21;
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v8);
    v19 = *((unsigned int *)a1 + 2);
    *v5 = v4;
    if ( v19 > v7 - 32 )
      return (unsigned int)-2147483643;
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return v6;
}
