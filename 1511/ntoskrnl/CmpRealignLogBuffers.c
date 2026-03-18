/*
 * XREFs of CmpRealignLogBuffers @ 0x1405E5F18
 * Callers:
 *     CmpRmReDoPhase @ 0x1405E6190 (CmpRmReDoPhase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpRealignLogBuffers(__int64 a1)
{
  unsigned int v2; // ecx
  __int64 result; // rax
  __int64 v4; // r8

  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 )
  {
    if ( v2 <= 2 )
    {
LABEL_8:
      result = a1 + 64 + *(unsigned __int16 *)(a1 + 32);
      *(_QWORD *)(a1 + 40) = a1 + 64;
      *(_QWORD *)(a1 + 56) = result;
      return result;
    }
    if ( v2 <= 5 )
    {
      result = *(unsigned __int16 *)(a1 + 32);
      *(_QWORD *)(a1 + 40) = a1 + 80;
      v4 = result + a1 + 80;
      *(_QWORD *)(a1 + 56) = v4;
      if ( v2 != 5 )
      {
        result = v4 + *(unsigned __int16 *)(a1 + 48);
        *(_QWORD *)(a1 + 72) = result;
      }
    }
    else
    {
      if ( v2 == 6 || v2 == 7 )
      {
        result = a1 + 56;
        *(_QWORD *)(a1 + 40) = a1 + 56;
        return result;
      }
      if ( v2 == 8 || v2 == 9 )
        goto LABEL_8;
    }
  }
  return result;
}
