/*
 * XREFs of ExQueryPoolUsage @ 0x1400141B0
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1403CB0D0 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ExQueryPoolUsage(
        _DWORD *a1,
        int *a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        int *a6,
        int *a7,
        _DWORD *a8)
{
  unsigned int v8; // r10d
  __int64 v10; // rax
  _DWORD *v11; // rdx
  int v12; // edi
  int v13; // esi
  int v14; // ebp
  __int64 *result; // rax
  int v16; // ecx
  unsigned int i; // r15d
  __int64 v18; // rax
  _DWORD *v19; // rbx

  *a1 = 0;
  v8 = 0;
  *a3 = 0;
  *a4 = 0;
  if ( ExpNumberOfPagedPools != -1 )
  {
    do
    {
      v10 = v8++;
      v11 = (_DWORD *)ExpPagedPoolDescriptor[v10];
      *a1 += v11[18] + v11[48];
      *a3 += v11[16];
      *a4 += v11[17];
    }
    while ( v8 < ExpNumberOfPagedPools + 1 );
  }
  v12 = dword_140317D00 + dword_140317C88 + dword_140318E40 + dword_140318DC8;
  v13 = dword_140317C80 + dword_140318DC0;
  v14 = dword_140317C84 + dword_140318DC4;
  if ( (unsigned int)ExpNumberOfNonPagedPools > 1 )
  {
    for ( i = 0; i < ExpNumberOfNonPagedPools; v14 += v19[17] + v19[1121] )
    {
      v18 = i++;
      v19 = (_DWORD *)ExpNonPagedPoolDescriptor[v18];
      v13 += v19[16] + v19[1120];
      v12 += v19[48] + v19[18] + v19[1152] + v19[1122];
    }
  }
  *a2 = v12;
  *a6 = v13;
  *a7 = v14;
  *a5 = 0;
  *a8 = 0;
  for ( result = (__int64 *)ExPoolLookasideListHead; result != &ExPoolLookasideListHead; result = (__int64 *)*result )
  {
    v16 = *((_DWORD *)result - 10);
    if ( *((_DWORD *)result - 7) )
      *a5 += v16;
    else
      *a8 += v16;
  }
  return result;
}
