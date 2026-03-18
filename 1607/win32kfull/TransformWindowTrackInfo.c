/*
 * XREFs of TransformWindowTrackInfo @ 0x1C0124224
 * Callers:
 *     xxxNotifyShellTrackedWindowTrackingInfo @ 0x1C0124174 (xxxNotifyShellTrackedWindowTrackingInfo.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1C021BB40 (NtUserUpdateWindowTrackingInfo.c)
 * Callees:
 *     <none>
 */

INT __fastcall TransformWindowTrackInfo(__int64 a1, INT *a2, INT *a3, int a4)
{
  INT result; // eax
  unsigned __int16 v7; // cx
  __int64 v8; // rax
  unsigned __int16 v9; // dx
  INT v10; // ebx
  INT v11; // edi
  INT v12; // eax
  INT v13; // ecx
  INT v14; // eax
  INT v15; // ecx

  if ( (*(_DWORD *)(a1 + 288) & 0x10000000) != 0 )
  {
    result = *(unsigned __int16 *)(a1 + 356);
  }
  else if ( (*(_DWORD *)(a1 + 352) & 0xF) == 0
         && (v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
         && (*(_DWORD *)(*(_QWORD *)(v8 + 8) + 244LL) & 1) != 0 )
  {
    result = 96;
  }
  else
  {
    result = *(unsigned __int16 *)(gpsi + 8678LL);
  }
  v7 = *(_WORD *)(a1 + 356);
  if ( v7 != (_WORD)result )
  {
    if ( a4 )
    {
      v9 = result;
      LOWORD(result) = v7;
    }
    else
    {
      v9 = v7;
    }
    v10 = (unsigned __int16)result;
    v11 = v9;
    v12 = EngMulDiv(*a2, v9, (unsigned __int16)result);
    v13 = a2[1];
    *a2 = v12;
    a2[1] = EngMulDiv(v13, v11, v10);
    v14 = EngMulDiv(*a3, v11, v10);
    v15 = a3[1];
    *a3 = v14;
    result = EngMulDiv(v15, v11, v10);
    a3[1] = result;
  }
  return result;
}
