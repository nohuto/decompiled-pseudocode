/*
 * XREFs of ndisEnumerateInterfaces32 @ 0x1C00F1D98
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C00E5000 (ndisHandlePnPRequest.c)
 * Callees:
 *     memmove @ 0x1C0023700 (memmove.c)
 *     memset @ 0x1C0023A40 (memset.c)
 */

__int64 __fastcall ndisEnumerateInterfaces32(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r14
  _DWORD *v5; // r12
  __int64 v7; // r15
  KIRQL v8; // al
  struct _NDIS_M_DRIVER_BLOCK *v9; // rbp
  _DWORD *v10; // r15
  unsigned int v11; // r12d
  KSPIN_LOCK *p_SpinLock; // r13
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rdi
  char *v14; // r13
  unsigned int v15; // edx
  __int64 Length; // rax
  char *v17; // r13
  __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  KIRQL v21; // [rsp+68h] [rbp+10h]
  char *v23; // [rsp+78h] [rbp+20h]

  v3 = 0;
  v4 = a2;
  *a3 = 0;
  v5 = a3;
  if ( a2 >= 0x20 )
  {
    v7 = a2;
    memset(a1, 0, a2);
    v23 = (char *)a1 + v4;
    v8 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v9 = ndisMiniDriverList;
    v21 = v8;
    if ( ndisMiniDriverList )
    {
      v10 = a1 + 4;
      v11 = v4 - 32;
      do
      {
        p_SpinLock = &v9->Ref.SpinLock;
        KeAcquireSpinLockAtDpcLevel(&v9->Ref.SpinLock);
        MiniportQueue = v9->MiniportQueue;
        if ( MiniportQueue )
        {
          v14 = v23;
          do
          {
            if ( MiniportQueue->PnPDeviceState == NdisPnPDeviceStarted )
            {
              ++a1[1];
              v15 = MiniportQueue->pAdapterInstanceName->Length + MiniportQueue->MiniportName.Length + 16;
              a1[2] += v15;
              if ( v11 >= v15 )
              {
                ++*a1;
                v11 -= v15;
                Length = MiniportQueue->MiniportName.Length;
                v17 = &v14[-Length];
                *(_WORD *)v10 = Length;
                *((_WORD *)v10 + 1) = Length;
                memmove(v17, MiniportQueue->MiniportName.Buffer, (unsigned int)Length);
                v10[1] = (_DWORD)v17 - (_DWORD)a1;
                v18 = MiniportQueue->pAdapterInstanceName->Length;
                *((_WORD *)v10 + 4) = v18;
                v14 = &v17[-v18];
                *((_WORD *)v10 + 5) = v18;
                memmove(v14, MiniportQueue->pAdapterInstanceName->Buffer, (unsigned int)v18);
                v10[3] = (_DWORD)v14 - (_DWORD)a1;
                v10 += 4;
              }
            }
            MiniportQueue = MiniportQueue->NextMiniport;
          }
          while ( MiniportQueue );
          v23 = v14;
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
    v19 = (unsigned int)a1[2];
    *v5 = v4;
    if ( v19 > v7 - 32 )
      return (unsigned int)-2147483643;
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return v3;
}
