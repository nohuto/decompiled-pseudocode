/*
 * XREFs of ndisEnumerateInterfaces @ 0x1C00E566C
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C00DF000 (ndisHandlePnPRequest.c)
 * Callees:
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     memset @ 0x1C0026F40 (memset.c)
 */

__int64 __fastcall ndisEnumerateInterfaces(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r15
  __int64 v6; // r13
  _DWORD *v7; // r14
  char *v8; // r12
  KIRQL v9; // al
  struct _NDIS_M_DRIVER_BLOCK *v10; // rbp
  unsigned int v11; // r13d
  _NDIS_MINIPORT_BLOCK *i; // rsi
  unsigned int v13; // edx
  char *v14; // r12
  unsigned int Length; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rax
  KIRQL v22; // [rsp+68h] [rbp+10h]

  v3 = 0;
  v4 = a2;
  *a3 = 0;
  if ( a2 < 0x30 )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    v6 = a2;
    memset(a1, 0, a2);
    v7 = a1 + 4;
    v8 = (char *)a1 + v4;
    v9 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v10 = ndisMiniDriverList;
    v22 = v9;
    if ( ndisMiniDriverList )
    {
      v11 = v4 - 48;
      do
      {
        KeAcquireSpinLockAtDpcLevel(&v10->Ref.SpinLock);
        for ( i = v10->MiniportQueue; i; i = i->NextMiniport )
        {
          if ( i->PnPDeviceState == NdisPnPDeviceStarted )
          {
            ++a1[1];
            v13 = i->pAdapterInstanceName->Length + i->MiniportName.Length + 32;
            a1[2] += v13;
            if ( v11 >= v13 )
            {
              ++*a1;
              v11 -= v13;
              v14 = &v8[-i->MiniportName.Length];
              *((_QWORD *)v7 + 1) = v14;
              Length = i->MiniportName.Length;
              *(_WORD *)v7 = Length;
              *((_WORD *)v7 + 1) = Length;
              memmove(v14, i->MiniportName.Buffer, Length);
              v16 = *((_QWORD *)v7 + 1);
              if ( v16 )
                v17 = v16 - (_QWORD)a1;
              else
                v17 = 0LL;
              *((_QWORD *)v7 + 1) = v17;
              v8 = &v14[-i->pAdapterInstanceName->Length];
              *((_QWORD *)v7 + 3) = v8;
              v18 = i->pAdapterInstanceName->Length;
              *((_WORD *)v7 + 8) = v18;
              *((_WORD *)v7 + 9) = v18;
              memmove(v8, i->pAdapterInstanceName->Buffer, v18);
              v19 = *((_QWORD *)v7 + 3);
              if ( v19 )
                v20 = v19 - (_QWORD)a1;
              else
                v20 = 0LL;
              *((_QWORD *)v7 + 3) = v20;
              v7 += 8;
            }
          }
        }
        KeReleaseSpinLockFromDpcLevel(&v10->Ref.SpinLock);
        v10 = v10->NextDriver;
      }
      while ( v10 );
      v9 = v22;
      v6 = v4;
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v9);
    if ( (unsigned int)a1[2] > (unsigned __int64)(v6 - 48) )
      v3 = -2147483643;
    *a3 = v4;
  }
  return v3;
}
