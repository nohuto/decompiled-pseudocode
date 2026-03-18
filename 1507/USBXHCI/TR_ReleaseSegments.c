/*
 * XREFs of TR_ReleaseSegments @ 0x1C00209BC
 * Callers:
 *     Isoch_Stage_Release @ 0x1C00279C8 (Isoch_Stage_Release.c)
 *     Bulk_Stage_Release @ 0x1C002C8C4 (Bulk_Stage_Release.c)
 * Callees:
 *     memset @ 0x1C0007F80 (memset.c)
 */

unsigned __int64 __fastcall TR_ReleaseSegments(__int64 a1, unsigned __int64 *a2, char a3)
{
  unsigned __int64 *v3; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 *v8; // rsi

  v3 = (unsigned __int64 *)*a2;
  if ( (unsigned __int64 *)*a2 != a2 )
  {
    result = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 232LL);
    if ( (result & 0x4000000000000LL) != 0 )
    {
      do
      {
        result = (unsigned __int64)memset((void *)v3[2], 0, *((unsigned int *)v3 + 10));
        v3 = (unsigned __int64 *)*v3;
      }
      while ( a2 != v3 );
    }
    v8 = (unsigned __int64 *)(a1 + 200);
    if ( a3 )
    {
      if ( (unsigned __int64 *)*a2 == a2 )
        return result;
      *(_QWORD *)a2[1] = *v8;
      *(_QWORD *)(*v8 + 8) = a2[1];
      *v8 = *a2;
      result = *a2;
      *(_QWORD *)(*a2 + 8) = v8;
    }
    else
    {
      if ( (unsigned __int64 *)*a2 == a2 )
        return result;
      *(_QWORD *)v8[1] = *a2;
      *(_QWORD *)(*a2 + 8) = v8[1];
      *(_QWORD *)a2[1] = v8;
      result = a2[1];
      v8[1] = result;
    }
    *a2 = (unsigned __int64)a2;
    a2[1] = (unsigned __int64)a2;
  }
  return result;
}
