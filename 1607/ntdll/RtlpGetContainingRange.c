/*
 * XREFs of RtlpGetContainingRange @ 0x180089CFC
 * Callers:
 *     RtlpQueryExtendedInformationHeap @ 0x180095010 (RtlpQueryExtendedInformationHeap.c)
 * Callees:
 *     RtlpGetHeapProtection @ 0x1800436D4 (RtlpGetHeapProtection.c)
 */

__int64 __fastcall RtlpGetContainingRange(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        _DWORD *a5,
        _DWORD *a6)
{
  _QWORD *v6; // r10
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rax
  __int64 result; // rax
  unsigned __int64 v13; // r8
  __int64 v14; // rax

  v6 = 0LL;
  v7 = *(_QWORD **)(a1 + 96);
  v8 = 0LL;
  v10 = a1;
  if ( v7 == (_QWORD *)(a1 + 96) )
  {
LABEL_2:
    if ( a1 + 24 == *(_QWORD *)(*(_QWORD *)(a1 + 40) + 288LL) )
      a1 = *(_QWORD *)(a1 + 40);
    *a3 = a1;
  }
  else
  {
    do
    {
      v13 = v7[2];
      if ( a2 < v13 )
        goto LABEL_15;
      v14 = v7[3];
      if ( a2 < v13 + v14 )
      {
        *a3 = v13;
        *a4 = v14 + v13;
        *a5 = 0;
        goto LABEL_8;
      }
      if ( a2 < v13 )
      {
LABEL_15:
        if ( !v8 || v8[4] > v13 )
          v8 = v7 - 2;
      }
      else if ( !v6 || v6[4] < v13 )
      {
        v6 = v7 - 2;
      }
      v7 = (_QWORD *)*v7;
    }
    while ( v7 != (_QWORD *)(a1 + 96) );
    if ( !v6 )
      goto LABEL_2;
    *a3 = v6[4] + v6[5];
  }
  if ( v8 )
    v11 = v8[4];
  else
    v11 = *a3 + ((unsigned __int64)*(unsigned int *)(v10 + 56) << 12);
  *a4 = v11;
  *a5 = 1;
LABEL_8:
  result = RtlpGetHeapProtection(*(_DWORD **)(v10 + 40), 0);
  *a6 = result;
  return result;
}
