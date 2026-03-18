/*
 * XREFs of MenuRecalc @ 0x1C02296E4
 * Callers:
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01CE450 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 MenuRecalc()
{
  __int64 result; // rax
  unsigned int v1; // r9d
  __int64 *v2; // rdx
  __int64 v3; // r8
  unsigned int v4; // r10d
  __int64 v5; // rax
  __int64 v6; // rcx

  result = gSharedInfo[0];
  v1 = 0;
  v2 = (__int64 *)gSharedInfo[1];
  do
  {
    if ( *((_BYTE *)v2 + 16) == 2 )
    {
      v3 = *v2;
      v4 = 0;
      *(_DWORD *)(v3 + 56) = 0;
      for ( *(_DWORD *)(v3 + 60) = 0; v4 < *(_DWORD *)(v3 + 52); *(_DWORD *)(result + v6 + 112) = -1 )
      {
        v5 = v4++;
        v6 = 152 * v5;
        *(_DWORD *)(*(_QWORD *)(v3 + 80) + v6 + 92) = 0x7FFFFFFF;
        *(_DWORD *)(*(_QWORD *)(v3 + 80) + v6 + 96) = 0;
        result = *(_QWORD *)(v3 + 80);
      }
    }
    ++v1;
    v2 += 3;
  }
  while ( v1 <= giheLast );
  return result;
}
