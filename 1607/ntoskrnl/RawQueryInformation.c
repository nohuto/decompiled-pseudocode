/*
 * XREFs of RawQueryInformation @ 0x140683308
 * Callers:
 *     RawDispatch @ 0x1403E98F8 (RawDispatch.c)
 * Callees:
 *     RawBeginOperation @ 0x140006B5C (RawBeginOperation.c)
 *     RawEndOperation @ 0x140007250 (RawEndOperation.c)
 *     IofCompleteRequest @ 0x140053560 (IofCompleteRequest.c)
 */

__int64 __fastcall RawQueryInformation(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx

  v6 = 0;
  if ( RawBeginOperation(a1, *(_QWORD *)(a3 + 48)) )
  {
    if ( *(_DWORD *)(a3 + 16) == 14 )
    {
      if ( *(_DWORD *)(a3 + 8) >= 8u )
      {
        **(_QWORD **)(a2 + 24) = *(_QWORD *)(*(_QWORD *)(a3 + 48) + 104LL);
        *(_DWORD *)(a3 + 8) -= 8;
        *(_QWORD *)(a2 + 56) = 8LL;
      }
      else
      {
        *(_QWORD *)(a2 + 56) = 0LL;
        v6 = -2147483643;
      }
    }
    else
    {
      v6 = -1073741808;
    }
    RawEndOperation(a1, *(_QWORD *)(a3 + 48));
  }
  else
  {
    v6 = -1073741202;
  }
  *(_DWORD *)(a2 + 48) = v6;
  IofCompleteRequest((PIRP)a2, 1);
  return v6;
}
