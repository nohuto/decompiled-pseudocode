/*
 * XREFs of InitAcpiIdleDomain @ 0x1C0018C68
 * Callers:
 *     AcpiCStateNotifyWorker @ 0x1C0011540 (AcpiCStateNotifyWorker.c)
 *     InitAcpiProcessorDomains @ 0x1C0018D54 (InitAcpiProcessorDomains.c)
 * Callees:
 *     AcpiEval_CSD @ 0x1C001071C (AcpiEval_CSD.c)
 */

__int64 __fastcall InitAcpiIdleDomain(__int64 a1, unsigned int **a2, _DWORD *a3)
{
  int v6; // ebx
  __int64 v7; // r10
  unsigned int v8; // r11d
  unsigned int v9; // eax
  int v10; // edx
  unsigned int *v11; // rcx
  unsigned int *v13; // [rsp+48h] [rbp+20h] BYREF

  v6 = AcpiEval_CSD(a1, &v13);
  if ( v6 >= 0 )
  {
    v7 = 0LL;
    v8 = *v13;
    if ( *v13 )
    {
      while ( v13[6 * v7 + 1] == 6 )
      {
        if ( v13[6 * v7 + 4] != 254 )
          goto LABEL_17;
        v9 = v13[6 * v7 + 5];
        if ( v9 > 0x280 || !v9 || v13[6 * v7 + 6] >= *a3 )
          break;
        v10 = 0;
        if ( v8 )
        {
          while ( (_DWORD)v7 == v10 || v13[6 * v7 + 6] != v13[6 * v10 + 6] )
          {
            if ( ++v10 >= v8 )
              goto LABEL_12;
          }
LABEL_17:
          v6 = -1073741637;
          goto LABEL_19;
        }
LABEL_12:
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= v8 )
          goto LABEL_13;
      }
      v6 = -1073741823;
LABEL_19:
      _InterlockedOr((volatile signed __int32 *)(a1 + 1048), 0x10u);
      v11 = v13;
    }
    else
    {
LABEL_13:
      v6 = 0;
      *a2 = v13;
      v11 = 0LL;
    }
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
  }
  return (unsigned int)v6;
}
