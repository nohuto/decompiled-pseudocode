/*
 * XREFs of EtwpDequeueFreeBuffer @ 0x18005CFEC
 * Callers:
 *     EtwpSwitchBuffer @ 0x18005CE88 (EtwpSwitchBuffer.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EtwpDequeueFreeBuffer(__int64 a1)
{
  _QWORD **v2; // rcx
  _QWORD *v3; // rdx
  _QWORD **v4; // rcx
  _QWORD *v5; // rdx
  _QWORD *v7; // rdx

  v2 = *(_QWORD ***)(a1 + 296);
  v3 = 0LL;
  if ( v2 != *(_QWORD ***)(a1 + 304) )
  {
    v7 = *v2;
    *v2 = (_QWORD *)**v2;
    if ( v7 == *(_QWORD **)(a1 + 304) )
      *(_QWORD *)(a1 + 304) = *(_QWORD *)(a1 + 296);
    v3 = v7 - 4;
  }
  if ( v3 )
    goto LABEL_8;
  while ( 1 )
  {
    v4 = *(_QWORD ***)(a1 + 248);
    v3 = 0LL;
    if ( v4 != *(_QWORD ***)(a1 + 256) )
    {
      v5 = *v4;
      *v4 = (_QWORD *)**v4;
      if ( v5 == *(_QWORD **)(a1 + 256) )
        *(_QWORD *)(a1 + 256) = *(_QWORD *)(a1 + 248);
      v3 = v5 - 4;
    }
    if ( !v3 )
      break;
LABEL_8:
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 228));
    if ( !*((_DWORD *)v3 + 3) && !*((_DWORD *)v3 + 11) )
    {
      *((_DWORD *)v3 + 1) = 0;
      *((_DWORD *)v3 + 2) = 72;
      *((_WORD *)v3 + 27) = 0;
      v3[4] = 0LL;
      *((_DWORD *)v3 + 11) = 1;
      return v3;
    }
    **(_QWORD **)(a1 + 304) = v3 + 4;
    *(_QWORD *)(a1 + 304) = v3 + 4;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 228));
  }
  return v3;
}
