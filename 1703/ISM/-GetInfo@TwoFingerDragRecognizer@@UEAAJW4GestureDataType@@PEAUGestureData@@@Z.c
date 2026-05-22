/*
 * XREFs of ?GetInfo@TwoFingerDragRecognizer@@UEAAJW4GestureDataType@@PEAUGestureData@@@Z @ 0x18003AC70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TwoFingerDragRecognizer::GetInfo(__int64 a1, int a2, __int64 a3)
{
  char v3; // r9
  __int64 v5; // [rsp+20h] [rbp+20h]

  v3 = 0;
  if ( (unsigned int)(a2 - 11) <= 1 && *(_DWORD *)a3 == 28 && (*(_BYTE *)(a1 + 16) & 1) != 0 )
  {
    v3 = 1;
    *(_QWORD *)(a3 + 4) = *(_QWORD *)(a1 + 68);
    *(_QWORD *)(a3 + 12) = *(_QWORD *)(a1 + 52);
    LODWORD(v5) = *(_DWORD *)(a1 + 52) - *(_DWORD *)(a1 + 60);
    HIDWORD(v5) = *(_DWORD *)(a1 + 56) - *(_DWORD *)(a1 + 64);
    *(_QWORD *)(a3 + 20) = v5;
    *(_QWORD *)(a1 + 60) = *(_QWORD *)(a1 + 52);
    *(_WORD *)(a1 + 16) &= ~1u;
    *(_WORD *)(a1 + 16) &= ~4u;
  }
  return v3 == 0 ? 0x80070057 : 0;
}
