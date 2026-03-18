/*
 * XREFs of AcpiPccAcquireSubspaceCore @ 0x1C003E178
 * Callers:
 *     AcpiPccAcquireSubspaceAsync @ 0x1C003E170 (AcpiPccAcquireSubspaceAsync.c)
 *     AcpiPccAcquireSubspace @ 0x1C007BEB0 (AcpiPccAcquireSubspace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AcpiPccAcquireSubspaceCore(unsigned int *a1, int *a2, __int64 a3, int **a4)
{
  unsigned int v8; // ebx
  KSPIN_LOCK *v9; // r14
  KIRQL v10; // al
  unsigned int v11; // ecx
  KIRQL v12; // r15
  int v13; // edx
  int **v14; // rax
  int *v15; // rdi
  unsigned int v16; // ecx

  if ( a2 )
  {
    v9 = (KSPIN_LOCK *)(a1 + 130);
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 65);
    v11 = *a1;
    v12 = v10;
    v13 = (*a1 >> 2) & 0xF;
    if ( v13 == 3 )
    {
      *((_QWORD *)a1 + 16) = a2;
      *((_QWORD *)a1 + 17) = a3;
      *a1 = v11 & 0xFFFFFFC3 | 0x10;
      v8 = 259;
      KeInsertQueueDpc((PRKDPC)a1 + 7, 0LL, 0LL);
LABEL_16:
      KeReleaseSpinLock(v9, v12);
      return v8;
    }
    if ( a4 )
    {
      v14 = (int **)*((_QWORD *)a1 + 15);
      v15 = (int *)(a1 + 28);
      *a4 = v15;
      a4[1] = (int *)v14;
      if ( *v14 != v15 )
        __fastfail(3u);
      *v14 = (int *)a4;
      *((_QWORD *)v15 + 1) = a4;
      a4[6] = a2;
    }
    else
    {
      if ( (unsigned int)(v13 - 8) > 1 )
      {
        v8 = -1073740024;
        goto LABEL_16;
      }
      if ( v13 == 8 )
        v16 = v11 & 0xFFFFFFC3 | 0x28;
      else
        v16 = v11 & 0xFFFFFFC3 | 0x2C;
      *a1 = v16;
      *((_QWORD *)a1 + 16) = a2;
      *((_QWORD *)a1 + 17) = a3;
    }
    v8 = 259;
    goto LABEL_16;
  }
  return (unsigned int)-1073741811;
}
