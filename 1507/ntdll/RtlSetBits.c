/*
 * XREFs of RtlSetBits @ 0x180056540
 * Callers:
 *     RtlpSparseBitmapCtxUpdateBits @ 0x180055278 (RtlpSparseBitmapCtxUpdateBits.c)
 *     LdrpInitializeTls @ 0x180055594 (LdrpInitializeTls.c)
 *     RtlFindClearBitsAndSet @ 0x1800561F0 (RtlFindClearBitsAndSet.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 *     RtlpValidateRange @ 0x1800C43F8 (RtlpValidateRange.c)
 * Callees:
 *     memset @ 0x180098540 (memset.c)
 */

void __fastcall RtlSetBits(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx
  _BYTE *v5; // rdi
  __int64 v6; // rsi
  char v7; // al

  if ( a3 )
  {
    v3 = a2;
    v4 = a2 & 7;
    v5 = (_BYTE *)(*(_QWORD *)(a1 + 8) + (v3 >> 3));
    v6 = a3;
    if ( (unsigned int)v4 + a3 <= 8 )
    {
      v7 = RtlBaseAceType[a3 + 16] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + a3 - 8;
      *v5++ |= RtlBaseAceType[v4 + 32];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = RtlBaseAceType[v6 + 16];
      goto LABEL_4;
    }
  }
}
