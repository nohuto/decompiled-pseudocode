/*
 * XREFs of TransformWindowTrackInfo @ 0x1C0092A70
 * Callers:
 *     xxxNotifyShellTrackedWindowTrackingInfo @ 0x1C00928D8 (xxxNotifyShellTrackedWindowTrackingInfo.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1C0221A00 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     <none>
 */

INT __fastcall TransformWindowTrackInfo(__int64 a1, INT *a2, INT *a3, int a4)
{
  INT result; // eax
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // dx
  INT v9; // ebx
  INT v10; // edi
  INT v11; // eax
  INT v12; // ecx
  INT v13; // eax
  INT v14; // ecx

  if ( (*(_DWORD *)(a1 + 288) & 0x10000000) != 0 )
  {
    result = *(unsigned __int16 *)(a1 + 360);
  }
  else if ( *(_DWORD *)(a1 + 344) )
  {
    result = *(unsigned __int16 *)(gpsi + 7286LL);
  }
  else
  {
    result = 96;
  }
  v7 = *(_WORD *)(a1 + 360);
  if ( v7 != (_WORD)result )
  {
    if ( a4 )
    {
      v8 = result;
      LOWORD(result) = v7;
    }
    else
    {
      v8 = v7;
    }
    v9 = (unsigned __int16)result;
    v10 = v8;
    v11 = EngMulDiv(*a2, v8, (unsigned __int16)result);
    v12 = a2[1];
    *a2 = v11;
    a2[1] = EngMulDiv(v12, v10, v9);
    v13 = EngMulDiv(*a3, v10, v9);
    v14 = a3[1];
    *a3 = v13;
    result = EngMulDiv(v14, v10, v9);
    a3[1] = result;
  }
  return result;
}
