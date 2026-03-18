/*
 * XREFs of Isoch_CalculateBytesTransferred @ 0x1C0024284
 * Callers:
 *     Isoch_FindTrbMatch @ 0x1C0024BB0 (Isoch_FindTrbMatch.c)
 * Callees:
 *     Isoch_ProcessSegment @ 0x1C0025550 (Isoch_ProcessSegment.c)
 */

__int64 __fastcall Isoch_CalculateBytesTransferred(int a1, __int64 a2, int a3)
{
  _QWORD *v4; // rbx
  int v7; // eax
  _QWORD *v8; // rsi
  unsigned int v10; // [rsp+68h] [rbp+10h] BYREF
  int v11; // [rsp+78h] [rbp+20h] BYREF

  v10 = 0;
  v4 = *(_QWORD **)(a2 + 112);
  v7 = *(_DWORD *)(a2 + 120);
  if ( v4 != *(_QWORD **)(a2 + 96) )
  {
    v8 = (_QWORD *)(a2 + 24);
    while ( v4 != v8 )
    {
      if ( (unsigned __int8)Isoch_ProcessSegment(a1, a2, a3, (_DWORD)v4, v7, (__int64)&v11, (__int64)&v10) )
        goto LABEL_7;
      v4 = (_QWORD *)*v4;
      v7 = 0;
    }
  }
  v4 = *(_QWORD **)(a2 + 96);
  if ( (unsigned __int8)Isoch_ProcessSegment(a1, a2, a3, (_DWORD)v4, v7, (__int64)&v11, (__int64)&v10) )
  {
LABEL_7:
    *(_DWORD *)(a2 + 120) = v11;
    *(_QWORD *)(a2 + 112) = v4;
  }
  return v10;
}
