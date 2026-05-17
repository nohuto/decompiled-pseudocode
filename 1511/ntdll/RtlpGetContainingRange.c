/*
 * XREFs of RtlpGetContainingRange @ 0x180085DE8
 * Callers:
 *     RtlpQueryExtendedInformationHeap @ 0x180093700 (RtlpQueryExtendedInformationHeap.c)
 * Callees:
 *     RtlpGetHeapProtection @ 0x18001B7E4 (RtlpGetHeapProtection.c)
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
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 result; // rax

  v6 = 0LL;
  v7 = *(_QWORD **)(a1 + 96);
  v8 = 0LL;
  v10 = a1;
  if ( v7 == (_QWORD *)(a1 + 96) )
  {
LABEL_15:
    if ( a1 + 24 == *(_QWORD *)(*(_QWORD *)(a1 + 40) + 288LL) )
      a1 = *(_QWORD *)(a1 + 40);
    *a3 = a1;
  }
  else
  {
    do
    {
      v11 = v7[2];
      if ( a2 < v11 )
        goto LABEL_6;
      v12 = v7[3];
      if ( a2 < v11 + v12 )
      {
        *a3 = v11;
        *a4 = v12 + v11;
        *a5 = 0;
        goto LABEL_22;
      }
      if ( a2 >= v11 )
      {
        if ( !v6 || v6[4] < v11 )
          v6 = v7 - 2;
      }
      else
      {
LABEL_6:
        if ( !v8 || v8[4] > v11 )
          v8 = v7 - 2;
      }
      v7 = (_QWORD *)*v7;
    }
    while ( v7 != (_QWORD *)(a1 + 96) );
    if ( !v6 )
      goto LABEL_15;
    *a3 = v6[4] + v6[5];
  }
  if ( v8 )
    v13 = v8[4];
  else
    v13 = *a3 + ((unsigned __int64)*(unsigned int *)(v10 + 56) << 12);
  *a4 = v13;
  *a5 = 1;
LABEL_22:
  result = RtlpGetHeapProtection(*(_DWORD **)(v10 + 40), 0);
  *a6 = result;
  return result;
}
