/*
 * XREFs of CmpBindHiveToTrans @ 0x1403FDF4C
 * Callers:
 *     CmpTransSearchAddLightWeightTrans @ 0x1403FC998 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransSearchAddTrans @ 0x1403FE004 (CmpTransSearchAddTrans.c)
 *     CmpTransAllocateTrans @ 0x1404CFC84 (CmpTransAllocateTrans.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpBindHiveToTrans(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r9

  v2 = 0;
  if ( (*(_DWORD *)(a2 + 48) & 0x80u) == 0 )
  {
    if ( a1 )
    {
      v3 = *(unsigned int *)(a2 + 112);
      if ( (_DWORD)v3 )
      {
        while ( a1 != *(_QWORD *)(a2 + 8LL * v2 + 120) )
        {
          if ( ++v2 >= (unsigned int)v3 )
            goto LABEL_7;
        }
      }
      else
      {
LABEL_7:
        *(_QWORD *)(a2 + 8 * v3 + 120) = a1;
        ++*(_DWORD *)(a2 + 112);
      }
    }
    return 1LL;
  }
  if ( !*(_DWORD *)(a2 + 112) )
  {
    *(_QWORD *)(a2 + 120) = a1;
    return 1LL;
  }
  LOBYTE(v2) = *(_QWORD *)(a2 + 120) == a1;
  return v2;
}
