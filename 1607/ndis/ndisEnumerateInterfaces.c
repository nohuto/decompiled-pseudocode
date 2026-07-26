/*
 * XREFs of ndisEnumerateInterfaces @ 0x1C00EBFE0
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C00EBC18 (ndisHandlePnPRequest.c)
 * Callees:
 *     ndisIsCompartmentAccessibleByClient @ 0x1C000D2AC (ndisIsCompartmentAccessibleByClient.c)
 *     ndisGetNsiClientInfo @ 0x1C000D2C0 (ndisGetNsiClientInfo.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     memset @ 0x1C0027500 (memset.c)
 */

__int64 __fastcall ndisEnumerateInterfaces(char *a1, size_t Size, _DWORD *a3)
{
  __int64 v4; // r15
  _DWORD *v5; // rdi
  unsigned int v6; // ebx
  __int64 v7; // r13
  char *v8; // r14
  char *v9; // r12
  KIRQL v10; // al
  struct _NDIS_M_DRIVER_BLOCK *v11; // rbp
  unsigned int v12; // r13d
  _NDIS_MINIPORT_BLOCK *i; // rdi
  unsigned int v14; // edx
  char *v15; // r12
  unsigned int Length; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  KIRQL v24; // [rsp+20h] [rbp-68h]
  _BYTE v26[24]; // [rsp+30h] [rbp-58h] BYREF

  v4 = (unsigned int)Size;
  v5 = a3;
  v6 = 0;
  ndisGetNsiClientInfo((__int64)v26);
  *v5 = 0;
  if ( (unsigned int)v4 < 0x30 )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    v7 = (unsigned int)v4;
    memset(a1, 0, (unsigned int)v4);
    v8 = a1 + 16;
    v9 = &a1[v4];
    v10 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v11 = ndisMiniDriverList;
    v24 = v10;
    if ( ndisMiniDriverList )
    {
      v12 = v4 - 48;
      do
      {
        KeAcquireSpinLockAtDpcLevel(&v11->Ref.SpinLock);
        for ( i = v11->MiniportQueue; i; i = i->NextMiniport )
        {
          if ( i->PnPDeviceState == NdisPnPDeviceStarted
            && ndisIsCompartmentAccessibleByClient((__int64)i->IfBlock->Compartment, (__int64)v26, 0) )
          {
            ++*((_DWORD *)a1 + 1);
            v14 = i->pAdapterInstanceName->Length + i->MiniportName.Length + 32;
            *((_DWORD *)a1 + 2) += v14;
            if ( v12 >= v14 )
            {
              ++*(_DWORD *)a1;
              v12 -= v14;
              v15 = &v9[-i->MiniportName.Length];
              *((_QWORD *)v8 + 1) = v15;
              Length = i->MiniportName.Length;
              *(_WORD *)v8 = Length;
              *((_WORD *)v8 + 1) = Length;
              memmove(v15, i->MiniportName.Buffer, Length);
              v17 = *((_QWORD *)v8 + 1);
              if ( v17 )
                v18 = v17 - (_QWORD)a1;
              else
                v18 = 0LL;
              *((_QWORD *)v8 + 1) = v18;
              v9 = &v15[-i->pAdapterInstanceName->Length];
              *((_QWORD *)v8 + 3) = v9;
              v19 = i->pAdapterInstanceName->Length;
              *((_WORD *)v8 + 8) = v19;
              *((_WORD *)v8 + 9) = v19;
              memmove(v9, i->pAdapterInstanceName->Buffer, v19);
              v20 = *((_QWORD *)v8 + 3);
              if ( v20 )
                v21 = v20 - (_QWORD)a1;
              else
                v21 = 0LL;
              *((_QWORD *)v8 + 3) = v21;
              v8 += 32;
            }
          }
        }
        KeReleaseSpinLockFromDpcLevel(&v11->Ref.SpinLock);
        v11 = v11->NextDriver;
      }
      while ( v11 );
      v5 = a3;
      v7 = v4;
      v10 = v24;
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v10);
    v22 = *((unsigned int *)a1 + 2);
    *v5 = v4;
    if ( v22 > v7 - 48 )
      return (unsigned int)-2147483643;
  }
  return v6;
}
